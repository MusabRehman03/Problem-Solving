let nums =[]


let n = Number(prompt("enter the size of the array"))
for(let i=0;i<n;i++){
    nums[i]= Number(prompt("enter the value for index "+ i+" : "))
}
let target = Number(prompt("enter the target  : "))
nums.sort((a,b)=> a-b);

let temp = target/3
let count =0;

for(let i=0;i<n;i++){
    if(nums[i]<temp){
        continue
    }
    else if(nums[i]===temp){
        if((i-1>=0)&&(i+1<n)){
           console.log(nums[i]+nums[i+1]+nums[i-1])
           count += 1
        break; 
        }else if(i=0){
            console.log(nums[i]+nums[i+1]+nums[i+2])
            count += 1
            break
        }
        else if(i=n-1){
            console.log(nums[i]+nums[i-1]+nums[i-2])
            count += 1
            break
        }
        
    }
    else if(nums[i]>temp) {
        if((i-1>=0)&&(i+1<n)){
            console.log(nums[i]+nums[i+1]+nums[i-1])
            count += 1
            break
         
         }else if(i=0){
             console.log(nums[i]+nums[i+1]+nums[i+2])
             count += 1
             break
         }
         else if(i=n-1){
             console.log(nums[i]+nums[i-1]+nums[i-2])
             count += 1
             break
         }
    }
}

