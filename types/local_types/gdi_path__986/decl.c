struct __declspec(align(8)) gdi_path
{
POINT *points;
BYTE *flags;
int count;
int allocated;
BOOL newStroke;
POINT pos;
POINT points_buf[16];
BYTE flags_buf[16];
};
