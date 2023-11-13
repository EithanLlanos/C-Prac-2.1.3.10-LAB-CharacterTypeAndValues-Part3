//Scenario
//Write a small program which prints the differences between all ten digit characters(from '1' to '0') and zero('0').Print each one on a separate line.Your program must print the same result as the expected output.
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//Code
//
//#include <stdio.h>
//
//int main()
//{
//	char zero = '0';
//
//	/*Your code*/
//
//	return 0;
//}
//
//Expected output
//'1' - '0' is: 1
//'2' - '0' is : 2
//'3' - '0' is : 3
//'4' - '0' is : 4
//'5' - '0' is : 5
//'6' - '0' is : 6
//'7' - '0' is : 7
//'8' - '0' is : 8
//'9' - '0' is : 9
//'0' - '0' is : 0
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
int main() {
	char zero = '0';
	printf("'1' - '%c' is '%d'\n ", zero, '1' - zero);
	printf("'2' - '%c' is '%d'\n ", zero, '2' - zero);
	printf("'3' - '%c' is '%d'\n ", zero, '3' - zero);
	printf("'4' - '%c' is '%d'\n ", zero, '4' - zero);
	printf("'5' - '%c' is '%d'\n ", zero, '5' - zero);
	printf("'6' - '%c' is '%d'\n ", zero, '6' - zero);
	printf("'7' - '%c' is '%d'\n ", zero, '7' - zero);
	printf("'8' - '%c' is '%d'\n ", zero, '8' - zero);
	printf("'9' - '%c' is '%d'\n ", zero, '9' - zero);
	printf("'0' - '%c' is '%d'\n ", zero, '0' - zero);
	return 0;
}