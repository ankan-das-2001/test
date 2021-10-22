for _ in range(int(input())):
    # r1,w1,c1 = map(int,input().split())
    # r2,w2,c2 = map(int,input().split())

    a,b = 0,0
    

    # if r1>r2:
    #     a+=1
    # else:
    #     b+=1
    # if w1>w2:
    #     a+=1
    # else:
    #     b+=1
    # if c1>c2:
    #     a+=1
    # else:
    #     b+=1

    A = list(map(int,input().split()))
    B = list(map(int,input().split()))

    for i in range(len(A)):
        if A[i]>B[i]:
            a+=1
        else:
            b+=1

    if a>b:
        print("A")
    else:
        print("B")