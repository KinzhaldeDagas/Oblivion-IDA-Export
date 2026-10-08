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
  const char ***v62; // ecx
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
  const char **v75; // edi
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

  refID = a2; /*0x4c70a9*/
  a1.member.refID = (UInt32)a2; /*0x4c70b5*/
  if ( (unsigned __int8)TESFile_GetRecordType(a2) != 0x36 ) /*0x4c70c0*/
    return 0; /*0x4c70c4*/
  v87 = ebx0; /*0x4c70c9*/
  v86 = a3; /*0x4c70ca*/
  v7 = *(_DWORD *)(ecx0 + 0xC); /*0x4c70cb*/
  TESFile_InitializeFormFromRecord(a2, (TESForm *)ecx0, v86, ebx0); /*0x4c70d1*/
  if ( v7 ) /*0x4c70d8*/
  {
    v8 = *(_DWORD *)(ecx0 + 0xC); /*0x4c70da*/
    if ( v7 != v8 ) /*0x4c70df*/
      PrintError("Potentially duplicate Land (%08x) encountered in file %s.", v8, a2->name); /*0x4c70eb*/
  }
  a1.member.modlist.data = (Data *)0xFFFFFFFF; /*0x4c70f8*/
  a1.member.modlist.next = (TESForm::ModReferenceList *)0xFFFFFFFF; /*0x4c70fc*/
  v88 = 0; /*0x4c7100*/
  if ( (TESFile_IsActive(a2) || sub_4C9FF0()) && (*(_DWORD *)(ecx0 + 0x1C) & 0x400) == 0 ) /*0x4c711e*/
  {
    v88 = 1; /*0x4c7122*/
    sub_4C64E0((TESObjectCELL **)ecx0); /*0x4c7127*/
  }
  do /*0x4c7961*/
  {
    ChunkType = TESFile_GetChunkType(refID); /*0x4c7137*/
    if ( ChunkType > 0x54474856 ) /*0x4c7141*/
    {
      v51 = ChunkType - 0x54585441; /*0x4c762d*/
      if ( !v51 ) /*0x4c7632*/
      {
        if ( !v88 ) /*0x4c7804*/
          continue; /*0x4c7804*/
        *(_DWORD *)&a1.member.type = 0; /*0x4c780c*/
        a1.member.flags = 0; /*0x4c7810*/
        TESFile_GetChunkData(refID, (char *)&a1.member, 8u); /*0x4c781d*/
        if ( HIWORD(a1.member.flags) > 7u ) /*0x4c7827*/
        {
          v68 = *(_DWORD *)(ecx0 + 0x24); /*0x4c7829*/
          if ( v68 ) /*0x4c782e*/
          {
            YCoordinate = *(_DWORD *)(v68 + 0x9C); /*0x4c7830*/
          }
          else
          {
            v70 = *(TESObjectCELL **)(ecx0 + 0x20); /*0x4c7838*/
            if ( v70 ) /*0x4c783d*/
              YCoordinate = TESObjectCELL_GetYCoordinate(v70); /*0x4c7844*/
            else
              YCoordinate = 0; /*0x4c7848*/
          }
          v71 = *(_DWORD *)(ecx0 + 0x24); /*0x4c784a*/
          if ( v71 ) /*0x4c784f*/
          {
            XCoordinate = *(_DWORD *)(v71 + 0x98); /*0x4c7851*/
          }
          else
          {
            v73 = *(TESObjectCELL **)(ecx0 + 0x20); /*0x4c7859*/
            if ( v73 ) /*0x4c785e*/
              XCoordinate = TESObjectCELL_GetXCoordinate(v73); /*0x4c7860*/
            else
              XCoordinate = 0; /*0x4c7867*/
          }
          PrintError( /*0x4c787c*/
            "Land (%i, %i) clamping invalid index %i for block %i.",
            XCoordinate,
            YCoordinate,
            HIWORD(a1.member.flags),
            LOBYTE(a1.member.flags));
          HIWORD(a1.member.flags) = 7; /*0x4c7884*/
        }
        if ( *(_DWORD *)&a1.member.type ) /*0x4c788e*/
        {
          TESForm_ResolveFormID((UInt32 *)&a1.member, refID); /*0x4c789a*/
          v85 = 0; /*0x4c78a6*/
          v84 = &TESLandTexture `RTTI Type Descriptor'; /*0x4c78a8*/
          v83 = (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor'; /*0x4c78ad*/
          v82 = 0; /*0x4c78b2*/
          v74 = TESForm_LookupByFormID(*(UInt32 *)&a1.member.type); /*0x4c78b5*/
          v75 = (const char **)OblivionDynamicCast(v74, v82, v83, v84, (int)v85); /*0x4c78c3*/
          if ( !v75 ) /*0x4c78ca*/
          {
            v76 = *(_DWORD *)(ecx0 + 0x24); /*0x4c78cc*/
            if ( v76 ) /*0x4c78d1*/
            {
              v77 = *(_DWORD *)(v76 + 0x9C); /*0x4c78d3*/
            }
            else
            {
              v78 = *(TESObjectCELL **)(ecx0 + 0x20); /*0x4c78db*/
              if ( v78 ) /*0x4c78e0*/
                v77 = TESObjectCELL_GetYCoordinate(v78); /*0x4c78e7*/
              else
                v77 = 0; /*0x4c78eb*/
            }
            v79 = *(_DWORD *)(ecx0 + 0x24); /*0x4c78ed*/
            if ( v79 ) /*0x4c78f2*/
            {
              v80 = *(_DWORD *)(v79 + 0x98); /*0x4c78f4*/
            }
            else
            {
              v81 = *(TESObjectCELL **)(ecx0 + 0x20); /*0x4c78fc*/
              if ( v81 ) /*0x4c7901*/
                v80 = TESObjectCELL_GetXCoordinate(v81); /*0x4c7903*/
              else
                v80 = 0; /*0x4c790a*/
            }
            PrintError( /*0x4c791e*/
              "Land (%i, %i) unable to find additional texture ID (%08X) for block %i.",
              v80,
              v77,
              *(_DWORD *)&a1.member.type,
              LOBYTE(a1.member.flags));
          }
        }
        else
        {
          v75 = (const char **)unk_B35BE4; /*0x4c7928*/
        }
        *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(ecx0 + 0x24) + 4 * LOBYTE(a1.member.flags) + 0x30) /*0x4c7941*/
                  + 4 * HIWORD(a1.member.flags)) = v75;
        if ( v75 ) /*0x4c7944*/
          sub_4C9530(v75); /*0x4c7948*/
        flags_low = LOBYTE(a1.member.flags); /*0x4c7952*/
        a1.member.modlist.data = (Data *)HIWORD(a1.member.flags); /*0x4c7957*/
        goto LABEL_119; /*0x4c7957*/
      }
      v52 = v51 - 1; /*0x4c7638*/
      if ( v52 ) /*0x4c763b*/
      {
        if ( v52 == 0x14 && v88 ) /*0x4c764f*/
        {
          if ( (int)a1.member.modlist.next >= 0 && (int)a1.member.modlist.data >= 0 ) /*0x4c7665*/
          {
            v53 = *(_DWORD *)(a1.member.refID + 0x254); /*0x4c766f*/
            if ( (v53 & 7) == 0 ) /*0x4c7678*/
            {
              v54 = (char *)j_MemoryHeap_Alloc(&FormHeap, (char)refID, v53 | 0x100000000LL, v86); /*0x4c768b*/
              TESFile_GetChunkData((Data *)a1.member.refID, v54, v53); /*0x4c768f*/
              v55 = v53 >> 3; /*0x4c7694*/
              if ( v55 ) /*0x4c7697*/
              {
                v56 = (float *)(v54 + 4); /*0x4c7699*/
                do /*0x4c76d7*/
                {
                  if ( *v56 > 1.0 ) /*0x4c76a9*/
                    *v56 = *v56 / fCostant_100; /*0x4c76b3*/
                  sub_4BF270( /*0x4c76cc*/
                    (_DWORD *)ecx0,
                    (char)a1.member.modlist.next,
                    *((_WORD *)v56 + 0xFFFFFFFE),
                    (__int16)a1.member.modlist.data,
                    *v56);
                  v56 += 2; /*0x4c76d1*/
                  --v55; /*0x4c76d4*/
                }
                while ( v55 ); /*0x4c76d7*/
              }
              MemoryHeap_Free_checked(v54); /*0x4c76df*/
              refID = (Data *)a1.member.refID; /*0x4c76e4*/
              flags_low = 0xFFFFFFFF; /*0x4c76e8*/
              a1.member.modlist.data = (Data *)0xFFFFFFFF; /*0x4c76eb*/
              goto LABEL_119; /*0x4c76ef*/
            }
            v85 = (const char *)(a1.member.refID + 0x1C); /*0x4c76f7*/
            v84 = (struct TypeDescriptor *)sub_4BF040((TESObjectCELL **)ecx0); /*0x4c76ff*/
            v58 = sub_4BF020((TESObjectCELL **)ecx0); /*0x4c7702*/
            PrintError("Land (%i, %i) found unrecognized vertex texture data in file %s.", v58, v84, v85); /*0x4c770d*/
          }
          refID = (Data *)a1.member.refID; /*0x4c7715*/
          flags_low = 0xFFFFFFFF; /*0x4c7719*/
          a1.member.modlist.data = (Data *)0xFFFFFFFF; /*0x4c771c*/
LABEL_119:
          a1.member.modlist.next = (TESForm::ModReferenceList *)flags_low; /*0x4c795b*/
        }
      }
      else if ( v88 ) /*0x4c772a*/
      {
        v91 = 0; /*0x4c773b*/
        v92 = 0; /*0x4c773f*/
        TESFile_GetChunkData(refID, (char *)&v91, 8u); /*0x4c7743*/
        TESForm_ResolveFormID(&v91, refID); /*0x4c774e*/
        v85 = 0; /*0x4c775a*/
        v84 = &TESLandTexture `RTTI Type Descriptor'; /*0x4c775c*/
        v83 = (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor'; /*0x4c7761*/
        v82 = 0; /*0x4c7766*/
        v59 = TESForm_LookupByFormID(v91); /*0x4c7769*/
        v60 = OblivionDynamicCast(v59, v82, v83, v84, (int)v85); /*0x4c7772*/
        *(_DWORD *)(*(_DWORD *)(ecx0 + 0x24) + 4 * (unsigned __int8)v92 + 0x20) = v60; /*0x4c777f*/
        v61 = *(_DWORD *)(ecx0 + 0x24); /*0x4c7788*/
        v62 = (const char ***)(v61 + 4 * (unsigned __int8)v92 + 0x20); /*0x4c778b*/
        if ( *v62 ) /*0x4c7792*/
        {
          sub_4C9530(*v62); /*0x4c77f5*/
        }
        else
        {
          if ( v61 ) /*0x4c7799*/
          {
            v63 = *(_DWORD *)(v61 + 0x9C); /*0x4c779b*/
          }
          else
          {
            v64 = *(TESObjectCELL **)(ecx0 + 0x20); /*0x4c77a3*/
            if ( v64 ) /*0x4c77a8*/
              v63 = TESObjectCELL_GetYCoordinate(v64); /*0x4c77af*/
            else
              v63 = 0; /*0x4c77b3*/
          }
          v65 = *(_DWORD *)(ecx0 + 0x24); /*0x4c77b5*/
          if ( v65 ) /*0x4c77ba*/
          {
            v66 = *(_DWORD *)(v65 + 0x98); /*0x4c77bc*/
          }
          else
          {
            v67 = *(TESObjectCELL **)(ecx0 + 0x20); /*0x4c77c4*/
            if ( v67 ) /*0x4c77c9*/
              v66 = TESObjectCELL_GetXCoordinate(v67); /*0x4c77cb*/
            else
              v66 = 0; /*0x4c77d2*/
          }
          PrintError( /*0x4c77e6*/
            "Land (%i, %i) unable to find base texture ID (%08X) for block %i.",
            v66,
            v63,
            v91,
            (unsigned __int8)v92);
        }
      }
    }
    else if ( ChunkType == 0x54474856 ) /*0x4c7147*/
    {
      if ( v88 ) /*0x4c7461*/
      {
        if ( (*(_BYTE *)(ecx0 + 0x1C) & 1) != 0 ) /*0x4c746b*/
        {
          TESFile_GetChunkData(refID, v101, 0); /*0x4c747d*/
          v37 = *(_DWORD *)(ecx0 + 0x24); /*0x4c7488*/
          v99 = flt_A32048; /*0x4c748b*/
          v100[0] = flt_A3B888; /*0x4c7499*/
          v38 = v100[0]; /*0x4c749d*/
          *(float *)(v37 + 0x18) = v99; /*0x4c74a1*/
          *(float *)(v37 + 0x1C) = v38; /*0x4c74a4*/
          a1.vtbl = *(TESFormVtbl **)v101; /*0x4c74ae*/
          v39 = 1; /*0x4c74b2*/
          v40 = &v100[1]; /*0x4c74b7*/
          do /*0x4c7501*/
          {
            LODWORD(v89) = v101[v39 + 3]; /*0x4c74c8*/
            v89 = (double)SLODWORD(v89) + *(float *)&a1.vtbl; /*0x4c74de*/
            v41 = v89; /*0x4c74e2*/
            *v40 = v89; /*0x4c74e6*/
            if ( !(v39 % 0x21) ) /*0x4c74d8*/
              v41 = v40[0xFFFFFFE0]; /*0x4c74ee*/
            ++v39; /*0x4c74f1*/
            *(float *)&a1.vtbl = v41; /*0x4c74f4*/
            ++v40; /*0x4c74f8*/
          }
          while ( v39 < 0x442 ); /*0x4c7501*/
          for ( i = 0; i < 4; ++i ) /*0x4c7503*/
          {
            v43 = 0; /*0x4c7527*/
            LODWORD(v89) = 0x10 * (i % 2 + 0x21 * (i / 2)); /*0x4c7529*/
            for ( j = 0; j < 0xD8C; j += 0xC ) /*0x4c752d*/
            {
              *(float *)&a1.vtbl = v100[0x20 * (v43 / 0x11) + 1 + LODWORD(v89) + v43 / 0x11 + v43 % 0x11]; /*0x4c755f*/
              *(_DWORD *)v93 = (int)*(float *)&a1.vtbl; /*0x4c7567*/
              a1.vtbl = (TESFormVtbl *)((v43 % 0x11) << 7); /*0x4c7580*/
              v45 = *(_DWORD *)(ecx0 + 0x24); /*0x4c7584*/
              v94 = (float)(8 * *(_DWORD *)v93); /*0x4c7587*/
              v46 = *(_DWORD *)(*(_DWORD *)(v45 + 4) + 4 * i); /*0x4c7592*/
              *(float *)&a1.vtbl = (double)(int)a1.vtbl + *(float *)(4 * i + 0xB35BA8); /*0x4c759f*/
              v47 = *(float *)&a1.vtbl; /*0x4c75a3*/
              a1.vtbl = (TESFormVtbl *)((v43 / 0x11) << 7); /*0x4c75a7*/
              *(float *)(v46 + j) = v47; /*0x4c75ab*/
              v48 = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(ecx0 + 0x24) + 4) + 4 * i); /*0x4c75b8*/
              *(float *)&a1.vtbl = (double)(int)a1.vtbl + *(float *)(4 * i + 0xB35B98); /*0x4c75c2*/
              *(float *)(v48 + j + 4) = *(float *)&a1.vtbl; /*0x4c75ca*/
              v49 = v94; /*0x4c75d4*/
              *(float *)(*(_DWORD *)(*(_DWORD *)(*(_DWORD *)(ecx0 + 0x24) + 4) + 4 * i) + j + 8) = v94; /*0x4c75db*/
              v50 = *(_DWORD *)(ecx0 + 0x24); /*0x4c75df*/
              if ( *(float *)(v50 + 0x18) <= v49 ) /*0x4c75ec*/
              {
                if ( *(float *)(v50 + 0x1C) < v49 ) /*0x4c75fd*/
                  *(float *)(v50 + 0x1C) = v49; /*0x4c75ff*/
              }
              else
              {
                *(float *)(v50 + 0x18) = v49; /*0x4c75ee*/
              }
              ++v43; /*0x4c7609*/
            }
          }
          refID = (Data *)a1.member.refID; /*0x4c7624*/
        }
      }
    }
    else if ( ChunkType > 0x4C4D4E56 ) /*0x4c7152*/
    {
      if ( ChunkType == 0x524C4356 ) /*0x4c735c*/
      {
        if ( v88 ) /*0x4c7367*/
        {
          if ( (*(_BYTE *)(ecx0 + 0x1C) & 2) != 0 ) /*0x4c7371*/
          {
            TESFile_GetChunkData(refID, (char *)&v100[1], 0); /*0x4c7380*/
            v98 = 1.0; /*0x4c7387*/
            v26 = 0; /*0x4c738b*/
            v27 = dbl_A3DDD8; /*0x4c738d*/
            do /*0x4c744b*/
            {
              v28 = 0x10 * (v26 % 2 + 0x21 * (v26 / 2)); /*0x4c73b2*/
              v29 = 0; /*0x4c73b5*/
              v30 = 0; /*0x4c73b7*/
              do /*0x4c743f*/
              {
                LODWORD(v89) = *((unsigned __int8 *)&v100[0xC * (v29 / 0x11) + 1] + 3 * v29 + 3 * v28); /*0x4c73d9*/
                v31 = (double)SLODWORD(v89); /*0x4c73e2*/
                LODWORD(v89) = *((unsigned __int8 *)&v100[0xC * (v29 / 0x11) + 1] + 3 * v29 + 3 * v28 + 1); /*0x4c73e6*/
                LODWORD(v32) = *((unsigned __int8 *)&v100[0xC * (v29 / 0x11) + 1] + 3 * v29 + 3 * v28 + 2); /*0x4c73ea*/
                v33 = *(_DWORD *)(ecx0 + 0x24); /*0x4c73f1*/
                ++v29; /*0x4c73f4*/
                v95 = v31 / v27; /*0x4c73f7*/
                v34 = (double)SLODWORD(v89); /*0x4c73fb*/
                v89 = v32; /*0x4c73ff*/
                v35 = (float *)(v30 + *(_DWORD *)(*(_DWORD *)(v33 + 0xC) + 4 * v26)); /*0x4c740f*/
                *v35 = v95; /*0x4c7411*/
                v30 += 0x10; /*0x4c7413*/
                v96 = v34 / v27; /*0x4c741c*/
                v36 = (double)SLODWORD(v89); /*0x4c7420*/
                v35[1] = v96; /*0x4c7428*/
                v97 = v36 / v27; /*0x4c742d*/
                v35[2] = v97; /*0x4c7435*/
                v35[3] = v98; /*0x4c743c*/
              }
              while ( v30 < 0x1210 ); /*0x4c743f*/
              ++v26; /*0x4c7445*/
            }
            while ( v26 < 4 ); /*0x4c744b*/
            refID = (Data *)a1.member.refID; /*0x4c7451*/
          }
        }
      }
    }
    else
    {
      switch ( ChunkType ) /*0x4c7158*/
      {
        case 0x4C4D4E56: /*0x4c7158*/
          if ( v88 ) /*0x4c7241*/
          {
            if ( (*(_BYTE *)(ecx0 + 0x1C) & 1) != 0 ) /*0x4c724b*/
            {
              TESFile_GetChunkData((Data *)a1.member.refID, (char *)&v100[1], 0); /*0x4c725c*/
              for ( k = 0; k < 4; ++k ) /*0x4c7261*/
              {
                v18 = 0; /*0x4c7285*/
                a1.vtbl = (TESFormVtbl *)(0x10 * (k % 2 + 0x21 * (k / 2))); /*0x4c7287*/
                for ( m = 0; m < 0xD8C; m += 0xC ) /*0x4c728b*/
                {
                  v20 = *(_DWORD *)(ecx0 + 0x24); /*0x4c72a8*/
                  v21 = 3 * ((int)a1.vtbl + 0x10 * (v18 / 0x11) + v18); /*0x4c72ad*/
                  LODWORD(v89) = *((char *)&v100[1] + v21); /*0x4c72b5*/
                  v22 = *(_DWORD *)(*(_DWORD *)(v20 + 8) + 4 * k); /*0x4c72bc*/
                  v23 = dbl_A46298; /*0x4c72cb*/
                  v89 = (double)SLODWORD(v89) / v23; /*0x4c72cd*/
                  *(float *)(m + v22) = v89; /*0x4c72d5*/
                  LODWORD(v89) = *((char *)&v100[1] + v21 + 1); /*0x4c72dd*/
                  v24 = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(ecx0 + 0x24) + 8) + 4 * k); /*0x4c72eb*/
                  v89 = (double)SLODWORD(v89) / v23; /*0x4c72f0*/
                  *(float *)(v24 + m + 4) = v89; /*0x4c72f8*/
                  LODWORD(v89) = *((char *)&v100[1] + v21 + 2); /*0x4c7301*/
                  v25 = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(ecx0 + 0x24) + 8) + 4 * k); /*0x4c730f*/
                  v89 = (double)SLODWORD(v89) / v23; /*0x4c7312*/
                  *(float *)(v25 + m + 8) = v89; /*0x4c731a*/
                  Vector3_NormalizeInPlace((float *)(m + *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(ecx0 + 0x24) + 8) + 4 * k))); /*0x4c7329*/
                  ++v18; /*0x4c7333*/
                }
              }
              refID = (Data *)a1.member.refID; /*0x4c734e*/
            }
          }
          break;
        case 0x41544144: /*0x4c7158*/
          v14 = (_DWORD *)(ecx0 + 0x1C); /*0x4c7208*/
          v15 = (*(_DWORD *)(ecx0 + 0x1C) & 0x400) != 0; /*0x4c7213*/
          TESFile_GetChunkData(refID, (char *)(ecx0 + 0x1C), 4u); /*0x4c7216*/
          *(_DWORD *)(ecx0 + 0x1C) &= ~8u; /*0x4c721b*/
          v16 = *(_DWORD *)(ecx0 + 0x1C); /*0x4c7220*/
          if ( v15 ) /*0x4c7222*/
            *v14 = v16 | 0x400; /*0x4c7229*/
          else
            *v14 = v16 & 0xFFFFFBFF; /*0x4c7235*/
          break;
        case 0x4443504D: /*0x4c7158*/
          if ( v88 ) /*0x4c7179*/
          {
            length = refID->currentChunk.length; /*0x4c717f*/
            v11 = (char *)FormHeapAlloc(length); /*0x4c718e*/
            TESFile_GetChunkData(refID, v11, length); /*0x4c7194*/
            v12 = *(_DWORD *)(*(_DWORD *)(ecx0 + 0x24) + 0x50); /*0x4c719c*/
            if ( v12 ) /*0x4c71a1*/
            {
              if ( *(_WORD *)(v12 + 4) ) /*0x4c71a3*/
              {
                if ( !--*(_WORD *)(v12 + 6) ) /*0x4c71af*/
                  (**(void (__thiscall ***)(int, int))v12)(v12, 1); /*0x4c71be*/
              }
              *(_DWORD *)(*(_DWORD *)(ecx0 + 0x24) + 0x50) = 0; /*0x4c71c3*/
            }
            sub_4C2230(v11, length, (_DWORD *)(*(_DWORD *)(ecx0 + 0x24) + 0x50)); /*0x4c71d5*/
            v13 = *(_DWORD *)(*(_DWORD *)(ecx0 + 0x24) + 0x50); /*0x4c71dd*/
            if ( v13 ) /*0x4c71e2*/
            {
              if ( *(_WORD *)(v13 + 4) ) /*0x4c71e4*/
                ++*(_WORD *)(v13 + 6); /*0x4c71eb*/
              *(_DWORD *)(ecx0 + 0x1C) |= 0x800u; /*0x4c71f0*/
            }
            FormHeapFree((unsigned int)v11); /*0x4c71f8*/
          }
          break;
      }
    }
  }
  while ( TESFile_GetNextChunk(refID) ); /*0x4c7961*/
  if ( v88 ) /*0x4c7974*/
    *(_DWORD *)(ecx0 + 0x1C) |= 8u; /*0x4c7976*/
  else
    *(_DWORD *)(ecx0 + 0x1C) &= ~8u; /*0x4c797c*/
  return 1; /*0x4c7982*/
}
