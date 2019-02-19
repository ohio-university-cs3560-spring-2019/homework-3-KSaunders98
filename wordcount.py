import sys

count = 0

for line in sys.stdin:
    words = line.split()
    count += len(words)

print(count)