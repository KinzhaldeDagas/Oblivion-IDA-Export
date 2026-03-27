void __thiscall MiddleHighProc_Save__(_DWORD *this, int a2, int Src)
{
  int v4; // edi
  void *v6; // eax
  int v7; // ebp
  bool v8; // zf
  TESSaveLoad *v9; // ecx
  int v10; // eax
  TESSaveLoad *v11; // ecx
  TESSaveLoad *v12; // ecx
  TESSaveLoad *v13; // ecx
  int v14; // eax
  int v15; // eax
  int v16; // eax
  char v17; // dl
  int v18; // ecx
  double v19; // st7
  int v20; // edx
  TESSaveLoad *v21; // ecx
  void *v22; // ecx
  _DWORD *v23; // ecx
  TESSaveLoad *v24; // ecx
  TESSaveLoad *v25; // ecx
  _WORD *v26; // ebp
  int *v27; // edi
  int v28; // eax
  void *v29; // esi
  int v30; // eax
  UInt32 *v31; // edi
  UInt32 v32; // esi
  TESForm *v33; // eax
  const char *v34; // eax
  _WORD *v35; // edi
  unsigned int v36; // esi
  int v37; // [esp-Ch] [ebp-50h]
  int v38; // [esp-8h] [ebp-4Ch]
  size_t v39; // [esp-4h] [ebp-48h]
  size_t v40; // [esp-4h] [ebp-48h]
  size_t v41; // [esp-4h] [ebp-48h]
  size_t v42; // [esp-4h] [ebp-48h]
  size_t v43; // [esp-4h] [ebp-48h]
  size_t v44; // [esp-4h] [ebp-48h]
  size_t v45; // [esp-4h] [ebp-48h]
  size_t v46; // [esp-4h] [ebp-48h]
  size_t v47; // [esp-4h] [ebp-48h]
  size_t v48; // [esp-4h] [ebp-48h]
  size_t v49; // [esp-4h] [ebp-48h]
  size_t v50; // [esp-4h] [ebp-48h]
  size_t v51; // [esp-4h] [ebp-48h]
  size_t v52; // [esp-4h] [ebp-48h]
  size_t v53; // [esp-4h] [ebp-48h]
  size_t v54; // [esp-4h] [ebp-48h]
  size_t v55; // [esp-4h] [ebp-48h]
  size_t v56; // [esp-4h] [ebp-48h]
  size_t v57; // [esp-4h] [ebp-48h]
  size_t v58; // [esp-4h] [ebp-48h]
  const char *v59; // [esp-4h] [ebp-48h]
  int v60; // [esp+0h] [ebp-44h]
  char v61; // [esp+4h] [ebp-40h]
  int v62; // [esp+8h] [ebp-3Ch]
  int v63; // [esp+Ch] [ebp-38h]
  int v64; // [esp+10h] [ebp-34h] BYREF
  int v65; // [esp+14h] [ebp-30h]
  int v66; // [esp+18h] [ebp-2Ch] BYREF
  int v67; // [esp+1Ch] [ebp-28h] BYREF
  int FormID; // [esp+20h] [ebp-24h] BYREF
  int ParentFormID; // [esp+24h] [ebp-20h] BYREF
  UInt32 v70; // [esp+28h] [ebp-1Ch]
  int v71; // [esp+2Ch] [ebp-18h] BYREF
  float v72; // [esp+30h] [ebp-14h] BYREF
  int v73; // [esp+34h] [ebp-10h]
  _DWORD v74[3]; // [esp+38h] [ebp-Ch] BYREF

  v4 = Src;
  v6 = OblivionDynamicCast(
         (void *)Src,
         0,
         (struct _s_RTTICompleteObjectLocator *)&MobileObject `RTTI Type Descriptor',
         &Actor `RTTI Type Descriptor',
         0);
  v7 = a2;
  v73 = (int)v6;
  MiddleLowProcess_Save_(this, a2, v4);
  v8 = Global_DebugSaveBuffer == 0;
  v9 = SaveLoad_CurrentSavegame;
  v71 = 0;
  v10 = v9->unk000[5];
  v70 = 0;
  v65 = v10;
  if ( !v8 )
    v65 = v10;
  if ( sub_45A170() )
  {
    v11 = SaveLoad_CurrentSavegame;
    LODWORD(v39) = 4;
    Src = 0x4B4F4C42;
    SaveLoad_SaveData((int)v11, &Src, v39);
    v12 = SaveLoad_CurrentSavegame;
    LODWORD(v40) = 2;
    v70 = SaveLoad_CurrentSavegame->unk000[5];
    SaveLoad_SaveData((int)v12, &v71, v40);
  }
  LODWORD(v39) = 1;
  SaveLoad_SaveData((int)SaveLoad_CurrentSavegame, this + 0x45, v39);
  LODWORD(v41) = 1;
  SaveLoad_SaveData((int)SaveLoad_CurrentSavegame, (char *)this + 0x115, v41);
  v13 = SaveLoad_CurrentSavegame;
  if ( LOBYTE(SaveLoad_CurrentSavegame[1].createdObjectList.next) >= 0x34u )
  {
    LODWORD(v42) = 1;
    SaveLoad_SaveData((int)v13, this + 0x53, v42);
    LODWORD(v43) = 4;
    SaveLoad_SaveData((int)SaveLoad_CurrentSavegame, this + 0x55, v43);
    v13 = SaveLoad_CurrentSavegame;
  }
  if ( LOBYTE(v13[1].createdObjectList.next) >= 0x4Du )
  {
    LODWORD(v42) = 4;
    SaveLoad_SaveData((int)v13, this + 0x56, v42);
    v13 = SaveLoad_CurrentSavegame;
  }
  if ( (v7 & 0x80000) != 0 )
  {
    v14 = *(this + 0x30);
    v64 = 0;
    if ( v14 )
      v64 = *(_DWORD *)(v14 + 0xC);
    SaveLoad_SaveFormID(v13, (int)&v64, 4u);
    if ( v64 )
    {
      if ( !TESDataHandler_IsFormIDCreated_(v64) )
        (*(void (__thiscall **)(int, const char *))(*(_DWORD *)dword_B34D90 + 0x18))(
          dword_B34D90,
          "Uncreated run once package is being saved!");
      LOBYTE(Src) = *(_BYTE *)(*(this + 0x30) + 0x20);
      if ( (_BYTE)Src == 0x13 )
        (*(void (__thiscall **)(int, const char *))(*(_DWORD *)dword_B34D90 + 0x18))(
          dword_B34D90,
          "Run once package is a Spectator Package, this shouldn't happen.");
      LODWORD(v42) = 1;
      SaveLoad_SaveData((int)SaveLoad_CurrentSavegame, &Src, v42);
      (*(void (__thiscall **)(_DWORD))(*(_DWORD *)*(this + 0x30) + 0xE0))(*(this + 0x30));
      LODWORD(v44) = 4;
      SaveLoad_SaveData((int)SaveLoad_CurrentSavegame, this + 0x33, v44);
    }
    v13 = SaveLoad_CurrentSavegame;
  }
  v15 = *(this + 0x4F);
  v66 = 0;
  if ( v15 )
    v66 = *(_DWORD *)(v15 + 0xC);
  SaveLoad_SaveFormID(v13, (int)&v66, 4u);
  LODWORD(v42) = 4;
  SaveLoad_SaveData((int)SaveLoad_CurrentSavegame, this + 0x38, v42);
  LODWORD(v45) = 1;
  SaveLoad_SaveData((int)SaveLoad_CurrentSavegame, this + 0x60, v45);
  LODWORD(v46) = 0xC;
  SaveLoad_SaveData((int)SaveLoad_CurrentSavegame, this + 0x35, v46);
  LODWORD(v47) = 4;
  SaveLoad_SaveData((int)SaveLoad_CurrentSavegame, this + 0x31, v47);
  LODWORD(v48) = 2;
  SaveLoad_SaveData((int)SaveLoad_CurrentSavegame, this + 0x4E, v48);
  LODWORD(v49) = 1;
  SaveLoad_SaveData((int)SaveLoad_CurrentSavegame, (char *)this + 0x11D, v49);
  LODWORD(v50) = 1;
  SaveLoad_SaveData((int)SaveLoad_CurrentSavegame, this + 0x49, v50);
  v16 = *(this + 0x48);
  v67 = 0;
  if ( v16 )
    v67 = *(_DWORD *)(v16 + 0xC);
  SaveLoad_SaveFormID(SaveLoad_CurrentSavegame, (int)&v67, 4u);
  Src = *((unsigned __int16 *)this + 0x9A);
  v17 = *((_BYTE *)this + 0x136);
  v18 = *(this + 0x4B);
  v74[0] = *(this + 0x4A);
  v19 = (double)Src / dbl_A2FC70;
  LOBYTE(a2) = v17;
  v20 = *(this + 0x4C);
  LODWORD(v51) = 4;
  v74[1] = v18;
  v21 = SaveLoad_CurrentSavegame;
  v74[2] = v20;
  v72 = v19;
  SaveLoad_SaveData((int)v21, &v72, v51);
  LODWORD(v52) = 1;
  SaveLoad_SaveData((int)SaveLoad_CurrentSavegame, &a2, v52);
  LODWORD(v53) = 0xC;
  SaveLoad_SaveData((int)SaveLoad_CurrentSavegame, v74, v53);
  LODWORD(v54) = 1;
  SaveLoad_SaveData((int)SaveLoad_CurrentSavegame, this + 0x47, v54);
  if ( (v7 & 0x2000000) != 0 )
    sub_473C40(v4, (_DWORD *)*(this + 0x5F));
  v22 = (void *)*(this + 0x51);
  FormID = 0;
  if ( v22 )
    FormID = MagicItem_GetFormID(v22);
  SaveLoad_SaveFormID(SaveLoad_CurrentSavegame, (int)&FormID, 4u);
  v23 = (_DWORD *)*(this + 0x5E);
  ParentFormID = 0;
  if ( v23 )
    ParentFormID = MagicTarget_GetParentFormID(v23);
  SaveLoad_SaveFormID(SaveLoad_CurrentSavegame, (int)&ParentFormID, 4u);
  ActiveEffect_Base_SaveAEList(*(this + 0x5D), v73, v60, v61, v62, v63, v64, v65, v66, v67);
  v24 = SaveLoad_CurrentSavegame;
  if ( LOBYTE(SaveLoad_CurrentSavegame[1].createdObjectList.next) >= 0x45u )
  {
    LODWORD(v55) = 1;
    SaveLoad_SaveData((int)v24, this + 0x32, v55);
    v24 = SaveLoad_CurrentSavegame;
  }
  if ( LOBYTE(v24[1].createdObjectList.next) >= 0x49u )
  {
    LODWORD(v55) = 1;
    SaveLoad_SaveData((int)v24, this + 0x5A, v55);
    LODWORD(v56) = 1;
    SaveLoad_SaveData((int)SaveLoad_CurrentSavegame, (char *)this + 0x169, v56);
    v24 = SaveLoad_CurrentSavegame;
  }
  if ( LOBYTE(v24[1].createdObjectList.next) >= 0x65u )
  {
    LODWORD(v55) = 4;
    SaveLoad_SaveData((int)v24, this + 0x2E, v55);
    LODWORD(v57) = 4;
    SaveLoad_SaveData((int)SaveLoad_CurrentSavegame, this + 0x2F, v57);
    v25 = SaveLoad_CurrentSavegame;
    LODWORD(v58) = 2;
    Src = 0;
    v26 = (_WORD *)v25->unk000[5];
    SaveLoad_SaveData((int)v25, &Src, v58);
    v27 = this + 0x2A;
    if ( this != (_DWORD *)0xFFFFFF58 )
    {
      do
      {
        if ( !v27[1] && !*v27 )
          break;
        v28 = *v27;
        v8 = *v27 == 0;
        v64 = 0;
        if ( !v8 )
          v64 = *(_DWORD *)(v28 + 0xC);
        SaveLoad_SaveFormID(SaveLoad_CurrentSavegame, (int)&v64, 4u);
        ++Src;
        v27 = (int *)v27[1];
      }
      while ( v27 );
    }
    *v26 = Src;
    v24 = SaveLoad_CurrentSavegame;
  }
  if ( LOBYTE(v24[1].createdObjectList.next) >= 0x6Du )
  {
    LODWORD(v55) = 1;
    SaveLoad_SaveData((int)v24, (char *)this + 0x16B, v55);
    v24 = SaveLoad_CurrentSavegame;
  }
  if ( LOBYTE(v24[1].createdObjectList.next) >= 0x71u )
  {
    v29 = (void *)*(this + 0x52);
    Src = 0;
    if ( v29 )
    {
      v30 = MagicItem_GetFormID(v29);
      v24 = SaveLoad_CurrentSavegame;
      Src = v30;
    }
    SaveLoad_SaveFormID(v24, (int)&Src, 4u);
    v24 = SaveLoad_CurrentSavegame;
  }
  if ( Global_DebugSaveBuffer )
  {
    v31 = (UInt32 *)v24[1].unk030[1];
    v32 = v24->unk000[5];
    if ( v31 )
    {
      v33 = TESForm_LookupByFormID(*v31);
      v34 = (const char *)((int (__thiscall *)(TESForm *, _DWORD, int, const char *))v33->vtbl->GetEditorName)(
                            v33,
                            *(UInt32 *)((char *)v31 + 5),
                            0x1A47,
                            ".\\AI\\MiddleHighProcess.cpp");
      sub_40FEC0(
        "SaveGame(): %-5i for form %08X %s with flags %08X ending at line %i in file %s",
        v32 - v65,
        *v31,
        v34,
        v37,
        v38,
        v59);
    }
    else
    {
      sub_40FEC0("SaveGame(): %-5i ending at line %i in file %s", v32 - v65, 0x1A47, ".\\AI\\MiddleHighProcess.cpp");
    }
  }
  if ( sub_45A170() )
  {
    v35 = (_WORD *)v70;
    v36 = SaveLoad_CurrentSavegame->unk000[5];
    if ( v36 > v70 + 0xFFFF )
      PrintError(
        "Save Game Block in file %s on line %i is greater than maximum short size",
        ".\\AI\\MiddleHighProcess.cpp",
        0x1A47);
    *v35 = v36 - (_WORD)v35;
  }
}
