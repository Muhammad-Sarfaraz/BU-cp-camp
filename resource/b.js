var i = 0;
var startTime = performance.now()
while (i < 1000000000)
  ++i;
var endTime = performance.now()
console.log(`Call to doSomething took ${endTime - startTime} milliseconds`)