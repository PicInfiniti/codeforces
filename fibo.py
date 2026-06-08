import sys

def nth_fibonacci(n):
    a, b = 1, 1

    for _ in range(n):
        a, b = b, a + b

    return a

if len(sys.argv) != 2:
    print("Usage: python fibo.py <n>")
    sys.exit(1)

n = int(sys.argv[1])
print(nth_fibonacci(n))