#include <stdio.h>

struct node {
    int i;
    char ch;
};

int main(void)
{
    FILE *stream;
    struct node n;
    int rc;

    if((stream = fopen("t.txt","wb")) == NULL) {
	fprintf(stderr,"Can't open output file.\n");
	return 1;
    }
    n.i = 0;
    n.ch = 'A';
    
    rc = fwrite(&n,sizeof(n),1,stream);
    printf("RC %d sizeof(n) %d\n",rc,sizeof(n));  

    fclose(stream);
    return 0;

}
