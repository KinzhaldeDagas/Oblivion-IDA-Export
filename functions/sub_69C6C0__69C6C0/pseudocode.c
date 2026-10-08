int __userpurge sub_69C6C0@<eax>(TESObjectREFR *a1@<ecx>, double a2@<st0>, int a3)
{
  int result; // eax
  _DWORD *niNode; // ecx

  result = (unsigned __int16)(sub_69F740(a1, a2, a3) + 0x14); /*0x69c6d8*/
  if ( LODWORD(a1[1].member.pos[1]) == 1 ) /*0x69c6db*/
    result += 4; /*0x69c6dd*/
  if ( g_TESSaveLoadGame->currentVersion >= 0x71u ) /*0x69c6ea*/
  {
    niNode = a1[1].member.niNode; /*0x69c6ec*/
    for ( result += 6; niNode; result += 5 ) /*0x69c6f7*/
      niNode = (_DWORD *)niNode[2]; /*0x69c700*/
  }
  return result; /*0x69c70a*/
}
