window.onload = function() {
    let example = [5, 1, 6, 3, 4];
    shaker_sort(example);
    let string = "";
    for (let ind = 0; ind < example.length; ind++) {
        string += example[ind] + ' ';
    }
    console.log(string);
}

function shaker_sort(arr) {
    let l = arr.length;
    let changes = true;
    while (changes) {
        changes = false;
        for (let ind = 0; ind < l; ind++) {
            if (arr[ind] > arr[ind + 1]) {
                [arr[ind], arr[ind + 1]] = [arr[ind + 1], arr[ind]]
                changes = true;
            }
        }
        if (!changes) break;
        changes = false;
        for (let ind = l; ind > 0; ind--) {
            if (arr[ind] < arr[ind - 1]) {
                [arr[ind], arr[ind - 1]] = [arr[ind - 1], arr[ind]]
                changes = true;
            }
        }
    } // no need to return the array
}