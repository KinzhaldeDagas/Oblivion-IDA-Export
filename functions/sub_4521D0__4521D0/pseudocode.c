unsigned int __thiscall sub_4521D0(int this, unsigned int a2)
{
  int v2; // edi
  unsigned __int8 v3; // bl
  int v4; // eax

  v2 = *(_DWORD *)(this + 0x4C); /*0x4521d6*/
  if ( !v2 || HIBYTE(a2) == 0xFF ) /*0x4521e5*/
    return a2; /*0x452228*/
  v3 = 0xFF; /*0x4521ed*/
  v4 = 0; /*0x4521f0*/
  if ( !*(_BYTE *)(this + 0x48) ) /*0x4521e9*/
    return 0; /*0x4521e9*/
  do /*0x452202*/
  {
    if ( *(_BYTE *)(v2 + v4) == HIBYTE(a2) ) /*0x4521f9*/
      v3 = v4; /*0x4521fb*/
    ++v4; /*0x4521fd*/
  }
  while ( v4 < *(unsigned __int8 *)(this + 0x48) ); /*0x452202*/
  if ( v3 == 0xFF ) /*0x452207*/
    return 0; /*0x452221*/
  else
    return (a2 & 0xFFFFFF) + (v3 << 0x18); /*0x452218*/
}
