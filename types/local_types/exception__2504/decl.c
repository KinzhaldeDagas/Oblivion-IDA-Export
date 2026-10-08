struct _exception
{
int type;
char *name __offset(OFF64|AUTO);
double arg1;
double arg2;
double retval;
};
