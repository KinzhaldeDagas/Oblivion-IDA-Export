__int16 __thiscall sub_713990(_BYTE *this, int a2, char *Src, __int16 a4)
{
  unsigned int v4; // kr00_4
  char *v5; // eax
  __int16 result; // ax

  if ( *(this + 0x10) ) /*0x713990*/
  {
    v4 = strlen(Src); /*0x71399f*/
    v5 = (char *)FormHeapAlloc(v4 + 1); /*0x7139b1*/
    *(_DWORD *)(a2 + 4) = v5; /*0x7139bd*/
    strcpy_s(v5, v4 + 1, Src); /*0x7139c0*/
    result = a4; /*0x7139c5*/
  }
  else
  {
    result = a2; /*0x7139d7*/
    *(_DWORD *)(a2 + 4) = Src; /*0x7139e4*/
  }
  *(_WORD *)(a2 + 8) = a4; /*0x7139cd*/
  return result; /*0x7139d4*/
}
