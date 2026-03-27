void __userpurge Actor_SaveModifiedForm(TESObjectREFR *this@<ecx>, double st7_0@<st0>, int a3)
{
  int v3; // ebx
  bool v5; // zf
  UInt32 v6; // eax
  TESSaveLoad *v7; // ecx
  TESSaveLoad *v8; // ecx
  TESForm *v9; // eax
  TESSaveLoad *v10; // ecx
  _WORD *v11; // ebx
  TESForm **v12; // edi
  TESForm *v13; // ebp
  int v14; // eax
  TESSaveLoad *v15; // ecx
  _WORD *v16; // ebx
  TESObjectREFR *v17; // edi
  TESObjectREFRVtbl *vtbl; // ebp
  TESSaveLoad *v19; // ecx
  int v20; // eax
  int v21; // eax
  int v22; // eax
  int v23; // eax
  UInt32 *v24; // edi
  UInt32 v25; // esi
  TESForm *v26; // eax
  const char *v27; // eax
  _WORD *v28; // edi
  unsigned int v29; // esi
  int v30; // [esp-Ch] [ebp-38h]
  int v31; // [esp-8h] [ebp-34h]
  size_t v32; // [esp-4h] [ebp-30h]
  size_t v33; // [esp-4h] [ebp-30h]
  size_t v34; // [esp-4h] [ebp-30h]
  size_t v35; // [esp-4h] [ebp-30h]
  size_t v36; // [esp-4h] [ebp-30h]
  size_t v37; // [esp-4h] [ebp-30h]
  size_t v38; // [esp-4h] [ebp-30h]
  size_t v39; // [esp-4h] [ebp-30h]
  size_t v40; // [esp-4h] [ebp-30h]
  size_t v41; // [esp-4h] [ebp-30h]
  size_t v42; // [esp-4h] [ebp-30h]
  const char *v43; // [esp-4h] [ebp-30h]
  int v44; // [esp+4h] [ebp-28h]
  int v45; // [esp+8h] [ebp-24h]
  int v46; // [esp+Ch] [ebp-20h]
  int v47; // [esp+10h] [ebp-1Ch] BYREF
  float Src; // [esp+14h] [ebp-18h] BYREF
  int v49; // [esp+18h] [ebp-14h] BYREF
  UInt32 v50; // [esp+1Ch] [ebp-10h]
  __int64 v51; // [esp+20h] [ebp-Ch] BYREF
  unsigned int v52; // [esp+28h] [ebp-4h] BYREF

  v3 = a3;
  MobileObject_SaveModifiedForm(this, st7_0, a3);
  v5 = Global_DebugSaveBuffer == 0;
  v6 = SaveLoad_CurrentSavegame->unk000[5];
  v51 = 0;
  v50 = v6;
  if ( !v5 )
    v50 = v6;
  if ( sub_45A170() )
  {
    v7 = SaveLoad_CurrentSavegame;
    LODWORD(v32) = 4;
    Src = 13585474.0;
    SaveLoad_SaveData((int)v7, &Src, v32);
    v8 = SaveLoad_CurrentSavegame;
    LODWORD(v33) = 2;
    LODWORD(v51) = SaveLoad_CurrentSavegame->unk000[5];
    SaveLoad_SaveData((int)v8, (char *)&v51 + 4, v33);
  }
  LODWORD(v32) = 4;
  TESForm_SaveDataToCurrentSaveGame((TESForm *)((char *)this + 0xBC), v32);
  LODWORD(v34) = 1;
  TESForm_SaveDataToCurrentSaveGame((TESForm *)((char *)this + 0xC8), v34);
  LODWORD(v35) = 1;
  TESForm_SaveDataToCurrentSaveGame((TESForm *)((char *)this + 0xC9), v35);
  LODWORD(v36) = 1;
  TESForm_SaveDataToCurrentSaveGame((TESForm *)this + 5, v36);
  if ( (v3 & 0x40) != 0 )
  {
    LODWORD(v37) = 1;
    HIBYTE(v47) = *((_BYTE *)this + 0xB0);
    TESForm_SaveDataToCurrentSaveGame((TESForm *)((char *)&v47 + 3), v37);
  }
  if ( this->vtbl->GetBaseForm(this)->member.type == kFormType_Creature )
  {
    v9 = this->vtbl->GetBaseForm(this);
    if ( v9 )
    {
      if ( LOBYTE(v9[0xA].member.modlist.next) == 4 )
      {
        HIBYTE(v47) = *((_DWORD *)this + 0x35) != 0;
        LODWORD(v37) = 1;
        TESForm_SaveDataToCurrentSaveGame((TESForm *)((char *)&v47 + 3), v37);
        if ( HIBYTE(v47) )
        {
          Src = *(float *)(*((_DWORD *)this + 0x35) + 0xC);
          TESForm_SaveFormIDToCurrentSaveGame((int)&Src, 4u);
        }
      }
    }
  }
  if ( (v3 & 0x8000) != 0 )
  {
    v10 = SaveLoad_CurrentSavegame;
    LODWORD(v37) = 2;
    Src = 0.0;
    v11 = (_WORD *)v10->unk000[5];
    SaveLoad_SaveData((int)v10, &Src, v37);
    v12 = (TESForm **)((char *)this + 0xA4);
    if ( this != (TESObjectREFR *)0xFFFFFF5C )
    {
      do
      {
        if ( !v12[1] && !*v12 )
          break;
        v13 = *v12;
        v14 = *(_DWORD *)&(*v12)->member.type;
        if ( v14 )
        {
          v52 = *(_DWORD *)(v14 + 0xC);
          TESForm_SaveFormIDToCurrentSaveGame((int)&v52, 4u);
          LODWORD(v37) = 4;
          TESForm_SaveDataToCurrentSaveGame(v13, v37);
          ++LODWORD(Src);
        }
        v12 = (TESForm **)v12[1];
      }
      while ( v12 );
    }
    *v11 = LOWORD(Src);
    v3 = a3;
  }
  if ( (v3 & 0x20000000) != 0 )
  {
    v52 = sub_453A00(SaveLoad_CurrentSavegame, (int)this);
    LODWORD(v37) = 4;
    TESForm_SaveDataToCurrentSaveGame((TESForm *)&v52, v37);
  }
  v15 = SaveLoad_CurrentSavegame;
  LODWORD(v37) = 2;
  v49 = 0;
  v16 = (_WORD *)v15->unk000[5];
  SaveLoad_SaveData((int)v15, &v49, v37);
  v17 = (TESObjectREFR *)((char *)this + 0x9C);
  if ( this != (TESObjectREFR *)0xFFFFFF64 )
  {
    do
    {
      if ( !*(_DWORD *)&v17->member.super.type && !v17->vtbl )
        break;
      vtbl = v17->vtbl;
      Src = 0.0;
      if ( vtbl->super.super.InitializeComponent )
        Src = *((float *)vtbl->super.super.InitializeComponent + 3);
      TESForm_SaveFormIDToCurrentSaveGame((int)&Src, 4u);
      LODWORD(v38) = 4;
      TESForm_SaveDataToCurrentSaveGame((TESForm *)&vtbl->super.super.ClearComponentReferences, v38);
      ++v49;
      v17 = *(TESObjectREFR **)&v17->member.super.type;
    }
    while ( v17 );
  }
  *v16 = v49;
  v19 = SaveLoad_CurrentSavegame;
  if ( LOBYTE(SaveLoad_CurrentSavegame[1].createdObjectList.next) >= 0x32u )
  {
    v20 = *((_DWORD *)this + 0x1F);
    Src = 0.0;
    if ( v20 )
      Src = *(float *)(v20 + 0xC);
    TESForm_SaveFormIDToCurrentSaveGame((int)&Src, 4u);
    v19 = SaveLoad_CurrentSavegame;
  }
  if ( LOBYTE(v19[1].createdObjectList.next) >= 0x3Cu )
  {
    v21 = *((_DWORD *)this + 0x34);
    Src = 0.0;
    if ( v21 )
      Src = *(float *)(v21 + 0xC);
    TESForm_SaveFormIDToCurrentSaveGame((int)&Src, 4u);
    v19 = SaveLoad_CurrentSavegame;
  }
  if ( LOBYTE(v19[1].createdObjectList.next) >= 0x44u && (a3 & 0x200000) != 0 )
  {
    AVCollection_Save((char *)this + 0x88, SHIDWORD(v38), v44, v45, v46, v47, Src);
    v19 = SaveLoad_CurrentSavegame;
  }
  if ( LOBYTE(v19[1].createdObjectList.next) >= 0x45u )
  {
    LODWORD(v38) = 1;
    SaveLoad_SaveData((int)v19, (char *)this + 0x80, v38);
    v22 = *((_DWORD *)this + 0x33);
    a3 = 0;
    if ( v22 )
      a3 = *(_DWORD *)(v22 + 0xC);
    SaveLoad_SaveFormID(SaveLoad_CurrentSavegame, (int)&a3, 4u);
    v19 = SaveLoad_CurrentSavegame;
  }
  if ( LOBYTE(v19[1].createdObjectList.next) >= 0x61u )
  {
    v23 = *((_DWORD *)this + 0x39);
    a3 = 0;
    if ( v23 )
      a3 = *(_DWORD *)(v23 + 0xC);
    SaveLoad_SaveFormID(v19, (int)&a3, 4u);
    v19 = SaveLoad_CurrentSavegame;
  }
  if ( LOBYTE(v19[1].createdObjectList.next) >= 0x65u )
  {
    LODWORD(v38) = 4;
    TESForm_SaveDataToCurrentSaveGame((TESForm *)((char *)this + 0x84), v38);
    v19 = SaveLoad_CurrentSavegame;
  }
  if ( LOBYTE(v19[1].createdObjectList.next) >= 0x71u )
  {
    LODWORD(v38) = 4;
    TESForm_SaveDataToCurrentSaveGame((TESForm *)((char *)this + 0xAC), v38);
    LODWORD(v39) = 1;
    TESForm_SaveDataToCurrentSaveGame((TESForm *)((char *)this + 0xCA), v39);
    LODWORD(v40) = 1;
    TESForm_SaveDataToCurrentSaveGame((TESForm *)this + 9, v40);
    LODWORD(v41) = 4;
    TESForm_SaveDataToCurrentSaveGame((TESForm *)((char *)this + 0xDC), v41);
    LODWORD(v42) = 4;
    TESForm_SaveDataToCurrentSaveGame((TESForm *)((char *)this + 0x100), v42);
    v19 = SaveLoad_CurrentSavegame;
  }
  if ( LOBYTE(v19[1].createdObjectList.next) >= 0x73u )
  {
    LODWORD(v38) = 1;
    TESForm_SaveDataToCurrentSaveGame((TESForm *)((char *)this + 0xFC), v38);
    v19 = SaveLoad_CurrentSavegame;
  }
  if ( LOBYTE(v19[1].createdObjectList.next) >= 0x7Bu )
  {
    LODWORD(v38) = 1;
    TESForm_SaveDataToCurrentSaveGame((TESForm *)this + 8, v38);
    v19 = SaveLoad_CurrentSavegame;
  }
  if ( Global_DebugSaveBuffer )
  {
    v24 = (UInt32 *)v19[1].unk030[1];
    v25 = v19->unk000[5];
    if ( v24 )
    {
      v26 = TESForm_LookupByFormID(*v24);
      v27 = (const char *)((int (__thiscall *)(TESForm *, _DWORD, int, const char *))v26->vtbl->GetEditorName)(
                            v26,
                            *(UInt32 *)((char *)v24 + 5),
                            0x43C2,
                            ".\\AI\\Actor.cpp");
      sub_40FEC0(
        "SaveGame(): %-5i for form %08X %s with flags %08X ending at line %i in file %s",
        v25 - v50,
        *v24,
        v27,
        v30,
        v31,
        v43);
    }
    else
    {
      sub_40FEC0("SaveGame(): %-5i ending at line %i in file %s", v25 - v50, 0x43C2, ".\\AI\\Actor.cpp");
    }
  }
  if ( sub_45A170() )
  {
    v28 = (_WORD *)v51;
    v29 = SaveLoad_CurrentSavegame->unk000[5];
    if ( v29 > (int)v51 + 0xFFFF )
      PrintError("Save Game Block in file %s on line %i is greater than maximum short size", ".\\AI\\Actor.cpp", 0x43C2);
    *v28 = v29 - (_WORD)v28;
  }
}
