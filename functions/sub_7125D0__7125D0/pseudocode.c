unsigned int __cdecl sub_7125D0(int a1)
{
  int v1; // esi
  unsigned int result; // eax
  _DWORD *i; // ecx
  _DWORD *v4; // ecx
  bool v5; // zf
  unsigned __int16 v6; // cx

  v1 = unk_B3FB84; /*0x7125d1*/
  result = 0; /*0x7125db*/
  if ( *(_WORD *)(unk_B3FB84 + 0xA) ) /*0x7125d7*/
  {
    for ( i = *(_DWORD **)(v1 + 4); *i != a1; ++i ) /*0x7125e1*/
    {
      if ( ++result >= *(unsigned __int16 *)(unk_B3FB84 + 0xA) ) /*0x7125fc*/
        return result; /*0x7125fc*/
    }
    if ( result < *(unsigned __int16 *)(v1 + 0xA) ) /*0x712607*/
    {
      v4 = (_DWORD *)(*(_DWORD *)(v1 + 4) + 4 * result); /*0x71260c*/
      v5 = *v4 == 0; /*0x712611*/
      *v4 = 0; /*0x712613*/
      if ( !v5 ) /*0x712619*/
        --*(_WORD *)(v1 + 0xC); /*0x71261b*/
      v6 = *(_WORD *)(v1 + 0xA); /*0x712621*/
      if ( result == v6 - 1 ) /*0x71262d*/
        *(_WORD *)(v1 + 0xA) = v6 - 1; /*0x712632*/
    }
  }
  return result; /*0x7125ff*/
}
