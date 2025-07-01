--1a)
data Carrera = Matematica | Fisica | Computacion | Astronomia
    deriving (Eq, Bounded, Show) --2a)

--1b)
titulo :: Carrera -> String
titulo Matematica = "Licenciatura en Matematica"
titulo Fisica = "Licenciatura en Fisica"
titulo Computacion = "Licenciatura en Ciencias de la Computacion"
titulo Astronomia = "Licenciatura en Astronomia"

--1c)
data NotaBasica = Do | Re | Mi | Fa | Sol | La | Si
    deriving (Eq,Ord,Show,Bounded)

--1d)
cifradoAmericano :: NotaBasica -> Char
cifradoAmericano Do = 'C'
cifradoAmericano Re = 'D'
cifradoAmericano Mi = 'E'
cifradoAmericano Fa = 'F'
cifradoAmericano Sol = 'G'
cifradoAmericano La = 'A'
cifradoAmericano Si = 'B'

-------------------------------------------------------------------------
--3a)
minimoElemento :: Ord a => [a] -> a
minimoElemento [x] = x
minimoElemento (x:xs) = min x (minimoElemento xs)

--3b)
minimoElemento' :: (Bounded a, Ord a) => [a] -> a
minimoElemento' [] = minBound
minimoElemento' [x] = x
minimoElemento' (x:xs) = min x (minimoElemento' xs)

--3c)
masGrave :: [NotaBasica] -> NotaBasica
masGrave xs = minimoElemento' xs

------------------------------------------------------------------------
--4a)
--Ingreso es un sinonimo de tipo.
type Ingreso = Int

--Cargo y Area son tipos enumerados
data Cargo = Titular | Asociado | Adjunto | Asistente | Auxiliar
  deriving (Eq, Show)

data Area = Administrativa | Ensenanza | Economica | Postgrado
  deriving (Show)

--Persona es un tipo algebraico
data Persona = Decane | Docente Cargo | NoDocente Area | Estudiante Carrera Ingreso
  deriving (Show)

--b)Es de tipo: Docente :: Cargo -> Persona

--c)
cuantos_doc :: [Persona] -> Cargo -> Int
cuantos_doc [] c = 0
cuantos_doc ((Docente k): xs) c | c == k = 1 + cuantos_doc xs c
                                | otherwise = cuantos_doc xs c
cuantos_doc (_ : xs) c = cuantos_doc xs c

--d)
esDocente :: Cargo -> Persona -> Bool
esDocente  c (Docente k) = c == k
esDocente _ _ = False

cuantos_doc' :: [Persona] -> Cargo -> Int
cuantos_doc' xs c = length (filter (esDocente c) xs)

------------------------------------------------------------------------
--5a)
data Alteracion = Bemol | Sostenido | Natural
  deriving (Eq)
data NotaMusical = Nota NotaBasica Alteracion

sonido :: NotaBasica -> Int
sonido Do = 1
sonido Re = 3
sonido Mi = 5
sonido Fa = 6
sonido Sol = 8
sonido La = 10
sonido Si = 12

--b)
sonidoCromatico :: NotaMusical -> Int
sonidoCromatico (Nota p q) | q == Sostenido =  (sonido p) + 1
                           | q == Bemol = (sonido p) - 1
                           | q == Natural = (sonido p)

--c)
instance Eq NotaMusical
  where
    n1 == n2 = (sonidoCromatico n1 == sonidoCromatico n2)

--d)
instance Ord NotaMusical
  where
    n1 <= n2 = (sonidoCromatico n1 <= sonidoCromatico n2)

------------------------------------------------------------------------
--6)
primerElemento :: [Int] -> Maybe Int
primerElemento (x:xs) = Just x
primerElemento [] = Nothing

------------------------------------------------------------------------
--7)
data Cola = VaciaC | Encolada Persona Cola
 deriving (Show)
--a1)
atender :: Cola -> Maybe Cola
atender VaciaC = Nothing
atender (Encolada p cola) = Just cola

--a2)
encolar :: Persona -> Cola -> Cola
encolar p VaciaC = Encolada p VaciaC
encolar p (Encolada p' cola) = Encolada p'(Encolada p cola)

--a3)
busca :: Cola -> Cargo -> Maybe Persona
busca VaciaC car = Nothing
busca (Encolada (Docente k) cola) car | k == car = Just (Docente k)
                                   | otherwise = busca cola car

--b)
--Al tipo Lista de A ([A]), ya que:
--VaciaC = [],
--Encolada = : (constructor),
--Persona = x y Cola = xs

------------------------------------------------------------------------
--8)
data ListaAsoc a b = Vacia | Nodo a b ( ListaAsoc a b )
  deriving (Show)

--a)
type GuiaTelefonica = ListaAsoc String Int

--b1)
la_long :: ListaAsoc a b -> Int
la_long Vacia = 0
la_long (Nodo _ _ c) = 1 + la_long c

--b2)
la_concat :: ListaAsoc a b -> ListaAsoc a b -> ListaAsoc a b
la_concat Vacia xs = xs
la_concat  (Nodo a b c) xs = la_concat c (Nodo a b xs)

--b3)
la_agregar :: ListaAsoc a b -> a -> b -> ListaAsoc a b
la_agregar xs a b = (Nodo a b xs)

--b4)
la_pares :: ListaAsoc a b -> [(a, b)]
la_pares Vacia = []
la_pares (Nodo a b xs) = (a,b):(la_pares xs)

--b5)
la_busca :: Eq a => ListaAsoc a b -> a -> Maybe b
la_busca Vacia _ = Nothing
la_busca (Nodo a b xs) clave | a == clave = Just b
                             |otherwise = la_busca xs clave

--b6)
la_borrar :: Eq a => a -> ListaAsoc a b -> ListaAsoc a b
la_borrar _ Vacia = Vacia
la_borrar clave (Nodo a b xs) | clave == a = la_borrar clave xs
                              | otherwise = (Nodo a b (la_borrar clave xs))

------------------------------------------------------------------------
--9)
type Prefijos = Arbol String
can , cana , canario , canas , cant , cantar , canto :: Prefijos
can = Rama cana "can" cant
cana = Rama canario "a" canas
canario = Rama Hoja "rio" Hoja
canas = Rama Hoja "s" Hoja
cant = Rama cantar "t" canto
cantar = Rama Hoja "ar" Hoja
canto = Rama Hoja "o" Hoja


data Arbol a = Hoja | Rama ( Arbol a ) a ( Arbol a )
  deriving (Show)

--a)
a_long :: Arbol a -> Int
a_long Hoja = 0
a_long (Rama r1 _ r2) = 1 + a_long r1 + a_long r2

--b)
--CUENTA MAL. NOSE PORQUE???
a_hojas :: Arbol a -> Int
a_hojas Hoja = 1
a_hojas (Rama r1 a r2) = a_long r1 + a_long r2

--c)
a_inc :: Num a => Arbol a -> Arbol a
a_inc Hoja = Hoja
a_inc (Rama r1 a r2) = Rama (a_inc r1) (a + 1) (a_inc r2)

--d)
a_map :: (a -> b) -> Arbol a -> Arbol b
a_map op Hoja = Hoja
a_map op (Rama r1 a r2) = Rama (a_map op r1) (op a) (a_map op r2)

a_inc' :: Num a => Arbol a -> Arbol a
a_inc' arb = a_map (+1) arb
