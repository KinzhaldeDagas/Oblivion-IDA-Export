_BYTE *__thiscall sub_8CD9F0(int *this, _BYTE *a2, int a3)
{
  int v3; // edx
  int v4; // eax
  _DWORD *v5; // ecx

  v3 = *(this + 0x25); /*0x8cd9f0*/
  v4 = 0; /*0x8cd9f7*/
  if ( v3 <= 0 ) /*0x8cd9fb*/
  {
LABEL_5:
    *a2 = 0; /*0x8cda13*/
    return a2; /*0x8cda13*/
  }
  else
  {
    v5 = (_DWORD *)*(this + 0x24); /*0x8cd9fd*/
    while ( *v5 != a3 ) /*0x8cda09*/
    {
      ++v4; /*0x8cda0b*/
      ++v5; /*0x8cda0c*/
      if ( v4 >= v3 ) /*0x8cda11*/
        goto LABEL_5; /*0x8cda11*/
    }
    *a2 = 1; /*0x8cda22*/
    return a2; /*0x8cda1e*/
  }
}
