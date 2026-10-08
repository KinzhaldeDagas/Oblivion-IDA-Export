int __userpurge sub_696760@<eax>(TESObjectREFR *a1@<ecx>, double a2@<st0>, int a3)
{
  __int16 v4; // ax
  unsigned __int8 currentVersion; // dl
  int v6; // eax
  float v7; // ecx
  int result; // eax

  v4 = sub_69F740(a1, a2, a3); /*0x696768*/
  currentVersion = g_TESSaveLoadGame->currentVersion; /*0x696773*/
  v6 = (unsigned __int16)(v4 + 8); /*0x69677d*/
  if ( currentVersion >= 0x30u ) /*0x696780*/
    v6 += 0x20; /*0x696782*/
  v7 = a1[1].member.pos[0]; /*0x696785*/
  for ( result = v6 + 6; v7 != 0.0; result += 4 ) /*0x696791*/
    v7 = *(float *)(LODWORD(v7) + 0x1C); /*0x696793*/
  if ( currentVersion >= 0x71u ) /*0x6967a0*/
    result += 4; /*0x6967a2*/
  return result; /*0x696790*/
}
