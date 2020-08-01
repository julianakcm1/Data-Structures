import Data.Array;

binarySearch array element begin end
    | begin > end = -1
    | element > array!middle = binarySearch array element (middle + 1) end
    | element < array!middle = binarySearch array element begin (middle - 1)
    | otherwise = middle
    where
        middle = (begin + end) `div` 2
