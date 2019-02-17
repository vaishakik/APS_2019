#!/bin/python3

import math
import os
import random
import re
import sys

# Complete the maxSubarray function below.
def maxSubarray(arr):
    max1=0
    tmax=0
    max2=0
    tmax2=0
    flg=0
    for i in range(len(arr)):
        tmax=tmax+arr[i]
        if(tmax<0):
            tmax=0
        if(max1<tmax):
            max1=tmax
    for i in range(len(arr)):
        if(arr[i]>0):
            tmax2=tmax2+arr[i]
            flg=1
            max2=tmax2
    if(flg==0):
        max2=-9999999
        for i in range(len(arr)):
            if(arr[i]>max2):
                max2=arr[i]
                max1=max2


    return max1,max2

if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    t = int(input())

    for t_itr in range(t):
        n = int(input())

        arr = list(map(int, input().rstrip().split()))

        result = maxSubarray(arr)

        fptr.write(' '.join(map(str, result)))
        fptr.write('\n')

    fptr.close()
