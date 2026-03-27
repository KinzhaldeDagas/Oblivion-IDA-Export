void __userpurge sub_6099D0(TESObjectREFR *ecx0@<ecx>, double a2@<st0>, TESForm a1)
{
  TESSaveLoad *v4; // ecx
  UInt32 v5; // ebp
  TESSaveLoad *v6; // ecx
  TESSaveLoad *v7; // ecx
  float x; // eax
  float y; // eax
  float v10; // eax
  _DWORD *v11; // eax
  int v12; // eax
  _DWORD *v13; // eax
  int v14; // ecx
  int v15; // edx
  char v16; // di
  unsigned __int16 v17; // ax
  int v18; // edx
  int v19; // eax
  UInt32 *v20; // edi
  UInt32 v21; // esi
  TESForm *v22; // eax
  const char *v23; // eax
  _WORD *v24; // edi
  unsigned int v25; // esi
  int v26; // [esp-Ch] [ebp-50h]
  int v27; // [esp-8h] [ebp-4Ch]
  size_t v28; // [esp-4h] [ebp-48h]
  size_t v29; // [esp-4h] [ebp-48h]
  size_t v30; // [esp-4h] [ebp-48h]
  size_t v31; // [esp-4h] [ebp-48h]
  size_t v32; // [esp-4h] [ebp-48h]
  size_t v33; // [esp-4h] [ebp-48h]
  size_t v34; // [esp-4h] [ebp-48h]
  size_t v35; // [esp-4h] [ebp-48h]
  size_t v36; // [esp-4h] [ebp-48h]
  size_t v37; // [esp-4h] [ebp-48h]
  size_t v38; // [esp-4h] [ebp-48h]
  size_t v39; // [esp-4h] [ebp-48h]
  size_t v40; // [esp-4h] [ebp-48h]
  size_t v41; // [esp-4h] [ebp-48h]
  const char *v42; // [esp-4h] [ebp-48h]
  TESForm Src; // [esp+10h] [ebp-34h] BYREF
  UInt32 v44; // [esp+28h] [ebp-1Ch]
  int v45; // [esp+2Ch] [ebp-18h] BYREF
  int v46; // [esp+30h] [ebp-14h]
  float v47[4]; // [esp+34h] [ebp-10h] BYREF

  MobileObject_SaveModifiedForm(ecx0, a2, (int)a1.vtbl);
  v4 = SaveLoad_CurrentSavegame;
  v45 = 0;
  v5 = v4->unk000[5];
  v44 = 0;
  if ( sub_45A170() )
  {
    LODWORD(v28) = 4;
    v6 = SaveLoad_CurrentSavegame;
    Src.member.modlist.next = (TESForm::ModReferenceList *)0x4B4F4C42;
    SaveLoad_SaveData((int)v6, &Src.member.modlist.next, v28);
    v7 = SaveLoad_CurrentSavegame;
    LODWORD(v29) = 2;
    v44 = SaveLoad_CurrentSavegame->unk000[5];
    SaveLoad_SaveData((int)v7, &v45, v29);
  }
  LODWORD(v28) = 4;
  SaveLoad_SaveData((int)SaveLoad_CurrentSavegame, &ecx0[1].member.super.flags, v28);
  LODWORD(v30) = 4;
  TESForm_SaveDataToCurrentSaveGame((TESForm *)&ecx0[1].member.super.refID, v30);
  LODWORD(v31) = 4;
  TESForm_SaveDataToCurrentSaveGame((TESForm *)&ecx0[1].member.super.modlist, v31);
  LODWORD(v32) = 4;
  TESForm_SaveDataToCurrentSaveGame((TESForm *)&ecx0[1].member.super.modlist.next, v32);
  LODWORD(v33) = 4;
  TESForm_SaveDataToCurrentSaveGame((TESForm *)&ecx0[1].member.childCell, v33);
  LODWORD(v34) = 4;
  TESForm_SaveDataToCurrentSaveGame((TESForm *)&ecx0[1].member.baseForm, v34);
  LODWORD(v35) = 0xC;
  TESForm_SaveDataToCurrentSaveGame((TESForm *)&ecx0[1].member.pos[1], v35);
  x = ecx0[1].member.rot.x;
  Src.member.flags = 0;
  if ( x != 0.0 )
    Src.member.flags = *(_DWORD *)(LODWORD(x) + 0xC);
  TESForm_SaveFormIDToCurrentSaveGame((int)&Src.member.flags, 4u);
  y = ecx0[1].member.rot.y;
  Src.member.refID = 0;
  if ( y != 0.0 )
    Src.member.refID = *(_DWORD *)(LODWORD(y) + 0xC);
  TESForm_SaveFormIDToCurrentSaveGame((int)&Src.member.refID, 4u);
  v10 = ecx0[1].member.pos[0];
  Src.member.modlist.data = 0;
  if ( v10 != 0.0 )
    Src.member.modlist.data = *(Data **)(LODWORD(v10) + 0xC);
  TESForm_SaveFormIDToCurrentSaveGame((int)&Src.member.modlist, 4u);
  LOBYTE(a1.vtbl) = *(_DWORD *)&ecx0[1].member.super.type != 0;
  LODWORD(v36) = 1;
  TESForm_SaveDataToCurrentSaveGame(&a1, v36);
  if ( LOBYTE(a1.vtbl) )
  {
    LODWORD(v37) = 4;
    SaveLoad_SaveData((int)SaveLoad_CurrentSavegame, *(void **)&ecx0[1].member.super.type, v37);
    LODWORD(v38) = 0xC;
    TESForm_SaveDataToCurrentSaveGame((TESForm *)(*(_DWORD *)&ecx0[1].member.super.type + 4), v38);
    LODWORD(v39) = 0xC;
    TESForm_SaveDataToCurrentSaveGame((TESForm *)(*(_DWORD *)&ecx0[1].member.super.type + 0x10), v39);
    LODWORD(v40) = 0xC;
    TESForm_SaveDataToCurrentSaveGame((TESForm *)(*(_DWORD *)&ecx0[1].member.super.type + 0x1C), v40);
    if ( LOBYTE(SaveLoad_CurrentSavegame[1].createdObjectList.next) >= 0x50u )
    {
      sub_7150F0(v47, (float *)(*(_DWORD *)&ecx0[1].member.super.type + 0x30));
      LODWORD(v37) = 0x10;
      SaveLoad_SaveData((int)SaveLoad_CurrentSavegame, v47, v37);
    }
    v11 = *(_DWORD **)&ecx0[1].member.super.type;
    if ( *v11 <= 1u )
    {
      Src.member.modlist.next = 0;
      v12 = v11[0xA];
      if ( v12 )
        Src.member.modlist.next = *(TESForm::ModReferenceList **)(v12 + 0xC);
      TESForm_SaveFormIDToCurrentSaveGame((int)&Src.member.modlist.next, 4u);
      v13 = *(_DWORD **)&ecx0[1].member.super.type;
      Src.vtbl = 0;
      *(_DWORD *)&Src.member.type = 0xFFFFFFFF;
      v14 = v13[0xA];
      if ( v14 )
      {
        v15 = v13[0xB];
        if ( v15 )
        {
          if ( LOBYTE(ecx0[1].member.niNode) )
          {
            Src.vtbl = (TESFormVtbl *)HIWORD(v13[0xB]);
            *(_DWORD *)&Src.member.type = (unsigned __int16)v15;
          }
          else
          {
            LOBYTE(v46) = *v13 == 0;
            v16 = v46;
            v17 = sub_480C50(*(_WORD **)(v14 + 0x3C), v46, v46, 1);
            v18 = *(_DWORD *)&ecx0[1].member.super.type;
            Src.vtbl = (TESFormVtbl *)v17;
            v19 = sub_4A05E0(*(_DWORD *)(v18 + 0x2C));
            *(_DWORD *)&Src.member.type = (unsigned __int16)sub_480D60(
                                                              *(_WORD **)(*(_DWORD *)(*(_DWORD *)&ecx0[1].member.super.type
                                                                                    + 0x28)
                                                                        + 0x3C),
                                                              v19,
                                                              v16,
                                                              v16,
                                                              1);
          }
        }
      }
      LODWORD(v37) = 2;
      TESForm_SaveDataToCurrentSaveGame(&Src, v37);
      LODWORD(v41) = 2;
      TESForm_SaveDataToCurrentSaveGame((TESForm *)&Src.member, v41);
    }
  }
  if ( LOBYTE(SaveLoad_CurrentSavegame[1].createdObjectList.next) >= 0x54u )
  {
    LODWORD(v37) = 1;
    TESForm_SaveDataToCurrentSaveGame((TESForm *)((char *)&ecx0[1].member.niNode + 1), v37);
  }
  if ( LOBYTE(SaveLoad_CurrentSavegame[1].createdObjectList.next) >= 0x55u )
  {
    LODWORD(v37) = 1;
    TESForm_SaveDataToCurrentSaveGame((TESForm *)((char *)&ecx0[1].member.niNode + 2), v37);
  }
  if ( Global_DebugSaveBuffer )
  {
    v20 = (UInt32 *)SaveLoad_CurrentSavegame[1].unk030[1];
    v21 = SaveLoad_CurrentSavegame->unk000[5];
    if ( v20 )
    {
      v22 = TESForm_LookupByFormID(*v20);
      v23 = (const char *)((int (__thiscall *)(TESForm *, _DWORD, int, const char *))v22->vtbl->GetEditorName)(
                            v22,
                            *(UInt32 *)((char *)v20 + 5),
                            0x8E6,
                            ".\\AI\\ArrowProjectile.cpp");
      sub_40FEC0(
        "SaveGame(): %-5i for form %08X %s with flags %08X ending at line %i in file %s",
        v21 - v5,
        *v20,
        v23,
        v26,
        v27,
        v42);
    }
    else
    {
      sub_40FEC0("SaveGame(): %-5i ending at line %i in file %s", v21 - v5, 0x8E6, ".\\AI\\ArrowProjectile.cpp");
    }
  }
  if ( sub_45A170() )
  {
    v24 = (_WORD *)v44;
    v25 = SaveLoad_CurrentSavegame->unk000[5];
    if ( v25 > v44 + 0xFFFF )
      PrintError(
        "Save Game Block in file %s on line %i is greater than maximum short size",
        ".\\AI\\ArrowProjectile.cpp",
        0x8E6);
    *v24 = v25 - (_WORD)v24;
  }
}
