int __userpurge sub_694E40@<eax>(TESObjectREFR *a1@<ecx>, double a2@<st0>, int a3)
{
  int v4; // eax
  int result; // eax

  v4 = (unsigned __int16)(sub_69F740(a1, a2, a3) + 8);
  if ( LOBYTE(SaveLoad_CurrentSavegame[1].createdObjectList.next) < 0x64u )
    v4 += 4;
  result = v4 + 8;
  if ( LODWORD(a1[1].member.rot.z) == 2 )
    result += 4;
  return result;
}
