// EngineFix trace 2026-05-11: raw save-cursor parser with several fixed-size direct reads/memcpy blocks and branch-dependent cursor advances. Not patched in this pass; requires either per-read conversion to SaveLoad_LoadData or a state-machine wrapper to avoid save desynchronization.
signed int __thiscall sub_459AF0(ChangesMap **this, int a2, char a3)
{
  int v3; // ebx
  ChangesMap *v5; // esi
  unsigned int v6; // edi
  UInt32 bucketCount; // ecx
  UInt32 v8; // eax
  NiTMap_Entry_TESCELL **buckets; // esi
  NiTMap_Entry_TESCELL **v10; // edx
  MEF_U32PointerMapEntry32 *v11; // eax
  MEF_U32PointerMapLayout32 *v12; // ecx
  int v13; // eax
  NiTMap_TESCELL *v14; // ecx
  TESSaveLoadGame_SerializationView *v15; // edx
  unsigned __int8 *bufferCursor; // ecx
  TESSaveLoadGame_SerializationView *v17; // ecx
  unsigned int *v18; // eax
  unsigned int v19; // edx
  unsigned int v20; // esi
  unsigned int v21; // eax
  unsigned __int8 *v22; // eax
  unsigned __int16 v23; // dx
  unsigned __int8 *v24; // eax
  int v25; // edx
  unsigned __int8 *v26; // eax
  int v27; // edx
  __int16 v28; // si
  unsigned int v29; // esi
  TESSaveLoadGame_SerializationView *v30; // edi
  unsigned __int8 *v31; // esi
  TESSaveLoadGame_SerializationView *v32; // edi
  unsigned __int8 *v33; // esi
  unsigned __int8 *v34; // eax
  int v35; // eax
  ChangesMap *v36; // esi
  unsigned int v37; // ebx
  void **v38; // edi
  int *v39; // eax
  int *v40; // esi
  int v42; // [esp+10h] [ebp-90h]
  unsigned int keyOut; // [esp+14h] [ebp-8Ch] BYREF
  int *v44; // [esp+18h] [ebp-88h] BYREF
  void *valueOut; // [esp+1Ch] [ebp-84h] BYREF
  unsigned int v46; // [esp+20h] [ebp-80h]
  unsigned int v47; // [esp+24h] [ebp-7Ch]
  MEF_U32PointerMapEntry32 *position; // [esp+28h] [ebp-78h] BYREF
  int v49; // [esp+2Ch] [ebp-74h]
  int *v50; // [esp+30h] [ebp-70h] BYREF
  unsigned int v51[7]; // [esp+34h] [ebp-6Ch] BYREF
  char Dst[36]; // [esp+50h] [ebp-50h] BYREF
  char destination[44]; // [esp+74h] [ebp-2Ch] BYREF

  v3 = a2; /*0x459af7*/
  v5 = *this; /*0x459b0b*/
  v42 = 0; /*0x459b17*/
  if ( (g_TESSaveLoadGame->flags & 0x1000) == 0 ) /*0x459b1b*/
  {
    keyOut = 0; /*0x459b1d*/
    NiTMap_GetAt(v5, a2, &keyOut); /*0x459b29*/
    v6 = keyOut; /*0x459b2e*/
    if ( keyOut ) /*0x459b34*/
    {
      if ( !*(_DWORD *)(keyOut + 4) ) /*0x459b36*/
      {
        NiTMap_RemoveAt(v5, a2); /*0x459b3f*/
        if ( *(_DWORD *)(v6 + 4) ) /*0x459b44*/
          MemoryHeap_Free_checked(*(void **)(v6 + 4)); /*0x459b51*/
        FormHeapFree(v6); /*0x459b57*/
      }
      v42 = 1; /*0x459b5f*/
    }
  }
  bucketCount = (*this)->bucketCount; /*0x459b6a*/
  v8 = 0; /*0x459b6f*/
  if ( bucketCount ) /*0x459b73*/
  {
    buckets = (NiTMap_Entry_TESCELL **)(*this)->buckets; /*0x459b75*/
    v10 = buckets; /*0x459b78*/
    while ( !*v10 ) /*0x459b82*/
    {
      ++v8; /*0x459b88*/
      ++v10; /*0x459b8b*/
      if ( v8 >= bucketCount ) /*0x459b90*/
        goto LABEL_12; /*0x459b90*/
    }
    v11 = (MEF_U32PointerMapEntry32 *)buckets[v8]; /*0x459c55*/
  }
  else
  {
LABEL_12:
    v11 = 0; /*0x459b92*/
  }
  position = v11; /*0x459b96*/
  if ( v11 ) /*0x459b9a*/
  {
    while ( 1 ) /*0x459ba5*/
    {
      v12 = (MEF_U32PointerMapLayout32 *)*this; /*0x459ba5*/
      valueOut = 0; /*0x459bb2*/
      keyOut = 0; /*0x459bb6*/
      NiTMap_U32Pointer_GetNextEntry(v12, &position, &keyOut, &valueOut); /*0x459bba*/
      v13 = *(_DWORD *)valueOut; /*0x459bc3*/
      v14 = *((NiTMap_TESCELL **)valueOut + 1); /*0x459bc5*/
      *(this + 5) = (ChangesMap *)v14; /*0x459bca*/
      if ( v14 ) /*0x459bcd*/
        break; /*0x459bcd*/
LABEL_64:
      if ( !position ) /*0x459eae*/
        goto LABEL_65; /*0x459eae*/
    }
    v15 = g_TESSaveLoadGame; /*0x459bd3*/
    bufferCursor = g_TESSaveLoadGame->bufferCursor; /*0x459bd9*/
    valueOut = *(void **)bufferCursor; /*0x459be9*/
    v15->bufferCursor = bufferCursor + 4; /*0x459bed*/
    if ( a3 || BYTE2(valueOut) != 0x30 ) /*0x459bfd*/
    {
      if ( BYTE2(valueOut) == 0x31 || BYTE2(valueOut) == 0x32 || BYTE2(valueOut) == 0x33 ) /*0x459d14*/
      {
        v29 = 0; /*0x459d1a*/
        if ( (v13 & 2) != 0 ) /*0x459d1e*/
        {
          v30 = g_TESSaveLoadGame; /*0x459d20*/
          v31 = g_TESSaveLoadGame->bufferCursor; /*0x459d26*/
          memcpy(Dst, v31, sizeof(Dst)); /*0x459d31*/
          v30->bufferCursor = v31 + 0x24; /*0x459d3c*/
          v29 = *(_DWORD *)&Dst[8]; /*0x459d3f*/
        }
        else if ( (v13 & 0xC) != 0 ) /*0x459d47*/
        {
          v32 = g_TESSaveLoadGame; /*0x459d4b*/
          v33 = g_TESSaveLoadGame->bufferCursor; /*0x459d51*/
          if ( v13 >= 0 ) /*0x459d54*/
          {
            memcpy(v51, v33, sizeof(v51)); /*0x459d7d*/
            v32->bufferCursor = v33 + 0x1C; /*0x459d88*/
            v29 = v51[0]; /*0x459d8b*/
          }
          else
          {
            memcpy(destination, v33, sizeof(destination)); /*0x459d5e*/
            v32->bufferCursor = v33 + 0x2C; /*0x459d69*/
            v29 = *(_DWORD *)&destination[0x10]; /*0x459d6c*/
          }
        }
        else if ( ((unsigned int)&loc_800000 & v13) != 0 ) /*0x459d96*/
        {
          v34 = g_TESSaveLoadGame->bufferCursor; /*0x459d9e*/
          v29 = *(_DWORD *)v34; /*0x459da1*/
          g_TESSaveLoadGame->bufferCursor = v34 + 4; /*0x459da6*/
        }
        if ( !TESDataHandler_IsFormIDCreated_(v29) ) /*0x459db0*/
        {
          v35 = (int)*(this + 0x1D); /*0x459db9*/
          if ( v29 <= *(_DWORD *)(v35 + 0xC) ) /*0x459dbf*/
            v29 = *(_DWORD *)(*(_DWORD *)(v35 + 4) + 4 * v29); /*0x459dc8*/
          else
            v29 = 0; /*0x459dc1*/
        }
        if ( v29 == v3 ) /*0x459dcd*/
        {
          v36 = *this; /*0x459ddc*/
          v37 = keyOut; /*0x459ddf*/
          if ( (g_TESSaveLoadGame->flags & 0x1000) == 0 ) /*0x459de8*/
          {
            valueOut = 0; /*0x459df2*/
            NiTMap_GetAt(v36, keyOut, &valueOut); /*0x459dfa*/
            v38 = (void **)valueOut; /*0x459dff*/
            if ( valueOut ) /*0x459e05*/
            {
              NiTMap_RemoveAt(v36, v37); /*0x459e0a*/
              if ( v38[1] ) /*0x459e0f*/
                MemoryHeap_Free_checked(v38[1]); /*0x459e1c*/
              FormHeapFree((unsigned int)v38); /*0x459e22*/
            }
          }
          if ( a3 ) /*0x459e32*/
          {
            if ( NiTMap_GetAt(*(this + 2), a2, &v50) ) /*0x459e44*/
              BSSimpleList_Remove(v50, v37); /*0x459e52*/
          }
          else if ( NiTMap_GetAt(*(this + 3), a2, &v44) ) /*0x459e69*/
          {
            v39 = v44; /*0x459e78*/
            if ( v44 ) /*0x459e7a*/
            {
              while ( !*v39 || *(_DWORD *)*v39 != v37 ) /*0x459e88*/
              {
                v39 = (int *)v39[1]; /*0x459e8a*/
                if ( !v39 ) /*0x459e8f*/
                  goto LABEL_62; /*0x459e8f*/
              }
              BSSimpleList_Remove(v44, *v39); /*0x459e94*/
            }
          }
LABEL_62:
          ++v42; /*0x459e99*/
          v3 = a2; /*0x459e9e*/
        }
      }
      goto LABEL_63; /*0x459e9e*/
    }
    if ( HIBYTE(valueOut) >= 0x5Bu ) /*0x459c08*/
    {
      if ( (v13 & 0x4000000) != 0 ) /*0x459c87*/
      {
        v24 = g_TESSaveLoadGame->bufferCursor; /*0x459c8f*/
        v25 = *(_DWORD *)v24; /*0x459c92*/
        g_TESSaveLoadGame->bufferCursor = v24 + 4; /*0x459c97*/
        if ( sub_459990(this, v25) != v3 ) /*0x459ca4*/
        {
LABEL_63:
          *(this + 5) = 0; /*0x459ea5*/
          goto LABEL_64; /*0x459ea7*/
        }
      }
      else
      {
        if ( (v13 & 0x2000000) == 0 ) /*0x459cc3*/
          goto LABEL_63; /*0x459cc3*/
        v26 = g_TESSaveLoadGame->bufferCursor; /*0x459ccf*/
        v27 = *(_DWORD *)v26; /*0x459cd2*/
        v28 = *((_WORD *)v26 + 2); /*0x459cd4*/
        g_TESSaveLoadGame->bufferCursor = v26 + 6; /*0x459cdb*/
        LOWORD(v46) = v28; /*0x459ce1*/
        if ( sub_459990(this, v27) != v3 ) /*0x459ced*/
          goto LABEL_63; /*0x459ced*/
      }
    }
    else
    {
      if ( (v13 & 2) != 0 && (v13 & 4) != 0 ) /*0x459c10*/
      {
        v17 = g_TESSaveLoadGame; /*0x459c12*/
        v18 = (unsigned int *)g_TESSaveLoadGame->bufferCursor; /*0x459c18*/
        v19 = *v18; /*0x459c1e*/
        v46 = v18[1]; /*0x459c20*/
        v20 = v18[2]; /*0x459c24*/
        v17->bufferCursor = (unsigned __int8 *)(v18 + 3); /*0x459c2a*/
        v47 = v20; /*0x459c30*/
        v21 = sub_459950(this, v19); /*0x459c34*/
      }
      else
      {
        v22 = g_TESSaveLoadGame->bufferCursor; /*0x459c63*/
        v23 = *(_WORD *)v22; /*0x459c66*/
        g_TESSaveLoadGame->bufferCursor = v22 + 2; /*0x459c6c*/
        LOWORD(v49) = v23; /*0x459c6f*/
        v21 = sub_459990(this, v23); /*0x459c7b*/
      }
      if ( v21 != v3 ) /*0x459c3b*/
        goto LABEL_63; /*0x459c3b*/
    }
    SaveLoadChangesMap_RemoveChanges(*this, keyOut, 1); /*0x459cfd*/
    goto LABEL_63; /*0x459d02*/
  }
LABEL_65:
  if ( a3 ) /*0x459ebc*/
  {
    if ( NiTMap_GetAt(*(this + 2), v3, &v44) ) /*0x459ec7*/
    {
      v40 = v44; /*0x459ed0*/
      if ( !v44[1] && !*v44 ) /*0x459ed9*/
      {
        NiTMap_RemoveAt(*(this + 2), v3); /*0x459ee1*/
LABEL_74:
        FormHeapFree((unsigned int)v40); /*0x459f10*/
      }
    }
  }
  else if ( NiTMap_GetAt(*(this + 3), v3, &v44) ) /*0x459ef1*/
  {
    v40 = v44; /*0x459efa*/
    if ( !v44[1] && !*v44 ) /*0x459f03*/
    {
      NiTMap_RemoveAt(*(this + 3), v3); /*0x459f0b*/
      goto LABEL_74; /*0x459f0b*/
    }
  }
  return v42; /*0x459f1d*/
}
