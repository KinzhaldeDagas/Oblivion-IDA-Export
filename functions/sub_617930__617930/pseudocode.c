void __usercall sub_617930(TESPackage *this@<ecx>, double a2@<st0>)
{
  TESSaveLoadGame_SerializationView *v4; // ecx
  bool v5; // zf
  unsigned __int8 *bufferCursor; // eax
  TESSaveLoadGame_SerializationView *v7; // ecx
  TESSaveLoadGame_SerializationView *v8; // ecx
  TESSaveLoadGame_SerializationView *v9; // ecx
  unsigned __int8 *v10; // ebx
  _DWORD *v11; // ebp
  TESSaveLoadGame_SerializationView *v12; // ecx
  _DWORD *v13; // edi
  TESSaveLoadGame_SerializationView *v14; // ecx
  int v15; // eax
  unsigned int v16; // eax
  TESSaveLoadGame_SerializationView *v17; // ecx
  void **v18; // edi
  TESSaveLoadGame_SerializationView *v19; // ecx
  void **v20; // edi
  void **v21; // edi
  TESSaveLoadGame_SerializationView *v22; // ecx
  void **v23; // edi
  TESSaveLoadGame_SerializationView *v24; // ecx
  void **v25; // edi
  UInt32 *currentlySavingFormHeader; // edi
  unsigned __int8 *v27; // esi
  TESForm *v28; // eax
  const char *v29; // eax
  unsigned __int8 *v30; // edi
  unsigned __int8 *v31; // esi
  int v32; // [esp-Ch] [ebp-34h]
  int v33; // [esp-8h] [ebp-30h]
  const char *v34; // [esp-4h] [ebp-2Ch]
  bool v35; // [esp+Bh] [ebp-1Dh] BYREF
  int v36; // [esp+Ch] [ebp-1Ch] BYREF
  unsigned __int8 *v37; // [esp+10h] [ebp-18h]
  unsigned int Src; // [esp+14h] [ebp-14h] BYREF
  unsigned __int8 *v39; // [esp+18h] [ebp-10h]
  int source; // [esp+1Ch] [ebp-Ch] BYREF
  int v41; // [esp+20h] [ebp-8h] BYREF
  unsigned int v42; // [esp+24h] [ebp-4h] BYREF

  TESPackage_SaveGame(this); /*0x617937*/
  v4 = g_TESSaveLoadGame; /*0x61793c*/
  v5 = Global_DebugSaveBuffer == 0; /*0x617944*/
  source = 0; /*0x61794b*/
  bufferCursor = v4->bufferCursor; /*0x61794f*/
  v39 = 0; /*0x617952*/
  v37 = bufferCursor; /*0x617956*/
  if ( !v5 ) /*0x61795a*/
    v37 = bufferCursor; /*0x61795c*/
  if ( TESSaveLoadGame_UseSaveGameBlocks() ) /*0x617960*/
  {
    v7 = g_TESSaveLoadGame; /*0x617969*/
    Src = 0x4B4F4C42; /*0x617976*/
    SaveLoad_SaveData(v7, &Src, 4u); /*0x61797e*/
    v8 = g_TESSaveLoadGame; /*0x617983*/
    v39 = g_TESSaveLoadGame->bufferCursor; /*0x617993*/
    SaveLoad_SaveData(v8, &source, 2u); /*0x617997*/
  }
  v9 = g_TESSaveLoadGame; /*0x61799c*/
  v36 = 0; /*0x6179aa*/
  v10 = v9->bufferCursor; /*0x6179ae*/
  SaveLoad_SaveData(v9, &v36, 2u); /*0x6179b2*/
  v11 = *((_DWORD **)this + 0x10); /*0x6179b7*/
  if ( v11 ) /*0x6179bc*/
  {
    v12 = g_TESSaveLoadGame; /*0x6179c2*/
    do /*0x617a5e*/
    {
      if ( !v11[1] && !*v11 ) /*0x6179ce*/
        break; /*0x6179d2*/
      v13 = (_DWORD *)*v11; /*0x6179d8*/
      Src = 0; /*0x6179db*/
      if ( *v13 ) /*0x6179e3*/
        Src = *(_DWORD *)(*v13 + 0xC); /*0x6179ec*/
      SaveLoad_SaveFormID(v12, &Src, 4u); /*0x6179f7*/
      v14 = g_TESSaveLoadGame; /*0x617a06*/
      v41 = v13[1]; /*0x617a0c*/
      SaveLoad_SaveData(v14, &v41, 4u); /*0x617a10*/
      SaveLoad_SaveData(g_TESSaveLoadGame, v13 + 2, 1u); /*0x617a21*/
      v12 = g_TESSaveLoadGame; /*0x617a26*/
      if ( g_TESSaveLoadGame->currentVersion >= 0x29u ) /*0x617a30*/
      {
        SaveLoad_SaveData(v12, v13 + 3, 4u); /*0x617a38*/
        SaveLoad_SaveData(g_TESSaveLoadGame, v13 + 4, 4u); /*0x617a49*/
        v12 = g_TESSaveLoadGame; /*0x617a4e*/
      }
      ++v36; /*0x617a54*/
      v11 = (_DWORD *)v11[1]; /*0x617a59*/
    }
    while ( v11 ); /*0x617a5e*/
  }
  *(_WORD *)v10 = v36; /*0x617a6e*/
  TESForm_SaveDataToCurrentSaveGame((TESForm *)this, (char *)this + 0x44, 4u); /*0x617a74*/
  TESForm_SaveDataToCurrentSaveGame((TESForm *)this, (char *)this + 0x48, 1u); /*0x617a81*/
  TESForm_SaveDataToCurrentSaveGame((TESForm *)this, (char *)this + 0x49, 1u); /*0x617a8e*/
  TESForm_SaveDataToCurrentSaveGame((TESForm *)this, (char *)this + 0x4A, 1u); /*0x617a9b*/
  TESForm_SaveDataToCurrentSaveGame((TESForm *)this, (char *)this + 0x4B, 1u); /*0x617aa8*/
  TESForm_SaveDataToCurrentSaveGame((TESForm *)this, (char *)this + 0x4C, 1u); /*0x617ab5*/
  TESForm_SaveDataToCurrentSaveGame((TESForm *)this, (char *)this + 0x4D, 1u); /*0x617ac2*/
  TESForm_SaveDataToCurrentSaveGame((TESForm *)this, (char *)this + 0x4E, 1u); /*0x617acf*/
  TESForm_SaveDataToCurrentSaveGame((TESForm *)this, (char *)this + 0x4F, 1u); /*0x617adc*/
  SaveLoad_SaveData(g_TESSaveLoadGame, (char *)this + 0x50, 4u); /*0x617aed*/
  TESForm_SaveDataToCurrentSaveGame((TESForm *)this, (char *)this + 0x54, 4u); /*0x617afa*/
  TESForm_SaveDataToCurrentSaveGame((TESForm *)this, (char *)this + 0x58, 1u); /*0x617b07*/
  TESForm_SaveDataToCurrentSaveGame((TESForm *)this, (char *)this + 0x59, 1u); /*0x617b14*/
  SaveLoad_SaveData(g_TESSaveLoadGame, (char *)this + 0x6C, 4u); /*0x617b25*/
  SaveLoad_SaveData(g_TESSaveLoadGame, (char *)this + 0x70, 4u); /*0x617b36*/
  SaveLoad_SaveData(g_TESSaveLoadGame, (char *)this + 0x74, 4u); /*0x617b47*/
  TESForm_SaveDataToCurrentSaveGame((TESForm *)this, (char *)this + 0xB0, 0x14u); /*0x617b57*/
  TESForm_SaveDataToCurrentSaveGame((TESForm *)this, (char *)this + 0xCC, 4u); /*0x617b67*/
  TESForm_SaveDataToCurrentSaveGame((TESForm *)this, (char *)this + 0xD0, 4u); /*0x617b77*/
  SaveLoad_SaveData(g_TESSaveLoadGame, (char *)this + 0xD4, 0xCu); /*0x617b8b*/
  SaveLoad_SaveData(g_TESSaveLoadGame, (char *)this + 0xE0, 0xCu); /*0x617b9f*/
  SaveLoad_SaveData(g_TESSaveLoadGame, (char *)this + 0xEC, 0xCu); /*0x617bb3*/
  SaveLoad_SaveData(g_TESSaveLoadGame, (char *)this + 0xF8, 0xCu); /*0x617bc7*/
  v15 = *((_DWORD *)this + 0x4B); /*0x617bcc*/
  if ( v15 ) /*0x617bd6*/
    v16 = *(_DWORD *)(v15 + 0xC); /*0x617bd8*/
  else
    v16 = 0; /*0x617bdd*/
  v17 = g_TESSaveLoadGame; /*0x617be6*/
  v42 = v16; /*0x617bec*/
  SaveLoad_SaveFormID(v17, &v42, 4u); /*0x617bf0*/
  SaveLoad_SaveData(g_TESSaveLoadGame, (char *)this + 0x164, 0xCu); /*0x617c04*/
  TESForm_SaveDataToCurrentSaveGame((TESForm *)this, (char *)this + 0x114, 1u); /*0x617c14*/
  if ( g_TESSaveLoadGame->currentVersion >= 0x3Au ) /*0x617c23*/
    TESForm_SaveDataToCurrentSaveGame((TESForm *)this, (char *)this + 0x170, 4u); /*0x617c30*/
  if ( g_TESSaveLoadGame->currentVersion >= 0x3Du ) /*0x617c3e*/
    TESForm_SaveDataToCurrentSaveGame((TESForm *)this, (char *)this + 0x17D, 1u); /*0x617c4b*/
  if ( g_TESSaveLoadGame->currentVersion >= 0x5Fu ) /*0x617c5a*/
  {
    sub_614C30(a2, *((int **)this + 0x17)); /*0x617c66*/
    sub_614C30(a2, *((int **)this + 0x18)); /*0x617c71*/
    sub_614C30(a2, *((int **)this + 0x19)); /*0x617c7c*/
    sub_612860(*((void ***)this + 0x1F)); /*0x617c87*/
    sub_612860(*((void ***)this + 0x20)); /*0x617c95*/
    sub_612860(*((void ***)this + 0x21)); /*0x617ca3*/
    sub_612860(*((void ***)this + 0x22)); /*0x617cb1*/
    sub_612860(*((void ***)this + 0x23)); /*0x617cbf*/
    v18 = *((void ***)this + 0x24); /*0x617cc4*/
    v19 = g_TESSaveLoadGame; /*0x617cca*/
    v35 = v18 != 0; /*0x617cdc*/
    SaveLoad_SaveData(v19, &v35, 1u); /*0x617ce0*/
    if ( v18 ) /*0x617ce7*/
      sub_6128B0(v18, a2); /*0x617ceb*/
    v20 = *((void ***)this + 0x25); /*0x617cf0*/
    v35 = v20 != 0; /*0x617d01*/
    SaveLoad_SaveData(g_TESSaveLoadGame, &v35, 1u); /*0x617d0c*/
    if ( v20 ) /*0x617d13*/
      sub_6128B0(v20, a2); /*0x617d17*/
    v21 = *((void ***)this + 0x26); /*0x617d1c*/
    v22 = g_TESSaveLoadGame; /*0x617d2e*/
    v35 = v21 != 0; /*0x617d34*/
    SaveLoad_SaveData(v22, &v35, 1u); /*0x617d38*/
    if ( v21 ) /*0x617d3f*/
      sub_6128B0(v21, a2); /*0x617d43*/
    v23 = *((void ***)this + 0x27); /*0x617d48*/
    v24 = g_TESSaveLoadGame; /*0x617d4e*/
    v35 = v23 != 0; /*0x617d60*/
    SaveLoad_SaveData(v24, &v35, 1u); /*0x617d64*/
    if ( v23 ) /*0x617d6b*/
      sub_6128B0(v23, a2); /*0x617d6f*/
    v25 = *((void ***)this + 0x28); /*0x617d74*/
    v35 = v25 != 0; /*0x617d85*/
    SaveLoad_SaveData(g_TESSaveLoadGame, &v35, 1u); /*0x617d90*/
    if ( v25 ) /*0x617d97*/
      sub_6128B0(v25, a2); /*0x617d9b*/
  }
  if ( g_TESSaveLoadGame->currentVersion >= 0x66u ) /*0x617da9*/
    sub_614C30(a2, *((int **)this + 0x1A)); /*0x617db1*/
  if ( Global_DebugSaveBuffer )
  {
    currentlySavingFormHeader = (UInt32 *)g_TESSaveLoadGame->currentlySavingFormHeader; /*0x617dc4*/
    v27 = g_TESSaveLoadGame->bufferCursor; /*0x617dcc*/
    if ( currentlySavingFormHeader )
    {
      v28 = TESForm_LookupByFormID(*currentlySavingFormHeader); /*0x617dd4*/
      v29 = (const char *)((int (__thiscall *)(TESForm *, _DWORD, int, const char *))v28->vtbl->GetEditorName)( /*0x617df4*/
                            v28,
                            *(UInt32 *)((char *)currentlySavingFormHeader + 5),
                            0x28AD,
                            ".\\AI\\CombatController.cpp");
      sub_40FEC0(
        "SaveGame(): %-5i for form %08X %s with flags %08X ending at line %i in file %s",
        v27 - v37,
        *currentlySavingFormHeader,
        v29,
        v32,
        v33,
        v34);
    }
    else
    {
      sub_40FEC0("SaveGame(): %-5i ending at line %i in file %s", v27 - v37, 0x28AD, ".\\AI\\CombatController.cpp");
    }
  }
  if ( TESSaveLoadGame_UseSaveGameBlocks() ) /*0x617e30*/
  {
    v30 = v39; /*0x617e3f*/
    v31 = g_TESSaveLoadGame->bufferCursor; /*0x617e43*/
    if ( v31 > v39 + 0xFFFF ) /*0x617e4e*/
      PrintError( /*0x617e5f*/
        "Save Game Block in file %s on line %i is greater than maximum short size",
        ".\\AI\\CombatController.cpp",
        0x28AD);
    *(_WORD *)v30 = (_WORD)v31 - (_WORD)v30; /*0x617e69*/
  }
}
