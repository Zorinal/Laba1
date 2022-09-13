#include <stdio.h>
int index_first_zero(int arr[]) {
 fprintf(stderr,"text1"); 
int c = 0;
  for (int i = 0; i < 100; i++) {
    if (arr[i] == 0) {
 
     c = i;
      break;
    }
fprintf(stderr,"text2"); 

  }
  return c;
}
int index_last_zero(int arr[]) {
fprintf(stderr,"text3");
 int c = 0;
  for (int i = 99; i >= 0; i--) {
    if (arr[i] == 0) {
      c = i;
      break;
    }
  }fprintf(stderr,"text4");

  return c;
}
int sum_between(int arr[]) {
fprintf(stderr,"text5");
  int sum = 0;
  int checkfirst = 0;
  int checklast = 0;
  for (int i = 0; i < 100; i++) {
    if (arr[i] == 0)
     { checkfirst = i;
     break;
      }
  }fprintf(stderr,"text6");

  for (int i = 99; i >= 0; i--) {
    if (arr[i] == 0)
     { checklast = i;
     break; }
  }fprintf(stderr,"text7");
  for (int i = checkfirst; i <= checklast; i++) {
    sum += arr[i];
  }fprintf(stderr,"text8");
  return sum;
}
 
int sum_before_and_after(int arr[]) {
 fprintf(stderr,"text9"); 
 int sum = 0;
  int sum1 = 0;
  for (int i = 0; i < 100; i++) {
    if (arr[i] != 0)
      sum += arr[i];
    else break;
  }printf("text10");
  for (int i = 99; i >= 0; i--) {fprintf(stderr,"text11");
    if (arr[i] != 0)
      sum += arr[i];
    else break;
  } fprintf(stderr,"text12");
  return sum;
}
int main() {
  int n;
  scanf("%d", n);
  int arr[100];
  char line = "";fprintf(stderr,"text13");
  for (int i = 0; line != "\n"; i++) {
    scanf("%d %c", & arr[i], & line);
  }fprintf(stderr,"text14");
   switch(n){
      case 0:
          printf("%d\n ", index_first_zero(arr)); 
			break;
  case 1:
    printf("%d\n", index_last_zero(arr));
		break;

  case 2:
    printf("%d\n", sum_between(arr));
                break;

  case 3:
    printf("%d\n", sum_before_and_after(arr));
                 break;
  default:
    printf("%s\n", "Данные некорректны");
		break;
}
fprintf(stderr,"text15");
return 0;
}
