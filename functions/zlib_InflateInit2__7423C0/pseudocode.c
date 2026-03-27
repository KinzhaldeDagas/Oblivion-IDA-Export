unsigned int __cdecl zlib_InflateInit2(_DWORD *a1, signed int a2, _BYTE *a3, int a4)
{
  bool v4; // zf
  _DWORD *v5; // eax
  signed int v7; // ecx

  if ( !a3 || *a3 != '1' || a4 != 0x38 )
    return 0xFFFFFFFA;
  if ( a1 )
  {
    v4 = a1[8] == 0;
    a1[6] = 0;
    if ( v4 )
    {
      a1[8] = sub_744FE0;
      a1[0xA] = 0;
    }
    if ( !a1[9] )
      a1[9] = sub_745000;
    v5 = (_DWORD *)((int (__cdecl *)(_DWORD, int, int))a1[8])(a1[0xA], 1, 0x1BA8);
    if ( !v5 )
      return 0xFFFFFFFC;
    v7 = a2;
    a1[7] = v5;
    if ( a2 >= 0 )
    {
      v5[2] = (a2 >> 4) + 1;
      if ( a2 < 0x30 )
        v7 = a2 & 0xF;
    }
    else
    {
      v5[2] = 0;
      v7 = -a2;
    }
    if ( (unsigned int)(v7 - 8) <= 7 )
    {
      v5[7] = v7;
      v5[0xB] = 0;
      return sub_742370(a1);
    }
    ((void (__cdecl *)(_DWORD, _DWORD *))a1[9])(a1[0xA], v5);
    a1[7] = 0;
  }
  return 0xFFFFFFFE;
}
