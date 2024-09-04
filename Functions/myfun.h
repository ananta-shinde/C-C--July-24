int largestOfThree(int n1,int n2,int n3){
    if(n1>=n2 && n1>=n3){
        return n1;
    }else if(n2>=n1 && n2>=n3){
        return n2;
    }else{
        return n3;
    }
    
}


void printMessage(double message){
    printf("%f\n",message);
}
void printMessage(char* message){
    printf("%s\n",message);
}
void printMessage(char message){
    printf("%c\n",message);
}

int lengthOfArray(int* arr){
    return sizeof(arr)/sizeof(arr[0]);
}

void printArray(int* arr,int length){
    for(int i=0;i<length;i++)
    {
         printf("%d\t",arr[i]);
    }
   
}

void swapValues(int* n1,int* n2){
     int temp = *n1;
    *n1=*n2;
    *n2=temp;
}

int largestOfArray(int* arr,int length){
    int largest = arr[0];
    for(int i=0;i<length;i++)
    {
        if(largest <= arr[i]){
            largest = arr[i];
        }
    }
    return largest;
}

void sortArrayAsc(int* arr,int length)
{
     for(int j=0;j<(length-1);j++)
    {
        for(int i=0;i<(length-1);i++)
        {
            if(arr[i]>arr[i+1])
            {
                swapValues(&arr[i],&arr[i+1]);
            }
        }
    }
}

void sortArrayDec(int* arr,int length)
{
     for(int j=0;j<(length-1);j++)
    {
        for(int i=0;i<(length-1);i++)
        {
            if(arr[i]<arr[i+1])
            {
                swapValues(&arr[i],&arr[i+1]);
            }
        }
    }
}

void sortArray(int *arr,int length,char type){
    if(type == 'a'){
        sortArrayAsc(arr,length);
    }else{
        sortArrayDec(arr,length);
    }
}
