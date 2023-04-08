num, sellDays = map(int, input().split())
plan = []

for i in range(num):
    products, customers = map(int, input().split())
    plan.append([products, customers, min(2*products, customers) - min(products, customers)])

plan.sort(key = lambda x: x[2], reverse=True)

for i in plan:
    if sellDays != 0:
        i[0] *= 2
        sellDays -= 1

ans = 0
for triplet in plan:
    ans += min(triplet[0:2])

print(ans)