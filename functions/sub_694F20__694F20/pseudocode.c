void __userpurge sub_694F20(TESForm *ecx0@<ecx>, int a2, TESForm a1)
{
  ecx0->vtbl[1].DoPostFixup(ecx0); /*0x694f2b*/
  sub_69F800(ecx0, a2, a1.vtbl); /*0x694f39*/
  TESForm_LoadDataFromCurrentSaveGame(ecx0, &ecx0[5].member, 4u); /*0x694f46*/
  TESForm_LoadDataFromCurrentSaveGame(ecx0, &ecx0[3].member.modlist.next, 4u); /*0x694f53*/
  if ( g_TESSaveLoadGame->currentVersion < 0x64u ) /*0x694f62*/
    TESForm_LoadDataFromCurrentSaveGame(ecx0, &ecx0[4], 4u); /*0x694f6c*/
  SaveLoad_LoadData(g_TESSaveLoadGame, &ecx0[5].member.flags, 4u); /*0x694f81*/
  TESForm_LoadDataFromCurrentSaveGame(ecx0, &ecx0[5].member.refID, 4u); /*0x694f91*/
  if ( ecx0[5].member.flags == kFormFlags_FromActiveFile ) /*0x694f9a*/
  {
    TESForm_LoadDataFromCurrentSaveGame(ecx0, &a1, 4u); /*0x694fa5*/
    ecx0[5].member.modlist.next = (TESForm::ModReferenceList *)a1.vtbl; /*0x694fae*/
  }
}
