char *__thiscall sub_8BC8F0(char *this, int a2, char a3)
{
  char *result; // eax

  *((_WORD *)this + 3) = 1; /*0x8bc8fc*/
  *(_DWORD *)this = &off_A97598; /*0x8bc902*/
  *((_DWORD *)this + 2) = 0; /*0x8bc911*/
  *((_DWORD *)this + 3) = 0; /*0x8bc914*/
  *((_DWORD *)this + 4) = 0; /*0x8bc917*/
  *((_DWORD *)this + 5) = a2; /*0x8bc91a*/
  *((_DWORD *)this + 7) = 0; /*0x8bc91c*/
  *((_DWORD *)this + 8) = 0; /*0x8bc91f*/
  *((_DWORD *)this + 6) = 0xFFFFFFFF; /*0x8bc922*/
  *((_DWORD *)this + 9) = 0; /*0x8bc929*/
  *(this + 0x2C) = a3; /*0x8bc92c*/
  *((_DWORD *)this + 0xA) = 0; /*0x8bc92f*/
  *((_DWORD *)this + 0xC) = 0; /*0x8bc931*/
  *(this + 0x2D) = 0x7F; /*0x8bc934*/
  *(this + 0x2D) = 0xEC; /*0x8bc93c*/
  *((_DWORD *)this + 0x10) = 0x80000000; /*0x8bc944*/
  *((_DWORD *)this + 0xE) = 0; /*0x8bc947*/
  *((_DWORD *)this + 0xF) = 0; /*0x8bc94a*/
  *((_DWORD *)this + 0x13) = 0x80000000; /*0x8bc94d*/
  *((_DWORD *)this + 0x11) = 0; /*0x8bc956*/
  *((_DWORD *)this + 0x12) = 0; /*0x8bc959*/
  *((_DWORD *)this + 9) = 0xFFFFFFEC; /*0x8bc95c*/
  result = this; /*0x8bc95f*/
  if ( a2 ) /*0x8bc961*/
  {
    if ( *(_WORD *)(a2 + 4) ) /*0x8bc963*/
      ++*(_WORD *)(a2 + 6); /*0x8bc969*/
  }
  return result; /*0x8bc96d*/
}
