char __thiscall sub_4E65B0(int this, Data *a2)
{
  Data *v2; // ebx
  char result; // al
  int v5; // eax
  int v6; // eax
  ExtraDataList *v7; // ecx
  TESObjectCELL *v8; // edi
  signed int ChunkType; // eax
  UInt32 length; // edi
  int *v11; // ebp
  unsigned int v12; // edi
  TESForm *v13; // eax
  _DWORD *v14; // ebx
  unsigned int v15; // ecx
  int v16; // eax
  int v17; // ecx
  TESObjectCELL *v18; // ecx
  char IsInterior; // al
  TESObjectCELL *v20; // ecx
  TESWorldSpace *v21; // eax
  TESObjectCELL *v22; // edi
  int XCoordinate; // eax
  const char *v24; // eax
  int v25; // eax
  const char *v26; // eax
  const char *v27; // eax
  unsigned int v28; // ebp
  _DWORD *v29; // edi
  _DWORD *v30; // eax
  char *v31; // eax
  signed int v32; // ebx
  unsigned int v33; // ebp
  float *v34; // eax
  float *v35; // edi
  float *v36; // eax
  signed int v37; // edx
  int v38; // ebp
  char *v39; // ecx
  bool v40; // zf
  TESObjectCELL *v41; // ecx
  char v42; // al
  TESObjectCELL *v43; // ecx
  TESWorldSpace *v44; // eax
  TESObjectCELL *v45; // edi
  int v46; // eax
  const char *v47; // eax
  int v48; // eax
  const char *v49; // eax
  const char *v50; // eax
  int v51; // eax
  float *v52; // ebp
  _BYTE *v53; // edi
  char *v54; // ebx
  unsigned __int16 v55; // ax
  char *v56; // eax
  _DWORD *v57; // eax
  int v58; // ecx
  size_t v59; // [esp-18h] [ebp-174h]
  size_t v60; // [esp-18h] [ebp-174h]
  size_t v61; // [esp-14h] [ebp-170h]
  size_t v62; // [esp-14h] [ebp-170h]
  size_t v63; // [esp-Ch] [ebp-168h]
  size_t v64; // [esp-Ch] [ebp-168h]
  size_t v65; // [esp-8h] [ebp-164h]
  int YCoordinate; // [esp-8h] [ebp-164h]
  size_t v67; // [esp-8h] [ebp-164h]
  size_t v68; // [esp-8h] [ebp-164h]
  int v69; // [esp-8h] [ebp-164h]
  int v70; // [esp-4h] [ebp-160h]
  int v71; // [esp-4h] [ebp-160h]
  unsigned int v72; // [esp-4h] [ebp-160h]
  int v73; // [esp-4h] [ebp-160h]
  int v74; // [esp-4h] [ebp-160h]
  int v75; // [esp-4h] [ebp-160h]
  const char *v76; // [esp+0h] [ebp-15Ch]
  char v77; // [esp+1Bh] [ebp-141h]
  void *v78; // [esp+1Ch] [ebp-140h] BYREF
  char *v79; // [esp+20h] [ebp-13Ch]
  unsigned int v80; // [esp+24h] [ebp-138h]
  int v81; // [esp+28h] [ebp-134h]
  TESObjectCELL *v82; // [esp+2Ch] [ebp-130h]
  char *v83; // [esp+30h] [ebp-12Ch]
  char ArgList[4]; // [esp+34h] [ebp-128h] BYREF
  TESWorldSpace *WorldSpace; // [esp+38h] [ebp-124h]
  float WaterHeight; // [esp+3Ch] [ebp-120h]
  float *v87; // [esp+40h] [ebp-11Ch]
  Data *a1; // [esp+44h] [ebp-118h]
  char Dest[260]; // [esp+48h] [ebp-114h] BYREF
  int v90; // [esp+158h] [ebp-4h]

  v2 = a2;
  result = 0;
  a1 = a2;
  v77 = 0;
  if ( a2 && *(_WORD *)(this + 0x30) )
  {
    v5 = *(_DWORD *)(this + 0x24);
    v79 = 0;
    v83 = 0;
    v80 = 0;
    if ( !v5 )
    {
      v6 = FormHeapAlloc(0x10u);
      if ( v6 )
      {
        *(_DWORD *)v6 = &NiTArray<TESPathGridPoint *>::`vftable';
        *(_WORD *)(v6 + 8) = 0;
        *(_WORD *)(v6 + 0xE) = 1;
        *(_WORD *)(v6 + 0xA) = 0;
        *(_WORD *)(v6 + 0xC) = 0;
        *(_DWORD *)(v6 + 4) = 0;
      }
      else
      {
        v6 = 0;
      }
      v90 = 0xFFFFFFFF;
      *(_DWORD *)(this + 0x24) = v6;
    }
    v7 = *(ExtraDataList **)(this + 0x20);
    WaterHeight = flt_A3B888;
    if ( v7 )
    {
      if ( (v7[1].members.m_presenceBitfield[8] & 2) != 0 )
        WaterHeight = TESObjectCELL_GetWaterHeight(v7);
    }
    v8 = *(TESObjectCELL **)(this + 0x20);
    WorldSpace = 0;
    v82 = v8;
    if ( v8 )
    {
      if ( !TESObjectCELL_IsInterior(v8) )
      {
        WorldSpace = TESObjectCELL_GetWorldSpace(v8);
        v82 = 0;
      }
    }
    Dest[0] = 0;
    while ( 1 )
    {
      ChunkType = TESFile_GetChunkType(v2);
      if ( !ChunkType )
      {
LABEL_86:
        FormHeapFree((unsigned int)v79);
        FormHeapFree((unsigned int)v83);
        return v77;
      }
      if ( ChunkType > 0x50524750 )
        break;
      if ( ChunkType != 0x50524750 )
      {
        if ( ChunkType == 0x49524750 )
        {
          v28 = v2->currentChunk.length / 0x10;
          if ( !(v2->currentChunk.length % 0x10) )
          {
            HIDWORD(v67) = 1;
            LODWORD(v67) = 0x10 * v28;
            v78 = j_MemoryHeap_Alloc(&FormHeap, v28, v67, (int)v76);
            TESFile_GetChunkData(v2, (char *)v78, 0x10 * v28);
            if ( v28 )
            {
              v29 = v78;
              do
              {
                v30 = (_DWORD *)FormHeapAlloc(0x10u);
                *v30 = *v29;
                v30[1] = v29[1];
                v30[2] = v29[2];
                v30[3] = v29[3];
                BSSimpleList_PushFront((_DWORD *)(this + 0x28), (int)v30);
                v29 += 4;
                --v28;
              }
              while ( v28 );
            }
            MemoryHeap_Free_checked(v78);
          }
        }
        else if ( ChunkType == 0x4C524750 )
        {
          length = v2->currentChunk.length;
          if ( length )
          {
            v11 = MemoryHeap_Alloc_ZlibCallback(v2->currentChunk.length);
            TESFile_GetChunkData(v2, (char *)v11, 0);
            v78 = (void *)(length >> 2);
            if ( length >> 2 )
            {
              *(_DWORD *)ArgList = *v11;
              v12 = 1;
              TESForm_ResolveFormID((UInt32 *)ArgList, v2);
              v13 = TESForm_LookupByFormID(*(UInt32 *)ArgList);
              v14 = OblivionDynamicCast(
                      v13,
                      0,
                      (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                      (struct TypeDescriptor *)&TESObjectREFR `RTTI Type Descriptor',
                      0);
              if ( v14 )
              {
                if ( (unsigned int)v78 > 1 )
                {
                  do
                  {
                    v15 = v11[v12];
                    v16 = *(_DWORD *)(this + 0x24);
                    ++v12;
                    if ( v16 )
                    {
                      if ( v15 < *(unsigned __int16 *)(this + 0x30) )
                      {
                        v17 = *(_DWORD *)(*(_DWORD *)(v16 + 4) + 4 * v15);
                        if ( v17 )
                          sub_4E50E0((_DWORD *)this, v14, v17);
                      }
                    }
                  }
                  while ( v12 < (unsigned int)v78 );
                }
              }
              else
              {
                if ( !Dest[0] )
                {
                  v18 = *(TESObjectCELL **)(this + 0x20);
                  if ( v18 )
                  {
                    IsInterior = TESObjectCELL_IsInterior(v18);
                    v20 = *(TESObjectCELL **)(this + 0x20);
                    if ( IsInterior )
                    {
                      v27 = v20->vtbl->GetEditorName((TESForm *)v20);
                      HIDWORD(v63) = "%s";
                      LODWORD(v63) = 0x104;
                      _snprintf(Dest, v63, v27);
                    }
                    else
                    {
                      v21 = TESObjectCELL_GetWorldSpace(v20);
                      v22 = *(TESObjectCELL **)(this + 0x20);
                      if ( v21 )
                      {
                        v70 = (int)v21->vtbl->GetEditorName((TESForm *)v21);
                        YCoordinate = TESObjectCELL_GetYCoordinate(v22);
                        XCoordinate = TESObjectCELL_GetXCoordinate(v22);
                        v24 = (const char *)((int (__thiscall *)(TESObjectCELL *, int, int, int))v22->vtbl->GetEditorName)(
                                              v22,
                                              XCoordinate,
                                              YCoordinate,
                                              v70);
                        HIDWORD(v59) = "%s (%d, %d) in world %s";
                        LODWORD(v59) = 0x104;
                        _snprintf(Dest, v59, v24);
                      }
                      else
                      {
                        v71 = TESObjectCELL_GetYCoordinate(*(TESObjectCELL **)(this + 0x20));
                        v25 = TESObjectCELL_GetXCoordinate(v22);
                        v26 = (const char *)((int (__thiscall *)(TESObjectCELL *, int, int))v22->vtbl->GetEditorName)(
                                              v22,
                                              v25,
                                              v71);
                        HIDWORD(v61) = "%s (%d, %d)";
                        LODWORD(v61) = 0x104;
                        _snprintf(Dest, v61, v26);
                      }
                    }
                  }
                  else
                  {
                    HIDWORD(v65) = "UNKNOWN";
                    LODWORD(v65) = 0x104;
                    _snprintf(Dest, v65, v76);
                  }
                }
                PrintError(
                  "Could not find reference (%08X) for linked points in pathgrid for cell %s.",
                  *(_DWORD *)ArgList,
                  Dest);
              }
            }
            MemoryHeap_Free_checked(v11);
          }
        }
        goto LABEL_85;
      }
      NiTArray_SetSize(*(unsigned __int16 **)(this + 0x24), *(unsigned __int16 *)(this + 0x30));
      v31 = (char *)FormHeapAlloc(
                      (unsigned __int64)*(unsigned __int16 *)(this + 0x30) >> 0x1C != 0
                    ? 0xFFFFFFFF
                    : 0x10 * *(unsigned __int16 *)(this + 0x30));
      v72 = 0x10 * *(unsigned __int16 *)(this + 0x30);
      v79 = v31;
      TESFile_GetChunkData(a1, v31, v72);
      v32 = 0;
      if ( *(_WORD *)(this + 0x30) )
      {
        v33 = (unsigned int)v79;
        while ( 1 )
        {
          v34 = (float *)FormHeapAlloc(0x2Cu);
          v87 = v34;
          v90 = 1;
          v35 = v34 ? sub_4E7DF0(v34) : 0;
          v90 = 0xFFFFFFFF;
          v78 = v35;
          sub_4BEF50(v35, (_DWORD *)v33);
          NiTArray_SetAt(*(NiTArray_NiTexturingPropertyMap **)(this + 0x24), v32, &v78);
          if ( WaterHeight > (double)*(float *)(v33 + 8) )
            sub_67ED00(v35, 1);
          LOBYTE(v81) = 0;
          if ( v82 )
            break;
          if ( WorldSpace )
          {
            sub_4F0600(v33);
LABEL_56:
            if ( v36 )
              LOBYTE(v81) = 1;
          }
          sub_67ED50(v35, v81);
          sub_4E5380((char *)this, (char *)v35);
          v37 = *(unsigned __int16 *)(this + 0x30);
          v80 += *(unsigned __int8 *)(v33 + 0xC);
          ++v32;
          v33 += 0x10;
          if ( v32 >= v37 )
            goto LABEL_59;
        }
        v36 = sub_4CBBB0(v82, (float *)v33);
        goto LABEL_56;
      }
LABEL_59:
      if ( !v80 )
        goto LABEL_84;
LABEL_85:
      v2 = a1;
      if ( !TESFile_GetNextChunk(a1) )
        goto LABEL_86;
    }
    if ( ChunkType != 0x52524750 || !v79 )
      goto LABEL_85;
    v38 = v80;
    v87 = 0;
    v39 = (char *)FormHeapAlloc((unsigned __int64)v80 >> 0x1F != 0 ? 0xFFFFFFFF : 2 * v80);
    v40 = v2->currentChunk.length == 2 * v38;
    v83 = v39;
    if ( v40 )
    {
      TESFile_GetChunkData(v2, v39, 2 * v38);
    }
    else
    {
      if ( !Dest[0] )
      {
        v41 = *(TESObjectCELL **)(this + 0x20);
        if ( v41 )
        {
          v42 = TESObjectCELL_IsInterior(v41);
          v43 = *(TESObjectCELL **)(this + 0x20);
          if ( v42 )
          {
            v50 = v43->vtbl->GetEditorName((TESForm *)v43);
            HIDWORD(v64) = "%s";
            LODWORD(v64) = 0x104;
            _snprintf(Dest, v64, v50);
          }
          else
          {
            v44 = TESObjectCELL_GetWorldSpace(v43);
            v45 = *(TESObjectCELL **)(this + 0x20);
            if ( v44 )
            {
              v73 = (int)v44->vtbl->GetEditorName((TESForm *)v44);
              v69 = TESObjectCELL_GetYCoordinate(v45);
              v46 = TESObjectCELL_GetXCoordinate(v45);
              v47 = (const char *)((int (__thiscall *)(TESObjectCELL *, int, int, int))v45->vtbl->GetEditorName)(
                                    v45,
                                    v46,
                                    v69,
                                    v73);
              HIDWORD(v60) = "%s (%d, %d) in world %s";
              LODWORD(v60) = 0x104;
              _snprintf(Dest, v60, v47);
            }
            else
            {
              v74 = TESObjectCELL_GetYCoordinate(*(TESObjectCELL **)(this + 0x20));
              v48 = TESObjectCELL_GetXCoordinate(v45);
              v49 = (const char *)((int (__thiscall *)(TESObjectCELL *, int, int))v45->vtbl->GetEditorName)(
                                    v45,
                                    v48,
                                    v74);
              HIDWORD(v62) = "%s (%d, %d)";
              LODWORD(v62) = 0x104;
              _snprintf(Dest, v62, v49);
            }
          }
        }
        else
        {
          HIDWORD(v68) = "UNKNOWN";
          LODWORD(v68) = 0x104;
          _snprintf(Dest, v68, v76);
        }
      }
      PrintError(
        "PathGrid (%08X) in cell %s found different connection data than it was expecting:\r\n"
        "\tExpected: %i\t Found: %i",
        *(_DWORD *)(this + 0xC),
        Dest,
        v38,
        v2->currentChunk.length >> 1);
    }
    v51 = 0;
    v40 = *(_WORD *)(this + 0x30) == 0;
    v78 = 0;
    if ( !v40 )
    {
      v52 = v87;
      v53 = v79 + 0xC;
      do
      {
        v54 = *(char **)(*(_DWORD *)(*(_DWORD *)(this + 0x24) + 4) + 4 * v51);
        if ( *v53 )
        {
          do
          {
            v55 = *(_WORD *)&v83[2 * (_DWORD)v52];
            if ( v55 < *(_WORD *)(this + 0x30) )
            {
              v56 = *(char **)(*(_DWORD *)(*(_DWORD *)(this + 0x24) + 4) + 4 * v55);
              if ( v56 )
              {
                if ( v56 != v54 )
                {
                  v75 = (int)v56;
                  v57 = (_DWORD *)sub_4E7DE0(v54);
                  BSSimpleList_PushFront(v57, v75);
                }
              }
            }
            --*v53;
            v52 = (float *)((char *)v52 + 1);
          }
          while ( *v53 );
          v51 = (int)v78;
        }
        v58 = *(unsigned __int16 *)(this + 0x30);
        ++v51;
        v53 += 0x10;
        v78 = (void *)v51;
      }
      while ( v51 < v58 );
    }
LABEL_84:
    v77 = 1;
    goto LABEL_85;
  }
  return result;
}
