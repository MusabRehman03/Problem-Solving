let array1 =["5","-2","4","C","D","9","+","+"]

let array2 =[]
let pointer=0;
for(let i=0;i<array1.length;i++){
    if(array1[i]=="C"){
        array2[pointer-1]=0;
        pointer--;
        
        
    }
    else if(array1[i]=="D"){
        array2[pointer]= array2[pointer-1]*2
        pointer++
        
        
        
    }
    else if(array1[i]=="+"){
        array2[pointer]=Number(array2[pointer-1])+Number(array2[pointer-2])
        pointer++
        
        
        
    }
    else {
        array2[pointer]=(array1[i])
        
        pointer++
        
    }
}
let sum=0
for(let i=0;i<pointer;i++){
    sum = sum+Number(array2[i])
    

}
console.log(sum)
