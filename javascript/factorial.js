window.onload = function() {
    let num = parseInt(prompt(), 10);
    console.log(factorial(num));
}

function factorial(num) {
    return num <= 1 ? 1 : num * factorial(num - 1);
}
