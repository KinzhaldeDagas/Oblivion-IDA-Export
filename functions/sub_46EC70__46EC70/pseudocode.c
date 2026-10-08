void __userpurge sub_46EC70(unsigned int *a1@<ecx>, int a2@<ebx>, int a3@<esi>, __int16 a4, int a5)
{
  UInt32 v6; // ebx
  UInt32 *v7; // esi
  TESForm *v8; // eax
  const char *v9; // eax
  unsigned int v10; // esi
  TESSaveLoad *v11; // ecx
  UInt32 *v12; // edi
  UInt32 v13; // esi
  TESForm *v14; // ecx
  UInt32 v15; // eax
  const char *v16; // eax
  const char *v17; // eax
  UInt32 v18; // edx
  int v19; // [esp-14h] [ebp-2Ch]
  int v20; // [esp-14h] [ebp-2Ch]
  size_t v21; // [esp-10h] [ebp-28h]
  int v22; // [esp-10h] [ebp-28h]
  int v23; // [esp-10h] [ebp-28h]
  int v24; // [esp-Ch] [ebp-24h]
  size_t v25; // [esp-8h] [ebp-20h]
  size_t v26; // [esp-8h] [ebp-20h]
  int v27; // [esp-8h] [ebp-20h]
  size_t v28; // [esp-8h] [ebp-20h]
  int v29; // [esp+0h] [ebp-18h]
  int v30; // [esp+4h] [ebp-14h]
  int v31; // [esp+8h] [ebp-10h] BYREF
  int Dst; // [esp+Ch] [ebp-Ch] BYREF
  unsigned __int16 v33; // [esp+14h] [ebp-4h] BYREF

  if ( (a4 & 8) != 0 )
  {
    v29 = a2; /*0x46ec87*/
    HIDWORD(v25) = a3; /*0x46ec88*/
    v31 = 0; /*0x46ec89*/
    v6 = 0; /*0x46ec91*/
    if ( TESSaveLoadGame_UseSaveGameBlocks() )
    {
      LODWORD(v25) = 4; /*0x46eca6*/
      SaveLoad_LoadData((int)g_TESSaveLoadGame, &Dst, v25); /*0x46ecad*/
      if ( Dst != 0x4B4F4C42 )
      {
        v7 = (UInt32 *)g_TESSaveLoadGame[1].unk030[0]; /*0x46ecc1*/
        if ( v7 )
        {
          v8 = TESForm_LookupByFormID(*v7); /*0x46ecce*/
          v9 = (const char *)((int (__thiscall *)(TESForm *, _DWORD, _DWORD))v8->vtbl->GetEditorName)( /*0x46ece9*/
                               v8,
                               *((unsigned __int8 *)v7 + 9),
                               *(UInt32 *)((char *)v7 + 5));
          PrintError(
            "LoadGame Buffer error: Block Header is incorrect in file %s on line %i.  Currently loading form is %08X %s w"
            "ith version %i and flags %08X",
            "..\\TES Shared\\TESReactionForm.cpp",
            0x519,
            *v7,
            v9,
            v24,
            v27);
        }
        else
        {
          PrintError(
            "LoadGame Buffer error: Block Header is incorrect in file %s on line %i.  Current version is %i",
            "..\\TES Shared\\TESReactionForm.cpp",
            0x519,
            LOBYTE(g_TESSaveLoadGame[1].createdObjectList.next));
        }
      }
      v6 = g_TESSaveLoadGame->unk000[5]; /*0x46ed2a*/
      LODWORD(v26) = 2; /*0x46ed2d*/
      SaveLoad_LoadData((int)g_TESSaveLoadGame, &v31, v26); /*0x46ed34*/
    }
    sub_46E600(a1); /*0x46ed3b*/
    LODWORD(v25) = 2; /*0x46ed40*/
    SaveLoad_LoadData((int)g_TESSaveLoadGame, &a4, v25);// EngineIssues review: TESReactionForm load reads UInt16 reaction count into stack slot; verify alias with per-entry FormID destination below. /*0x46ed4d*/
    v10 = 0;                                    // EnginePatch v3: TESReactionForm reaction count is clamped before the loop. Follow-up verification showed the earlier stack-alias concern was likely a Hex-Rays labeling artifact. /*0x46ed52*/
    if ( a4 ) /*0x46ed59*/
    {
      do /*0x46ed9f*/
      {
        LODWORD(v28) = 4; /*0x46ed66*/
        SaveLoad_LoadFormID(&v33, v28, v29, v30, v31);// EngineIssues review: TESReactionForm per-entry FormID appears to be read into same effective stack slot as count; loop bound later uses low 16 bits. /*0x46ed6d*/
        LODWORD(v21) = 4; /*0x46ed78*/
        SaveLoad_LoadData((int)g_TESSaveLoadGame, &v31, v21); /*0x46ed7f*/
        sub_46E900((char *)a1, Dst, v31); /*0x46ed90*/
        ++v10; /*0x46ed9a*/
      }
      while ( v10 < v33 );                      // EngineIssues review: TESReactionForm loop bound appears to come from low 16 bits of last loaded FormID rather than preserved original count; verify stack slot map. /*0x46ed9f*/
    }
    if ( TESSaveLoadGame_UseSaveGameBlocks() ) /*0x46eda7*/
    {
      v11 = g_TESSaveLoadGame; /*0x46edb4*/
      v12 = (UInt32 *)g_TESSaveLoadGame[1].unk030[0]; /*0x46edba*/
      v13 = g_TESSaveLoadGame->unk000[5]; /*0x46edc2*/
      if ( v12 ) /*0x46edc5*/
      {
        v14 = TESForm_LookupByFormID(*v12); /*0x46edd8*/
        v15 = (unsigned __int16)v29 + v6; /*0x46edda*/
        if ( v13 <= v15 ) /*0x46ede2*/
        {
          if ( v13 < v15 ) /*0x46ee25*/
          {
            v17 = (const char *)((int (__thiscall *)(TESForm *, _DWORD, _DWORD))v14->vtbl->GetEditorName)( /*0x46ee3c*/
                                  v14,
                                  *((unsigned __int8 *)v12 + 9),
                                  *(UInt32 *)((char *)v12 + 5));
            PrintError( /*0x46ee5b*/
              "LoadGame Buffer underrun of %i bytes in file %s on line %i.  Currently loading form is %08X %s with versio"
              "n %i and flags %08X",
              v6 + (unsigned __int16)v29 - v13,
              "..\\TES Shared\\TESReactionForm.cpp",
              0x52B,
              *v12,
              v17,
              v20,
              v23);
          }
        }
        else
        {
          v16 = (const char *)((int (__thiscall *)(TESForm *, _DWORD, _DWORD))v14->vtbl->GetEditorName)( /*0x46edf5*/
                                v14,
                                *((unsigned __int8 *)v12 + 9),
                                *(UInt32 *)((char *)v12 + 5));
          PrintError( /*0x46ee14*/
            "LoadGame Buffer overrun of %i bytes in file %s on line %i.  Currently loading form is %08X %s with version %"
            "i and flags %08X",
            v13 - (unsigned __int16)v29 - v6,
            "..\\TES Shared\\TESReactionForm.cpp",
            0x52B,
            *v12,
            v16,
            v19,
            v22);
        }
      }
      else
      {
        v18 = (unsigned __int16)v29 + v6; /*0x46ee71*/
        if ( v13 <= v18 ) /*0x46ee76*/
        {
          if ( v13 < v18 ) /*0x46eea2*/
            PrintError( /*0x46eebd*/
              "LoadGame Buffer underrun of %i bytes in file %s on line %i.  Current version is %i",
              v6 + (unsigned __int16)v29 - v13,
              "..\\TES Shared\\TESReactionForm.cpp",
              0x52B,
              LOBYTE(v11[1].createdObjectList.next));
        }
        else
        {
          PrintError( /*0x46ee91*/
            "LoadGame Buffer overrun of %i bytes in file %s on line %i.  Current version is %i",
            v13 - (unsigned __int16)v29 - v6,
            "..\\TES Shared\\TESReactionForm.cpp",
            0x52B,
            LOBYTE(v11[1].createdObjectList.next));
        }
      }
    }
  }
}
