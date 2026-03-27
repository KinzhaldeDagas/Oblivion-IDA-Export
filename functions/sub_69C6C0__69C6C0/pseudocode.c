int __userpurge sub_69C6C0@<eax>(TESObjectREFR *a1@<ecx>, double a2@<st0>, int a3)
{
  int result; // eax
  _DWORD *niNode; // ecx

  result = (unsigned __int16)(sub_69F740(a1, a2, a3) + 0x14);
  if ( LODWORD(a1[1].member.pos[1]) == 1 )
    result += 4;
  if ( LOBYTE(SaveLoad_CurrentSavegame[1].createdObjectList.next) >= 0x71u )
  {
    niNode = a1[1].member.niNode;
    for ( result += 6; niNode; result += 5 )
      niNode = (_DWORD *)niNode[2];
  }
  return result;
}
