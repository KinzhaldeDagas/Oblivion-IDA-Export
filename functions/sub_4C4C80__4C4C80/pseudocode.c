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
  const char ***v65; // ecx
  int v66; // eax
  int v67; // eax
  TESForm *v68; // eax
  const char **v69; // ebx
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

  v2 = *(_DWORD *)(this + 0x1C); /*0x4c4ca2*/
  if ( (v2 & 8) == 0 )
  {
    *(_DWORD *)v87 = 0xFFFFFFFF; /*0x4c4cb8*/
    v86.member.modlist.next = (TESForm::ModReferenceList *)0xFFFFFFFF; /*0x4c4cbc*/
    a2 = 0; /*0x4c4cc0*/
    v86.member.refID = 0; /*0x4c4cc4*/
    if ( (v2 & 0x400) == 0 ) /*0x4c4cc8*/
    {
      if ( (v2 & 7) == 0 ) /*0x4c4cd0*/
        return 1; /*0x4c4cd0*/
      OverrideFile = TESForm_GetOverrideFile((TESForm *)this, 0xFFFFFFFF); /*0x4c4cd9*/
      a2 = (int)TESFile_GetThreadSafeFile(OverrideFile); /*0x4c4ce8*/
      if ( !TESFile::FindForm((Data *)a2, (TESForm *)this) || (unsigned __int8)TESFile_GetRecordType((Data *)a2) != 0x36 ) /*0x4c4d04*/
      {
        v17 = a2; /*0x4c4e8b*/
        v18 = a2 == 0; /*0x4c4e8f*/
        v19 = bDisableWarning_MESSAGES; /*0x4c4e91*/
        bDisableWarning_MESSAGES = 0; /*0x4c4e97*/
        if ( v18 ) /*0x4c4e9e*/
          v20 = "UNKNOWN"; /*0x4c4ea5*/
        else
          v20 = (const char *)(v17 + 0x1C); /*0x4c4ea0*/
        v21 = *(TESObjectCELL **)(this + 0x20); /*0x4c4eaa*/
        v22 = *(_DWORD *)(this + 0xC); /*0x4c4ead*/
        type = v20; /*0x4c4eb0*/
        YCoordinate = (struct TypeDescriptor *)TESObjectCELL_GetYCoordinate(v21); /*0x4c4eb8*/
        XCoordinate = TESObjectCELL_GetXCoordinate(v21); /*0x4c4ebb*/
        PrintError( /*0x4c4ec7*/
          "Failed to load landscape data for LAND (%08X) in Cell (%i, %i) from file '%s'.",
          v22,
          XCoordinate,
          YCoordinate,
          type);
        bDisableWarning_MESSAGES = v19; /*0x4c4ecf*/
        return 0; /*0x4c4eeb*/
      }
      v4 = (Data *)a2; /*0x4c4d0a*/
      v86.member.refID = *(_DWORD *)(a2 + 0x25C); /*0x4c4d14*/
LABEL_7:
      flags = v4; /*0x4c4d18*/
      v86.member.flags = (TESForm::FormFlags)v4; /*0x4c4d1f*/
      if ( TESFIle_JumpToRecord(v4, (char *)v86.member.refID) ) /*0x4c4d23*/
      {
        HIWORD(v84) = 0; /*0x4c4d35*/
        while ( 1 ) /*0x4c4d3c*/
        {
          ChunkType = TESFile_GetChunkType(flags); /*0x4c4d3c*/
          if ( ChunkType <= 0x54474856 ) /*0x4c4d46*/
          {
            if ( ChunkType == 0x54474856 ) /*0x4c4d4c*/
            {
              if ( (*(_BYTE *)(this + 0x1C) & 1) != 0 ) /*0x4c5157*/
              {
                TESFile_GetChunkData(flags, v99, 0x448u); /*0x4c516c*/
                v44 = *(_DWORD *)(this + 0x24); /*0x4c5177*/
                v92 = flt_A32048; /*0x4c517a*/
                v93 = flt_A3B888; /*0x4c5188*/
                v45 = v93; /*0x4c518c*/
                *(float *)(v44 + 0x18) = v92; /*0x4c5190*/
                *(float *)(v44 + 0x1C) = v45; /*0x4c5193*/
                a4 = *(unsigned int *)v99; /*0x4c519d*/
                v46 = 1; /*0x4c51a1*/
                v47 = v98; /*0x4c51a6*/
                do /*0x4c51f1*/
                {
                  LODWORD(v82) = v99[v46 + 3]; /*0x4c51b8*/
                  v82 = (double)SLODWORD(v82) + *(float *)&a4; /*0x4c51ce*/
                  v48 = v82; /*0x4c51d2*/
                  *v47 = v82; /*0x4c51d6*/
                  if ( !(v46 % 0x21) ) /*0x4c51c8*/
                    v48 = v47[0xFFFFFFE0]; /*0x4c51de*/
                  ++v46; /*0x4c51e1*/
                  *(float *)&a4 = v48; /*0x4c51e4*/
                  ++v47; /*0x4c51e8*/
                }
                while ( v46 < 0x442 ); /*0x4c51f1*/
                for ( i = 0; i < 4; ++i ) /*0x4c51f3*/
                {
                  v50 = 0; /*0x4c5217*/
                  LODWORD(v82) = 0x10 * (i % 2 + 0x21 * (i / 2)); /*0x4c5219*/
                  *(float *)&a4 = 0.0; /*0x4c521d*/
                  do /*0x4c5305*/
                  {
                    v83 = SLODWORD(v98[0x20 * ((int)a4 / 0x11) + LODWORD(v82) + (int)a4 / 0x11 + (int)a4 % 0x11]); /*0x4c5250*/
                    v86.member.modlist.data = (Data *)(int)*(float *)&v83; /*0x4c5258*/
                    v83 = ((int)a4 % 0x11) << 7; /*0x4c5271*/
                    v51 = *(_DWORD *)(this + 0x24); /*0x4c5275*/
                    v90 = (float)(8 * (int)v86.member.modlist.data); /*0x4c5278*/
                    v52 = *(_DWORD *)(*(_DWORD *)(v51 + 4) + 4 * i); /*0x4c5283*/
                    *(float *)&v83 = (double)v83 + *(float *)(4 * i + 0xB35BA8); /*0x4c5290*/
                    v53 = *(float *)&v83; /*0x4c5294*/
                    v83 = ((int)a4 / 0x11) << 7; /*0x4c5298*/
                    *(float *)(v50 + v52) = v53; /*0x4c529c*/
                    v54 = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(this + 0x24) + 4) + 4 * i); /*0x4c52a9*/
                    *(float *)&v83 = (double)v83 + *(float *)(4 * i + 0xB35B98); /*0x4c52b3*/
                    *(float *)(v54 + v50 + 4) = *(float *)&v83; /*0x4c52bb*/
                    v55 = v90; /*0x4c52c5*/
                    *(float *)(*(_DWORD *)(*(_DWORD *)(*(_DWORD *)(this + 0x24) + 4) + 4 * i) + v50 + 8) = v90; /*0x4c52cc*/
                    v56 = *(_DWORD *)(this + 0x24); /*0x4c52d0*/
                    if ( *(float *)(v56 + 0x18) <= v55 ) /*0x4c52dd*/
                    {
                      if ( *(float *)(v56 + 0x1C) < v55 ) /*0x4c52ee*/
                        *(float *)(v56 + 0x1C) = v55; /*0x4c52f0*/
                    }
                    else
                    {
                      *(float *)(v56 + 0x18) = v55; /*0x4c52df*/
                    }
                    ++a4; /*0x4c52f7*/
                    v50 += 0xC; /*0x4c52fc*/
                  }
                  while ( v50 < 0xD8C ); /*0x4c5305*/
                }
                flags = (Data *)v86.member.flags; /*0x4c5317*/
                HIBYTE(v84) = 1; /*0x4c531b*/
              }
            }
            else if ( ChunkType > 0x4C4D4E56 ) /*0x4c4d57*/
            {
              if ( ChunkType == 0x524C4356 && (*(_BYTE *)(this + 0x1C) & 2) != 0 ) /*0x4c5051*/
              {
                TESFile_GetChunkData(flags, (char *)v98, 0xCC3u); /*0x4c5063*/
                v97 = 1.0; /*0x4c506a*/
                *(float *)&a4 = 0.0; /*0x4c506e*/
                v34 = dbl_A3DDD8; /*0x4c5076*/
                do /*0x4c5142*/
                {
                  v35 = 0x10 * ((int)a4 % 2 + 0x21 * ((int)a4 / 2)); /*0x4c509d*/
                  v36 = 0; /*0x4c50a0*/
                  v37 = 0; /*0x4c50a2*/
                  do /*0x4c512e*/
                  {
                    LODWORD(v82) = *((unsigned __int8 *)&v98[0xC * (v36 / 0x11)] + 3 * v36 + 3 * v35); /*0x4c50c4*/
                    v38 = (double)SLODWORD(v82); /*0x4c50cd*/
                    LODWORD(v82) = *((unsigned __int8 *)&v98[0xC * (v36 / 0x11)] + 3 * v36 + 3 * v35 + 1); /*0x4c50d1*/
                    LODWORD(v39) = *((unsigned __int8 *)&v98[0xC * (v36 / 0x11)] + 3 * v36 + 3 * v35 + 2); /*0x4c50d5*/
                    v40 = *(_DWORD *)(this + 0x24); /*0x4c50dc*/
                    ++v36; /*0x4c50df*/
                    v94 = v38 / v34; /*0x4c50e2*/
                    v41 = (double)SLODWORD(v82); /*0x4c50e6*/
                    v82 = v39; /*0x4c50ea*/
                    v42 = (float *)(v37 + *(_DWORD *)(*(_DWORD *)(v40 + 0xC) + 4 * a4)); /*0x4c50fe*/
                    *v42 = v94; /*0x4c5100*/
                    v37 += 0x10; /*0x4c5102*/
                    v95 = v41 / v34; /*0x4c510b*/
                    v43 = (double)SLODWORD(v82); /*0x4c510f*/
                    v42[1] = v95; /*0x4c5117*/
                    v96 = v43 / v34; /*0x4c511c*/
                    v42[2] = v96; /*0x4c5124*/
                    v42[3] = v97; /*0x4c512b*/
                  }
                  while ( v37 < 0x1210 ); /*0x4c512e*/
                  ++a4; /*0x4c513e*/
                }
                while ( (int)a4 < 4 ); /*0x4c5142*/
                flags = (Data *)v86.member.flags; /*0x4c5148*/
              }
            }
            else
            {
              switch ( ChunkType ) /*0x4c4d5d*/
              {
                case 0x4C4D4E56: /*0x4c4d5d*/
                  if ( (*(_BYTE *)(this + 0x1C) & 1) != 0 ) /*0x4c4f26*/
                  {
                    TESFile_GetChunkData(flags, (char *)v98, 0xCC3u); /*0x4c4f38*/
                    for ( j = 0; j < 4; ++j ) /*0x4c4f3d*/
                    {
                      v27 = 0; /*0x4c4f61*/
                      v83 = 0x10 * (j % 2 + 0x21 * (j / 2)); /*0x4c4f63*/
                      *(float *)&a4 = 0.0; /*0x4c4f67*/
                      do /*0x4c5022*/
                      {
                        v28 = *(_DWORD *)(this + 0x24); /*0x4c4f8c*/
                        v29 = 3 * (a4 + v83 + 0x10 * ((int)a4 / 0x11)); /*0x4c4f91*/
                        LODWORD(v82) = *((char *)v98 + v29); /*0x4c4f99*/
                        v30 = *(_DWORD *)(*(_DWORD *)(v28 + 8) + 4 * j); /*0x4c4fa0*/
                        v31 = dbl_A46298; /*0x4c4faf*/
                        v82 = (double)SLODWORD(v82) / v31; /*0x4c4fb1*/
                        *(float *)(v27 + v30) = v82; /*0x4c4fb9*/
                        LODWORD(v82) = *((char *)v98 + v29 + 1); /*0x4c4fc1*/
                        v32 = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(this + 0x24) + 8) + 4 * j); /*0x4c4fcf*/
                        v82 = (double)SLODWORD(v82) / v31; /*0x4c4fd4*/
                        *(float *)(v32 + v27 + 4) = v82; /*0x4c4fdc*/
                        LODWORD(v82) = *((char *)v98 + v29 + 2); /*0x4c4fe5*/
                        v33 = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(this + 0x24) + 8) + 4 * j); /*0x4c4ff3*/
                        v82 = (double)SLODWORD(v82) / v31; /*0x4c4ff6*/
                        *(float *)(v33 + v27 + 8) = v82; /*0x4c4ffe*/
                        Vector3_NormalizeInPlace((float *)(v27 /*0x4c500d*/
                                                         + *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(this + 0x24) + 8) + 4 * j)));
                        ++a4; /*0x4c5014*/
                        v27 += 0xC; /*0x4c5019*/
                      }
                      while ( v27 < 0xD8C ); /*0x4c5022*/
                    }
                    flags = (Data *)v86.member.flags; /*0x4c5034*/
                    BYTE2(v84) = 1; /*0x4c5038*/
                  }
                  break;
                case 0x41544144: /*0x4c4d5d*/
                  if ( (*(_DWORD *)(this + 0x1C) & 0x400) != 0 ) /*0x4c4ef3*/
                  {
                    TESFile_GetChunkData(flags, Dst, 4u); /*0x4c4f02*/
                    v25 = Dst[0] & 7 | *(_DWORD *)(this + 0x1C) & 0xFFFFFFF8; /*0x4c4f14*/
                    *(_DWORD *)Dst = Dst[0] & 7; /*0x4c4f16*/
                    *(_DWORD *)(this + 0x1C) = v25; /*0x4c4f1a*/
                  }
                  break;
                case 0x4443504D: /*0x4c4d5d*/
                  length = flags->currentChunk.length; /*0x4c4d79*/
                  *(float *)&a4 = COERCE_FLOAT(FormHeapAlloc(length)); /*0x4c4d8c*/
                  TESFile_GetChunkData(flags, (char *)a4, length); /*0x4c4d90*/
                  v8 = *(_DWORD *)(*(_DWORD *)(this + 0x24) + 0x50); /*0x4c4d98*/
                  if ( v8 ) /*0x4c4d9d*/
                  {
                    if ( *(_WORD *)(v8 + 4) ) /*0x4c4d9f*/
                    {
                      if ( !--*(_WORD *)(v8 + 6) ) /*0x4c4dab*/
                        (**(void (__thiscall ***)(int, int))v8)(v8, 1); /*0x4c4dba*/
                    }
                    *(_DWORD *)(*(_DWORD *)(this + 0x24) + 0x50) = 0; /*0x4c4dbf*/
                  }
                  sub_4C2230(length, (_DWORD *)a4, length, (_DWORD *)(*(_DWORD *)(this + 0x24) + 0x50)); /*0x4c4dd5*/
                  v9 = *(_DWORD *)(*(_DWORD *)(this + 0x24) + 0x50); /*0x4c4ddd*/
                  if ( v9 ) /*0x4c4de2*/
                  {
                    if ( *(_WORD *)(v9 + 4) ) /*0x4c4de4*/
                      ++*(_WORD *)(v9 + 6); /*0x4c4deb*/
                    *(_DWORD *)(this + 0x1C) |= 0x800u; /*0x4c4df0*/
                  }
                  FormHeapFree(a4); /*0x4c4dfc*/
                  break;
              }
            }
            goto LABEL_100; /*0x4c4e04*/
          }
          v57 = ChunkType - 0x54585441; /*0x4c5325*/
          if ( v57 ) /*0x4c532a*/
          {
            v58 = v57 - 1; /*0x4c5330*/
            if ( !v58 ) /*0x4c5333*/
            {
              if ( (*(_BYTE *)(this + 0x1C) & 4) != 0 ) /*0x4c5419*/
              {
                a1 = 0; /*0x4c542a*/
                v89 = 0.0; /*0x4c542e*/
                TESFile_GetChunkData(flags, (char *)&a1, 8u); /*0x4c5432*/
                TESForm_ResolveFormID((UInt32 *)&a1, flags); /*0x4c543d*/
                type = 0; /*0x4c5449*/
                YCoordinate = &TESLandTexture `RTTI Type Descriptor'; /*0x4c544b*/
                v78 = (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor'; /*0x4c5450*/
                v77 = 0; /*0x4c5455*/
                v63 = TESForm_LookupByFormID(a1); /*0x4c5458*/
                v64 = OblivionDynamicCast(v63, v77, v78, YCoordinate, (int)type); /*0x4c5461*/
                *(_DWORD *)(*(_DWORD *)(this + 0x24) + 4 * LOBYTE(v89) + 0x20) = v64; /*0x4c546e*/
                v65 = (const char ***)(*(_DWORD *)(this + 0x24) + 4 * LOBYTE(v89) + 0x20); /*0x4c547a*/
                if ( *v65 ) /*0x4c5481*/
                {
                  sub_4C9530(*v65); /*0x4c54b0*/
                }
                else
                {
                  type = (const char *)LOBYTE(v89); /*0x4c548a*/
                  YCoordinate = (struct TypeDescriptor *)a1; /*0x4c548b*/
                  v78 = (struct _s_RTTICompleteObjectLocator *)sub_4BF040((TESObjectCELL **)this); /*0x4c5493*/
                  v66 = sub_4BF020((TESObjectCELL **)this); /*0x4c5496*/
                  PrintError( /*0x4c54a1*/
                    "Land (%i, %i) unable to find base texture ID (%08X) for block %i.",
                    v66,
                    v78,
                    YCoordinate,
                    type);
                }
              }
              goto LABEL_100; /*0x4c54a9*/
            }
            if ( v58 == 0x14 && (*(_BYTE *)(this + 0x1C) & 4) != 0 ) /*0x4c5346*/
            {
              if ( *(int *)v87 >= 0 && (int)v86.member.modlist.next >= 0 ) /*0x4c535c*/
              {
                a4 = *(unsigned int *)(v86.member.flags + 0x254); /*0x4c536e*/
                if ( (a4 & 7) == 0 ) /*0x4c5372*/
                {
                  v59 = MemoryHeap_Alloc_ZlibCallback(a4); /*0x4c5380*/
                  TESFile_GetChunkData((Data *)v86.member.flags, (char *)v59, a4); /*0x4c538b*/
                  LODWORD(v90) = a4 >> 3; /*0x4c5397*/
                  for ( k = 0; k < LODWORD(v90); ++k ) /*0x4c5394*/
                    sub_4BF270( /*0x4c53bb*/
                      (_DWORD *)this,
                      v87[0],
                      v59[2 * k],
                      (unsigned __int16)v86.member.modlist.next,
                      *(float *)&v59[2 * k + 1]);
                  MemoryHeap_Free_checked(v59); /*0x4c53cf*/
                  flags = (Data *)v86.member.flags; /*0x4c53d4*/
                  v61 = 0xFFFFFFFF; /*0x4c53d8*/
                  *(_DWORD *)v87 = 0xFFFFFFFF; /*0x4c53db*/
                  goto LABEL_99; /*0x4c53df*/
                }
                type = (const char *)(v86.member.flags + 0x1C); /*0x4c53e7*/
                YCoordinate = (struct TypeDescriptor *)sub_4BF040((TESObjectCELL **)this); /*0x4c53ef*/
                v62 = sub_4BF020((TESObjectCELL **)this); /*0x4c53f2*/
                PrintError("Land (%i, %i) found unrecognized vertex texture data in file %s.", v62, YCoordinate, type); /*0x4c53fd*/
              }
              flags = (Data *)v86.member.flags; /*0x4c5405*/
              v61 = 0xFFFFFFFF; /*0x4c5409*/
              *(_DWORD *)v87 = 0xFFFFFFFF; /*0x4c540c*/
LABEL_99:
              v86.member.modlist.next = (TESForm::ModReferenceList *)v61; /*0x4c55b1*/
            }
          }
          else if ( (*(_BYTE *)(this + 0x1C) & 4) != 0 ) /*0x4c54be*/
          {
            v86.vtbl = 0; /*0x4c54c6*/
            *(_DWORD *)&v86.member.type = 0; /*0x4c54ca*/
            TESFile_GetChunkData(flags, (char *)&v86, 8u); /*0x4c54d7*/
            if ( *(_WORD *)&v86.member.pad[1] > 7u ) /*0x4c54e5*/
            {
              type = (const char *)v86.member.type; /*0x4c54ef*/
              YCoordinate = (struct TypeDescriptor *)*(unsigned __int16 *)&v86.member.pad[1]; /*0x4c54f0*/
              v78 = (struct _s_RTTICompleteObjectLocator *)sub_4BF040((TESObjectCELL **)this); /*0x4c54f8*/
              v67 = sub_4BF020((TESObjectCELL **)this); /*0x4c54fb*/
              PrintError("Land (%i, %i) clamping invalid index %i for block %i.", v67, v78, YCoordinate, type); /*0x4c5506*/
              *(_WORD *)&v86.member.pad[1] = 7; /*0x4c550e*/
            }
            if ( v86.vtbl ) /*0x4c551a*/
            {
              TESForm_ResolveFormID((UInt32 *)&v86, flags); /*0x4c5522*/
              type = 0; /*0x4c552e*/
              YCoordinate = &TESLandTexture `RTTI Type Descriptor'; /*0x4c5530*/
              v78 = (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor'; /*0x4c5535*/
              v77 = 0; /*0x4c553a*/
              v68 = TESForm_LookupByFormID((UInt32)v86.vtbl); /*0x4c553d*/
              v69 = (const char **)OblivionDynamicCast(v68, v77, v78, YCoordinate, (int)type); /*0x4c554b*/
              if ( !v69 ) /*0x4c5552*/
              {
                type = (const char *)v86.member.type; /*0x4c555d*/
                YCoordinate = (struct TypeDescriptor *)v86.vtbl; /*0x4c555e*/
                v78 = (struct _s_RTTICompleteObjectLocator *)sub_4BF040((TESObjectCELL **)this); /*0x4c5566*/
                v70 = sub_4BF020((TESObjectCELL **)this); /*0x4c5569*/
                PrintError( /*0x4c5574*/
                  "Land (%i, %i) unable to find additional texture ID (%08X) for block %i.",
                  v70,
                  v78,
                  YCoordinate,
                  type);
              }
            }
            else
            {
              v69 = (const char **)unk_B35BE4; /*0x4c557e*/
            }
            *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(this + 0x24) + 4 * (unsigned __int8)v86.member.type + 0x30) /*0x4c5597*/
                      + 4 * *(unsigned __int16 *)&v86.member.pad[1]) = v69;
            if ( v69 ) /*0x4c559a*/
              sub_4C9530(v69); /*0x4c559e*/
            v61 = *(unsigned __int16 *)&v86.member.pad[1]; /*0x4c55a8*/
            *(_DWORD *)v87 = v86.member.type; /*0x4c55ad*/
            goto LABEL_99; /*0x4c55ad*/
          }
LABEL_100:
          if ( !TESFile_GetNextChunk(flags) ) /*0x4c55b7*/
          {
            if ( HIBYTE(v84) ) /*0x4c55c8*/
            {
              if ( !BYTE2(v84) ) /*0x4c55ce*/
              {
                v71 = *(_DWORD *)(this + 0x24); /*0x4c55d0*/
                if ( v71 ) /*0x4c55d5*/
                {
                  v72 = *(_DWORD *)(v71 + 0x9C); /*0x4c55d7*/
                }
                else
                {
                  v73 = *(TESObjectCELL **)(this + 0x20); /*0x4c55df*/
                  if ( v73 ) /*0x4c55e4*/
                    v72 = TESObjectCELL_GetYCoordinate(v73); /*0x4c55eb*/
                  else
                    v72 = 0; /*0x4c55ef*/
                }
                v74 = *(_DWORD *)(this + 0x24); /*0x4c55f1*/
                if ( v74 ) /*0x4c55f6*/
                {
                  v75 = *(_DWORD *)(v74 + 0x98); /*0x4c55f8*/
                }
                else
                {
                  v76 = *(TESObjectCELL **)(this + 0x20); /*0x4c5600*/
                  if ( v76 ) /*0x4c5605*/
                    v75 = TESObjectCELL_GetXCoordinate(v76); /*0x4c5609*/
                  else
                    v75 = 0; /*0x4c5610*/
                }
                PrintError("Land for cell (%i, %i) in file '%s' does not contain Normal Data.", v75, v72, flags->name); /*0x4c561d*/
              }
            }
            return 1; /*0x4c561d*/
          }
        }
      }
      return 0; /*0x4c4d2a*/
    }
    v10 = *(TESObjectCELL **)(this + 0x20); /*0x4c4e09*/
    if ( v10 )
    {
      v86.member.modlist.data = (Data *)TESObjectCELL_GetWorldSpace(v10); /*0x4c4e1b*/
      if ( v86.member.modlist.data )
      {
        v11 = *(_DWORD *)(this + 0x24); /*0x4c4e25*/
        if ( v11 )
        {
          v12 = *(_DWORD *)(v11 + 0x9C); /*0x4c4e2c*/
        }
        else
        {
          v13 = *(TESObjectCELL **)(this + 0x20); /*0x4c4e34*/
          v12 = v13 ? TESObjectCELL_GetYCoordinate(v13) : 0;
        }
        v14 = *(_DWORD *)(this + 0x24); /*0x4c4e46*/
        if ( v14 )
        {
          v15 = *(_DWORD *)(v14 + 0x98); /*0x4c4e4d*/
        }
        else
        {
          v16 = *(TESObjectCELL **)(this + 0x20); /*0x4c4e55*/
          v15 = v16 ? TESObjectCELL_GetXCoordinate(v16) : 0;
        }
        if ( sub_4F18B0(&v86.member.modlist.data->errorState, v15, v12, (Data **)&a2, &v86.member.refID) ) /*0x4c4e75*/
        {
          v4 = (Data *)a2; /*0x4c4e82*/
          goto LABEL_7; /*0x4c4e86*/
        }
      }
    }
  }
  return 1; /*0x4c4ed7*/
}
