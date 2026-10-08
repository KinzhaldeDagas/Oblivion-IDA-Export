unsigned int __cdecl zlib_InflateInit2(_DWORD *a1, signed int a2, _BYTE *a3, int a4)
{
  bool v4; // zf
  _DWORD *v5; // eax
  signed int v7; // ecx

  if ( !a3 || *a3 != '1' || a4 != 0x38 ) /*0x7423dd*/
    return 0xFFFFFFFA; /*0x742484*/
  if ( a1 ) /*0x7423ea*/
  {
    v4 = a1[8] == 0; /*0x7423f0*/
    a1[6] = 0; /*0x7423f3*/
    if ( v4 ) /*0x7423f6*/
    {
      a1[8] = sub_744FE0; /*0x7423f8*/
      a1[0xA] = 0; /*0x7423ff*/
    }
    if ( !a1[9] ) /*0x742402*/
      a1[9] = sub_745000; /*0x742407*/
    v5 = (_DWORD *)((int (__cdecl *)(_DWORD, int, int))a1[8])(a1[0xA], 1, 0x1BA8); /*0x74241c*/
    if ( !v5 ) /*0x742423*/
      return 0xFFFFFFFC; /*0x74242c*/
    v7 = a2; /*0x74242d*/
    a1[7] = v5; /*0x742433*/
    if ( a2 >= 0 ) /*0x742436*/
    {
      v5[2] = (a2 >> 4) + 1; /*0x74244a*/
      if ( a2 < 0x30 ) /*0x74244d*/
        v7 = a2 & 0xF; /*0x74244f*/
    }
    else
    {
      v5[2] = 0; /*0x742438*/
      v7 = -a2; /*0x74243b*/
    }
    if ( (unsigned int)(v7 - 8) <= 7 ) /*0x742458*/
    {
      v5[7] = v7; /*0x74245b*/
      v5[0xB] = 0; /*0x74245e*/
      return sub_742370(a1); /*0x74246b*/
    }
    ((void (__cdecl *)(_DWORD, _DWORD *))a1[9])(a1[0xA], v5); /*0x742474*/
    a1[7] = 0; /*0x742479*/
  }
  return 0xFFFFFFFE; /*0x74242b*/
}
