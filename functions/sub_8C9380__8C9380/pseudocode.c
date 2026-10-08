__int128 *__thiscall sub_8C9380(_DWORD *this, int a2)
{
  int v3; // eax
  int v4; // eax
  int v5; // esi
  __int128 *result; // eax

  sub_8AEA60(this, a2); /*0x8c9391*/
  if ( this && (v3 = *(this + 2)) != 0 ) /*0x8c939f*/
    v4 = *(_DWORD *)(v3 + 0x10); /*0x8c93a1*/
  else
    v4 = 0; /*0x8c93a6*/
  *(_DWORD *)(a2 + 8) = v4; /*0x8c93aa*/
  if ( !this || (v5 = *(this + 2), result = (__int128 *)(v5 + 0x20), !v5) ) /*0x8c93b7*/
    result = xmmword_B2F090; /*0x8c93b9*/
  *(_OWORD *)(a2 + 0x10) = *result; /*0x8c93c1*/
  *(_OWORD *)(a2 + 0x20) = result[1]; /*0x8c93c9*/
  *(_OWORD *)(a2 + 0x30) = result[2]; /*0x8c93d1*/
  *(_OWORD *)(a2 + 0x40) = result[3]; /*0x8c93d9*/
  return result; /*0x8c93dd*/
}
