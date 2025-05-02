let x = Number(prompt("enter the start of the range"))
let y= Number(prompt("enter the end of the range"))


let palindrome = checkPalindrome(x,y)
let prime = checkPrime(x,y)

// console.log(palindrome);
// console.log(prime);


let pointer=0;
for(let i=x;i<=y;i++){
    if(palindrome[pointer]===true && prime[pointer]===true){
        console.log(i);
        pointer++
    }
    else{
        pointer++
    }
}

function checkPalindrome(x,y){
    let array1 =[]
    let pointer=0;
    let reverse;
    for(let i= x;i<=y;i++){
        
       reverse = Number(i.toString().split(``).reverse().join(``))
       if(reverse===i){
        array1[pointer]= true;
        pointer += 1
       }
       else{
        array1[pointer]= false;
        pointer++;
       }
       
    }
    
    
    return array1;

}

function checkPrime(x,y){
    let pointer =0;
    let count ;
    let array2 =[]
    for(x;x<=y;x++){
        count =0;
        for(let i=1;i<=x/2;i++){
            if(x%i==0){
                count++;

            }
            else{
                continue;
            }
        }
        if(count>1){
            array2[pointer]=false;
            pointer++
        }
        else{
            array2[pointer]=true;
            pointer++
        }
    }
    return array2

}

