let nums =[]


let n = Number(prompt("enter the size of the array"))
for(let i=0;i<n;i++){
    nums[i]= Number(prompt("enter the value for index "+ i+" : "))
}
let target = Number(prompt("enter the target to get to know its index : "))
nums.sort((a,b)=> a-b);
let count=0;

for(let i=0;i<nums.length;i++){
    if(nums[i]<target){
        continue;
    }
    else if (nums[i]==target){
        console.log(i)
        count += 1;
        break;
        
    }
    else{
        console.log(i)
        count += 1;
        break;
    }
}
if(count ===0 ){
    console.log(nums.length)

}