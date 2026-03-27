char __thiscall sub_919070(__m128 **this, unsigned __int8 a2)
{
  _BYTE *v3; // eax
  __m128 *v4; // ecx
  char v6; // [esp+Dh] [ebp-23h] BYREF
  char v7; // [esp+Eh] [ebp-22h] BYREF
  char v8; // [esp+Fh] [ebp-21h] BYREF
  __m128 v9; // [esp+10h] [ebp-20h] BYREF
  __m128 v10; // [esp+20h] [ebp-10h] BYREF

  if ( a2 == 0xB0 )
  {
    sub_948C80((_DWORD **)*(this + 2), (int)&v10);
    sub_947910((_DWORD **)*(this + 2), (char *)&v9, 8, 1);
    v3 = (_BYTE *)sub_918060((_DWORD **)*(this + 2), (int)&v7);
    if ( *v3 )
      LOBYTE(v3) = (unsigned __int8)sub_918E90(this + 0xFFFFFFFE, &v8, v9.m128_u32[0], v9.m128_i32[1], &v10);
  }
  else if ( a2 == 0xB1 )
  {
    sub_948C80((_DWORD **)*(this + 2), (int)&v9);
    v3 = (_BYTE *)sub_918060((_DWORD **)*(this + 2), (int)&v6);
    if ( *v3 )
    {
      v4 = *(this + 9);
      if ( v4 )
        LOBYTE(v3) = sub_8B8A10(v4, &v9);
    }
  }
  else
  {
    LOBYTE(v3) = a2 + 0x4E;
    if ( a2 == 0xB2 )
      LOBYTE(v3) = sub_918F80((int)(this + 0xFFFFFFFE));
  }
  return (char)v3;
}
