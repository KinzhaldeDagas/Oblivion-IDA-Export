__int128 *__thiscall sub_8C9380(_DWORD *this, int a2)
{
  int v3; // eax
  int v4; // eax
  int v5; // esi
  __int128 *result; // eax

  sub_8AEA60(this, a2);
  if ( this && (v3 = *(this + 2)) != 0 )
    v4 = *(_DWORD *)(v3 + 0x10);
  else
    v4 = 0;
  *(_DWORD *)(a2 + 8) = v4;
  if ( !this || (v5 = *(this + 2), result = (__int128 *)(v5 + 0x20), !v5) )
    result = xmmword_B2F090;
  *(_OWORD *)(a2 + 0x10) = *result;
  *(_OWORD *)(a2 + 0x20) = result[1];
  *(_OWORD *)(a2 + 0x30) = result[2];
  *(_OWORD *)(a2 + 0x40) = result[3];
  return result;
}
