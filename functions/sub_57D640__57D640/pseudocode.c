signed int __thiscall sub_57D640(int this, int a2)
{
  int v2; // edi
  int v3; // esi
  int *v4; // eax
  int v5; // edx
  bool v6; // zf
  signed int result; // eax
  _DWORD *v8; // esi
  _DWORD *i; // edx

  if ( a2 == 3 ) /*0x57d649*/
  {
    v2 = *(_DWORD *)(this + 0xE0); /*0x57d64b*/
    *(_DWORD *)(this + 0xE0) = 3; /*0x57d651*/
    v3 = 1; /*0x57d65b*/
    v4 = (int *)(this + 0xE4); /*0x57d660*/
    do /*0x57d679*/
    {
      v5 = *v4; /*0x57d666*/
      v6 = *v4 == 0; /*0x57d668*/
      *v4 = v2; /*0x57d66a*/
      v2 = v5; /*0x57d66c*/
      if ( v6 ) /*0x57d66e*/
        break; /*0x57d66e*/
      ++v3; /*0x57d670*/
      ++v4; /*0x57d673*/
    }
    while ( v3 < 9 ); /*0x57d679*/
    if ( v3 == 9 ) /*0x57d67e*/
    {
      PrintError("### Menu Stack Size is too small - a menu may have been lost"); /*0x57d685*/
      return 9; /*0x57d68e*/
    }
    else
    {
      if ( v3 == 1 ) /*0x57d697*/
      {
        *(_BYTE *)(this + 8) = 3; /*0x57d699*/
        unk_B42D54 = 1; /*0x57d69d*/
      }
      return v3; /*0x57d6a5*/
    }
  }
  else
  {
    v8 = (_DWORD *)(this + 0xE0); /*0x57d6ab*/
    result = 0; /*0x57d6b1*/
    for ( i = (_DWORD *)(this + 0xE0); *i; ++i ) /*0x57d6b3*/
    {
      if ( ++result >= 0xA ) /*0x57d6c3*/
        return 0xFFFFFFFF; /*0x57d6ca*/
    }
    *(_DWORD *)(this + 4 * result + 0xE0) = a2; /*0x57d6dc*/
    if ( result ) /*0x57d6e3*/
    {
      if ( result == 1 && (*v8 == 0x3F3 || *v8 == 0x3E9) ) /*0x57d71a*/
        unk_B42D54 = 1; /*0x57d71c*/
    }
    else
    {
      *(_BYTE *)(this + 8) = 3; /*0x57d6eb*/
      if ( a2 != 0x3F3 && a2 != 0x3E9 ) /*0x57d6f7*/
        unk_B42D54 = 1; /*0x57d6fa*/
    }
  }
  return result; /*0x57d68d*/
}
