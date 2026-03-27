int __userpurge sub_696760@<eax>(TESObjectREFR *a1@<ecx>, double a2@<st0>, int a3)
{
  __int16 v4; // ax
  unsigned __int8 next; // dl
  int v6; // eax
  float v7; // ecx
  int result; // eax

  v4 = sub_69F740(a1, a2, a3);
  next = (unsigned __int8)SaveLoad_CurrentSavegame[1].createdObjectList.next;
  v6 = (unsigned __int16)(v4 + 8);
  if ( next >= 0x30u )
    v6 += 0x20;
  v7 = a1[1].member.pos[0];
  for ( result = v6 + 6; v7 != 0.0; result += 4 )
    v7 = *(float *)(LODWORD(v7) + 0x1C);
  if ( next >= 0x71u )
    result += 4;
  return result;
}
