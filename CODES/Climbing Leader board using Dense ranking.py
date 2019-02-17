#!/bin/python3

import math
import os
import random
import re
import sys

# Complete the climbingLeaderboard function below.
def climbingLeaderboard(scores, alice): 
    print(alice)
    R1 = [0 for x in range(len(alice))] 
    R = [0 for x in range(len(scores)+1)]
    for k in range(len(alice)):
        scores1=[]
        scores1=scores[:]
        scores1.append(alice[k])
        scores1.sort()
        for i in range(len(scores1)): 
            (r, s) = (1, 1) 
            for j in range(len(scores1)): 
                if j != i and scores1[j] > scores1[i]: 
                    r += 1
                    if scores1[j] == scores1[j-1]: 
                        r=r-1
                    
             
            # Use formula to obtain rank 
            R[i] = r#+ (s - 1) /2  
        #scores1.sort() 
        print(scores1)
        R.sort(reverse=True)
        print(R)
        u=scores1.index(alice[k])
        R1[k]=abs(R[u])
        scores1=[] 
        
    return (R1)
  

if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    scores_count = int(input())

    scores = list(map(int, input().rstrip().split()))

    alice_count = int(input())

    alice = list(map(int, input().rstrip().split()))

    result = climbingLeaderboard(scores, alice)

    fptr.write('\n'.join(map(str, result)))
    fptr.write('\n')

    fptr.close()
