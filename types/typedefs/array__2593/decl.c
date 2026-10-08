struct array
{
unsigned int start;
unsigned int num;
unsigned int max;
unsigned int alloc;
char **elts __offset(OFF64|AUTO);
};
