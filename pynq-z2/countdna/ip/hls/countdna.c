#include "countdna.h"

/*top function */
void countdna(count_t *a, count_t *c, count_t *g, count_t *t, cdata_t DNA[N]) {

#pragma HLS INTERFACE s_axilite port=a bundle=outp
#pragma HLS INTERFACE s_axilite port=c bundle=outp
#pragma HLS INTERFACE s_axilite port=g bundle=outp
#pragma HLS INTERFACE s_axilite port=t bundle=outp
#pragma HLS INTERFACE s_axilite port=return bundle=outp
#pragma HLS INTERFACE axis port=DNA depth=1024 bundle=inp

	int i;
	int t_A=0;
	int t_C=0;
	int t_G=0;
	int t_T=0;
	for (i=0; i<N; ++i){
		if (DNA[i]== 0x41) 
			t_A++;
		else if(DNA[i]==0x43)
			t_C++;
		else if(DNA[i]==0x47)
			t_G++;
		else if(DNA[i]==0x54)
			t_T++;
	}
	*a = t_A;
	*c = t_C;
	*g = t_G;
	*t = t_T;
}
