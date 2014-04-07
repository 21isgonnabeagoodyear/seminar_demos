#include <dlfcn.h>
#include <stdio.h>
int main(){
	void *functions = dlopen("libsomelibrary.so", RTLD_LOCAL|RTLD_LAZY);
	printf("location of somelibrary.so: 0x%x\n",functions);
	void (*myfunc)();
	myfunc = (void (*)()) dlsym(functions, "osdepfunc");
	char *err = dlerror();
	if(err != NULL){
		printf("dlsym failed: %s\n", err);
		return 1;
	}
	myfunc();
	return 0;
}
