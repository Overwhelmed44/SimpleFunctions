def main():
    example = [5, 1, 6, 3, 4]
    bubble_sort(example)
    print(example)

def bubble_sort(arr):
    l = len(arr) - 1
    while True:
        changes = False
        for ind in range(l):
            if arr[ind] > arr[ind + 1]:
                arr[ind], arr[ind + 1] = arr[ind + 1], arr[ind]
                changes = True
        if not changes:
            break

if __name__ == '__main__':
    main()
