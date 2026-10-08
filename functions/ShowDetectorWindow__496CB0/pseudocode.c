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
  const CHAR *v10; // eax
  const char *v11; // ecx
  CHAR *v12; // edx
  char v13; // al

  *this = a2; /*0x496cc5*/
  *(this + 1) = a3; /*0x496cc9*/
  *(this + 6) = a4; /*0x496ccc*/
  v10 = (const CHAR *)FormHeapAlloc(strlen(a5) + 1); /*0x496ce1*/
  *(this + 7) = v10; /*0x496ce9*/
  v11 = a5; /*0x496cec*/
  v12 = (CHAR *)v10; /*0x496cee*/
  do /*0x496cfc*/
  {
    v13 = *v11; /*0x496cf0*/
    *v12++ = *v11++; /*0x496cf2*/
  }
  while ( v13 ); /*0x496cfc*/
  sub_495D10(this, X, Y, nWidth, nHeight); /*0x496d14*/
  *(this + 5) = (LPCSTR)ImageList_LoadImageA((HINSTANCE)*this, (LPCSTR)0xB4, 0x10, 1, 0xFF000000, 0, 0); /*0x496d39*/
  sub_496C00((int)this, (int)a4, 0); /*0x496d3c*/
  return (HINSTANCE *)this; /*0x496d41*/
}
