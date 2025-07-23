A, B, C = input().split()
x = int(A)
y = int(B)
z = int(C)
if x == y == z:
 print(10000 + x * 1000)
elif x == y:
  print(1000 + x * 100)
elif x == z:
  print(1000 + x * 100)
elif y == z:
  print(1000 + y * 100)
elif x > y > z or x > z > y:
  print(x * 100)
elif y > x > z or y > z > x:
  print(y * 100)
elif z > x > y or z > y > x:
  print(z * 100)
