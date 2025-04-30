#include <stdio.h>
int main() {
 // Create empty text file namely test.txt
 FILE *fp = fopen("test.txt", "w+");
 if (fp == NULL) {
printf("Cannot create file\n");
 return -1;
 }
 // Write characters to file
for (int ch = '1'; ch <= '9'; ch++) {
 fputc(ch, fp);
 }
// Read and print out each character
rewind(fp); //set position to beginning
 for (int ch = fgetc(fp); ch != EOF; 
 ch = fgetc(fp)) {
 putchar(ch);
 }
 // Close file
 fclose(fp);
 return 0;
}
