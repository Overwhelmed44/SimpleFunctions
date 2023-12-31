public class bubble_sort {
    public static void main(String[] args) {
        int[] example = {5, 1, 6, 3, 4};
        bubble_sort_(example);
        for (int arg : example) {
            System.out.printf("%d ", arg);
        }
    }

    public static void bubble_sort_(int[] arr) {
        int l = arr.length - 1;
        boolean changes = true;
        while (changes) {
            changes = false;
            for (int ind = 0; ind < l; ind++) {
                if (arr[ind] > arr[ind + 1]) {
                    int temp = arr[ind];
                    arr[ind] = arr[ind + 1];
                    arr[ind + 1] = temp;
                    changes = true;
                }
            }
        } // no need to return the array
    }
}
