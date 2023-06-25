def main():
    n = int(input())
    print(fibonacci(n))

def fibonacci(n, first=0, second=1):
    return fibonacci(n - 1, second, first + second) if n else first

if __name__ == '__main__':
    main()
