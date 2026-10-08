void __thiscall MiddleHighProc_Save__(_DWORD *this, ProcessSaveChangeMask changeMask, int Src)
{
  MobileObject *v3; // edi
  void *v5; // eax
  ProcessSaveChangeMask v6; // ebp
  bool v7; // zf
  TESSaveLoadGame_SerializationView *v8; // ecx
  int bufferCursor; // eax
  TESSaveLoadGame_SerializationView *v10; // ecx
  TESSaveLoadGame_SerializationView *v11; // ecx
  TESSaveLoadGame_SerializationView *v12; // ecx
  int v13; // eax
  int v14; // eax
  int v15; // eax
  char v16; // dl
  int v17; // ecx
  double v18; // st7
  int v19; // edx
  TESSaveLoadGame_SerializationView *v20; // ecx
  void *v21; // ecx
  _DWORD *v22; // ecx
  TESSaveLoadGame_SerializationView *v23; // ecx
  TESSaveLoadGame_SerializationView *v24; // ecx
  unsigned __int8 *v25; // ebp
  int *v26; // edi
  int v27; // eax
  void *v28; // esi
  int v29; // eax
  UInt32 *currentlySavingFormHeader; // edi
  unsigned __int8 *v31; // esi
  TESForm *v32; // eax
  const char *v33; // eax
  unsigned __int8 *v34; // edi
  unsigned __int8 *v35; // esi
  int v36; // [esp-Ch] [ebp-50h]
  int v37; // [esp-8h] [ebp-4Ch]
  const char *v38; // [esp-4h] [ebp-48h]
  int v39; // [esp+0h] [ebp-44h]
  int v40; // [esp+4h] [ebp-40h]
  int v41; // [esp+8h] [ebp-3Ch]
  int v42; // [esp+Ch] [ebp-38h]
  unsigned int v43; // [esp+10h] [ebp-34h] BYREF
  int v44; // [esp+14h] [ebp-30h]
  unsigned int v45; // [esp+18h] [ebp-2Ch] BYREF
  unsigned int v46; // [esp+1Ch] [ebp-28h] BYREF
  unsigned int FormID; // [esp+20h] [ebp-24h] BYREF
  unsigned int ParentFormID; // [esp+24h] [ebp-20h] BYREF
  unsigned __int8 *v49; // [esp+28h] [ebp-1Ch]
  int source; // [esp+2Ch] [ebp-18h] BYREF
  float v51; // [esp+30h] [ebp-14h] BYREF
  int v52; // [esp+34h] [ebp-10h]
  _DWORD v53[3]; // [esp+38h] [ebp-Ch] BYREF

  v3 = (MobileObject *)Src; /*0x651147*/
  v5 = OblivionDynamicCast( /*0x65115c*/
         (void *)Src,
         0,
         (struct _s_RTTICompleteObjectLocator *)&MobileObject `RTTI Type Descriptor',
         &Actor `RTTI Type Descriptor',
         0);
  v6 = changeMask; /*0x651161*/
  v52 = (int)v5; /*0x65116c*/
  MiddleLowProcess_SaveGame((MiddleLowProcess *)this, changeMask, v3); /*0x651170*/
  v7 = Global_DebugSaveBuffer == 0; /*0x651175*/
  v8 = g_TESSaveLoadGame; /*0x65117b*/
  source = 0; /*0x651181*/
  bufferCursor = (int)v8->bufferCursor; /*0x651185*/
  v49 = 0; /*0x651188*/
  v44 = bufferCursor; /*0x65118c*/
  if ( !v7 ) /*0x651190*/
    v44 = bufferCursor; /*0x651192*/
  if ( TESSaveLoadGame_UseSaveGameBlocks() ) /*0x651196*/
  {
    v10 = g_TESSaveLoadGame; /*0x65119f*/
    Src = 0x4B4F4C42; /*0x6511ac*/
    SaveLoad_SaveData(v10, &Src, 4u); /*0x6511b4*/
    v11 = g_TESSaveLoadGame; /*0x6511b9*/
    v49 = g_TESSaveLoadGame->bufferCursor; /*0x6511c9*/
    SaveLoad_SaveData(v11, &source, 2u); /*0x6511cd*/
  }
  SaveLoad_SaveData(g_TESSaveLoadGame, this + 0x45, 1u); /*0x6511e1*/
  SaveLoad_SaveData(g_TESSaveLoadGame, (char *)this + 0x115, 1u); /*0x6511f5*/
  v12 = g_TESSaveLoadGame; /*0x6511fa*/
  if ( g_TESSaveLoadGame->currentVersion >= 0x34u ) /*0x651204*/
  {
    SaveLoad_SaveData(v12, this + 0x53, 1u); /*0x65120f*/
    SaveLoad_SaveData(g_TESSaveLoadGame, this + 0x55, 4u); /*0x651223*/
    v12 = g_TESSaveLoadGame; /*0x651228*/
  }
  if ( v12->currentVersion >= 0x4Du ) /*0x651232*/
  {
    SaveLoad_SaveData(v12, this + 0x56, 4u); /*0x65123d*/
    v12 = g_TESSaveLoadGame; /*0x651242*/
  }
  if ( (v6 & 0x80000) != 0 ) /*0x65124e*/
  {
    v13 = *(this + 0x30); /*0x651254*/
    v43 = 0; /*0x65125c*/
    if ( v13 ) /*0x651260*/
      v43 = *(_DWORD *)(v13 + 0xC); /*0x651265*/
    SaveLoad_SaveFormID(v12, &v43, 4u); /*0x651270*/
    if ( v43 ) /*0x65127b*/
    {
      if ( !TESDataHandler_IsFormIDCreated_(v43) ) /*0x651284*/
        (*(void (__thiscall **)(_DWORD, const char *))(**(_DWORD **)&MEMORY[0xB33E90][0xF00] + 0x18))( /*0x65129d*/
          *(_DWORD *)&MEMORY[0xB33E90][0xF00],
          "Uncreated run once package is being saved!");
      LOBYTE(Src) = *(_BYTE *)(*(this + 0x30) + 0x20);// RadiantAI 2026-07-12: warning checks generic MiddleHighProcess run-once package slot for type 0x13. SpectatorPackage itself is live and separately constructed/serialized; warning documents a storage invariant, not dead code. /*0x6512aa*/
      if ( (_BYTE)Src == 0x13 ) /*0x6512ae*/
        (*(void (__thiscall **)(_DWORD, const char *))(**(_DWORD **)&MEMORY[0xB33E90][0xF00] + 0x18))( /*0x6512c0*/
          *(_DWORD *)&MEMORY[0xB33E90][0xF00],
          "Run once package is a Spectator Package, this shouldn't happen.");
      SaveLoad_SaveData(g_TESSaveLoadGame, &Src, 1u); /*0x6512cf*/
      (*(void (__thiscall **)(_DWORD))(*(_DWORD *)*(this + 0x30) + 0xE0))(*(this + 0x30)); /*0x6512e2*/
      SaveLoad_SaveData(g_TESSaveLoadGame, this + 0x33, 4u); /*0x6512f3*/
    }
    v12 = g_TESSaveLoadGame; /*0x6512f8*/
  }
  v14 = *(this + 0x4F); /*0x6512fe*/
  v45 = 0; /*0x651306*/
  if ( v14 ) /*0x65130a*/
    v45 = *(_DWORD *)(v14 + 0xC); /*0x65130f*/
  SaveLoad_SaveFormID(v12, &v45, 4u); /*0x65131a*/
  SaveLoad_SaveData(g_TESSaveLoadGame, this + 0x38, 4u); /*0x65132e*/
  SaveLoad_SaveData(g_TESSaveLoadGame, this + 0x60, 1u); /*0x651342*/
  SaveLoad_SaveData(g_TESSaveLoadGame, this + 0x35, 0xCu); /*0x651356*/
  SaveLoad_SaveData(g_TESSaveLoadGame, this + 0x31, 4u); /*0x65136a*/
  SaveLoad_SaveData(g_TESSaveLoadGame, this + 0x4E, 2u); /*0x65137e*/
  SaveLoad_SaveData(g_TESSaveLoadGame, (char *)this + 0x11D, 1u); /*0x651392*/
  SaveLoad_SaveData(g_TESSaveLoadGame, this + 0x49, 1u); /*0x6513a6*/
  v15 = *(this + 0x48); /*0x6513ab*/
  v46 = 0; /*0x6513b3*/
  if ( v15 ) /*0x6513b7*/
    v46 = *(_DWORD *)(v15 + 0xC); /*0x6513bc*/
  SaveLoad_SaveFormID(g_TESSaveLoadGame, &v46, 4u); /*0x6513cd*/
  Src = *((unsigned __int16 *)this + 0x9A); /*0x6513d9*/
  v16 = *((_BYTE *)this + 0x136); /*0x6513e7*/
  v17 = *(this + 0x4B); /*0x6513ed*/
  v53[0] = *(this + 0x4A); /*0x6513f3*/
  v18 = (double)Src / dbl_A2FC70; /*0x6513f7*/
  LOBYTE(changeMask) = v16; /*0x6513fd*/
  v19 = *(this + 0x4C); /*0x651401*/
  v53[1] = v17; /*0x65140d*/
  v20 = g_TESSaveLoadGame; /*0x651411*/
  v53[2] = v19; /*0x651418*/
  v51 = v18; /*0x65141c*/
  SaveLoad_SaveData(v20, &v51, 4u); /*0x651420*/
  SaveLoad_SaveData(g_TESSaveLoadGame, &changeMask, 1u); /*0x651432*/
  SaveLoad_SaveData(g_TESSaveLoadGame, v53, 0xCu); /*0x651444*/
  SaveLoad_SaveData(g_TESSaveLoadGame, this + 0x47, 1u); /*0x651458*/
  if ( (v6 & 0x2000000) != 0 ) /*0x651463*/
    Actor_SaveAnimationState((int)v3, (_DWORD *)*(this + 0x5F)); /*0x65146d*/
  v21 = (void *)*(this + 0x51); /*0x651475*/
  FormID = 0; /*0x65147d*/
  if ( v21 ) /*0x651481*/
    FormID = MagicItem_GetFormID(v21); /*0x651488*/
  SaveLoad_SaveFormID(g_TESSaveLoadGame, &FormID, 4u); /*0x651499*/
  v22 = (_DWORD *)*(this + 0x5E); /*0x65149e*/
  ParentFormID = 0; /*0x6514a6*/
  if ( v22 ) /*0x6514aa*/
    ParentFormID = MagicTarget_GetParentFormID(v22); /*0x6514b1*/
  SaveLoad_SaveFormID(g_TESSaveLoadGame, &ParentFormID, 4u); /*0x6514c2*/
  ActiveEffect_Base_SaveAEList(*(this + 0x5D), v52, v39, v40, v41, v42, v43, v44, v45, v46); /*0x6514d3*/
  v23 = g_TESSaveLoadGame; /*0x6514d8*/
  if ( g_TESSaveLoadGame->currentVersion >= 0x45u ) /*0x6514e5*/
  {
    SaveLoad_SaveData(v23, this + 0x32, 1u); /*0x6514f0*/
    v23 = g_TESSaveLoadGame; /*0x6514f5*/
  }
  if ( v23->currentVersion >= 0x49u ) /*0x6514ff*/
  {
    SaveLoad_SaveData(v23, this + 0x5A, 1u); /*0x65150a*/
    SaveLoad_SaveData(g_TESSaveLoadGame, (char *)this + 0x169, 1u); /*0x65151e*/
    v23 = g_TESSaveLoadGame; /*0x651523*/
  }
  if ( v23->currentVersion >= 0x65u ) /*0x65152d*/
  {
    SaveLoad_SaveData(v23, this + 0x2E, 4u); /*0x65153c*/
    SaveLoad_SaveData(g_TESSaveLoadGame, this + 0x2F, 4u); /*0x651550*/
    v24 = g_TESSaveLoadGame; /*0x651555*/
    Src = 0; /*0x651561*/
    v25 = v24->bufferCursor; /*0x651565*/
    SaveLoad_SaveData(v24, &Src, 2u); /*0x651569*/
    v26 = this + 0x2A; /*0x65156e*/
    if ( this != (_DWORD *)0xFFFFFF58 ) /*0x651576*/
    {
      do /*0x6515ae*/
      {
        if ( !v26[1] && !*v26 ) /*0x65157d*/
          break; /*0x65157f*/
        v27 = *v26; /*0x651581*/
        v7 = *v26 == 0; /*0x651583*/
        v43 = 0; /*0x651585*/
        if ( !v7 ) /*0x651589*/
          v43 = *(_DWORD *)(v27 + 0xC); /*0x65158e*/
        SaveLoad_SaveFormID(g_TESSaveLoadGame, &v43, 4u); /*0x65159f*/
        ++Src; /*0x6515a4*/
        v26 = (int *)v26[1]; /*0x6515a9*/
      }
      while ( v26 ); /*0x6515ae*/
    }
    *(_WORD *)v25 = Src; /*0x6515b5*/
    v23 = g_TESSaveLoadGame; /*0x6515b9*/
  }
  if ( v23->currentVersion >= 0x6Du ) /*0x6515c3*/
  {
    SaveLoad_SaveData(v23, (char *)this + 0x16B, 1u); /*0x6515ce*/
    v23 = g_TESSaveLoadGame; /*0x6515d3*/
  }
  if ( v23->currentVersion >= 0x71u ) /*0x6515dd*/
  {
    v28 = (void *)*(this + 0x52); /*0x6515df*/
    Src = 0; /*0x6515e7*/
    if ( v28 ) /*0x6515eb*/
    {
      v29 = MagicItem_GetFormID(v28); /*0x6515ef*/
      v23 = g_TESSaveLoadGame; /*0x6515f4*/
      Src = v29; /*0x6515fa*/
    }
    SaveLoad_SaveFormID(v23, (const unsigned int *)&Src, 4u); /*0x651605*/
    v23 = g_TESSaveLoadGame; /*0x65160a*/
  }
  if ( Global_DebugSaveBuffer )
  {
    currentlySavingFormHeader = (UInt32 *)v23->currentlySavingFormHeader; /*0x651618*/
    v31 = v23->bufferCursor; /*0x651620*/
    if ( currentlySavingFormHeader )
    {
      v32 = TESForm_LookupByFormID(*currentlySavingFormHeader); /*0x651628*/
      v33 = (const char *)((int (__thiscall *)(TESForm *, _DWORD, int, const char *))v32->vtbl->GetEditorName)( /*0x651648*/
                            v32,
                            *(UInt32 *)((char *)currentlySavingFormHeader + 5),
                            0x1A47,
                            ".\\AI\\MiddleHighProcess.cpp");
      sub_40FEC0(
        "SaveGame(): %-5i for form %08X %s with flags %08X ending at line %i in file %s",
        &v31[-v44],
        *currentlySavingFormHeader,
        v33,
        v36,
        v37,
        v38);
    }
    else
    {
      sub_40FEC0("SaveGame(): %-5i ending at line %i in file %s", &v31[-v44], 0x1A47, ".\\AI\\MiddleHighProcess.cpp");
    }
  }
  if ( TESSaveLoadGame_UseSaveGameBlocks() ) /*0x651684*/
  {
    v34 = v49; /*0x651693*/
    v35 = g_TESSaveLoadGame->bufferCursor; /*0x651697*/
    if ( v35 > v49 + 0xFFFF ) /*0x6516a2*/
      PrintError( /*0x6516b3*/
        "Save Game Block in file %s on line %i is greater than maximum short size",
        ".\\AI\\MiddleHighProcess.cpp",
        0x1A47);
    *(_WORD *)v34 = (_WORD)v35 - (_WORD)v34; /*0x6516bd*/
  }
}
