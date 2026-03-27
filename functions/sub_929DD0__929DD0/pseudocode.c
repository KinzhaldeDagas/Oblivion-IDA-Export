_WORD *__thiscall sub_929DD0(_WORD *this, int a2)
{
  _WORD *result; // eax
  int v3; // esi
  int v4; // edx
  int v5; // ecx
  char v6; // bl
  _BYTE *v7; // ecx

  result = this;
  *(this + 3) = 1;
  *(_DWORD *)this = &off_AA1A84;
  if ( a2 )
  {
    v3 = 0;
    if ( *((int *)this + 0xA) > 0 )
    {
      v4 = 0;
      do
      {
        v5 = *((_DWORD *)result + 9);
        v6 = *(_BYTE *)(v4 + v5 + 0x11);
        v7 = (_BYTE *)(v4 + v5 + 0x11);
        if ( !v6 )
          *v7 = 1;
        ++v3;
        v4 += 0x30;
      }
      while ( v3 < *((_DWORD *)result + 0xA) );
    }
  }
  return result;
}
