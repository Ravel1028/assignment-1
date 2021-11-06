int main(){
   char number[100001];
   printf("Enter a no : \n");
   scanf("%s",number);
   int i=0,flag=1,counter=0;
   while(i!=100001&&number[i]!='\0'){
       if(number[0]=='.'||(number[1]=='.'&&number[0]=='0')||(number[i]=='.'&&number[i+1]=='\0')){
           flag=0;
       }
       else{
           if(number[i]=='.')
           counter++;
       }
       i++;
   }

   if(flag==1&&counter==1){
       printf("valid\n");

   }
   else {
       printf("invalid\n");
   }

return 0;}