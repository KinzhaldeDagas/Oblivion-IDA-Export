// Authoritative Oblivion SCPT runtime loader. Stream-replays every chunk: SCHR and SCDA mutate singleton fields (later chunks win); SLSD and SCRO/SCRV append; SCVR names only the latest SLSD created during this call. Unlike TESCS, Oblivion has no SCTX handler. SCHD is also absent.
char __thiscall Script_LoadForm(_DWORD *this, Data *a1)
{
  _DWORD *v2; // ebx
  signed int ChunkType; // edi
  UInt32 length; // edi
  FreeEntry *v6; // ebx
  double *v7; // eax
  double *v8; // edi
  int v9; // eax
  int v10; // ebx
  _DWORD *v11; // ecx
  const char *v12; // eax
  const char *v13; // [esp-4h] [ebp-34h]
  int v14[4]; // [esp+0h] [ebp-30h] BYREF
  char v15[4]; // [esp+10h] [ebp-20h] BYREF
  int v16; // [esp+14h] [ebp-1Ch] BYREF
  BSStringT *v17; // [esp+18h] [ebp-18h]
  _DWORD *v18; // [esp+1Ch] [ebp-14h]
  unsigned int v19; // [esp+2Ch] [ebp-4h]
  int savedregs; // [esp+30h] [ebp+0h] BYREF

  v2 = this; /*0x4fc0fb*/
  v18 = this; /*0x4fc0fd*/
  v17 = 0;                                      // Per-call local-variable cursor starts null. A partial SCVR cannot name an inherited/base variable; leading SCVR is ignored until this invocation sees SLSD. /*0x4fc105*/
  if ( TESFile_GetRecordType(a1) != 0xD ) /*0x4fc114*/
    return 0; /*0x4fc118*/
  TESFile_InitializeFormFromRecord(a1, (TESForm *)v2, v14[0], v14[1]);// Header-only form initialization (type/flags/FormID/source file). Derived Script fields are not cleared here; partial preservation is decided by TESDataHandler_LoadFormRecord before this call. /*0x4fc120*/
  ChunkType = TESFile_GetChunkType(a1); /*0x4fc12c*/
  if ( ChunkType ) /*0x4fc130*/
  {
    while ( 1 ) /*0x4fc136*/
    {                                           // Dispatch proof: handled SCPT chunks are EDID, SCDA, SLSD, RNAM, SCRO, SCRV, SCVR, SCHR. There is no comparison for SCHD or SCTX, so both are skipped by GetNextChunk without materialization.
      if ( ChunkType > 0x4F524353 ) /*0x4fc13c*/
      {                                         // Runtime cases here are SCHR, SCVR, and SCRV. SCTX has no case and is ignored by Oblivion runtime loading.
        switch ( ChunkType ) /*0x4fc243*/
        {
          case 0x52484353: /*0x4fc243*/
            TESFile_GetChunkData(a1, (char *)v2 + 0x18, 0);// SCHR is copied with max=0 directly into Script+0x18. Size 0 is a no-op; a short SCHR overlays only its prefix (retaining prior tail on partial loads); repeated chunks overwrite in order; oversized chunks spill past ScriptInfo into following Script fields. /*0x4fc2f8*/
            break;
          case 0x52564353: /*0x4fc243*/
            if ( v17 )                          // SCVR is acted on only when this loader invocation has already seen an SLSD. The cursor is not consumed after one SCVR, so repeated SCVR chunks keep targeting the same latest variable; a later SLSD retargets it. /*0x4fc2c4*/
            {
              _alloca_(v14[0]); /*0x4fc2cc*/
              TESFile_GetChunkData(a1, (char *)v14, 0x200u);// SCVR calls GetChunkData(max=0x200) into alloca(chunkLength). Size 0 supplies no initialized string; <=512 copies exact bytes and relies on payload NUL termination; >512 copies 511 bytes and forces byte 511 to NUL. /*0x4fc2db*/
              BSStringT_Set(v17 + 3, (const char *)v14, 0);// Set name on the latest per-call VariableInfo. BSStringT_Set replaces/frees its previous name, so repeated SCVR is last-name-wins. /*0x4fc2e9*/
            }
            break; /*0x4fc2ee*/
          case 0x56524353: /*0x4fc243*/
LABEL_20:
            v9 = FormHeapAlloc(0x10u);          // Every SCRO or SCRV allocates a fresh 0x10-byte RefVariable entry; there is no deduplication or replacement. /*0x4fc25d*/
            v10 = 0; /*0x4fc264*/
            if ( v9 ) /*0x4fc26b*/
            {
              *(_DWORD *)v9 = 0; /*0x4fc26d*/
              *(_WORD *)(v9 + 4) = 0; /*0x4fc26f*/
              *(_WORD *)(v9 + 6) = 0; /*0x4fc273*/
              *(_DWORD *)(v9 + 8) = 0; /*0x4fc277*/
              *(_DWORD *)(v9 + 0xC) = 0; /*0x4fc27a*/
              v10 = v9; /*0x4fc27d*/
            }
            TESFile_GetChunkData4(a1, (char *)&v16);// SCRO/SCRV payload uses GetChunkData(max=4) without size validation. Size 0 leaves the stack value uninitialized; sizes 1..3 overwrite only a prefix; size 4 is exact; >4 becomes three payload bytes plus zero high byte and logs truncation. /*0x4fc285*/
            v11 = v18 + 0x10; /*0x4fc299*/
            if ( ChunkType == 0x4F524353 ) /*0x4fc290*/
              *(_DWORD *)(v10 + 8) = v16; /*0x4fc29c*/
            else
              *(_DWORD *)(v10 + 0xC) = v16;     // SCRV stores the decoded/malformed 4-byte temporary at RefVariable+0x0C and appends it to the same ordered reference list. SCRO and SCRV share one index sequence. /*0x4fc2b3*/
            BSSimpleList_PushBack(v11, v10);    // SCRO stores the decoded/malformed 4-byte temporary at RefVariable+8 and appends it to Script+0x40 in encounter order. Partial loads append to inherited references. /*0x4fc29f*/
            v2 = v18; /*0x4fc2a4*/
            break;
        }
      }
      else
      {
        if ( ChunkType == 0x4F524353 ) /*0x4fc142*/
          goto LABEL_20; /*0x4fc142*/
        if ( ChunkType > 0x44534C53 ) /*0x4fc14e*/
        {
          if ( ChunkType == 0x4D414E52 ) /*0x4fc227*/
            TESFile_GetChunkData4(a1, v15);     // RNAM is read through the 4-byte bounded helper into a stack temporary and then discarded; it does not change persistent Script state in Oblivion. /*0x4fc233*/
        }
        else
        {
          switch ( ChunkType ) /*0x4fc154*/
          {
            case 0x44534C53: /*0x4fc154*/
              v7 = (double *)FormHeapAlloc(0x20u);// Each SLSD allocates a new 0x20-byte VariableInfo and makes it the per-call current variable. Repeated SLSD never replaces/deduplicates an earlier entry. /*0x4fc1e4*/
              v17 = (BSStringT *)v7; /*0x4fc1ec*/
              v8 = 0; /*0x4fc1ef*/
              v19 = 0; /*0x4fc1f3*/
              if ( v7 ) /*0x4fc1f6*/
                v8 = ScriptVariableInfo_Constructor(v7); /*0x4fc1ff*/
              v19 = 0xFFFFFFFF; /*0x4fc204*/
              v17 = (BSStringT *)v8; /*0x4fc20b*/
              ScriptVariableInfo_LoadSLSD((char *)v8, a1);// SLSD load calls GetChunkData(max=0x18). Size 0 performs no write; short payloads leave unread constructor/heap state; exactly 24 copies all bytes; >24 logs and truncates to 23 payload bytes plus a forced NUL at byte 23. /*0x4fc20e*/
              BSSimpleList_PushBack(v2 + 0x12, (int)v8);// Append non-null VariableInfo to Script+0x48 with BSSimpleList_PushBack, preserving encounter order. In partial loads this appends to the inherited/base list because list clearing was bypassed. /*0x4fc217*/
              break;
            case 0x41444353: /*0x4fc154*/
              length = a1->currentChunk.length; // Even length zero reaches FormHeap allocation; MemoryHeap_Allocate promotes sizes below 8 to 8 on the initialized heap. Thus zero-length SCDA can install a non-null active data pointer. /*0x4fc19a*/
              v6 = j_MemoryHeap_Alloc(&FormHeap, (char)&savedregs, length | 0x100000000LL, v14[0]); /*0x4fc1ae*/
              _memset((int)v6, 0, length); /*0x4fc1b3*/
              v18[0xC] = v6;                    // Install new SCDA pointer directly at Script+0x30 before reading. Every repeated SCDA replaces this pointer; the replaced allocation is not freed at this site (last pointer wins, prior pointer leaks). /*0x4fc1bf*/
              _memset((int)v6, 0, length); /*0x4fc1c2*/
              TESFile_GetChunkData(a1, (char *)v18[0xC], 0);// Copy the entire SCDA payload into the just-allocated buffer. Allocation/read failures are not checked here; oversized/failed allocations can fault. /*0x4fc1d5*/
              v2 = v18; /*0x4fc1da*/
              break;
            case 0x44494445: /*0x4fc154*/
              _alloca_(v14[0]); /*0x4fc174*/
              TESFile_GetChunkData(a1, (char *)v14, 0x200u); /*0x4fc183*/
              (*(void (__thiscall **)(_DWORD *, int *))(*v2 + 0xD8))(v2, v14); /*0x4fc193*/
              break;
          }
        }
      }
      if ( TESFile_GetNextChunk(a1) ) /*0x4fc2ff*/
      {
        ChunkType = TESFile_GetChunkType(a1); /*0x4fc30f*/
        if ( ChunkType ) /*0x4fc313*/
          continue; /*0x4fc313*/
      }
      break; /*0x4fc313*/
    }
  }
  if ( !v2[0xC] )                               // Compiled-state test is only Script.data != NULL after replay. SCTX is irrelevant. Missing SCDA on a partial record retains a base pointer and avoids the warning; zero-length SCDA can also be non-null because allocation still occurs. /*0x4fc319*/
  {
    v12 = (const char *)(*(int (__thiscall **)(_DWORD *, char *))(*v2 + 0xD4))(v2, a1->name); /*0x4fc32d*/
    PrintError("Script '%s' in file '%s' has not been compiled.\r\n", v12, v13); /*0x4fc335*/
  }
  return 1; /*0x4fc342*/
}
