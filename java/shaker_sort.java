public class shaker_sort {
    public static void main(String[] args) {
        int[] example = {5, 1, 6, 3, 4};
        shaker_sort_(example);
        for (int arg : example) {
            System.out.printf("%d ", arg);
        }
    }

    public static void swap(int[] arr, int index1, int index2) {
        int temp = arr[index1];
        arr[index1] = arr[index2];
        arr[index2] = temp;
    }

    public static void shaker_sort_(int[] arr) {
        int l = arr.length - 1;
        boolean changes = true;
        while (changes) {
            changes = false;
            for (int ind = 0; ind < l; ind++) {
                if (arr[ind] > arr[ind + 1]) {
                    swap(arr, ind, ind + 1);
                    changes = true;
                }
            }
            if (!changes) break;
            changes = false;
            for (int ind = l; ind > 0; ind--) {
                if (arr[ind] < arr[ind - 1]) {
                    swap(arr, ind, ind - 1);
                    changes = true;
                }
            }
        } // no need to return the array
    }
}
