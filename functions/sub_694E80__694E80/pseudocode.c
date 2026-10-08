void __userpurge sub_694E80(TESObjectREFR *a1@<ecx>, double a2@<st0>, TESForm Src)
{
  float v5; // eax

  sub_69F770(a1, a2, (int)Src.vtbl); /*0x694e88*/
  TESForm_SaveDataToCurrentSaveGame((TESForm *)a1, &a1[1].member.rot.y, 4u); /*0x694e95*/
  TESForm_SaveDataToCurrentSaveGame((TESForm *)a1, &a1[1].member, 4u); /*0x694ea2*/
  if ( g_TESSaveLoadGame->currentVersion < 0x64u ) /*0x694eb0*/
    TESForm_SaveDataToCurrentSaveGame((TESForm *)a1, &a1[1].member.super.flags, 4u); /*0x694eba*/
  SaveLoad_SaveData(g_TESSaveLoadGame, &a1[1].member.rot.z, 4u); /*0x694ecf*/
  TESForm_SaveDataToCurrentSaveGame((TESForm *)a1, a1[1].member.pos, 4u); /*0x694edf*/
  if ( LODWORD(a1[1].member.rot.z) == 2 ) /*0x694ee8*/
  {
    v5 = a1[1].member.pos[2]; /*0x694eec*/
    *(float *)&Src.vtbl = 0.0; /*0x694ef4*/
    if ( v5 != 0.0 ) /*0x694ef8*/
      Src.vtbl = *(TESFormVtbl **)(LODWORD(v5) + 0x10); /*0x694efd*/
    TESForm_SaveDataToCurrentSaveGame((TESForm *)a1, &Src, 4u); /*0x694f0a*/
  }
}
