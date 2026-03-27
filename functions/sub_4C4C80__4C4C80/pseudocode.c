char __thiscall sub_4C4C80(int this)
{
  int v2; // eax
  Data *OverrideFile; // eax
  Data *v4; // ecx
  Data *flags; // edi
  signed int ChunkType; // eax
  unsigned int length; // ebx
  int v8; // ecx
  int v9; // eax
  TESObjectCELL *v10; // ecx
  int v11; // eax
  int v12; // ebx
  TESObjectCELL *v13; // ecx
  int v14; // eax
  int v15; // eax
  TESObjectCELL *v16; // ecx
  int v17; // eax
  bool v18; // zf
  char v19; // bl
  const char *v20; // eax
  TESObjectCELL *v21; // edi
  int v22; // esi
  int XCoordinate; // eax
  unsigned int v25; // ecx
  int j; // ebx
  int v27; // edi
  int v28; // edx
  unsigned int v29; // eax
  int v30; // edx
  double v31; // rt0
  int v32; // edx
  int v33; // eax
  double v34; // st7
  int v35; // ebx
  int v36; // ecx
  int v37; // edi
  double v38; // st6
  float v39; // eax
  int v40; // edx
  double v41; // st6
  float *v42; // eax
  double v43; // st6
  int v44; // eax
  float v45; // edx
  int v46; // ecx
  float *v47; // edi
  double v48; // st7
  int i; // edi
  int v50; // ebx
  int v51; // ecx
  int v52; // ecx
  double v53; // st7
  int v54; // ecx
  double v55; // st7
  int v56; // ecx
  int v57; // eax
  int v58; // eax
  int *v59; // ebx
  unsigned int k; // edi
  unsigned int v61; // eax
  int v62; // eax
  TESForm *v63; // eax
  void *v64; // eax
  _DWORD **v65; // ecx
  int v66; // eax
  int v67; // eax
  TESForm *v68; // eax
  _DWORD *v69; // ebx
  int v70; // eax
  int v71; // eax
  int v72; // ebx
  TESObjectCELL *v73; // ecx
  int v74; // eax
  int v75; // eax
  TESObjectCELL *v76; // esi
  int v77; // [esp-8h] [ebp-15D0h]
  struct _s_RTTICompleteObjectLocator *v78; // [esp-4h] [ebp-15CCh]
  struct TypeDescriptor *YCoordinate; // [esp+0h] [ebp-15C8h]
  const char *type; // [esp+4h] [ebp-15C4h]
  unsigned int a4; // [esp+18h] [ebp-15B0h]
  float v82; // [esp+1Ch] [ebp-15ACh]
  int v83; // [esp+20h] [ebp-15A8h]
  int v84; // [esp+24h] [ebp-15A4h]
  int a2; // [esp+28h] [ebp-15A0h] BYREF
  TESForm v86; // [esp+2Ch] [ebp-159Ch] BYREF
  char v87[4]; // [esp+44h] [ebp-1584h]
  int a1; // [esp+48h] [ebp-1580h] BYREF
  float v89; // [esp+4Ch] [ebp-157Ch]
  float v90; // [esp+50h] [ebp-1578h]
  char Dst[4]; // [esp+54h] [ebp-1574h] BYREF
  float v92; // [esp+58h] [ebp-1570h]
  float v93; // [esp+5Ch] [ebp-156Ch]
  float v94; // [esp+60h] [ebp-1568h]
  float v95; // [esp+64h] [ebp-1564h]
  float v96; // [esp+68h] [ebp-1560h]
  float v97; // [esp+6Ch] [ebp-155Ch]
  float v98[1090]; // [esp+70h] [ebp-1558h] BYREF
  char v99[4]; // [esp+1178h] [ebp-450h] BYREF

  v2 = *(_DWORD *)(this + 0x1C);
  if ( (v2 & 8) == 0 )
  {
    *(_DWORD *)v87 = 0xFFFFFFFF;
    v86.member.modlist.next = (TESForm::ModReferenceList *)0xFFFFFFFF;
    a2 = 0;
    v86.member.refID = 0;
    if ( (v2 & 0x400) == 0 )
    {
      if ( (v2 & 7) == 0 )
        return 1;
      OverrideFile = TESForm_GetOverrideFile((TESForm *)this, 0xFFFFFFFF);
      a2 = (int)sub_4520F0(OverrideFile);
      if ( !TESFile::FindForm((Data *)a2, (TESForm *)this) || (unsigned __int8)TESFile_GetRecordType((Data *)a2) != 0x36 )
      {
        v17 = a2;
        v18 = a2 == 0;
        v19 = bDisableWarning_MESSAGES;
        bDisableWarning_MESSAGES = 0;
        if ( v18 )
          v20 = "UNKNOWN";
        else
          v20 = (const char *)(v17 + 0x1C);
        v21 = *(TESObjectCELL **)(this + 0x20);
        v22 = *(_DWORD *)(this + 0xC);
        type = v20;
        YCoordinate = (struct TypeDescriptor *)TESObjectCELL_GetYCoordinate(v21);
        XCoordinate = TESObjectCELL_GetXCoordinate(v21);
        PrintError(
          "Failed to load landscape data for LAND (%08X) in Cell (%i, %i) from file '%s'.",
          v22,
          XCoordinate,
          YCoordinate,
          type);
        bDisableWarning_MESSAGES = v19;
        return 0;
      }
      v4 = (Data *)a2;
      v86.member.refID = *(_DWORD *)(a2 + 0x25C);
LABEL_7:
      flags = v4;
      v86.member.flags = (TESForm::FormFlags)v4;
      if ( TESFIle_JumpToRecord(v4, (char *)v86.member.refID) )
      {
        HIWORD(v84) = 0;
        while ( 1 )
        {
          ChunkType = TESFile_GetChunkType(flags);
          if ( ChunkType <= 0x54474856 )
          {
            if ( ChunkType == 0x54474856 )
            {
              if ( (*(_BYTE *)(this + 0x1C) & 1) != 0 )
              {
                TESFile_GetChunkData(flags, v99, 0x448u);
                v44 = *(_DWORD *)(this + 0x24);
                v92 = flt_A32048;
                v93 = flt_A3B888;
                v45 = v93;
                *(float *)(v44 + 0x18) = v92;
                *(float *)(v44 + 0x1C) = v45;
                a4 = *(unsigned int *)v99;
                v46 = 1;
                v47 = v98;
                do
                {
                  LODWORD(v82) = v99[v46 + 3];
                  v82 = (double)SLODWORD(v82) + *(float *)&a4;
                  v48 = v82;
                  *v47 = v82;
                  if ( !(v46 % 0x21) )
                    v48 = v47[0xFFFFFFE0];
                  ++v46;
                  *(float *)&a4 = v48;
                  ++v47;
                }
                while ( v46 < 0x442 );
                for ( i = 0; i < 4; ++i )
                {
                  v50 = 0;
                  LODWORD(v82) = 0x10 * (i % 2 + 0x21 * (i / 2));
                  *(float *)&a4 = 0.0;
                  do
                  {
                    v83 = SLODWORD(v98[0x20 * ((int)a4 / 0x11) + LODWORD(v82) + (int)a4 / 0x11 + (int)a4 % 0x11]);
                    v86.member.modlist.data = (Data *)(int)*(float *)&v83;
                    v83 = ((int)a4 % 0x11) << 7;
                    v51 = *(_DWORD *)(this + 0x24);
                    v90 = (float)(8 * (int)v86.member.modlist.data);
                    v52 = *(_DWORD *)(*(_DWORD *)(v51 + 4) + 4 * i);
                    *(float *)&v83 = (double)v83 + *(float *)(4 * i + 0xB35BA8);
                    v53 = *(float *)&v83;
                    v83 = ((int)a4 / 0x11) << 7;
                    *(float *)(v50 + v52) = v53;
                    v54 = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(this + 0x24) + 4) + 4 * i);
                    *(float *)&v83 = (double)v83 + *(float *)(4 * i + 0xB35B98);
                    *(float *)(v54 + v50 + 4) = *(float *)&v83;
                    v55 = v90;
                    *(float *)(*(_DWORD *)(*(_DWORD *)(*(_DWORD *)(this + 0x24) + 4) + 4 * i) + v50 + 8) = v90;
                    v56 = *(_DWORD *)(this + 0x24);
                    if ( *(float *)(v56 + 0x18) <= v55 )
                    {
                      if ( *(float *)(v56 + 0x1C) < v55 )
                        *(float *)(v56 + 0x1C) = v55;
                    }
                    else
                    {
                      *(float *)(v56 + 0x18) = v55;
                    }
                    ++a4;
                    v50 += 0xC;
                  }
                  while ( v50 < 0xD8C );
                }
                flags = (Data *)v86.member.flags;
                HIBYTE(v84) = 1;
              }
            }
            else if ( ChunkType > 0x4C4D4E56 )
            {
              if ( ChunkType == 0x524C4356 && (*(_BYTE *)(this + 0x1C) & 2) != 0 )
              {
                TESFile_GetChunkData(flags, (char *)v98, 0xCC3u);
                v97 = 1.0;
                *(float *)&a4 = 0.0;
                v34 = dbl_A3DDD8;
                do
                {
                  v35 = 0x10 * ((int)a4 % 2 + 0x21 * ((int)a4 / 2));
                  v36 = 0;
                  v37 = 0;
                  do
                  {
                    LODWORD(v82) = *((unsigned __int8 *)&v98[0xC * (v36 / 0x11)] + 3 * v36 + 3 * v35);
                    v38 = (double)SLODWORD(v82);
                    LODWORD(v82) = *((unsigned __int8 *)&v98[0xC * (v36 / 0x11)] + 3 * v36 + 3 * v35 + 1);
                    LODWORD(v39) = *((unsigned __int8 *)&v98[0xC * (v36 / 0x11)] + 3 * v36 + 3 * v35 + 2);
                    v40 = *(_DWORD *)(this + 0x24);
                    ++v36;
                    v94 = v38 / v34;
                    v41 = (double)SLODWORD(v82);
                    v82 = v39;
                    v42 = (float *)(v37 + *(_DWORD *)(*(_DWORD *)(v40 + 0xC) + 4 * a4));
                    *v42 = v94;
                    v37 += 0x10;
                    v95 = v41 / v34;
                    v43 = (double)SLODWORD(v82);
                    v42[1] = v95;
                    v96 = v43 / v34;
                    v42[2] = v96;
                    v42[3] = v97;
                  }
                  while ( v37 < 0x1210 );
                  ++a4;
                }
                while ( (int)a4 < 4 );
                flags = (Data *)v86.member.flags;
              }
            }
            else
            {
              switch ( ChunkType )
              {
                case 0x4C4D4E56:
                  if ( (*(_BYTE *)(this + 0x1C) & 1) != 0 )
                  {
                    TESFile_GetChunkData(flags, (char *)v98, 0xCC3u);
                    for ( j = 0; j < 4; ++j )
                    {
                      v27 = 0;
                      v83 = 0x10 * (j % 2 + 0x21 * (j / 2));
                      *(float *)&a4 = 0.0;
                      do
                      {
                        v28 = *(_DWORD *)(this + 0x24);
                        v29 = 3 * (a4 + v83 + 0x10 * ((int)a4 / 0x11));
                        LODWORD(v82) = *((char *)v98 + v29);
                        v30 = *(_DWORD *)(*(_DWORD *)(v28 + 8) + 4 * j);
                        v31 = dbl_A46298;
                        v82 = (double)SLODWORD(v82) / v31;
                        *(float *)(v27 + v30) = v82;
                        LODWORD(v82) = *((char *)v98 + v29 + 1);
                        v32 = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(this + 0x24) + 8) + 4 * j);
                        v82 = (double)SLODWORD(v82) / v31;
                        *(float *)(v32 + v27 + 4) = v82;
                        LODWORD(v82) = *((char *)v98 + v29 + 2);
                        v33 = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(this + 0x24) + 8) + 4 * j);
                        v82 = (double)SLODWORD(v82) / v31;
                        *(float *)(v33 + v27 + 8) = v82;
                        sub_43F350((float *)(v27 + *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(this + 0x24) + 8) + 4 * j)));
                        ++a4;
                        v27 += 0xC;
                      }
                      while ( v27 < 0xD8C );
                    }
                    flags = (Data *)v86.member.flags;
                    BYTE2(v84) = 1;
                  }
                  break;
                case 0x41544144:
                  if ( (*(_DWORD *)(this + 0x1C) & 0x400) != 0 )
                  {
                    TESFile_GetChunkData(flags, Dst, 4u);
                    v25 = Dst[0] & 7 | *(_DWORD *)(this + 0x1C) & 0xFFFFFFF8;
                    *(_DWORD *)Dst = Dst[0] & 7;
                    *(_DWORD *)(this + 0x1C) = v25;
                  }
                  break;
                case 0x4443504D:
                  length = flags->currentChunk.length;
                  *(float *)&a4 = COERCE_FLOAT(FormHeapAlloc(length));
                  TESFile_GetChunkData(flags, (char *)a4, length);
                  v8 = *(_DWORD *)(*(_DWORD *)(this + 0x24) + 0x50);
                  if ( v8 )
                  {
                    if ( *(_WORD *)(v8 + 4) )
                    {
                      if ( !--*(_WORD *)(v8 + 6) )
                        (**(void (__thiscall ***)(int, int))v8)(v8, 1);
                    }
                    *(_DWORD *)(*(_DWORD *)(this + 0x24) + 0x50) = 0;
                  }
                  sub_4C2230(length, (_DWORD *)a4, length, (_DWORD *)(*(_DWORD *)(this + 0x24) + 0x50));
                  v9 = *(_DWORD *)(*(_DWORD *)(this + 0x24) + 0x50);
                  if ( v9 )
                  {
                    if ( *(_WORD *)(v9 + 4) )
                      ++*(_WORD *)(v9 + 6);
                    *(_DWORD *)(this + 0x1C) |= 0x800u;
                  }
                  FormHeapFree(a4);
                  break;
              }
            }
            goto LABEL_100;
          }
          v57 = ChunkType - 0x54585441;
          if ( v57 )
          {
            v58 = v57 - 1;
            if ( !v58 )
            {
              if ( (*(_BYTE *)(this + 0x1C) & 4) != 0 )
              {
                a1 = 0;
                v89 = 0.0;
                TESFile_GetChunkData(flags, (char *)&a1, 8u);
                TESForm_ResolveFormID((UInt32 *)&a1, flags);
                type = 0;
                YCoordinate = &TESLandTexture `RTTI Type Descriptor';
                v78 = (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor';
                v77 = 0;
                v63 = TESForm_LookupByFormID(a1);
                v64 = OblivionDynamicCast(v63, v77, v78, YCoordinate, (int)type);
                *(_DWORD *)(*(_DWORD *)(this + 0x24) + 4 * LOBYTE(v89) + 0x20) = v64;
                v65 = (_DWORD **)(*(_DWORD *)(this + 0x24) + 4 * LOBYTE(v89) + 0x20);
                if ( *v65 )
                {
                  sub_4C9530(*v65);
                }
                else
                {
                  type = (const char *)LOBYTE(v89);
                  YCoordinate = (struct TypeDescriptor *)a1;
                  v78 = (struct _s_RTTICompleteObjectLocator *)sub_4BF040((TESObjectCELL **)this);
                  v66 = sub_4BF020((TESObjectCELL **)this);
                  PrintError(
                    "Land (%i, %i) unable to find base texture ID (%08X) for block %i.",
                    v66,
                    v78,
                    YCoordinate,
                    type);
                }
              }
              goto LABEL_100;
            }
            if ( v58 == 0x14 && (*(_BYTE *)(this + 0x1C) & 4) != 0 )
            {
              if ( *(int *)v87 >= 0 && (int)v86.member.modlist.next >= 0 )
              {
                a4 = *(unsigned int *)(v86.member.flags + 0x254);
                if ( (a4 & 7) == 0 )
                {
                  v59 = MemoryHeap_Alloc_ZlibCallback(a4);
                  TESFile_GetChunkData((Data *)v86.member.flags, (char *)v59, a4);
                  LODWORD(v90) = a4 >> 3;
                  for ( k = 0; k < LODWORD(v90); ++k )
                    sub_4BF270(
                      (_DWORD *)this,
                      v87[0],
                      v59[2 * k],
                      (unsigned __int16)v86.member.modlist.next,
                      *(float *)&v59[2 * k + 1]);
                  MemoryHeap_Free_checked(v59);
                  flags = (Data *)v86.member.flags;
                  v61 = 0xFFFFFFFF;
                  *(_DWORD *)v87 = 0xFFFFFFFF;
                  goto LABEL_99;
                }
                type = (const char *)(v86.member.flags + 0x1C);
                YCoordinate = (struct TypeDescriptor *)sub_4BF040((TESObjectCELL **)this);
                v62 = sub_4BF020((TESObjectCELL **)this);
                PrintError("Land (%i, %i) found unrecognized vertex texture data in file %s.", v62, YCoordinate, type);
              }
              flags = (Data *)v86.member.flags;
              v61 = 0xFFFFFFFF;
              *(_DWORD *)v87 = 0xFFFFFFFF;
LABEL_99:
              v86.member.modlist.next = (TESForm::ModReferenceList *)v61;
            }
          }
          else if ( (*(_BYTE *)(this + 0x1C) & 4) != 0 )
          {
            v86.vtbl = 0;
            *(_DWORD *)&v86.member.type = 0;
            TESFile_GetChunkData(flags, (char *)&v86, 8u);
            if ( *(_WORD *)&v86.member.pad[1] > 7u )
            {
              type = (const char *)v86.member.type;
              YCoordinate = (struct TypeDescriptor *)*(unsigned __int16 *)&v86.member.pad[1];
              v78 = (struct _s_RTTICompleteObjectLocator *)sub_4BF040((TESObjectCELL **)this);
              v67 = sub_4BF020((TESObjectCELL **)this);
              PrintError("Land (%i, %i) clamping invalid index %i for block %i.", v67, v78, YCoordinate, type);
              *(_WORD *)&v86.member.pad[1] = 7;
            }
            if ( v86.vtbl )
            {
              TESForm_ResolveFormID((UInt32 *)&v86, flags);
              type = 0;
              YCoordinate = &TESLandTexture `RTTI Type Descriptor';
              v78 = (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor';
              v77 = 0;
              v68 = TESForm_LookupByFormID((UInt32)v86.vtbl);
              v69 = OblivionDynamicCast(v68, v77, v78, YCoordinate, (int)type);
              if ( !v69 )
              {
                type = (const char *)v86.member.type;
                YCoordinate = (struct TypeDescriptor *)v86.vtbl;
                v78 = (struct _s_RTTICompleteObjectLocator *)sub_4BF040((TESObjectCELL **)this);
                v70 = sub_4BF020((TESObjectCELL **)this);
                PrintError(
                  "Land (%i, %i) unable to find additional texture ID (%08X) for block %i.",
                  v70,
                  v78,
                  YCoordinate,
                  type);
              }
            }
            else
            {
              v69 = (_DWORD *)dword_B35BE4;
            }
            *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(this + 0x24) + 4 * (unsigned __int8)v86.member.type + 0x30)
                      + 4 * *(unsigned __int16 *)&v86.member.pad[1]) = v69;
            if ( v69 )
              sub_4C9530(v69);
            v61 = *(unsigned __int16 *)&v86.member.pad[1];
            *(_DWORD *)v87 = v86.member.type;
            goto LABEL_99;
          }
LABEL_100:
          if ( !TESFile_GetNextChunk(flags) )
          {
            if ( HIBYTE(v84) )
            {
              if ( !BYTE2(v84) )
              {
                v71 = *(_DWORD *)(this + 0x24);
                if ( v71 )
                {
                  v72 = *(_DWORD *)(v71 + 0x9C);
                }
                else
                {
                  v73 = *(TESObjectCELL **)(this + 0x20);
                  if ( v73 )
                    v72 = TESObjectCELL_GetYCoordinate(v73);
                  else
                    v72 = 0;
                }
                v74 = *(_DWORD *)(this + 0x24);
                if ( v74 )
                {
                  v75 = *(_DWORD *)(v74 + 0x98);
                }
                else
                {
                  v76 = *(TESObjectCELL **)(this + 0x20);
                  if ( v76 )
                    v75 = TESObjectCELL_GetXCoordinate(v76);
                  else
                    v75 = 0;
                }
                PrintError("Land for cell (%i, %i) in file '%s' does not contain Normal Data.", v75, v72, flags->name);
              }
            }
            return 1;
          }
        }
      }
      return 0;
    }
    v10 = *(TESObjectCELL **)(this + 0x20);
    if ( v10 )
    {
      v86.member.modlist.data = (Data *)TESObjectCELL_GetWorldSpace(v10);
      if ( v86.member.modlist.data )
      {
        v11 = *(_DWORD *)(this + 0x24);
        if ( v11 )
        {
          v12 = *(_DWORD *)(v11 + 0x9C);
        }
        else
        {
          v13 = *(TESObjectCELL **)(this + 0x20);
          v12 = v13 ? TESObjectCELL_GetYCoordinate(v13) : 0;
        }
        v14 = *(_DWORD *)(this + 0x24);
        if ( v14 )
        {
          v15 = *(_DWORD *)(v14 + 0x98);
        }
        else
        {
          v16 = *(TESObjectCELL **)(this + 0x20);
          v15 = v16 ? TESObjectCELL_GetXCoordinate(v16) : 0;
        }
        if ( sub_4F18B0(&v86.member.modlist.data->errorState, v15, v12, &a2, &v86.member.refID) )
        {
          v4 = (Data *)a2;
          goto LABEL_7;
        }
      }
    }
  }
  return 1;
}
