int __userpurge sub_694E40@<eax>(TESObjectREFR *a1@<ecx>, double a2@<st0>, int a3)
{
  int v4; // eax
  int result; // eax

  v4 = (unsigned __int16)(sub_69F740(a1, a2, a3) + 8); /*0x694e5b*/
  if ( g_TESSaveLoadGame->currentVersion < 0x64u ) /*0x694e5e*/
    v4 += 4; /*0x694e60*/
  result = v4 + 8; /*0x694e63*/
  if ( LODWORD(a1[1].member.rot.z) == 2 ) /*0x694e6e*/
    result += 4; /*0x694e70*/
  return result; /*0x694e6d*/
}
