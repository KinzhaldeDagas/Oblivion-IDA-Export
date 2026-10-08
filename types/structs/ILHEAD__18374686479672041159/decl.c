struct _ILHEAD
{
USHORT usMagic;
USHORT usVersion;
WORD cCurImage;
WORD cMaxImage;
WORD cGrow;
WORD cx;
WORD cy;
__unaligned __declspec(align(1)) COLORREF bkcolor;
WORD flags;
SHORT ovls[4];
};
