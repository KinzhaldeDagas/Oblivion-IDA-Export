struct _finddata32_t
{
unsigned int attrib;
__time32_t time_create;
__time32_t time_access;
__time32_t time_write;
_fsize_t size;
char name[260];
};
