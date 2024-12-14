#include <stdio.h>

int searchBinary(int find,int sorted[],int left,int right){
    if(right==right+left/2 || left==right+left/2){
      return 99;
    }
    int middle=(right+left/2)-1;
    if(sorted[middle] == find){
       return middle;
    }else{
		if(find>sorted[middle]){
           printf("%d",middle);
		   return searchBinary(find,sorted,middle,right);
		}
		else if(find<sorted[middle]){
           printf("%d",middle);
		   return searchBinary(find,sorted,0,middle);
		}
		else{
           printf("%d",middle);
		   return middle;
		}
    }
}

int main(){
   
   int length=0;
   printf("Enter length of array: ");
   scanf("%d",&length);
   int sortedarr[length];
   int i =0;
   while(i<length){
     printf("Enter element %d: ",i);
     scanf("%d",&sortedarr[i]);
     i++;
   }
   int n=0;
   printf("Enter the hidden manuscript you want to search for:");
   scanf("%d",&n);
   int location = searchBinary(n,sortedarr,0,sizeof(sortedarr)/sizeof(sortedarr[0]));
   if(sizeof(sortedarr)/sizeof(sortedarr[0]*2)<location){
       location++;
   }
   if(location == 100){
     printf("NOT FOUND");
   }else{
     printf("The location is %d\n",location);
   }
   return 0;
}
