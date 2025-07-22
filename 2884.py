H,M = input().split()
h = int(H)
m = int(M)
if m - 45 >= 0:
  print(h, m - 45)
elif h > 0 and m - 45 < 0:
  print(h - 1, m + 15)
elif h == 0 and m - 45 < 0:
 print(23, m+15)
