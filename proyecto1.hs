----------------------------------------------------------------
--1a)
esCero :: Int -> Bool
esCero x = x == 0

-- 1b)
esPositivo :: Int -> Bool
esPositivo x = x > 0

-- 1c)
esVocal :: Char -> Bool
esVocal c = c == 'a'|| c == 'e' || c == 'i'|| c == 'o'|| c == 'u'


----------------------------------------------------------------
--2a)
paratodo :: [Bool] -> Bool
paratodo [] = True
paratodo (x:xs) = x == True && paratodo xs

--2b)
sumatoria :: [Int] -> Int
sumatoria [] = 0
sumatoria (x:xs) = x + sumatoria xs

--2c)
productoria :: [Int] -> Int
productoria [] = 1
productoria (x:xs) = x * productoria xs

--2d)
factorial :: Int -> Int
factorial 0 = 1
factorial n = n * factorial (n-1)

--2e)
promedio :: [Int] -> Int
promedio xs = div (sumatoria xs) (length xs)


----------------------------------------------------------------
--3)
pertenece :: Int -> [Int] -> Bool
pertenece a [] = False
pertenece a (x:xs) = a == x || pertenece a xs


----------------------------------------------------------------
--4A)
paratodo' :: [a] -> (a -> Bool) -> Bool
paratodo' [] t = True
paratodo' (x:xs) t = t x && paratodo' xs t

--4B)
existe' :: [a] -> (a -> Bool) -> Bool
existe' [] t  = False
existe' (x:xs) t = t x || existe' xs t

--4C)
sumatoria' :: [a] -> (a -> Int) -> Int
sumatoria' [] f = 0
sumatoria' (x:xs) f = f x + sumatoria' xs f

--4D)
productoria' :: [a] -> (a -> Int) -> Int
productoria' [] f = 1
productoria' (x:xs) f = f x * productoria' xs f


----------------------------------------------------------------
--5)
paratodo'' :: [Bool] -> Bool
paratodo'' xs = paratodo' xs (==True)


----------------------------------------------------------------
--6A)
todosPares :: [Int] -> Bool
todosPares xs = paratodo' xs even

--6B)
hayMultiplo :: Int -> [Int] -> Bool
hayMultiplo n xs = existe' xs (multiplo n)

multiplo ::  Int -> Int -> Bool
multiplo n x  = mod x n == 0

--6C)
sumaCuadrados :: Int -> Int
sumaCuadrados n = sumatoria' [1..n] (^2)

--6D)
factorial' :: Int -> Int
factorial' n = productoria [1..n]

--6E)
multiplicaPares :: [Int] -> Int
multiplicaPares xs = productoria' xs impar

impar :: Int -> Int
impar x | odd x = 1
        | otherwise = x

----------------------------------------------------------------
--7)
--a)
--Map: Toma una lista, una funcion, y retorna otra lista cuyos elementos son
--los que se obtienen de aplicar la funcion a cada uno de la primera
--Filter: Toma una lista, una funcion que devuelve un Bool, y devuelve una lista
--cuyos elementos de la primera cumplan una condicion. Es decir aquello donde el
--valor de la funcion sea True

--b) equivale a [2,-3,7,3,-7]

--c) equivale a [1, -4, 6, 2, -8]?

----------------------------------------------------------------
--8a)
duplica :: [Int] -> [Int]
duplica [] = []
duplica (x:xs) = (x*2):duplica xs

--8b)
duplica' :: [Int] -> [Int]
duplica' xs = map (*2) xs

----------------------------------------------------------------
--9a)
soloPares :: [Int] -> [Int]
soloPares [] = []
soloPares (x:xs) | (mod x 2) == 0 = x:(soloPares xs)
                 | otherwise = soloPares xs

--9b)
soloPares' :: [Int] -> [Int]
soloPares' xs = filter (even) xs

--9c)
multiplicaPares' :: [Int] -> Int
multiplicaPares' xs = productoria (filter(even) xs)

----------------------------------------------------------------
--10a)
primIgualesA :: Eq a => a -> [a] -> [a]
primIgualesA n [] = []
primIgualesA n (x:xs) | (n == x) = x:(primIgualesA n xs)
                      | otherwise = []

--10b)
primIgualesA' :: Eq a => a -> [a] -> [a]
primIgualesA' a xs = takeWhile (==a) xs

----------------------------------------------------------------
--11)a)
primIguales :: Eq a => [a] -> [a]
primIguales [] = []
primIguales (x:xs) | x == (xs !! 0) = x:(primIguales xs)
                   | otherwise = x:[]

--11)b)
primIguales':: Eq a => [a] -> [a]
primIguales' xs = primIgualesA' (xs !! 0) xs

----------------------------------------------------------------
--12)
cuantGen :: (b -> b -> b) -> b -> [a] -> (a -> b) -> b
cuantGen op z [] t = z
cuantGen op z (x:xs) t = op (t x) (cuantGen op z xs t)

paratodo''' :: [a] -> (a -> Bool) -> Bool
paratodo''' xs t = cuantGen (&&) (True) xs t

existe''' :: [a] -> (a -> Bool) -> Bool
existe''' xs t = cuantGen (||) (False) xs t

sumatoria''' :: [a] -> (a -> Int) -> Int
sumatoria''' xs t = cuantGen (+) (0) xs t

productoria''' :: [a] -> (a -> Int) -> Int
productoria''' xs t = cuantGen (*) (1) xs t
