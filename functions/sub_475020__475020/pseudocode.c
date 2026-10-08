// Loads one serialized AnimIdle record, resolves its form, reconstructs loader/sequence state, and delegates timing restoration to the native sequence load helper.
Ni2DBuffer **__usercall AnimIdle_LoadState@<eax>(double st5_0@<st2>, double a2@<st1>, float a3)
{
  Ni2DBuffer **v3; // ebx
  UInt32 v4; // ebp
  UInt32 *v5; // esi
  TESForm *v6; // eax
  const char *v7; // eax
  char LoadFormID; // al
  TESForm *v9; // eax
  void *v10; // esi
  IOTask *v11; // eax
  Ni2DBuffer **v12; // eax
  const char *v13; // eax
  TESSaveLoad *v14; // ecx
  UInt32 *v15; // edi
  UInt32 v16; // esi
  TESForm *v17; // ecx
  UInt32 v18; // eax
  const char *v19; // eax
  const char *v20; // eax
  UInt32 v21; // edx
  int v23; // [esp+0h] [ebp-44h]
  int v24; // [esp+0h] [ebp-44h]
  size_t v25; // [esp+4h] [ebp-40h]
  int v26; // [esp+4h] [ebp-40h]
  int v27; // [esp+4h] [ebp-40h]
  int v28; // [esp+8h] [ebp-3Ch]
  size_t v29; // [esp+Ch] [ebp-38h]
  size_t v30; // [esp+Ch] [ebp-38h]
  int v31; // [esp+Ch] [ebp-38h]
  int v32; // [esp+14h] [ebp-30h]
  int v33; // [esp+18h] [ebp-2Ch]
  int v34; // [esp+1Ch] [ebp-28h] BYREF
  unsigned __int16 v35; // [esp+20h] [ebp-24h]
  char v36[4]; // [esp+24h] [ebp-20h]
  int v37; // [esp+28h] [ebp-1Ch] BYREF
  char ArgList[4]; // [esp+2Ch] [ebp-18h] BYREF
  int Dst; // [esp+30h] [ebp-14h] BYREF
  unsigned int v40; // [esp+38h] [ebp-Ch]
  TESObjectREFR *v41; // [esp+40h] [ebp-4h]
  AnimSequenceSingle *retaddr; // [esp+44h] [ebp+0h]

  v3 = 0; /*0x47504d*/
  v37 = 0; /*0x47504f*/
  v4 = 0; /*0x475053*/
  if ( TESSaveLoadGame_UseSaveGameBlocks() )
  {
    LODWORD(v29) = 4; /*0x475068*/
    SaveLoad_LoadData((int)g_TESSaveLoadGame, &Dst, v29); /*0x47506f*/
    if ( Dst != 0x4B4F4C42 )
    {
      v5 = (UInt32 *)g_TESSaveLoadGame[1].unk030[0]; /*0x475083*/
      if ( v5 )
      {
        v6 = TESForm_LookupByFormID(*v5); /*0x475090*/
        v7 = (const char *)((int (__thiscall *)(TESForm *, _DWORD, _DWORD))v6->vtbl->GetEditorName)( /*0x4750ab*/
                             v6,
                             *((unsigned __int8 *)v5 + 9),
                             *(UInt32 *)((char *)v5 + 5));
        PrintError(
          "LoadGame Buffer error: Block Header is incorrect in file %s on line %i.  Currently loading form is %08X %s wit"
          "h version %i and flags %08X",
          "..\\TES Shared\\Animation.cpp",
          0xF7E,
          *v5,
          v7,
          v28,
          v31);
      }
      else
      {
        PrintError(
          "LoadGame Buffer error: Block Header is incorrect in file %s on line %i.  Current version is %i",
          "..\\TES Shared\\Animation.cpp",
          0xF7E,
          LOBYTE(g_TESSaveLoadGame[1].createdObjectList.next));
      }
    }
    v4 = g_TESSaveLoadGame->unk000[5]; /*0x4750ec*/
    LODWORD(v30) = 2; /*0x4750ef*/
    SaveLoad_LoadData((int)g_TESSaveLoadGame, &v37, v30); /*0x4750f6*/
  }
  LODWORD(v29) = 4; /*0x4750fb*/
  LoadFormID = SaveLoad_LoadFormID(ArgList, v29, v32, v33, v34); /*0x475108*/
  if ( *(_DWORD *)v36 || LoadFormID ) /*0x475115*/
  {
    LODWORD(v25) = 2; /*0x475121*/
    SaveLoad_LoadData((int)g_TESSaveLoadGame, &v34, v25); /*0x475128*/
    if ( *(_DWORD *)v36 /*0x475157*/
      && (v9 = TESForm_LookupByFormID(*(UInt32 *)v36),
          (v10 = OblivionDynamicCast(
                   v9,
                   0,
                   (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                   &TESIdleForm `RTTI Type Descriptor',
                   0)) != 0) )
    {
      v11 = (IOTask *)FormHeapAlloc(0x2Cu); /*0x47515b*/
      *(_DWORD *)ArgList = v11; /*0x475163*/
      v40 = 0; /*0x475169*/
      if ( v11 ) /*0x47516d*/
        v12 = (Ni2DBuffer **)AnimIdle_InitAndLoadKF(v11, (int)v10, 4u, (BSTask *)1, v41, 1); /*0x47517d*/
      else
        v12 = 0; /*0x475184*/
      v40 = 0xFFFFFFFF; /*0x475195*/
      v3 = v12; /*0x47519d*/
      AnimIdle_RestoreLoadedKFState(v12, st5_0, a2, a3, a3, retaddr); /*0x47519f*/
    }
    else
    {
      v13 = v41->vtbl->super.GetEditorName(v41); /*0x4751b2*/
      PrintError("Could not find IdleForm %08X when loading actor %s", *(_DWORD *)v36, v13); /*0x4751bf*/
      SaveLoad_AdvanceBufferOffset(g_TESSaveLoadGame, (unsigned __int16)v34); /*0x4751d3*/
    }
  }
  if ( TESSaveLoadGame_UseSaveGameBlocks() ) /*0x4751de*/
  {
    v14 = g_TESSaveLoadGame; /*0x4751eb*/
    v15 = (UInt32 *)g_TESSaveLoadGame[1].unk030[0]; /*0x4751f1*/
    v16 = g_TESSaveLoadGame->unk000[5]; /*0x4751f9*/
    if ( v15 ) /*0x4751fc*/
    {
      v17 = TESForm_LookupByFormID(*v15); /*0x47520a*/
      v18 = v4 + v35; /*0x475211*/
      if ( v16 <= v18 ) /*0x475218*/
      {
        if ( v16 < v18 ) /*0x475257*/
        {
          v20 = (const char *)((int (__thiscall *)(TESForm *, _DWORD, _DWORD))v17->vtbl->GetEditorName)( /*0x47526e*/
                                v17,
                                *((unsigned __int8 *)v15 + 9),
                                *(UInt32 *)((char *)v15 + 5));
          PrintError( /*0x47528d*/
            "LoadGame Buffer underrun of %i bytes in file %s on line %i.  Currently loading form is %08X %s with version "
            "%i and flags %08X",
            v4 + v35 - v16,
            "..\\TES Shared\\Animation.cpp",
            0xF99,
            *v15,
            v20,
            v24,
            v27);
        }
      }
      else
      {
        v19 = (const char *)((int (__thiscall *)(TESForm *, _DWORD, _DWORD))v17->vtbl->GetEditorName)( /*0x47522b*/
                              v17,
                              *((unsigned __int8 *)v15 + 9),
                              *(UInt32 *)((char *)v15 + 5));
        PrintError( /*0x47524a*/
          "LoadGame Buffer overrun of %i bytes in file %s on line %i.  Currently loading form is %08X %s with version %i and flags %08X",
          v16 - v35 - v4,
          "..\\TES Shared\\Animation.cpp",
          0xF99,
          *v15,
          v19,
          v23,
          v26);
      }
    }
    else
    {
      v21 = v35 + v4; /*0x47529c*/
      if ( v16 <= v21 ) /*0x4752a1*/
      {
        if ( v16 < v21 ) /*0x4752be*/
          PrintError( /*0x4752d9*/
            "LoadGame Buffer underrun of %i bytes in file %s on line %i.  Current version is %i",
            v4 + v35 - v16,
            "..\\TES Shared\\Animation.cpp",
            0xF99,
            LOBYTE(v14[1].createdObjectList.next));
      }
      else
      {
        PrintError( /*0x4752bc*/
          "LoadGame Buffer overrun of %i bytes in file %s on line %i.  Current version is %i",
          v16 - v35 - v4,
          "..\\TES Shared\\Animation.cpp",
          0xF99,
          LOBYTE(v14[1].createdObjectList.next));
      }
    }
  }
  return v3; /*0x4752e3*/
}
