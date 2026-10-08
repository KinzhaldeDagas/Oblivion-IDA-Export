// Verified 2026-10-04: LowProcess load role from Oblivion process vtable slot +0x3F8, parent call chain and matching serialization/reset behavior. ECX receiver and RET12 establish stack arity; owner is MobileObject (dispatch 65A835 for Revert). Probable: currentFlags semantic name follows matching Fallout and forwarded extra load word; broader policy unverified.
// Verified paired low-process load, plus legacy branches: version<36 reads/converts a legacy4-byte date representation; version<33 with mask200000 skips a UInt16-counted8-byte legacy payload. Follow(+2C) and unk030(+30) temporarily hold loaded FormIDs until InitLoadGame resolves them. FormID-helper RET8 stack deltas corrected at6476C0/647710/647729.
void __thiscall LowProcess_LoadGame(
        LowProcess *self,
        ProcessSaveChangeMask changeMask,
        unsigned int currentFlags,
        MobileObject *owner)
{
  ProcessSaveChangeMask v4; // edi
  unsigned __int8 *bufferCursor; // ebp
  UInt32 *currentlyLoadingFormHeader; // edi
  TESForm *v8; // eax
  const char *v9; // eax
  TESSaveLoadGame_SerializationView *v10; // ecx
  double v11; // st7
  double v12; // rt0
  double v13; // st6
  double v14; // st5
  unsigned int v15; // ebx
  TESSaveLoadGame_SerializationView *v16; // ecx
  TESForm *v17; // eax
  TESSaveLoadGame_SerializationView *v18; // ecx
  TESSaveLoadGame_SerializationView *v19; // ecx
  UInt32 *v20; // edi
  unsigned __int8 *v21; // esi
  TESForm *v22; // ecx
  unsigned __int8 *v23; // eax
  const char *v24; // eax
  const char *v25; // eax
  unsigned __int8 *v26; // edx
  int v27; // [esp-8h] [ebp-28h]
  int v28; // [esp-8h] [ebp-28h]
  int v29; // [esp-8h] [ebp-28h]
  int v30; // [esp-4h] [ebp-24h]
  int v31; // [esp-4h] [ebp-24h]
  int v32; // [esp-4h] [ebp-24h]
  int Dst; // [esp+Ch] [ebp-14h] BYREF
  unsigned int v34[2]; // [esp+10h] [ebp-10h]
  unsigned int v35; // [esp+18h] [ebp-8h] BYREF
  int a1; // [esp+1Ch] [ebp-4h] BYREF

  v4 = changeMask; /*0x64745a*/
  BaseProcess_LoadGame(self, changeMask, currentFlags, owner); /*0x647469*/
  bufferCursor = 0; /*0x647474*/
  owner = 0; /*0x647476*/
  if ( TESSaveLoadGame_UseSaveGameBlocks() )
  {
    SaveLoad_LoadData(g_TESSaveLoadGame, &Dst, 4u); /*0x647494*/
    if ( Dst != 0x4B4F4C42 )
    {
      currentlyLoadingFormHeader = (UInt32 *)g_TESSaveLoadGame->currentlyLoadingFormHeader; /*0x6474a8*/
      if ( currentlyLoadingFormHeader )
      {
        v8 = TESForm_LookupByFormID(*currentlyLoadingFormHeader); /*0x6474b5*/
        v9 = (const char *)((int (__thiscall *)(TESForm *, _DWORD, _DWORD))v8->vtbl->GetEditorName)( /*0x6474d0*/
                             v8,
                             *((unsigned __int8 *)currentlyLoadingFormHeader + 9),
                             *(UInt32 *)((char *)currentlyLoadingFormHeader + 5));
        PrintError(
          "LoadGame Buffer error: Block Header is incorrect in file %s on line %i.  Currently loading form is %08X %s wit"
          "h version %i and flags %08X",
          ".\\AI\\LowProcess.cpp",
          0xF38,
          *currentlyLoadingFormHeader,
          v9,
          v27,
          v30);
      }
      else
      {
        PrintError(
          "LoadGame Buffer error: Block Header is incorrect in file %s on line %i.  Current version is %i",
          ".\\AI\\LowProcess.cpp",
          0xF38,
          g_TESSaveLoadGame->currentVersion);
      }
    }
    bufferCursor = g_TESSaveLoadGame->bufferCursor; /*0x647511*/
    SaveLoad_LoadData(g_TESSaveLoadGame, &owner, 2u); /*0x64751b*/
    v4 = changeMask; /*0x647520*/
  }
  SaveLoad_LoadData(g_TESSaveLoadGame, &self->curHour, 4u); /*0x647531*/
  v10 = g_TESSaveLoadGame; /*0x647536*/
  if ( g_TESSaveLoadGame->currentVersion < 0x36u /*0x647557*/
    || (SaveLoad_LoadData(v10, &self->curPackedDate, 4u),
        v10 = g_TESSaveLoadGame,
        g_TESSaveLoadGame->currentVersion < 0x36u) )
  {
    SaveLoad_LoadData(v10, &currentFlags, 4u); /*0x647564*/
    v11 = *(float *)&currentFlags; /*0x647569*/
    unknown_libname_14(dbl_A2FA98, *(float *)&currentFlags); /*0x647573*/
    *(float *)&changeMask = v11; /*0x647578*/
    v12 = fCostant_100; /*0x647591*/
    *(_QWORD *)v34 = (__int64)(*(float *)&changeMask / v12); /*0x6475a0*/
    v13 = *(float *)&currentFlags; /*0x6475ac*/
    v14 = *(float *)&currentFlags / dbl_A2FA98; /*0x6475b6*/
    currentFlags = (unsigned __int16)changeMask | 0xC00; /*0x6475c6*/
    *(_QWORD *)v34 = (__int64)v14; /*0x6475ce*/
    v15 = ((0x10 * (unsigned int)(__int64)v14) | (unsigned int)(__int64)(*(float *)&changeMask / v12)) << 9; /*0x6475df*/
    unknown_libname_14(v12, v13); /*0x6475e4*/
    *(float *)&changeMask = v13; /*0x6475e9*/
    currentFlags = (unsigned __int16)changeMask | 0xC00; /*0x6475ff*/
    *(_QWORD *)v34 = (__int64)*(float *)&changeMask; /*0x647607*/
    self->curPackedDate = v34[0] | v15; /*0x647611*/
    v10 = g_TESSaveLoadGame; /*0x647618*/
  }
  SaveLoad_LoadData(v10, &self->unk01C, 1u); /*0x647624*/
  SaveLoad_LoadData(g_TESSaveLoadGame, &self->procedureCompleted, 1u); /*0x647635*/
  SaveLoad_LoadData(g_TESSaveLoadGame, &self->unk084, 1u); /*0x647649*/
  v16 = g_TESSaveLoadGame; /*0x64764e*/
  if ( g_TESSaveLoadGame->currentVersion >= 0x34u ) /*0x647659*/
  {
    SaveLoad_LoadData(v16, &self->isAlerted, 1u); /*0x647661*/
    v16 = g_TESSaveLoadGame; /*0x647666*/
  }
  if ( v16->currentVersion >= 0x37u ) /*0x647670*/
  {
    SaveLoad_LoadData(v16, &self->unk020, 1u); /*0x647678*/
    v16 = g_TESSaveLoadGame; /*0x64767d*/
  }
  if ( v16->currentVersion >= 0x4Bu ) /*0x647687*/
  {
    SaveLoad_LoadData(v16, &self->unk088, 4u); /*0x647692*/
    v16 = g_TESSaveLoadGame; /*0x647697*/
  }
  if ( v16->currentVersion >= 0x4Fu ) /*0x6476a1*/
  {
    SaveLoad_LoadData(v16, &self->unk028, 4u); /*0x6476a9*/
    SaveLoad_LoadFormID(g_TESSaveLoadGame, (unsigned int *)&changeMask, 4u); /*0x6476bb*/
    v17 = TESForm_LookupByFormID(changeMask); /*0x6476d3*/
    self->usedItem = (TESForm *)OblivionDynamicCast( /*0x6476e1*/
                                  v17,
                                  0,
                                  (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                                  (struct TypeDescriptor *)&TESBoundObject `RTTI Type Descriptor',
                                  0);
    v16 = g_TESSaveLoadGame; /*0x6476e4*/
  }
  if ( v16->currentVersion >= 0x56u ) /*0x6476f1*/
  {
    SaveLoad_LoadData(v16, &self->unk038, 4u); /*0x6476f9*/
    v16 = g_TESSaveLoadGame; /*0x6476fe*/
  }
  SaveLoad_LoadFormID(v16, &v35, 4u); /*0x64770b*/
  self->follow = (Actor *)v35; /*0x64771a*/
  SaveLoad_LoadFormID(g_TESSaveLoadGame, (unsigned int *)&a1, 4u); /*0x647724*/
  self->unk030 = (TESObjectREFR *)a1; /*0x647733*/
  if ( (v4 & 0x400000) != 0 ) /*0x647736*/
    AVCollection_Load(&self->avDamageModifiers); /*0x64773b*/
  v18 = g_TESSaveLoadGame; /*0x647740*/
  if ( g_TESSaveLoadGame->currentVersion < 0x33u && (v4 & 0x200000) != 0 ) /*0x647752*/
  {
    SaveLoad_LoadData(v18, &changeMask, 2u); /*0x64775b*/
    v18 = g_TESSaveLoadGame; /*0x647768*/
    if ( (_WORD)changeMask ) /*0x64776e*/
    {
      SaveLoad_AdvanceBufferOffset(v18, 8 * (unsigned __int16)changeMask); /*0x64777a*/
      v18 = g_TESSaveLoadGame; /*0x64777f*/
    }
  }
  if ( v18->currentVersion >= 0x74u ) /*0x647789*/
  {
    SaveLoad_LoadData(v18, &self->unk08C, 4u); /*0x647794*/
    v18 = g_TESSaveLoadGame; /*0x647799*/
  }
  if ( v18->currentVersion >= 0x76u ) /*0x6477a3*/
    SaveLoad_LoadData(v18, &self->unk01E, 1u); /*0x6477ab*/
  if ( TESSaveLoadGame_UseSaveGameBlocks() ) /*0x6477b6*/
  {
    v19 = g_TESSaveLoadGame; /*0x6477c3*/
    v20 = (UInt32 *)g_TESSaveLoadGame->currentlyLoadingFormHeader; /*0x6477c9*/
    v21 = g_TESSaveLoadGame->bufferCursor; /*0x6477d1*/
    if ( v20 ) /*0x6477d4*/
    {
      v22 = TESForm_LookupByFormID(*v20); /*0x6477e7*/
      v23 = &bufferCursor[(unsigned __int16)owner]; /*0x6477e9*/
      if ( v21 <= v23 ) /*0x6477f1*/
      {
        if ( v21 < v23 ) /*0x647834*/
        {
          v25 = (const char *)((int (__thiscall *)(TESForm *, _DWORD, _DWORD))v22->vtbl->GetEditorName)( /*0x64784b*/
                                v22,
                                *((unsigned __int8 *)v20 + 9),
                                *(UInt32 *)((char *)v20 + 5));
          PrintError( /*0x64786a*/
            "LoadGame Buffer underrun of %i bytes in file %s on line %i.  Currently loading form is %08X %s with version "
            "%i and flags %08X",
            &bufferCursor[(unsigned __int16)owner - (_DWORD)v21],
            ".\\AI\\LowProcess.cpp",
            0xF8F,
            *v20,
            v25,
            v29,
            v32);
        }
      }
      else
      {
        v24 = (const char *)((int (__thiscall *)(TESForm *, _DWORD, _DWORD))v22->vtbl->GetEditorName)( /*0x647804*/
                              v22,
                              *((unsigned __int8 *)v20 + 9),
                              *(UInt32 *)((char *)v20 + 5));
        PrintError( /*0x647823*/
          "LoadGame Buffer overrun of %i bytes in file %s on line %i.  Currently loading form is %08X %s with version %i and flags %08X",
          &v21[-(unsigned __int16)owner] - bufferCursor,
          ".\\AI\\LowProcess.cpp",
          0xF8F,
          *v20,
          v24,
          v28,
          v31);
      }
    }
    else
    {
      v26 = &bufferCursor[(unsigned __int16)owner]; /*0x647880*/
      if ( v21 <= v26 ) /*0x647885*/
      {
        if ( v21 < v26 ) /*0x6478b1*/
          PrintError( /*0x6478cc*/
            "LoadGame Buffer underrun of %i bytes in file %s on line %i.  Current version is %i",
            &bufferCursor[(unsigned __int16)owner - (_DWORD)v21],
            ".\\AI\\LowProcess.cpp",
            0xF8F,
            v19->currentVersion);
      }
      else
      {
        PrintError( /*0x6478a0*/
          "LoadGame Buffer overrun of %i bytes in file %s on line %i.  Current version is %i",
          &v21[-(unsigned __int16)owner] - bufferCursor,
          ".\\AI\\LowProcess.cpp",
          0xF8F,
          v19->currentVersion);
      }
    }
  }
}
