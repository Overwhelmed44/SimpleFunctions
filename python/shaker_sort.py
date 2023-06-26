def main():
    example = [5, 1, 6, 3, 4]
    shaker_sort(example)
    print(example)

def shaker_sort(arr):
    l = len(arr) - 1
    changes = True
    while changes:
        changes = False
        for ind in range(l):
            if arr[ind] > arr[ind + 1]:
                arr[ind], arr[ind + 1] = arr[ind + 1], arr[ind]
                changes = True
        if not changes:
            break
        changes = False
        for ind in range(l, 0, -1):
            if arr[ind] < arr[ind - 1]:
                arr[ind], arr[ind - 1] = arr[ind - 1], arr[ind]
                changes = True
    # no need to return the array

if __name__ == '__main__':
    main()
