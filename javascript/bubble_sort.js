window.onload = function() {
    let example = [5, 1, 6, 3, 4];
    bubble_sort(example);
    let string = "";
    for (let ind = 0; ind < example.length; ind++) {
        string += example[ind] + ' ';
    }
    console.log(string);
}

function bubble_sort(arr) {
    let l = arr.length;
    while (true) {
        let changes = false;
        for (let ind = 0; ind < l; ind++) {
            if (arr[ind] > arr[ind + 1]) {
                [arr[ind], arr[ind + 1]] = [arr[ind + 1], arr[ind]]
                changes = true;
            }
        }
        if (!changes) break;
    } // no need to return the array
}