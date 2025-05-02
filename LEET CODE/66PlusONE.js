let digits =[1,0,9,9]


// let n = Number(prompt("enter the size of the array"))
// for(let i=0;i<n;i++){
//     digits[i]= Number(prompt("enter the value for index "+ i+" : "))
// }
// console.log("hello");

let sum=0
let temp=0;

for(let i=0;i<digits.length;i++){
    sum = (sum*10)+digits[i] //1099
}
sum = sum+1 //1100
console.log(sum)
temp =sum; //1100
// console.log(temp);

// console.log("12");
// console.log("bye");


 let count=1;

for(let i=0;temp>=9;i++){
    temp = temp/10;
    // console.log(temp)
    count++;

    // console.log("yes");
    

}
// console.log(count);


// console.log("done");

for(let i=count-1;i>0;i--){
    digits[i]=sum%10
    // console.log(sum)
    sum/=10
    // console.log("yy");
    
}

console.log("new array contain elements [ ")
// console.log("okay");

// for(let i=0;i<count;i++){
//     console.log(digits[i],",")
// }
// console.log(" ]")

// console.log(1100%10)
console.log(...digits)