int __userpurge sub_69F740@<eax>(TESObjectREFR *a1@<ecx>, double a2@<st0>, int a3)
{
  __int16 v3; // ax
  unsigned __int8 next; // cl
  int result; // eax

  v3 = MobileObject_ModifiedFormSize(a1, a2, a3);
  next = (unsigned __int8)SaveLoad_CurrentSavegame[1].createdObjectList.next;
  result = (unsigned __int16)(v3 + 0xC);
  if ( next >= 0x48u )
    result += 4;
  if ( next >= 0x64u )
    result += 4;
  return result;
}
