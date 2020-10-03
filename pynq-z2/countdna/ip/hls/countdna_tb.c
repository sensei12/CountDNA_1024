#include <stdio.h>
#include "countDNA.h"



void swcountdna(count_t *a, count_t *c, count_t *g, count_t *t, cdata_t DNA[N]){
	int i;
	for (i=0; i<N; ++i){
		if (DNA[i]== 0x41) 
			*a+=1;
		else if(DNA[i]==0x43)
			*c+=1;
		else if(DNA[i]==0x47)
			*g+=1;
		else if(DNA[i]==0x54)
			*t+=1;	 
	}
}


int main()
{
	int fail = 0;
	int acount,ccount,gcount,tcount;
	char DNA[N] = "ACGTACGTACGTACGT";
	int acount_sw, ccount_sw, gcount_sw, tcount_sw;
	acount_sw = 0;
	ccount_sw = 0;
	gcount_sw = 0;
	tcount_sw = 0;
	swcountdna(&acount_sw, &ccount_sw, &gcount_sw, &tcount_sw, DNA);
	printf("****Software executed\n");
	printf("A = %d \n", acount_sw);
	printf("C = %d\n", ccount_sw);
	printf("G = %d\n", gcount_sw);
	printf("T = %d\n", tcount_sw);
	acount = 0;
	ccount = 0;
	gcount = 0;
	tcount = 0;
	printf("****Hardware executed\n");
	countdna(&acount, &ccount, &gcount, &tcount, DNA);
	printf("A = %d \n", acount);
	printf("C = %d\n", ccount);
	printf("G = %d\n", gcount);
	printf("T = %d\n", tcount);

//checking if okay
	if (acount_sw != acount) 
		fail += 1;
	if (ccount_sw != ccount) 
		fail += 1;
	if (gcount_sw != gcount) 
		fail += 1;
	if (tcount_sw != tcount) 
		fail += 1;	
	if(fail>0)
		printf("FAILED with %d error\n",fail);
	else
		printf("PASS\n");
	return fail;
}
