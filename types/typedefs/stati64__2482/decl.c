struct _stati64
{
_dev_t st_dev;
_ino_t st_ino;
unsigned __int16 st_mode;
__int16 st_nlink;
__int16 st_uid;
__int16 st_gid;
_dev_t st_rdev;
__declspec(align(8)) __int64 st_size;
time_t st_atime;
time_t st_mtime;
time_t st_ctime;
};
