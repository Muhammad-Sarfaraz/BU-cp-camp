var i = 0;

var s = performance.now()
while (i < 1000000000) {
    ++i;
}

var e = performance.now()

console.log(e - s);