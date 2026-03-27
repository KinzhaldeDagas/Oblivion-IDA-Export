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

  if ( a2 == 3 )
  {
    v2 = *(_DWORD *)(this + 0xE0);
    *(_DWORD *)(this + 0xE0) = 3;
    v3 = 1;
    v4 = (int *)(this + 0xE4);
    do
    {
      v5 = *v4;
      v6 = *v4 == 0;
      *v4 = v2;
      v2 = v5;
      if ( v6 )
        break;
      ++v3;
      ++v4;
    }
    while ( v3 < 9 );
    if ( v3 == 9 )
    {
      PrintError("### Menu Stack Size is too small - a menu may have been lost");
      return 9;
    }
    else
    {
      if ( v3 == 1 )
      {
        *(_BYTE *)(this + 8) = 3;
        byte_B42D54 = 1;
      }
      return v3;
    }
  }
  else
  {
    v8 = (_DWORD *)(this + 0xE0);
    result = 0;
    for ( i = (_DWORD *)(this + 0xE0); *i; ++i )
    {
      if ( ++result >= 0xA )
        return 0xFFFFFFFF;
    }
    *(_DWORD *)(this + 4 * result + 0xE0) = a2;
    if ( result )
    {
      if ( result == 1 && (*v8 == 0x3F3 || *v8 == 0x3E9) )
        byte_B42D54 = 1;
    }
    else
    {
      *(_BYTE *)(this + 8) = 3;
      if ( a2 != 0x3F3 && a2 != 0x3E9 )
        byte_B42D54 = 1;
    }
  }
  return result;
}
