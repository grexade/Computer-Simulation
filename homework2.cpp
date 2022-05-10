#include<stdio.h>
#include<stdlib.h> 
#include<time.h> 
int main() {
srand(time(0));
FILE* fp;
// open the file for writing
fp = fopen("RN_file.txt", "w"); 
int i, j, n=10000;
// run for 1000 times
for(i=0; i<n/10; i++){
	for(j=0; j<10; j++){
	
// generate random number
double val = (double)rand()/(double) RAND_MAX;
// write it to file
fprintf(fp, "%lf\n", val);
//display it to screen
printf("%.3lf ", val);
}
printf("\n"); 
} 
// close file 
fclose (fp); }


