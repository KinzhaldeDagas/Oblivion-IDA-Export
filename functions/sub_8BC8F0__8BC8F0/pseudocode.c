char *__thiscall sub_8BC8F0(char *this, int a2, char a3)
{
  char *result; // eax

  *((_WORD *)this + 3) = 1;
  *(_DWORD *)this = &off_A97598;
  *((_DWORD *)this + 2) = 0;
  *((_DWORD *)this + 3) = 0;
  *((_DWORD *)this + 4) = 0;
  *((_DWORD *)this + 5) = a2;
  *((_DWORD *)this + 7) = 0;
  *((_DWORD *)this + 8) = 0;
  *((_DWORD *)this + 6) = 0xFFFFFFFF;
  *((_DWORD *)this + 9) = 0;
  *(this + 0x2C) = a3;
  *((_DWORD *)this + 0xA) = 0;
  *((_DWORD *)this + 0xC) = 0;
  *(this + 0x2D) = 0x7F;
  *(this + 0x2D) = 0xEC;
  *((_DWORD *)this + 0x10) = 0x80000000;
  *((_DWORD *)this + 0xE) = 0;
  *((_DWORD *)this + 0xF) = 0;
  *((_DWORD *)this + 0x13) = 0x80000000;
  *((_DWORD *)this + 0x11) = 0;
  *((_DWORD *)this + 0x12) = 0;
  *((_DWORD *)this + 9) = 0xFFFFFFEC;
  result = this;
  if ( a2 )
  {
    if ( *(_WORD *)(a2 + 4) )
      ++*(_WORD *)(a2 + 6);
  }
  return result;
}
