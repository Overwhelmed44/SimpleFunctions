def main():
    num = int(input())
    print(factorial(num))

def factorial(num):
    return 1 if num <= 1 else num * factorial(num - 1)

if __name__ == '__main__':
    main()