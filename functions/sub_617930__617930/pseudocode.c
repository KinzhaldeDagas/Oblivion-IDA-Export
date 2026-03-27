void __usercall sub_617930(_DWORD *this@<ecx>, double a2@<st0>, int a3@<ebp>)
{
  TESSaveLoad *v4; // ecx
  bool v5; // zf
  UInt32 v6; // eax
  TESSaveLoad *v7; // ecx
  TESSaveLoad *v8; // ecx
  TESSaveLoad *v9; // ecx
  _WORD *v10; // ebx
  _DWORD *v11; // ebp
  TESSaveLoad *v12; // ecx
  _DWORD *v13; // edi
  TESSaveLoad *v14; // ecx
  int v15; // eax
  int v16; // eax
  TESSaveLoad *v17; // ecx
  void **v18; // edi
  TESSaveLoad *v19; // ecx
  void **v20; // edi
  void **v21; // edi
  TESSaveLoad *v22; // ecx
  void **v23; // edi
  TESSaveLoad *v24; // ecx
  void **v25; // edi
  UInt32 *v26; // edi
  UInt32 v27; // esi
  TESForm *v28; // eax
  const char *v29; // eax
  _WORD *v30; // edi
  unsigned int v31; // esi
  size_t v32; // [esp-Ch] [ebp-34h]
  size_t v33; // [esp-Ch] [ebp-34h]
  size_t v34; // [esp-Ch] [ebp-34h]
  size_t v35; // [esp-Ch] [ebp-34h]
  size_t v36; // [esp-Ch] [ebp-34h]
  size_t v37; // [esp-Ch] [ebp-34h]
  size_t v38; // [esp-Ch] [ebp-34h]
  size_t v39; // [esp-Ch] [ebp-34h]
  size_t v40; // [esp-Ch] [ebp-34h]
  size_t v41; // [esp-Ch] [ebp-34h]
  size_t v42; // [esp-Ch] [ebp-34h]
  size_t v43; // [esp-Ch] [ebp-34h]
  size_t v44; // [esp-Ch] [ebp-34h]
  size_t v45; // [esp-Ch] [ebp-34h]
  size_t v46; // [esp-Ch] [ebp-34h]
  size_t v47; // [esp-Ch] [ebp-34h]
  size_t v48; // [esp-Ch] [ebp-34h]
  size_t v49; // [esp-Ch] [ebp-34h]
  size_t v50; // [esp-Ch] [ebp-34h]
  size_t v51; // [esp-Ch] [ebp-34h]
  size_t v52; // [esp-Ch] [ebp-34h]
  size_t v53; // [esp-Ch] [ebp-34h]
  size_t v54; // [esp-Ch] [ebp-34h]
  size_t v55; // [esp-Ch] [ebp-34h]
  size_t v56; // [esp-Ch] [ebp-34h]
  size_t v57; // [esp-Ch] [ebp-34h]
  int v58; // [esp-Ch] [ebp-34h]
  int v59; // [esp-8h] [ebp-30h]
  size_t v60; // [esp-4h] [ebp-2Ch]
  size_t v61; // [esp-4h] [ebp-2Ch]
  size_t v62; // [esp-4h] [ebp-2Ch]
  size_t v63; // [esp-4h] [ebp-2Ch]
  size_t v64; // [esp-4h] [ebp-2Ch]
  size_t v65; // [esp-4h] [ebp-2Ch]
  size_t v66; // [esp-4h] [ebp-2Ch]
  size_t v67; // [esp-4h] [ebp-2Ch]
  const char *v68; // [esp-4h] [ebp-2Ch]
  bool v69; // [esp+Bh] [ebp-1Dh] BYREF
  int v70; // [esp+Ch] [ebp-1Ch] BYREF
  UInt32 v71; // [esp+10h] [ebp-18h]
  int Src; // [esp+14h] [ebp-14h] BYREF
  UInt32 v73; // [esp+18h] [ebp-10h]
  int v74; // [esp+1Ch] [ebp-Ch] BYREF
  int v75; // [esp+20h] [ebp-8h] BYREF
  int v76; // [esp+24h] [ebp-4h] BYREF

  sub_567E00(this);
  v4 = SaveLoad_CurrentSavegame;
  v5 = Global_DebugSaveBuffer == 0;
  v74 = 0;
  v6 = v4->unk000[5];
  v73 = 0;
  v71 = v6;
  if ( !v5 )
    v71 = v6;
  if ( sub_45A170() )
  {
    v7 = SaveLoad_CurrentSavegame;
    LODWORD(v60) = 4;
    Src = 0x4B4F4C42;
    SaveLoad_SaveData((int)v7, &Src, v60);
    v8 = SaveLoad_CurrentSavegame;
    LODWORD(v61) = 2;
    v73 = SaveLoad_CurrentSavegame->unk000[5];
    SaveLoad_SaveData((int)v8, &v74, v61);
  }
  v9 = SaveLoad_CurrentSavegame;
  HIDWORD(v32) = a3;
  LODWORD(v32) = 2;
  v70 = 0;
  v10 = (_WORD *)v9->unk000[5];
  SaveLoad_SaveData((int)v9, &v70, v32);
  v11 = (_DWORD *)*(this + 0x10);
  if ( v11 )
  {
    v12 = SaveLoad_CurrentSavegame;
    do
    {
      if ( !v11[1] && !*v11 )
        break;
      v13 = (_DWORD *)*v11;
      Src = 0;
      if ( *v13 )
        Src = *(_DWORD *)(*v13 + 0xC);
      SaveLoad_SaveFormID(v12, (int)&Src, 4u);
      LODWORD(v33) = 4;
      v14 = SaveLoad_CurrentSavegame;
      v75 = v13[1];
      SaveLoad_SaveData((int)v14, &v75, v33);
      LODWORD(v34) = 1;
      SaveLoad_SaveData((int)SaveLoad_CurrentSavegame, v13 + 2, v34);
      v12 = SaveLoad_CurrentSavegame;
      if ( LOBYTE(SaveLoad_CurrentSavegame[1].createdObjectList.next) >= 0x29u )
      {
        LODWORD(v33) = 4;
        SaveLoad_SaveData((int)v12, v13 + 3, v33);
        LODWORD(v35) = 4;
        SaveLoad_SaveData((int)SaveLoad_CurrentSavegame, v13 + 4, v35);
        v12 = SaveLoad_CurrentSavegame;
      }
      ++v70;
      v11 = (_DWORD *)v11[1];
    }
    while ( v11 );
  }
  LODWORD(v33) = 4;
  *v10 = v70;
  TESForm_SaveDataToCurrentSaveGame((TESForm *)(this + 0x11), v33);
  LODWORD(v36) = 1;
  TESForm_SaveDataToCurrentSaveGame((TESForm *)this + 3, v36);
  LODWORD(v37) = 1;
  TESForm_SaveDataToCurrentSaveGame((TESForm *)((char *)this + 0x49), v37);
  LODWORD(v38) = 1;
  TESForm_SaveDataToCurrentSaveGame((TESForm *)((char *)this + 0x4A), v38);
  LODWORD(v39) = 1;
  TESForm_SaveDataToCurrentSaveGame((TESForm *)((char *)this + 0x4B), v39);
  LODWORD(v40) = 1;
  TESForm_SaveDataToCurrentSaveGame((TESForm *)(this + 0x13), v40);
  LODWORD(v41) = 1;
  TESForm_SaveDataToCurrentSaveGame((TESForm *)((char *)this + 0x4D), v41);
  LODWORD(v42) = 1;
  TESForm_SaveDataToCurrentSaveGame((TESForm *)((char *)this + 0x4E), v42);
  LODWORD(v43) = 1;
  TESForm_SaveDataToCurrentSaveGame((TESForm *)((char *)this + 0x4F), v43);
  LODWORD(v44) = 4;
  SaveLoad_SaveData((int)SaveLoad_CurrentSavegame, this + 0x14, v44);
  LODWORD(v45) = 4;
  TESForm_SaveDataToCurrentSaveGame((TESForm *)(this + 0x15), v45);
  LODWORD(v46) = 1;
  TESForm_SaveDataToCurrentSaveGame((TESForm *)(this + 0x16), v46);
  LODWORD(v47) = 1;
  TESForm_SaveDataToCurrentSaveGame((TESForm *)((char *)this + 0x59), v47);
  LODWORD(v48) = 4;
  SaveLoad_SaveData((int)SaveLoad_CurrentSavegame, this + 0x1B, v48);
  LODWORD(v49) = 4;
  SaveLoad_SaveData((int)SaveLoad_CurrentSavegame, this + 0x1C, v49);
  LODWORD(v50) = 4;
  SaveLoad_SaveData((int)SaveLoad_CurrentSavegame, this + 0x1D, v50);
  LODWORD(v51) = 0x14;
  TESForm_SaveDataToCurrentSaveGame((TESForm *)(this + 0x2C), v51);
  LODWORD(v52) = 4;
  TESForm_SaveDataToCurrentSaveGame((TESForm *)(this + 0x33), v52);
  LODWORD(v53) = 4;
  TESForm_SaveDataToCurrentSaveGame((TESForm *)(this + 0x34), v53);
  LODWORD(v54) = 0xC;
  SaveLoad_SaveData((int)SaveLoad_CurrentSavegame, this + 0x35, v54);
  LODWORD(v55) = 0xC;
  SaveLoad_SaveData((int)SaveLoad_CurrentSavegame, this + 0x38, v55);
  LODWORD(v56) = 0xC;
  SaveLoad_SaveData((int)SaveLoad_CurrentSavegame, this + 0x3B, v56);
  LODWORD(v57) = 0xC;
  SaveLoad_SaveData((int)SaveLoad_CurrentSavegame, this + 0x3E, v57);
  v15 = *(this + 0x4B);
  if ( v15 )
    v16 = *(_DWORD *)(v15 + 0xC);
  else
    v16 = 0;
  v17 = SaveLoad_CurrentSavegame;
  v76 = v16;
  SaveLoad_SaveFormID(v17, (int)&v76, 4u);
  LODWORD(v60) = 0xC;
  SaveLoad_SaveData((int)SaveLoad_CurrentSavegame, this + 0x59, v60);
  LODWORD(v62) = 1;
  TESForm_SaveDataToCurrentSaveGame((TESForm *)(this + 0x45), v62);
  if ( LOBYTE(SaveLoad_CurrentSavegame[1].createdObjectList.next) >= 0x3Au )
  {
    LODWORD(v63) = 4;
    TESForm_SaveDataToCurrentSaveGame((TESForm *)(this + 0x5C), v63);
  }
  if ( LOBYTE(SaveLoad_CurrentSavegame[1].createdObjectList.next) >= 0x3Du )
  {
    LODWORD(v63) = 1;
    TESForm_SaveDataToCurrentSaveGame((TESForm *)((char *)this + 0x17D), v63);
  }
  if ( LOBYTE(SaveLoad_CurrentSavegame[1].createdObjectList.next) >= 0x5Fu )
  {
    sub_614C30(a2, (int)this, (int *)*(this + 0x17));
    sub_614C30(a2, (int)this, (int *)*(this + 0x18));
    sub_614C30(a2, (int)this, (int *)*(this + 0x19));
    sub_612860((void **)*(this + 0x1F));
    sub_612860((void **)*(this + 0x20));
    sub_612860((void **)*(this + 0x21));
    sub_612860((void **)*(this + 0x22));
    sub_612860((void **)*(this + 0x23));
    v18 = (void **)*(this + 0x24);
    v19 = SaveLoad_CurrentSavegame;
    LODWORD(v63) = 1;
    v69 = v18 != 0;
    SaveLoad_SaveData((int)v19, &v69, v63);
    if ( v18 )
      sub_6128B0(v18, a2, (int)this);
    v20 = (void **)*(this + 0x25);
    LODWORD(v64) = 1;
    v69 = v20 != 0;
    SaveLoad_SaveData((int)SaveLoad_CurrentSavegame, &v69, v64);
    if ( v20 )
      sub_6128B0(v20, a2, (int)this);
    v21 = (void **)*(this + 0x26);
    LODWORD(v65) = 1;
    v22 = SaveLoad_CurrentSavegame;
    v69 = v21 != 0;
    SaveLoad_SaveData((int)v22, &v69, v65);
    if ( v21 )
      sub_6128B0(v21, a2, (int)this);
    v23 = (void **)*(this + 0x27);
    v24 = SaveLoad_CurrentSavegame;
    LODWORD(v66) = 1;
    v69 = v23 != 0;
    SaveLoad_SaveData((int)v24, &v69, v66);
    if ( v23 )
      sub_6128B0(v23, a2, (int)this);
    v25 = (void **)*(this + 0x28);
    LODWORD(v67) = 1;
    v69 = v25 != 0;
    SaveLoad_SaveData((int)SaveLoad_CurrentSavegame, &v69, v67);
    if ( v25 )
      sub_6128B0(v25, a2, (int)this);
  }
  if ( LOBYTE(SaveLoad_CurrentSavegame[1].createdObjectList.next) >= 0x66u )
    sub_614C30(a2, (int)this, (int *)*(this + 0x1A));
  if ( Global_DebugSaveBuffer )
  {
    v26 = (UInt32 *)SaveLoad_CurrentSavegame[1].unk030[1];
    v27 = SaveLoad_CurrentSavegame->unk000[5];
    if ( v26 )
    {
      v28 = TESForm_LookupByFormID(*v26);
      v29 = (const char *)((int (__thiscall *)(TESForm *, _DWORD, int, const char *))v28->vtbl->GetEditorName)(
                            v28,
                            *(UInt32 *)((char *)v26 + 5),
                            0x28AD,
                            ".\\AI\\CombatController.cpp");
      sub_40FEC0(
        "SaveGame(): %-5i for form %08X %s with flags %08X ending at line %i in file %s",
        v27 - v71,
        *v26,
        v29,
        v58,
        v59,
        v68);
    }
    else
    {
      sub_40FEC0("SaveGame(): %-5i ending at line %i in file %s", v27 - v71, 0x28AD, ".\\AI\\CombatController.cpp");
    }
  }
  if ( sub_45A170() )
  {
    v30 = (_WORD *)v73;
    v31 = SaveLoad_CurrentSavegame->unk000[5];
    if ( v31 > v73 + 0xFFFF )
      PrintError(
        "Save Game Block in file %s on line %i is greater than maximum short size",
        ".\\AI\\CombatController.cpp",
        0x28AD);
    *v30 = v31 - (_WORD)v30;
  }
}
