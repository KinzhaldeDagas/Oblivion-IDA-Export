// positive sp value has been detected, the output may be wrong!
char __userpurge TESActorBase_SetAViBase_::def_519F67@<al>(int a1@<eax>, TESForm *a2@<esi>, int a3, int a4)
{
  float v5; // [esp-4h] [ebp-8h]

  v5 = (float)a4;
  AVCollection_ModAV(&a2[8].member.modlist.data, a1, v5);
  return TESForm_MarkAsModified(a2, 0x10000000);
}
