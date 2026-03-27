char __userpurge sub_4C7090@<al>(int ecx0@<ecx>, int ebx0@<ebx>, int a3@<edi>, Data *a2)
{
  Data *refID; // ebp
  int v7; // edi
  int v8; // eax
  signed int ChunkType; // eax
  unsigned int length; // edi
  char *v11; // ebx
  int v12; // ecx
  int v13; // eax
  _DWORD *v14; // edi
  bool v15; // bl
  int v16; // eax
  int k; // ebp
  int v18; // ebx
  int m; // edi
  int v20; // edx
  int v21; // eax
  int v22; // edx
  double v23; // rt0
  int v24; // edx
  int v25; // eax
  int v26; // ebx
  double v27; // st7
  int v28; // ebp
  int v29; // ecx
  int v30; // edi
  double v31; // st6
  float v32; // eax
  int v33; // edx
  double v34; // st6
  float *v35; // eax
  double v36; // st6
  int v37; // eax
  float v38; // edx
  int v39; // ecx
  float *v40; // edi
  double v41; // st7
  int i; // edi
  int v43; // ebx
  int j; // ebp
  int v45; // ecx
  int v46; // ecx
  double v47; // st7
  int v48; // ecx
  double v49; // st7
  int v50; // ecx
  int v51; // eax
  int v52; // eax
  unsigned int v53; // ebx
  char *v54; // ebp
  unsigned int v55; // ebx
  float *v56; // edi
  unsigned int flags_low; // eax
  int v58; // eax
  TESForm *v59; // eax
  void *v60; // eax
  int v61; // eax
  _DWORD **v62; // ecx
  int v63; // edi
  TESObjectCELL *v64; // ecx
  int v65; // eax
  int v66; // eax
  TESObjectCELL *v67; // ecx
  int v68; // eax
  int YCoordinate; // edi
  TESObjectCELL *v70; // ecx
  int v71; // eax
  int XCoordinate; // eax
  TESObjectCELL *v73; // ecx
  TESForm *v74; // eax
  _DWORD *v75; // edi
  int v76; // eax
  int v77; // ebx
  TESObjectCELL *v78; // ecx
  int v79; // eax
  int v80; // eax
  TESObjectCELL *v81; // ecx
  int v82; // [esp-8h] [ebp-15B8h]
  struct _s_RTTICompleteObjectLocator *v83; // [esp-4h] [ebp-15B4h]
  struct TypeDescriptor *v84; // [esp+0h] [ebp-15B0h]
  const char *v85; // [esp+4h] [ebp-15ACh]
  int v86; // [esp+8h] [ebp-15A8h]
  int v87; // [esp+Ch] [ebp-15A4h]
  char v88; // [esp+1Bh] [ebp-1595h]
  float v89; // [esp+1Ch] [ebp-1594h]
  TESForm a1; // [esp+20h] [ebp-1590h] BYREF
  UInt32 v91; // [esp+38h] [ebp-1578h] BYREF
  int v92; // [esp+3Ch] [ebp-1574h]
  char v93[4]; // [esp+40h] [ebp-1570h]
  float v94; // [esp+44h] [ebp-156Ch]
  float v95; // [esp+48h] [ebp-1568h]
  float v96; // [esp+4Ch] [ebp-1564h]
  float v97; // [esp+50h] [ebp-1560h]
  float v98; // [esp+54h] [ebp-155Ch]
  float v99; // [esp+58h] [ebp-1558h]
  float v100[1090]; // [esp+5Ch] [ebp-1554h] BYREF
  char v101[4]; // [esp+1164h] [ebp-44Ch] BYREF

  refID = a2;
  a1.member.refID = (UInt32)a2;
  if ( (unsigned __int8)TESFile_GetRecordType(a2) != 0x36 )
    return 0;
  v87 = ebx0;
  v86 = a3;
  v7 = *(_DWORD *)(ecx0 + 0xC);
  TESFile_InitializeFormFromRecord(a2, (TESForm *)ecx0, v86, ebx0);
  if ( v7 )
  {
    v8 = *(_DWORD *)(ecx0 + 0xC);
    if ( v7 != v8 )
      PrintError("Potentially duplicate Land (%08x) encountered in file %s.", v8, a2->name);
  }
  a1.member.modlist.data = (Data *)0xFFFFFFFF;
  a1.member.modlist.next = (TESForm::ModReferenceList *)0xFFFFFFFF;
  v88 = 0;
  if ( (TESFile_IsActive(a2) || sub_4C9FF0()) && (*(_DWORD *)(ecx0 + 0x1C) & 0x400) == 0 )
  {
    v88 = 1;
    sub_4C64E0((TESObjectCELL **)ecx0);
  }
  do
  {
    ChunkType = TESFile_GetChunkType(refID);
    if ( ChunkType > 0x54474856 )
    {
      v51 = ChunkType - 0x54585441;
      if ( !v51 )
      {
        if ( !v88 )
          continue;
        *(_DWORD *)&a1.member.type = 0;
        a1.member.flags = 0;
        TESFile_GetChunkData(refID, (char *)&a1.member, 8u);
        if ( HIWORD(a1.member.flags) > 7u )
        {
          v68 = *(_DWORD *)(ecx0 + 0x24);
          if ( v68 )
          {
            YCoordinate = *(_DWORD *)(v68 + 0x9C);
          }
          else
          {
            v70 = *(TESObjectCELL **)(ecx0 + 0x20);
            if ( v70 )
              YCoordinate = TESObjectCELL_GetYCoordinate(v70);
            else
              YCoordinate = 0;
          }
          v71 = *(_DWORD *)(ecx0 + 0x24);
          if ( v71 )
          {
            XCoordinate = *(_DWORD *)(v71 + 0x98);
          }
          else
          {
            v73 = *(TESObjectCELL **)(ecx0 + 0x20);
            if ( v73 )
              XCoordinate = TESObjectCELL_GetXCoordinate(v73);
            else
              XCoordinate = 0;
          }
          PrintError(
            "Land (%i, %i) clamping invalid index %i for block %i.",
            XCoordinate,
            YCoordinate,
            HIWORD(a1.member.flags),
            LOBYTE(a1.member.flags));
          HIWORD(a1.member.flags) = 7;
        }
        if ( *(_DWORD *)&a1.member.type )
        {
          TESForm_ResolveFormID((UInt32 *)&a1.member, refID);
          v85 = 0;
          v84 = &TESLandTexture `RTTI Type Descriptor';
          v83 = (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor';
          v82 = 0;
          v74 = TESForm_LookupByFormID(*(UInt32 *)&a1.member.type);
          v75 = OblivionDynamicCast(v74, v82, v83, v84, (int)v85);
          if ( !v75 )
          {
            v76 = *(_DWORD *)(ecx0 + 0x24);
            if ( v76 )
            {
              v77 = *(_DWORD *)(v76 + 0x9C);
            }
            else
            {
              v78 = *(TESObjectCELL **)(ecx0 + 0x20);
              if ( v78 )
                v77 = TESObjectCELL_GetYCoordinate(v78);
              else
                v77 = 0;
            }
            v79 = *(_DWORD *)(ecx0 + 0x24);
            if ( v79 )
            {
              v80 = *(_DWORD *)(v79 + 0x98);
            }
            else
            {
              v81 = *(TESObjectCELL **)(ecx0 + 0x20);
              if ( v81 )
                v80 = TESObjectCELL_GetXCoordinate(v81);
              else
                v80 = 0;
            }
            PrintError(
              "Land (%i, %i) unable to find additional texture ID (%08X) for block %i.",
              v80,
              v77,
              *(_DWORD *)&a1.member.type,
              LOBYTE(a1.member.flags));
          }
        }
        else
        {
          v75 = (_DWORD *)dword_B35BE4;
        }
        *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(ecx0 + 0x24) + 4 * LOBYTE(a1.member.flags) + 0x30)
                  + 4 * HIWORD(a1.member.flags)) = v75;
        if ( v75 )
          sub_4C9530(v75);
        flags_low = LOBYTE(a1.member.flags);
        a1.member.modlist.data = (Data *)HIWORD(a1.member.flags);
        goto LABEL_119;
      }
      v52 = v51 - 1;
      if ( v52 )
      {
        if ( v52 == 0x14 && v88 )
        {
          if ( (int)a1.member.modlist.next >= 0 && (int)a1.member.modlist.data >= 0 )
          {
            v53 = *(_DWORD *)(a1.member.refID + 0x254);
            if ( (v53 & 7) == 0 )
            {
              v54 = (char *)j_MemoryHeap_Alloc(&FormHeap, (char)refID, v53 | 0x100000000LL, v86);
              TESFile_GetChunkData((Data *)a1.member.refID, v54, v53);
              v55 = v53 >> 3;
              if ( v55 )
              {
                v56 = (float *)(v54 + 4);
                do
                {
                  if ( *v56 > 1.0 )
                    *v56 = *v56 / fCostant_100;
                  sub_4BF270(
                    (_DWORD *)ecx0,
                    (unsigned __int8)a1.member.modlist.next,
                    *((_WORD *)v56 + 0xFFFFFFFE),
                    (unsigned __int16)a1.member.modlist.data,
                    *v56);
                  v56 += 2;
                  --v55;
                }
                while ( v55 );
              }
              MemoryHeap_Free_checked(v54);
              refID = (Data *)a1.member.refID;
              flags_low = 0xFFFFFFFF;
              a1.member.modlist.data = (Data *)0xFFFFFFFF;
              goto LABEL_119;
            }
            v85 = (const char *)(a1.member.refID + 0x1C);
            v84 = (struct TypeDescriptor *)sub_4BF040((TESObjectCELL **)ecx0);
            v58 = sub_4BF020((TESObjectCELL **)ecx0);
            PrintError("Land (%i, %i) found unrecognized vertex texture data in file %s.", v58, v84, v85);
          }
          refID = (Data *)a1.member.refID;
          flags_low = 0xFFFFFFFF;
          a1.member.modlist.data = (Data *)0xFFFFFFFF;
LABEL_119:
          a1.member.modlist.next = (TESForm::ModReferenceList *)flags_low;
        }
      }
      else if ( v88 )
      {
        v91 = 0;
        v92 = 0;
        TESFile_GetChunkData(refID, (char *)&v91, 8u);
        TESForm_ResolveFormID(&v91, refID);
        v85 = 0;
        v84 = &TESLandTexture `RTTI Type Descriptor';
        v83 = (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor';
        v82 = 0;
        v59 = TESForm_LookupByFormID(v91);
        v60 = OblivionDynamicCast(v59, v82, v83, v84, (int)v85);
        *(_DWORD *)(*(_DWORD *)(ecx0 + 0x24) + 4 * (unsigned __int8)v92 + 0x20) = v60;
        v61 = *(_DWORD *)(ecx0 + 0x24);
        v62 = (_DWORD **)(v61 + 4 * (unsigned __int8)v92 + 0x20);
        if ( *v62 )
        {
          sub_4C9530(*v62);
        }
        else
        {
          if ( v61 )
          {
            v63 = *(_DWORD *)(v61 + 0x9C);
          }
          else
          {
            v64 = *(TESObjectCELL **)(ecx0 + 0x20);
            if ( v64 )
              v63 = TESObjectCELL_GetYCoordinate(v64);
            else
              v63 = 0;
          }
          v65 = *(_DWORD *)(ecx0 + 0x24);
          if ( v65 )
          {
            v66 = *(_DWORD *)(v65 + 0x98);
          }
          else
          {
            v67 = *(TESObjectCELL **)(ecx0 + 0x20);
            if ( v67 )
              v66 = TESObjectCELL_GetXCoordinate(v67);
            else
              v66 = 0;
          }
          PrintError(
            "Land (%i, %i) unable to find base texture ID (%08X) for block %i.",
            v66,
            v63,
            v91,
            (unsigned __int8)v92);
        }
      }
    }
    else if ( ChunkType == 0x54474856 )
    {
      if ( v88 )
      {
        if ( (*(_BYTE *)(ecx0 + 0x1C) & 1) != 0 )
        {
          TESFile_GetChunkData(refID, v101, 0);
          v37 = *(_DWORD *)(ecx0 + 0x24);
          v99 = flt_A32048;
          v100[0] = flt_A3B888;
          v38 = v100[0];
          *(float *)(v37 + 0x18) = v99;
          *(float *)(v37 + 0x1C) = v38;
          a1.vtbl = *(TESFormVtbl **)v101;
          v39 = 1;
          v40 = &v100[1];
          do
          {
            LODWORD(v89) = v101[v39 + 3];
            v89 = (double)SLODWORD(v89) + *(float *)&a1.vtbl;
            v41 = v89;
            *v40 = v89;
            if ( !(v39 % 0x21) )
              v41 = v40[0xFFFFFFE0];
            ++v39;
            *(float *)&a1.vtbl = v41;
            ++v40;
          }
          while ( v39 < 0x442 );
          for ( i = 0; i < 4; ++i )
          {
            v43 = 0;
            LODWORD(v89) = 0x10 * (i % 2 + 0x21 * (i / 2));
            for ( j = 0; j < 0xD8C; j += 0xC )
            {
              *(float *)&a1.vtbl = v100[0x20 * (v43 / 0x11) + 1 + LODWORD(v89) + v43 / 0x11 + v43 % 0x11];
              *(_DWORD *)v93 = (int)*(float *)&a1.vtbl;
              a1.vtbl = (TESFormVtbl *)((v43 % 0x11) << 7);
              v45 = *(_DWORD *)(ecx0 + 0x24);
              v94 = (float)(8 * *(_DWORD *)v93);
              v46 = *(_DWORD *)(*(_DWORD *)(v45 + 4) + 4 * i);
              *(float *)&a1.vtbl = (double)(int)a1.vtbl + *(float *)(4 * i + 0xB35BA8);
              v47 = *(float *)&a1.vtbl;
              a1.vtbl = (TESFormVtbl *)((v43 / 0x11) << 7);
              *(float *)(v46 + j) = v47;
              v48 = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(ecx0 + 0x24) + 4) + 4 * i);
              *(float *)&a1.vtbl = (double)(int)a1.vtbl + *(float *)(4 * i + 0xB35B98);
              *(float *)(v48 + j + 4) = *(float *)&a1.vtbl;
              v49 = v94;
              *(float *)(*(_DWORD *)(*(_DWORD *)(*(_DWORD *)(ecx0 + 0x24) + 4) + 4 * i) + j + 8) = v94;
              v50 = *(_DWORD *)(ecx0 + 0x24);
              if ( *(float *)(v50 + 0x18) <= v49 )
              {
                if ( *(float *)(v50 + 0x1C) < v49 )
                  *(float *)(v50 + 0x1C) = v49;
              }
              else
              {
                *(float *)(v50 + 0x18) = v49;
              }
              ++v43;
            }
          }
          refID = (Data *)a1.member.refID;
        }
      }
    }
    else if ( ChunkType > 0x4C4D4E56 )
    {
      if ( ChunkType == 0x524C4356 )
      {
        if ( v88 )
        {
          if ( (*(_BYTE *)(ecx0 + 0x1C) & 2) != 0 )
          {
            TESFile_GetChunkData(refID, (char *)&v100[1], 0);
            v98 = 1.0;
            v26 = 0;
            v27 = dbl_A3DDD8;
            do
            {
              v28 = 0x10 * (v26 % 2 + 0x21 * (v26 / 2));
              v29 = 0;
              v30 = 0;
              do
              {
                LODWORD(v89) = *((unsigned __int8 *)&v100[0xC * (v29 / 0x11) + 1] + 3 * v29 + 3 * v28);
                v31 = (double)SLODWORD(v89);
                LODWORD(v89) = *((unsigned __int8 *)&v100[0xC * (v29 / 0x11) + 1] + 3 * v29 + 3 * v28 + 1);
                LODWORD(v32) = *((unsigned __int8 *)&v100[0xC * (v29 / 0x11) + 1] + 3 * v29 + 3 * v28 + 2);
                v33 = *(_DWORD *)(ecx0 + 0x24);
                ++v29;
                v95 = v31 / v27;
                v34 = (double)SLODWORD(v89);
                v89 = v32;
                v35 = (float *)(v30 + *(_DWORD *)(*(_DWORD *)(v33 + 0xC) + 4 * v26));
                *v35 = v95;
                v30 += 0x10;
                v96 = v34 / v27;
                v36 = (double)SLODWORD(v89);
                v35[1] = v96;
                v97 = v36 / v27;
                v35[2] = v97;
                v35[3] = v98;
              }
              while ( v30 < 0x1210 );
              ++v26;
            }
            while ( v26 < 4 );
            refID = (Data *)a1.member.refID;
          }
        }
      }
    }
    else
    {
      switch ( ChunkType )
      {
        case 0x4C4D4E56:
          if ( v88 )
          {
            if ( (*(_BYTE *)(ecx0 + 0x1C) & 1) != 0 )
            {
              TESFile_GetChunkData((Data *)a1.member.refID, (char *)&v100[1], 0);
              for ( k = 0; k < 4; ++k )
              {
                v18 = 0;
                a1.vtbl = (TESFormVtbl *)(0x10 * (k % 2 + 0x21 * (k / 2)));
                for ( m = 0; m < 0xD8C; m += 0xC )
                {
                  v20 = *(_DWORD *)(ecx0 + 0x24);
                  v21 = 3 * ((int)a1.vtbl + 0x10 * (v18 / 0x11) + v18);
                  LODWORD(v89) = *((char *)&v100[1] + v21);
                  v22 = *(_DWORD *)(*(_DWORD *)(v20 + 8) + 4 * k);
                  v23 = dbl_A46298;
                  v89 = (double)SLODWORD(v89) / v23;
                  *(float *)(m + v22) = v89;
                  LODWORD(v89) = *((char *)&v100[1] + v21 + 1);
                  v24 = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(ecx0 + 0x24) + 8) + 4 * k);
                  v89 = (double)SLODWORD(v89) / v23;
                  *(float *)(v24 + m + 4) = v89;
                  LODWORD(v89) = *((char *)&v100[1] + v21 + 2);
                  v25 = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(ecx0 + 0x24) + 8) + 4 * k);
                  v89 = (double)SLODWORD(v89) / v23;
                  *(float *)(v25 + m + 8) = v89;
                  sub_43F350((float *)(m + *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(ecx0 + 0x24) + 8) + 4 * k)));
                  ++v18;
                }
              }
              refID = (Data *)a1.member.refID;
            }
          }
          break;
        case 0x41544144:
          v14 = (_DWORD *)(ecx0 + 0x1C);
          v15 = (*(_DWORD *)(ecx0 + 0x1C) & 0x400) != 0;
          TESFile_GetChunkData(refID, (char *)(ecx0 + 0x1C), 4u);
          *(_DWORD *)(ecx0 + 0x1C) &= ~8u;
          v16 = *(_DWORD *)(ecx0 + 0x1C);
          if ( v15 )
            *v14 = v16 | 0x400;
          else
            *v14 = v16 & 0xFFFFFBFF;
          break;
        case 0x4443504D:
          if ( v88 )
          {
            length = refID->currentChunk.length;
            v11 = (char *)FormHeapAlloc(length);
            TESFile_GetChunkData(refID, v11, length);
            v12 = *(_DWORD *)(*(_DWORD *)(ecx0 + 0x24) + 0x50);
            if ( v12 )
            {
              if ( *(_WORD *)(v12 + 4) )
              {
                if ( !--*(_WORD *)(v12 + 6) )
                  (**(void (__thiscall ***)(int, int))v12)(v12, 1);
              }
              *(_DWORD *)(*(_DWORD *)(ecx0 + 0x24) + 0x50) = 0;
            }
            sub_4C2230((int)v11, v11, length, (_DWORD *)(*(_DWORD *)(ecx0 + 0x24) + 0x50));
            v13 = *(_DWORD *)(*(_DWORD *)(ecx0 + 0x24) + 0x50);
            if ( v13 )
            {
              if ( *(_WORD *)(v13 + 4) )
                ++*(_WORD *)(v13 + 6);
              *(_DWORD *)(ecx0 + 0x1C) |= 0x800u;
            }
            FormHeapFree((unsigned int)v11);
          }
          break;
      }
    }
  }
  while ( TESFile_GetNextChunk(refID) );
  if ( v88 )
    *(_DWORD *)(ecx0 + 0x1C) |= 8u;
  else
    *(_DWORD *)(ecx0 + 0x1C) &= ~8u;
  return 1;
}
