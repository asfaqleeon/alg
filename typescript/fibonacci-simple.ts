let f0: number = 0;
let f1: number = 1;
let fn: number = 0;
let i: number;

for (i = 3; i <= 5; i++){
    fn = f0 + f1;
    f0 = f1;
    f1 = fn;
}

console.log(fn);