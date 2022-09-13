#include <stdio.h>
int index_first_zero(int arr[]) {
  int c = 0;
  for (int i = 0; i < 100; i++) {
    if (arr[i] == 0) {
      c = i;
      break;
    }
  }
  return c;
}
int index_last_zero(int arr[]) {
  int c = 0;
  for (int i = 99; i >= 0; i--) {
    if (arr[i] == 0) {
      c = i;
      break;
    }
  }
  return c;
}
int sum_between(int arr[]) {
  int sum = 0;
  int checkfirst = 0;
  int checklast = 0;
  for (int i = 0; i < 100; i++) {
    if (arr[i] == 0)
     { checkfirst = i;
     break;
      }
  }
  for (int i = 99; i >= 0; i--) {
    if (arr[i] == 0)
     { checklast = i;
     break; }
  }
  for (int i = checkfirst; i <= checklast; i++) {
    sum += arr[i];
  }
  return sum;
}
 
int sum_before_and_after(int arr[]) {
  int sum = 0;
  int sum1 = 0;
  for (int i = 0; i < 100; i++) {
    if (arr[i] != 0)
      sum += arr[i];
    else break;
  }
  for (int i = 99; i >= 0; i--) {
    if (arr[i] != 0)
      sum += arr[i];
    else break;
  }
  return sum;
}
int main() {
  int n;
  scanf("%d", n);
  int arr[100];
  char line = ' ';
  for (int i = 0; line != "\n"; i++) {
    scanf("%d %c", & arr[i], & line);
  }
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
return 0;
}
