void __thiscall Actor_SaveModifiedForm(TESObjectREFR *this, unsigned int changeMask)
{
  unsigned int v3; // ebx
  bool v5; // zf
  unsigned __int8 *bufferCursor; // eax
  TESSaveLoadGame_SerializationView *v7; // ecx
  TESSaveLoadGame_SerializationView *v8; // ecx
  TESForm *v9; // eax
  TESSaveLoadGame_SerializationView *v10; // ecx
  unsigned __int8 *v11; // ebx
  TESObjectREFR *v12; // edi
  TESObjectREFRVtbl *vtbl; // ebp
  void (__thiscall *ClearComponentReferences)(BaseFormComponent *); // eax
  TESSaveLoadGame_SerializationView *v15; // ecx
  unsigned __int8 *v16; // ebx
  TESObjectREFR *v17; // edi
  TESObjectREFRVtbl *v18; // ebp
  TESSaveLoadGame_SerializationView *v19; // ecx
  int v20; // eax
  int v21; // eax
  int v22; // eax
  int v23; // eax
  UInt32 *currentlySavingFormHeader; // edi
  unsigned __int8 *v25; // esi
  TESForm *v26; // eax
  const char *v27; // eax
  _WORD *v28; // edi
  unsigned __int8 *v29; // esi
  int v30; // [esp-Ch] [ebp-38h]
  int v31; // [esp-8h] [ebp-34h]
  const char *v32; // [esp-4h] [ebp-30h]
  int v33; // [esp+10h] [ebp-1Ch] BYREF
  unsigned int Src; // [esp+14h] [ebp-18h] BYREF
  int v35; // [esp+18h] [ebp-14h] BYREF
  unsigned __int8 *v36; // [esp+1Ch] [ebp-10h]
  __int64 source; // [esp+20h] [ebp-Ch] BYREF
  unsigned int v38; // [esp+28h] [ebp-4h] BYREF

  v3 = changeMask; /*0x5e7ef4*/
  MobileObject_SaveModifiedForm((MobileObject *)this, changeMask); /*0x5e7efe*/
  v5 = Global_DebugSaveBuffer == 0; /*0x5e7f0b*/
  bufferCursor = g_TESSaveLoadGame->bufferCursor; /*0x5e7f16*/
  source = 0; /*0x5e7f19*/
  v36 = bufferCursor; /*0x5e7f1d*/
  if ( !v5 ) /*0x5e7f21*/
    v36 = bufferCursor; /*0x5e7f23*/
  if ( TESSaveLoadGame_UseSaveGameBlocks() ) /*0x5e7f27*/
  {
    v7 = g_TESSaveLoadGame; /*0x5e7f30*/
    Src = 0x4B4F4C42; /*0x5e7f3d*/
    SaveLoad_SaveData(v7, &Src, 4u); /*0x5e7f45*/
    v8 = g_TESSaveLoadGame; /*0x5e7f4a*/
    LODWORD(source) = g_TESSaveLoadGame->bufferCursor; /*0x5e7f5a*/
    SaveLoad_SaveData(v8, (char *)&source + 4, 2u); /*0x5e7f5e*/
  }
  TESForm_SaveDataToCurrentSaveGame((TESForm *)this, (char *)this + 0xBC, 4u); /*0x5e7f6e*/
  TESForm_SaveDataToCurrentSaveGame((TESForm *)this, (char *)this + 0xC8, 1u); /*0x5e7f7e*/
  TESForm_SaveDataToCurrentSaveGame((TESForm *)this, (char *)this + 0xC9, 1u); /*0x5e7f8e*/
  TESForm_SaveDataToCurrentSaveGame((TESForm *)this, (char *)this + 0x78, 1u); /*0x5e7f9b*/
  if ( (v3 & 0x40) != 0 ) /*0x5e7fa3*/
  {
    HIBYTE(v33) = *((_BYTE *)this + 0xB0); /*0x5e7fb4*/
    TESForm_SaveDataToCurrentSaveGame((TESForm *)this, (char *)&v33 + 3, 1u); /*0x5e7fb8*/
  }
  if ( this->vtbl->GetBaseForm(this)->member.type == kFormType_Creature ) /*0x5e7fcd*/
  {
    v9 = this->vtbl->GetBaseForm(this); /*0x5e7fd9*/
    if ( v9 ) /*0x5e7fdd*/
    {
      if ( LOBYTE(v9[0xA].member.modlist.next) == 4 ) /*0x5e7fe6*/
      {
        HIBYTE(v33) = *((_DWORD *)this + 0x35) != 0; /*0x5e7ff5*/
        TESForm_SaveDataToCurrentSaveGame((TESForm *)this, (char *)&v33 + 3, 1u); /*0x5e8003*/
        if ( HIBYTE(v33) ) /*0x5e800d*/
        {
          Src = *(_DWORD *)(*((_DWORD *)this + 0x35) + 0xC); /*0x5e8021*/
          TESForm_SaveFormIDToCurrentSaveGame((TESForm *)this, &Src, 4u); /*0x5e8025*/
        }
      }
    }
  }
  if ( (v3 & 0x8000) != 0 ) /*0x5e8030*/
  {
    v10 = g_TESSaveLoadGame; /*0x5e8032*/
    Src = 0; /*0x5e803e*/
    v11 = v10->bufferCursor; /*0x5e8042*/
    SaveLoad_SaveData(v10, &Src, 2u); /*0x5e8046*/
    v12 = (TESObjectREFR *)((char *)this + 0xA4); /*0x5e804b*/
    if ( this != (TESObjectREFR *)0xFFFFFF5C ) /*0x5e8053*/
    {
      do /*0x5e8092*/
      {
        if ( !*(_DWORD *)&v12->member.super.type && !v12->vtbl ) /*0x5e805a*/
          break; /*0x5e805c*/
        vtbl = v12->vtbl; /*0x5e805e*/
        ClearComponentReferences = v12->vtbl->super.super.ClearComponentReferences; /*0x5e8060*/
        if ( ClearComponentReferences ) /*0x5e8065*/
        {
          v38 = *((_DWORD *)ClearComponentReferences + 3); /*0x5e8073*/
          TESForm_SaveFormIDToCurrentSaveGame((TESForm *)this, &v38, 4u); /*0x5e8077*/
          TESForm_SaveDataToCurrentSaveGame((TESForm *)this, vtbl, 4u); /*0x5e8081*/
          ++Src; /*0x5e8086*/
        }
        v12 = *(TESObjectREFR **)&v12->member.super.type; /*0x5e808b*/
      }
      while ( v12 ); /*0x5e8092*/
    }
    *(_WORD *)v11 = Src; /*0x5e8099*/
    v3 = changeMask; /*0x5e809c*/
  }
  if ( (v3 & 0x20000000) != 0 ) /*0x5e80a6*/
  {
    v38 = sub_453A00(g_TESSaveLoadGame, (int)this); /*0x5e80b4*/
    TESForm_SaveDataToCurrentSaveGame((TESForm *)this, &v38, 4u); /*0x5e80c1*/
  }
  v15 = g_TESSaveLoadGame; /*0x5e80c6*/
  v35 = 0; /*0x5e80d2*/
  v16 = v15->bufferCursor; /*0x5e80d6*/
  SaveLoad_SaveData(v15, &v35, 2u); /*0x5e80da*/
  v17 = (TESObjectREFR *)((char *)this + 0x9C); /*0x5e80df*/
  if ( this != (TESObjectREFR *)0xFFFFFF64 ) /*0x5e80e7*/
  {
    do /*0x5e8138*/
    {
      if ( !*(_DWORD *)&v17->member.super.type && !v17->vtbl ) /*0x5e80f5*/
        break; /*0x5e80f7*/
      v18 = v17->vtbl; /*0x5e80f9*/
      Src = 0; /*0x5e80fb*/
      if ( v18->super.super.InitializeComponent ) /*0x5e8103*/
        Src = *((_DWORD *)v18->super.super.InitializeComponent + 3); /*0x5e810d*/
      TESForm_SaveFormIDToCurrentSaveGame((TESForm *)this, &Src, 4u); /*0x5e811a*/
      TESForm_SaveDataToCurrentSaveGame((TESForm *)this, &v18->super.super.ClearComponentReferences, 4u); /*0x5e8127*/
      ++v35; /*0x5e812c*/
      v17 = *(TESObjectREFR **)&v17->member.super.type; /*0x5e8131*/
    }
    while ( v17 ); /*0x5e8138*/
  }
  *(_WORD *)v16 = v35; /*0x5e813f*/
  v19 = g_TESSaveLoadGame; /*0x5e8142*/
  if ( g_TESSaveLoadGame->currentVersion >= 0x32u ) /*0x5e814c*/
  {
    v20 = *((_DWORD *)this + 0x1F); /*0x5e814e*/
    Src = 0; /*0x5e8153*/
    if ( v20 ) /*0x5e8157*/
      Src = *(_DWORD *)(v20 + 0xC); /*0x5e815c*/
    TESForm_SaveFormIDToCurrentSaveGame((TESForm *)this, &Src, 4u); /*0x5e8169*/
    v19 = g_TESSaveLoadGame; /*0x5e816e*/
  }
  if ( v19->currentVersion >= 0x3Cu ) /*0x5e8178*/
  {
    v21 = *((_DWORD *)this + 0x34); /*0x5e817a*/
    Src = 0; /*0x5e8182*/
    if ( v21 ) /*0x5e8186*/
      Src = *(_DWORD *)(v21 + 0xC); /*0x5e818b*/
    TESForm_SaveFormIDToCurrentSaveGame((TESForm *)this, &Src, 4u); /*0x5e8198*/
    v19 = g_TESSaveLoadGame; /*0x5e819d*/
  }
  if ( v19->currentVersion >= 0x44u && (changeMask & 0x200000) != 0 ) /*0x5e81b1*/
  {
    AVCollection_Save((AVCollection *)((char *)this + 0x88)); /*0x5e81b9*/
    v19 = g_TESSaveLoadGame; /*0x5e81be*/
  }
  if ( v19->currentVersion >= 0x45u ) /*0x5e81c8*/
  {
    SaveLoad_SaveData(v19, (char *)this + 0x80, 1u); /*0x5e81d3*/
    v22 = *((_DWORD *)this + 0x33); /*0x5e81d8*/
    changeMask = 0; /*0x5e81e0*/
    if ( v22 ) /*0x5e81e4*/
      changeMask = *(_DWORD *)(v22 + 0xC); /*0x5e81e9*/
    SaveLoad_SaveFormID(g_TESSaveLoadGame, &changeMask, 4u); /*0x5e81fa*/
    v19 = g_TESSaveLoadGame; /*0x5e81ff*/
  }
  if ( v19->currentVersion >= 0x61u ) /*0x5e8209*/
  {
    v23 = *((_DWORD *)this + 0x39); /*0x5e820b*/
    changeMask = 0; /*0x5e8213*/
    if ( v23 ) /*0x5e8217*/
      changeMask = *(_DWORD *)(v23 + 0xC); /*0x5e821c*/
    SaveLoad_SaveFormID(v19, &changeMask, 4u); /*0x5e8227*/
    v19 = g_TESSaveLoadGame; /*0x5e822c*/
  }
  if ( v19->currentVersion >= 0x65u ) /*0x5e8236*/
  {
    TESForm_SaveDataToCurrentSaveGame((TESForm *)this, (char *)this + 0x84, 4u); /*0x5e8243*/
    v19 = g_TESSaveLoadGame; /*0x5e8248*/
  }
  if ( v19->currentVersion >= 0x71u ) /*0x5e8252*/
  {
    TESForm_SaveDataToCurrentSaveGame((TESForm *)this, (char *)this + 0xAC, 4u); /*0x5e825f*/
    TESForm_SaveDataToCurrentSaveGame((TESForm *)this, (char *)this + 0xCA, 1u); /*0x5e826f*/
    TESForm_SaveDataToCurrentSaveGame((TESForm *)this, (char *)this + 0xD8, 1u); /*0x5e827f*/
    TESForm_SaveDataToCurrentSaveGame((TESForm *)this, (char *)this + 0xDC, 4u); /*0x5e828f*/
    TESForm_SaveDataToCurrentSaveGame((TESForm *)this, (char *)this + 0x100, 4u); /*0x5e829f*/
    v19 = g_TESSaveLoadGame; /*0x5e82a4*/
  }
  if ( v19->currentVersion >= 0x73u ) /*0x5e82ae*/
  {
    TESForm_SaveDataToCurrentSaveGame((TESForm *)this, (char *)this + 0xFC, 1u); /*0x5e82bb*/
    v19 = g_TESSaveLoadGame; /*0x5e82c0*/
  }
  if ( v19->currentVersion >= 0x7Bu ) /*0x5e82ca*/
  {
    TESForm_SaveDataToCurrentSaveGame((TESForm *)this, (char *)this + 0xC0, 1u); /*0x5e82d7*/
    v19 = g_TESSaveLoadGame; /*0x5e82dc*/
  }
  if ( Global_DebugSaveBuffer )
  {
    currentlySavingFormHeader = (UInt32 *)v19->currentlySavingFormHeader; /*0x5e82eb*/
    v25 = v19->bufferCursor; /*0x5e82f3*/
    if ( currentlySavingFormHeader )
    {
      v26 = TESForm_LookupByFormID(*currentlySavingFormHeader); /*0x5e82fb*/
      v27 = (const char *)((int (__thiscall *)(TESForm *, _DWORD, int, const char *))v26->vtbl->GetEditorName)( /*0x5e831b*/
                            v26,
                            *(UInt32 *)((char *)currentlySavingFormHeader + 5),
                            0x43C2,
                            ".\\AI\\Actor.cpp");
      sub_40FEC0(
        "SaveGame(): %-5i for form %08X %s with flags %08X ending at line %i in file %s",
        v25 - v36,
        *currentlySavingFormHeader,
        v27,
        v30,
        v31,
        v32);
    }
    else
    {
      sub_40FEC0("SaveGame(): %-5i ending at line %i in file %s", v25 - v36, 0x43C2, ".\\AI\\Actor.cpp");
    }
  }
  if ( TESSaveLoadGame_UseSaveGameBlocks() ) /*0x5e8357*/
  {
    v28 = (_WORD *)source; /*0x5e8366*/
    v29 = g_TESSaveLoadGame->bufferCursor; /*0x5e836a*/
    if ( (unsigned int)v29 > (int)source + 0xFFFF ) /*0x5e8375*/
      PrintError("Save Game Block in file %s on line %i is greater than maximum short size", ".\\AI\\Actor.cpp", 0x43C2); /*0x5e8386*/
    *v28 = (_WORD)v29 - (_WORD)v28; /*0x5e8390*/
  }
}
