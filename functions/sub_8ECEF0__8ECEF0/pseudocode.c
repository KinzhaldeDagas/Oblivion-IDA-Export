_BYTE *__thiscall sub_8ECEF0(int *this, _BYTE *a2, int a3)
{
  int v3; // edx
  int v4; // eax
  _DWORD *v5; // ecx

  v3 = *(this + 0x49); /*0x8ecef0*/
  v4 = 0; /*0x8ecef7*/
  if ( v3 <= 0 ) /*0x8ecefb*/
  {
LABEL_5:
    *a2 = 0; /*0x8ecf13*/
    return a2; /*0x8ecf13*/
  }
  else
  {
    v5 = (_DWORD *)*(this + 0x48); /*0x8ecefd*/
    while ( *v5 != a3 ) /*0x8ecf09*/
    {
      ++v4; /*0x8ecf0b*/
      ++v5; /*0x8ecf0c*/
      if ( v4 >= v3 ) /*0x8ecf11*/
        goto LABEL_5; /*0x8ecf11*/
    }
    *a2 = 1; /*0x8ecf22*/
    return a2; /*0x8ecf1e*/
  }
}
