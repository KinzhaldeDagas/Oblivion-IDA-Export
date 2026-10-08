// ActorAnimData load-state routine. Active slots restore from encoded key plus one selector byte. Selector 0xFE is intercepted as the null-sequence marker; all other selectors enter the common map-entry selector virtual and then consume or skip the timing block according to restore success.
void __userpurge ActorAnimData_LoadState(AnimSequenceSingle *this@<ecx>, double a2@<st1>, float sequence)
{
  UInt32 *currentlyLoadingFormHeader; // edi
  TESForm *v7; // eax
  const char *v8; // eax
  TESSaveLoadGame_SerializationView *v9; // ecx
  float v10; // edi
  char v11; // cl
  unsigned __int16 *v12; // ebp
  AnimSequenceSingle *v13; // edi
  int v14; // eax
  bool v15; // zf
  double v16; // st5
  int v17; // ebx
  float *vtbl; // ecx
  unsigned __int16 SaveStateSize; // ax
  float v20; // edi
  _DWORD *v21; // eax
  TESSaveLoadGame_SerializationView *v22; // ecx
  char v23; // bl
  int v24; // eax
  int v25; // eax
  int v26; // eax
  NiObject *v27; // eax
  NiControllerManager *v28; // edi
  BSAnimGroupSequence *v29; // ebp
  int v30; // edi
  unsigned __int16 v31; // ax
  TESSaveLoadGame_SerializationView *v32; // ecx
  UInt32 *v33; // edi
  unsigned __int8 *v34; // esi
  TESForm *v35; // eax
  unsigned __int8 *v36; // ebx
  unsigned __int8 *v37; // ecx
  const char *v38; // eax
  const char *v39; // eax
  unsigned __int8 *v40; // edx
  float easeInTime; // [esp+8h] [ebp-34h]
  int easeOutTime; // [esp+Ch] [ebp-30h]
  int easeOutTimea; // [esp+Ch] [ebp-30h]
  int easeOutTimeb; // [esp+Ch] [ebp-30h]
  int v45; // [esp+10h] [ebp-2Ch]
  int v46; // [esp+10h] [ebp-2Ch]
  int v47; // [esp+10h] [ebp-2Ch]
  char v48; // [esp+22h] [ebp-1Ah] BYREF
  char v49; // [esp+23h] [ebp-19h] BYREF
  int destination; // [esp+24h] [ebp-18h] BYREF
  float v51; // [esp+28h] [ebp-14h]
  unsigned __int8 *bufferCursor; // [esp+2Ch] [ebp-10h]
  int v53; // [esp+30h] [ebp-Ch]
  int Dst; // [esp+34h] [ebp-8h] BYREF
  float slotSelectorOrScratch; // [esp+38h] [ebp-4h] BYREF

  destination = 0; /*0x4755a0*/
  bufferCursor = 0; /*0x4755a4*/
  if ( TESSaveLoadGame_UseSaveGameBlocks() )
  {
    SaveLoad_LoadData(g_TESSaveLoadGame, &Dst, 4u); /*0x4755c2*/
    if ( Dst != 0x4B4F4C42 )
    {
      currentlyLoadingFormHeader = (UInt32 *)g_TESSaveLoadGame->currentlyLoadingFormHeader; /*0x4755d6*/
      if ( currentlyLoadingFormHeader )
      {
        v7 = TESForm_LookupByFormID(*currentlyLoadingFormHeader); /*0x4755e3*/
        v8 = (const char *)((int (__thiscall *)(TESForm *, _DWORD, _DWORD))v7->vtbl->GetEditorName)( /*0x4755fe*/
                             v7,
                             *((unsigned __int8 *)currentlyLoadingFormHeader + 9),
                             *(UInt32 *)((char *)currentlyLoadingFormHeader + 5));
        PrintError(
          "LoadGame Buffer error: Block Header is incorrect in file %s on line %i.  Currently loading form is %08X %s wit"
          "h version %i and flags %08X",
          "..\\TES Shared\\Animation.cpp",
          0x125E,
          *currentlyLoadingFormHeader,
          v8,
          easeOutTime,
          v45);
      }
      else
      {
        PrintError(
          "LoadGame Buffer error: Block Header is incorrect in file %s on line %i.  Current version is %i",
          "..\\TES Shared\\Animation.cpp",
          0x125E,
          g_TESSaveLoadGame->currentVersion);
      }
    }
    v9 = g_TESSaveLoadGame; /*0x475639*/
    bufferCursor = g_TESSaveLoadGame->bufferCursor; /*0x475649*/
    SaveLoad_LoadData(v9, &destination, 2u); /*0x47564d*/
  }
  v10 = sequence; /*0x475652*/
  v51 = 0.0; /*0x475658*/
  if ( sequence != 0.0 ) /*0x47565c*/
  {
    if ( (*(unsigned __int8 (__thiscall **)(_DWORD))(*(_DWORD *)LODWORD(sequence) + 0x190))(LODWORD(sequence)) ) /*0x475668*/
      v51 = v10; /*0x47566e*/
  }
  SaveLoad_LoadData(g_TESSaveLoadGame, (char *)this + 0xBC, 4u); /*0x475682*/
  SaveLoad_LoadData(g_TESSaveLoadGame, this + 0x18, 4u); /*0x475696*/
  SaveLoad_LoadData(g_TESSaveLoadGame, (char *)this + 0xC, 0xCu); /*0x4756a7*/
  SaveLoad_LoadData(g_TESSaveLoadGame, this + 7, 4u); /*0x4756b8*/
  SaveLoad_LoadData(g_TESSaveLoadGame, this + 0x12, 1u); /*0x4756cc*/
  SaveLoad_LoadData(g_TESSaveLoadGame, &v49, 1u); /*0x4756de*/
  v11 = 0; /*0x4756e3*/
  sequence = 0.0; /*0x4756e5*/
  v12 = (unsigned __int16 *)this + 0x1E; /*0x4756e9*/
  v13 = this + 9; /*0x4756ec*/
  v53 = 5; /*0x4756ef*/
  do /*0x4757fa*/
  {
    if ( ((1 << v11) & v49) != 0 ) /*0x47570e*/
    {
      SaveLoad_LoadData(g_TESSaveLoadGame, v12, 2u); /*0x47571d*/
      SaveLoad_LoadData(g_TESSaveLoadGame, v13, 4u); /*0x47572b*/
      SaveLoad_LoadData(g_TESSaveLoadGame, &v13[2].sequence, 4u); /*0x47573f*/
      SaveLoad_LoadData(g_TESSaveLoadGame, v12 + 0x1A, 2u); /*0x475750*/
      SaveLoad_LoadData(g_TESSaveLoadGame, &v13[6].sequence, 4u); /*0x47575e*/
      SaveLoad_LoadData(g_TESSaveLoadGame, &slotSelectorOrScratch, 1u);// Loads the saved one-byte sequence selector and passes it to ActorAnimData_RestorePlaySavedSlot. The subsequent BSAnimGroupSequence state block contains timing/state, not a KF filename. /*0x475770*/
      v14 = LODWORD(slotSelectorOrScratch); /*0x475775*/
      v15 = LOBYTE(slotSelectorOrScratch) == 0xFE;// Load compares the selector byte with reserved 0xFE before restore. 0xFE skips ActorAnimData_RestorePlaySavedSlot and skips consuming any BSAnimGroupSequence state block. If a non-NULL index-254 variant was saved, this collision can leave the animation save stream misaligned. /*0x475779*/
      v13[0xB].vtbl = 0; /*0x47577b*/
      if ( !v15 )                               // Reserved-selector branch: selector 0xFE jumps directly to the next slot record. Other bytes call restore; 0x80..0xFD and 0xFF reach AnimSequenceMultiple_GetSequenceBySelector and choose randomly because of signed extension/sentinel behavior. /*0x475782*/
      {
        v16 = *((float *)this + 0x25); /*0x475784*/
        v17 = LODWORD(sequence); /*0x47578a*/
        *((_BYTE *)this + 0xC4) = 1; /*0x475790*/
        easeInTime = v16; /*0x475797*/
        ActorAnimData_RestorePlaySavedSlot((int)this, v17, *v12, (int)v13->vtbl, easeInTime, v14); /*0x4757a5*/
        vtbl = (float *)v13[0xB].vtbl; /*0x4757aa*/
        if ( vtbl ) /*0x4757af*/
        {
          BSAnimGroupSequence_LoadState(vtbl, *((float *)this + 0x25)); /*0x4757bb*/
        }
        else
        {
          SaveStateSize = BSAnimGroupSequence_GetSaveStateSize(); /*0x4757c2*/
          SaveLoad_AdvanceBufferOffset(g_TESSaveLoadGame, SaveStateSize); /*0x4757d1*/
          ActorAnimData_ClearSlot((ActorAnimData *)this, v17, 0.0); /*0x4757df*/
        }
      }
    }
    v11 = LOBYTE(sequence) + 1;                 // Next-slot continuation. The 0xFE path reaches here without consuming sequence timing/state; valid null saves wrote no such block, but a multiple variant whose truncated index is 254 did. /*0x4757e8*/
    ++v12; /*0x4757eb*/
    v13 = (AnimSequenceSingle *)((char *)v13 + 4); /*0x4757ee*/
    v15 = v53-- == 1; /*0x4757f1*/
    ++LODWORD(sequence); /*0x4757f6*/
  }
  while ( !v15 ); /*0x4757fa*/
  v20 = v51; /*0x475806*/
  *((_DWORD *)this + 0x33) = AnimIdle_LoadState(*((float *)this + 0x25), a2, v51); /*0x475815*/
  if ( g_TESSaveLoadGame->currentVersion < 0x4Cu ) /*0x475828*/
    *((_DWORD *)this + 0x34) = AnimIdle_LoadState(*((float *)this + 0x25), a2, v20); /*0x47583e*/
  v21 = *((_DWORD **)this + 0x33); /*0x475844*/
  if ( v21 ) /*0x47584c*/
  {
    if ( *v21 == 1 ) /*0x475851*/
      *((_DWORD *)this + 0x2C) = 0; /*0x475853*/
  }
  SaveLoad_LoadData(g_TESSaveLoadGame, (char *)this + 0xC4, 1u); /*0x47586c*/
  v22 = g_TESSaveLoadGame; /*0x475871*/
  v48 = 1; /*0x475877*/
  if ( v22->currentVersion < 0x40u || (SaveLoad_LoadData(v22, &v48, 1u), v48) ) /*0x475893*/
  {
    v23 = 0; /*0x4758a6*/
    if ( (*(int (__thiscall **)(int))(*(_DWORD *)(LODWORD(v51) + 0x5C) + 0x30))(LODWORD(v51) + 0x5C) ) /*0x4758a8*/
    {
      v24 = (*(int (__thiscall **)(_DWORD, const char *))(**(_DWORD **)(*((_DWORD *)this + 0x26) + 0x7C) + 0x4C))( /*0x4758c5*/
              *(_DWORD *)(*((_DWORD *)this + 0x26) + 0x7C),
              "magicNode");
      if ( v24 ) /*0x4758c9*/
      {
        v25 = (*(int (__thiscall **)(int))(*(_DWORD *)v24 + 8))(v24); /*0x4758d6*/
        if ( v25 ) /*0x4758da*/
        {
          if ( *(_WORD *)(v25 + 0xB6) ) /*0x4758e0*/
          {
            v26 = **(_DWORD **)(v25 + 0xB0); /*0x4758f4*/
            if ( v26 ) /*0x4758f8*/
            {
              v27 = NiRTTI_Cast((BSStringT *)&stru_B3CAC0, *(NiObject **)(v26 + 0xC)); /*0x475907*/
              v28 = (NiControllerManager *)v27; /*0x47590c*/
              if ( v27 ) /*0x475913*/
              {
                if ( NiTMap_GetAt(&v27[0xB].__vftable, (int)"SpecialIdle_Cast", &sequence) ) /*0x475926*/
                {
                  v29 = (BSAnimGroupSequence *)LODWORD(sequence); /*0x475933*/
                  if ( sequence != 0.0 ) /*0x475939*/
                  {
                    NiControllerManager_DeactivateAllSequences(v28, 0.0); /*0x475947*/
                    BSAnimGroupSequence_Activate(v29, 0, 0, 1.0, 0.0, 0); /*0x475963*/
                    *((_WORD *)v28 + 4) |= 8u; /*0x475968*/
                    BSAnimGroupSequence_LoadState((float *)v29, *((float *)this + 0x25)); /*0x475979*/
                    SaveLoad_LoadData(g_TESSaveLoadGame, &slotSelectorOrScratch, 4u); /*0x47598b*/
                    v30 = *(_DWORD *)(LODWORD(v51) + 0x60); /*0x475994*/
                    if ( v30 ) /*0x475999*/
                    {
                      sequence = *((float *)v29 + 0xC) * dbl_A31C70; /*0x4759a7*/
                      MagicCaster_CastingVFX_ClearSomething___(v30, 1, sequence); /*0x4759b4*/
                      *(float *)(v30 + 0x10) = slotSelectorOrScratch; /*0x4759bd*/
                    }
                    v23 = 1; /*0x4759c0*/
                  }
                }
              }
            }
          }
        }
      }
    }
    if ( g_TESSaveLoadGame->currentVersion >= 0x40u && !v23 ) /*0x4759d0*/
    {
      v31 = BSAnimGroupSequence_GetSaveStateSize(); /*0x4759d2*/
      SaveLoad_AdvanceBufferOffset(g_TESSaveLoadGame, v31 + 4); /*0x4759e4*/
    }
  }
  ActorAnimData_SampleAndExtractRootMotion((int)this, *((float *)this + 0x25), (_DWORD *)this + 6, 1); /*0x4759fb*/
  if ( TESSaveLoadGame_UseSaveGameBlocks() ) /*0x475a06*/
  {
    v32 = g_TESSaveLoadGame; /*0x475a14*/
    v33 = (UInt32 *)g_TESSaveLoadGame->currentlyLoadingFormHeader; /*0x475a1a*/
    v34 = g_TESSaveLoadGame->bufferCursor; /*0x475a22*/
    if ( v33 ) /*0x475a25*/
    {
      v35 = TESForm_LookupByFormID(*v33); /*0x475a2e*/
      v36 = bufferCursor; /*0x475a38*/
      v37 = &bufferCursor[(unsigned __int16)destination]; /*0x475a3c*/
      if ( v34 <= v37 ) /*0x475a43*/
      {
        if ( v34 < v37 ) /*0x475a88*/
        {
          v39 = (const char *)((int (__thiscall *)(TESForm *, _DWORD, _DWORD))v35->vtbl->GetEditorName)( /*0x475aa1*/
                                v35,
                                *((unsigned __int8 *)v33 + 9),
                                *(UInt32 *)((char *)v33 + 5));
          PrintError( /*0x475ac0*/
            "LoadGame Buffer underrun of %i bytes in file %s on line %i.  Currently loading form is %08X %s with version "
            "%i and flags %08X",
            &v36[(unsigned __int16)destination - (_DWORD)v34],
            "..\\TES Shared\\Animation.cpp",
            0x12DA,
            *v33,
            v39,
            easeOutTimeb,
            v47);
        }
      }
      else
      {
        v38 = (const char *)((int (__thiscall *)(TESForm *, _DWORD, _DWORD))v35->vtbl->GetEditorName)( /*0x475a58*/
                              v35,
                              *((unsigned __int8 *)v33 + 9),
                              *(UInt32 *)((char *)v33 + 5));
        PrintError( /*0x475a77*/
          "LoadGame Buffer overrun of %i bytes in file %s on line %i.  Currently loading form is %08X %s with version %i and flags %08X",
          &v34[-(unsigned __int16)destination] - v36,
          "..\\TES Shared\\Animation.cpp",
          0x12DA,
          *v33,
          v38,
          easeOutTimea,
          v46);
      }
    }
    else
    {
      v40 = &bufferCursor[(unsigned __int16)destination]; /*0x475ada*/
      if ( v34 <= v40 ) /*0x475adf*/
      {
        if ( v34 < v40 ) /*0x475b0b*/
          PrintError( /*0x475b26*/
            "LoadGame Buffer underrun of %i bytes in file %s on line %i.  Current version is %i",
            &bufferCursor[(unsigned __int16)destination - (_DWORD)v34],
            "..\\TES Shared\\Animation.cpp",
            0x12DA,
            v32->currentVersion);
      }
      else
      {
        PrintError( /*0x475afa*/
          "LoadGame Buffer overrun of %i bytes in file %s on line %i.  Current version is %i",
          &v34[-(unsigned __int16)destination] - bufferCursor,
          "..\\TES Shared\\Animation.cpp",
          0x12DA,
          v32->currentVersion);
      }
    }
  }
}
