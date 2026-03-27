HINSTANCE *__thiscall ShowDetectorWindow(
        LPCSTR *this,
        const CHAR *a2,
        const CHAR *a3,
        const CHAR *a4,
        const char *a5,
        int X,
        int Y,
        int nWidth,
        int nHeight)
{
  int v10; // eax
  const char *v11; // ecx
  _BYTE *v12; // edx
  char v13; // al

  *this = a2;
  *(this + 1) = a3;
  *(this + 6) = a4;
  v10 = FormHeapAlloc(strlen(a5) + 1);
  *(this + 7) = (LPCSTR)v10;
  v11 = a5;
  v12 = (_BYTE *)v10;
  do
  {
    v13 = *v11;
    *v12++ = *v11++;
  }
  while ( v13 );
  sub_495D10(this, X, Y, nWidth, nHeight);
  *(this + 5) = (LPCSTR)ImageList_LoadImageA((HINSTANCE)*this, (LPCSTR)0xB4, 0x10, 1, 0xFF000000, 0, 0);
  sub_496C00((int)this, (int)a4, 0);
  return (HINSTANCE *)this;
}
