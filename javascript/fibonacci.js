window.onload = function() {
    let n = parseInt(prompt(), 10);
    console.log(fibonacci(n));
}

function fibonacci(n, first=0, second=1) {
    return n > 0 ? fibonacci(n - 1, second, first + second) : first;
}
