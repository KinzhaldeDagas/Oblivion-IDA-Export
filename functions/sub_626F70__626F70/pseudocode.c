void __thiscall sub_626F70(TESPackage *this)
{
  TESSaveLoadGame_SerializationView *v3; // ecx
  bool v4; // zf
  unsigned __int8 *bufferCursor; // eax
  TESSaveLoadGame_SerializationView *v6; // ecx
  TESSaveLoadGame_SerializationView *v7; // ecx
  TESSaveLoadGame_SerializationView *v8; // ecx
  unsigned __int8 *v9; // ebp
  TESPackage *v10; // edi
  int v11; // eax
  int v12; // eax
  UInt32 *currentlySavingFormHeader; // edi
  unsigned __int8 *v14; // esi
  TESForm *v15; // eax
  const char *v16; // eax
  unsigned __int8 *v17; // edi
  unsigned __int8 *v18; // esi
  int v19; // [esp-Ch] [ebp-34h]
  int v20; // [esp-8h] [ebp-30h]
  const char *v21; // [esp-4h] [ebp-2Ch]
  int v22; // [esp+Ch] [ebp-1Ch] BYREF
  unsigned __int8 *v23; // [esp+10h] [ebp-18h]
  unsigned int v24; // [esp+14h] [ebp-14h] BYREF
  unsigned int v25; // [esp+18h] [ebp-10h] BYREF
  unsigned __int8 *v26; // [esp+1Ch] [ebp-Ch]
  unsigned int Src; // [esp+20h] [ebp-8h] BYREF
  int source; // [esp+24h] [ebp-4h] BYREF

  TESPackage_SaveGame(this); /*0x626f78*/
  v3 = g_TESSaveLoadGame; /*0x626f7d*/
  v4 = Global_DebugSaveBuffer == 0; /*0x626f85*/
  source = 0; /*0x626f8b*/
  bufferCursor = v3->bufferCursor; /*0x626f8f*/
  v26 = 0; /*0x626f92*/
  v23 = bufferCursor; /*0x626f96*/
  if ( !v4 ) /*0x626f9a*/
    v23 = bufferCursor; /*0x626f9c*/
  if ( TESSaveLoadGame_UseSaveGameBlocks() ) /*0x626fa0*/
  {
    v6 = g_TESSaveLoadGame; /*0x626fa9*/
    Src = 0x4B4F4C42; /*0x626fb6*/
    SaveLoad_SaveData(v6, &Src, 4u); /*0x626fbe*/
    v7 = g_TESSaveLoadGame; /*0x626fc3*/
    v26 = g_TESSaveLoadGame->bufferCursor; /*0x626fd3*/
    SaveLoad_SaveData(v7, &source, 2u); /*0x626fd7*/
  }
  v8 = g_TESSaveLoadGame; /*0x626fdc*/
  v22 = 0; /*0x626fe9*/
  v9 = v8->bufferCursor; /*0x626fed*/
  SaveLoad_SaveData(v8, &v22, 2u); /*0x626ff1*/
  v10 = (TESPackage *)((char *)this + 0x54); /*0x626ff6*/
  if ( this != (TESPackage *)0xFFFFFFAC ) /*0x626ffb*/
  {
    do /*0x62702a*/
    {
      if ( !*(_DWORD *)&v10->members.super.type && !v10->__vftable ) /*0x627005*/
        break; /*0x627007*/
      Src = (unsigned int)v10->__vftable->super.super.CompareTo; /*0x627014*/
      TESForm_SaveFormIDToCurrentSaveGame((TESForm *)this, &Src, 4u); /*0x62701b*/
      ++v22; /*0x627020*/
      v10 = *(TESPackage **)&v10->members.super.type; /*0x627025*/
    }
    while ( v10 ); /*0x62702a*/
  }
  *(_WORD *)v9 = v22; /*0x627031*/
  v11 = *((_DWORD *)this + 0x18); /*0x627035*/
  v24 = 0; /*0x62703a*/
  if ( v11 ) /*0x62703f*/
    v24 = *(_DWORD *)(v11 + 0xC); /*0x627044*/
  TESForm_SaveFormIDToCurrentSaveGame((TESForm *)this, &v24, 4u); /*0x627051*/
  v12 = *((_DWORD *)this + 0x17); /*0x627056*/
  v25 = 0; /*0x62705b*/
  if ( v12 ) /*0x62705f*/
    v25 = *(_DWORD *)(v12 + 0xC); /*0x627064*/
  TESForm_SaveFormIDToCurrentSaveGame((TESForm *)this, &v25, 4u); /*0x627071*/
  TESForm_SaveDataToCurrentSaveGame((TESForm *)this, (char *)this + 0x3D, 1u); /*0x62707e*/
  TESForm_SaveDataToCurrentSaveGame((TESForm *)this, (char *)this + 0x64, 1u); /*0x62708b*/
  TESForm_SaveDataToCurrentSaveGame((TESForm *)this, (char *)this + 0x50, 1u); /*0x627098*/
  TESForm_SaveDataToCurrentSaveGame((TESForm *)this, (char *)this + 0x4C, 4u); /*0x6270a5*/
  TESForm_SaveDataToCurrentSaveGame((TESForm *)this, (char *)this + 0x40, 0xCu); /*0x6270b2*/
  TESForm_SaveDataToCurrentSaveGame((TESForm *)this, this + 1, 1u); /*0x6270bf*/
  TESForm_SaveDataToCurrentSaveGame((TESForm *)this, (char *)this + 0x65, 1u); /*0x6270cc*/
  if ( Global_DebugSaveBuffer )
  {
    currentlySavingFormHeader = (UInt32 *)g_TESSaveLoadGame->currentlySavingFormHeader; /*0x6270de*/
    v14 = g_TESSaveLoadGame->bufferCursor; /*0x6270e6*/
    if ( currentlySavingFormHeader )
    {
      v15 = TESForm_LookupByFormID(*currentlySavingFormHeader); /*0x6270ee*/
      v16 = (const char *)((int (__thiscall *)(TESForm *, _DWORD, int, const char *))v15->vtbl->GetEditorName)( /*0x62710e*/
                            v15,
                            *(UInt32 *)((char *)currentlySavingFormHeader + 5),
                            0x209,
                            ".\\AI\\FleePackage.cpp");
      sub_40FEC0(
        "SaveGame(): %-5i for form %08X %s with flags %08X ending at line %i in file %s",
        v14 - v23,
        *currentlySavingFormHeader,
        v16,
        v19,
        v20,
        v21);
    }
    else
    {
      sub_40FEC0("SaveGame(): %-5i ending at line %i in file %s", v14 - v23, 0x209, ".\\AI\\FleePackage.cpp");
    }
  }
  if ( TESSaveLoadGame_UseSaveGameBlocks() ) /*0x62714a*/
  {
    v17 = v26; /*0x627159*/
    v18 = g_TESSaveLoadGame->bufferCursor; /*0x62715d*/
    if ( v18 > v26 + 0xFFFF ) /*0x627168*/
      PrintError( /*0x627179*/
        "Save Game Block in file %s on line %i is greater than maximum short size",
        ".\\AI\\FleePackage.cpp",
        0x209);
    *(_WORD *)v17 = (_WORD)v18 - (_WORD)v17; /*0x627183*/
  }
}
