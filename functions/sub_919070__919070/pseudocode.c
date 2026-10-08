char __thiscall sub_919070(__m128 **this, unsigned __int8 a2)
{
  _BYTE *v3; // eax
  __m128 *v4; // ecx
  char v6; // [esp+Dh] [ebp-23h] BYREF
  char v7; // [esp+Eh] [ebp-22h] BYREF
  char v8; // [esp+Fh] [ebp-21h] BYREF
  __m128 v9; // [esp+10h] [ebp-20h] BYREF
  __m128 v10; // [esp+20h] [ebp-10h] BYREF

  if ( a2 == 0xB0 ) /*0x919085*/
  {
    sub_948C80((_DWORD **)*(this + 2), (int)&v10); /*0x9190df*/
    sub_947910((_DWORD **)*(this + 2), (char *)&v9, 8, 1); /*0x9190f0*/
    v3 = (_BYTE *)sub_918060((_DWORD **)*(this + 2), (int)&v7); /*0x9190fd*/
    if ( *v3 ) /*0x919102*/
      LOBYTE(v3) = (unsigned __int8)sub_918E90(this + 0xFFFFFFFE, &v8, v9.m128_u32[0], v9.m128_i32[1], &v10); /*0x91911e*/
  }
  else if ( a2 == 0xB1 ) /*0x919088*/
  {
    sub_948C80((_DWORD **)*(this + 2), (int)&v9); /*0x9190a8*/
    v3 = (_BYTE *)sub_918060((_DWORD **)*(this + 2), (int)&v6); /*0x9190b5*/
    if ( *v3 ) /*0x9190ba*/
    {
      v4 = *(this + 9); /*0x9190bf*/
      if ( v4 ) /*0x9190c4*/
        LOBYTE(v3) = sub_8B8A10(v4, &v9); /*0x9190cb*/
    }
  }
  else
  {
    LOBYTE(v3) = a2 + 0x4E; /*0x91908a*/
    if ( a2 == 0xB2 ) /*0x91908b*/
      LOBYTE(v3) = sub_918F80((int)(this + 0xFFFFFFFE)); /*0x919094*/
  }
  return (char)v3; /*0x919099*/
}
