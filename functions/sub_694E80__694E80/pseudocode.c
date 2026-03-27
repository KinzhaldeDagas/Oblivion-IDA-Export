void __userpurge sub_694E80(TESObjectREFR *a1@<ecx>, double a2@<st0>, int a3@<edi>, TESForm Src)
{
  float v5; // eax
  size_t v6; // [esp-8h] [ebp-Ch]
  size_t v7; // [esp-8h] [ebp-Ch]
  size_t v8; // [esp-4h] [ebp-8h]
  size_t v9; // [esp-4h] [ebp-8h]
  size_t v10; // [esp-4h] [ebp-8h]

  sub_69F770(a1, a2, (int)Src.vtbl);
  LODWORD(v8) = 4;
  TESForm_SaveDataToCurrentSaveGame((TESForm *)&a1[1].member.rot.y, v8);
  LODWORD(v9) = 4;
  TESForm_SaveDataToCurrentSaveGame((TESForm *)&a1[1].member, v9);
  if ( LOBYTE(SaveLoad_CurrentSavegame[1].createdObjectList.next) < 0x64u )
  {
    LODWORD(v10) = 4;
    TESForm_SaveDataToCurrentSaveGame((TESForm *)&a1[1].member.super.flags, v10);
  }
  HIDWORD(v6) = a3;
  LODWORD(v6) = 4;
  SaveLoad_SaveData((int)SaveLoad_CurrentSavegame, &a1[1].member.rot.z, v6);
  LODWORD(v7) = 4;
  TESForm_SaveDataToCurrentSaveGame((TESForm *)a1[1].member.pos, v7);
  if ( LODWORD(a1[1].member.rot.z) == 2 )
  {
    v5 = a1[1].member.pos[2];
    *(float *)&Src.vtbl = 0.0;
    if ( v5 != 0.0 )
      Src.vtbl = *(TESFormVtbl **)(LODWORD(v5) + 0x10);
    LODWORD(v10) = 4;
    TESForm_SaveDataToCurrentSaveGame(&Src, v10);
  }
}
