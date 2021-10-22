high_lead = 0
t1 = 0
t2 = 0

t = int(input())
for i in range(t):
    p1, p2 = input().split()
    p1 = int(p1)
    p2 = int(p2)

    t1 = t1 + p1
    t2 = t2 + p2

    diff = t1 - t2
    if diff < 0:
        diff = 0 - diff

    if high_lead < diff:
        high_lead = diff
    p1, p2 = 89, 134

print(high_lead)
