struct __declspec(align(4)) threadmbcinfostruct
{
int refcount;
int mbcodepage;
int ismbcodepage;
int mblcid;
unsigned __int16 mbulinfo[6];
unsigned __int8 mbctype[257];
unsigned __int8 mbcasemap[256];
};
