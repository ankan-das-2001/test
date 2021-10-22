n = int(input())
l = list(map(int,input().split()))

# for i in range(1,n+1):
#     if i in l:
#         None
#     else:
#         print(i)
#         break
#         # result = i

num = n*(n+1)/2
list_sum = sum(l)

print(int(num-list_sum))