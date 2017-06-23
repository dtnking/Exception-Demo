#include "tryexception.h"
#include "CException.h"
#include <stdio.h>
#include "Exception.h"

#define NEGATIVE_NUMBER 1
float calArea(float a){
	if(a<0)
		Throw (createException("The radius cannot be negative number",NEGATIVE_NUMBER));
	return a*a;
	
}
void tryException(float a){
	CEXCEPTION_T ex;
	
	Try{
		float result=calArea(a);
		printf("The area of the circle with %f radius is %f pi meter square\n",a,result);
	}Catch(ex){
		dumpException(ex);
	}
}
