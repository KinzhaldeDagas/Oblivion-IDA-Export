struct _ReentrantPPLLock
{
critical_section cs;
LONG count;
LONG owner;
};
