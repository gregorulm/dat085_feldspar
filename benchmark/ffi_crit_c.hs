{-# LANGUAGE ForeignFunctionInterface #-}

module Main where

import Criterion.Main
import Data.Vector.Storable hiding (copy)
import Control.Monad (liftM)
import Foreign hiding (unsafePerformIO)
import Foreign.C
import Foreign.C.Types
import System.IO.Unsafe (unsafePerformIO)


foreign import ccall unsafe "aes.h c_aes_mainround"
  c_aes_mainround  :: CInt -> CInt


main :: IO ()
main = defaultMain [
         bgroup "FFI" [
           bench "C binding" $ whnf c_aes_mainround 1
         , bench "C binding" $ whnf c_aes_mainround 1
         , bench "C binding" $ whnf c_aes_mainround 1
         , bench "C binding" $ whnf c_aes_mainround 1
         , bench "C binding" $ whnf c_aes_mainround 1
         , bench "C binding" $ whnf c_aes_mainround 1
         , bench "C binding" $ whnf c_aes_mainround 1
         , bench "C binding" $ whnf c_aes_mainround 1
         , bench "C binding" $ whnf c_aes_mainround 1
         , bench "C binding" $ whnf c_aes_mainround 1
         , bench "C binding" $ whnf c_aes_mainround 1
         , bench "C binding" $ whnf c_aes_mainround 1
         , bench "C binding" $ whnf c_aes_mainround 1
         , bench "C binding" $ whnf c_aes_mainround 1
         , bench "C binding" $ whnf c_aes_mainround 1
         , bench "C binding" $ whnf c_aes_mainround 1
         , bench "C binding" $ whnf c_aes_mainround 1
         , bench "C binding" $ whnf c_aes_mainround 1
         , bench "C binding" $ whnf c_aes_mainround 1
         , bench "C binding" $ whnf c_aes_mainround 1
         ]
       ]