void __usercall NiTMap<unsigned int,NiTSimpleList<ExpiredCellData *> *>::NiTMap<unsigned int,NiTSimpleList<ExpiredCellData *> *>(
        NiTMap<unsigned int,NiTSimpleList<ExpiredCellData *> *> *this@<ecx>,
        double a2@<st1>,
        double a3@<st2>)
{
  NiTMap<unsigned int,NiTSimpleList<ExpiredCellData *> *> *v3; // esi
  int v4; // eax
  char v5; // dl
  int v6; // edi
  double GameHour; // st7
  NiTMap_TESCELL *v8; // edx
  UInt32 v9; // ecx
  UInt32 m_numBuckets; // eax
  NiTMap_Entry_TESCELL **m_buckets; // edx
  NiTMap_Entry_TESCELL **v12; // edi
  NiTMap_Entry_TESCELL *v13; // ecx
  NiTMap_TESCELL *v14; // ecx
  TESFormVtbl *vtbl; // ecx
  int XCoordinate; // ebp
  int YCoordinate; // ebx
  int v18; // eax
  TESSaveLoad *v19; // edi
  TESFormVtbl **v20; // eax
  char v21; // edx^2
  TESObjectCELL **v22; // eax
  TESObjectCELL *v23; // edx
  int v24; // eax
  int refID; // edi
  TESObjectCELL **v26; // eax
  TESObjectCELL *v27; // ecx
  UInt32 v28; // eax
  void *v29; // edx
  int v30; // eax
  TESObjectCELL **v31; // eax
  TESObjectCELL *v32; // ecx
  TESObjectCELL **v33; // eax
  TESForm *v34; // eax
  TESObjectCELL *v35; // esi
  TESObjectCELL *v36; // eax
  int *v37; // eax
  _DWORD *v38; // eax
  _DWORD *v39; // ebx
  NiTMap_TESCELL *v40; // esi
  UInt32 v41; // edx
  UInt32 v42; // eax
  NiTMap_Entry_TESCELL **v43; // esi
  NiTMap_Entry_TESCELL **v44; // ecx
  NiTMap_Entry_TESCELL *v45; // eax
  NiTMap_TESCELL **v46; // ebx
  UInt32 v47; // ebp
  NiTMap_TESCELL *v48; // ecx
  NiTMap_TESCELL *v49; // eax
  int v50; // esi
  int v51; // edi
  TESSaveLoad *v52; // ecx
  int *v53; // eax
  TESSaveLoad *v54; // edi
  const void *v55; // esi
  double v56; // st7
  int v57; // eax
  TESSaveLoad *v58; // edi
  const void *v59; // esi
  double v60; // st7
  double v61; // st7
  NiTMap_TESCELL *v62; // eax
  TESForm *v63; // eax
  int type; // ecx
  TESObjectCELL *ParentCell; // eax
  TESObjectCELL *v66; // edi
  int v67; // ecx
  _DWORD *v68; // eax
  TESFormVtbl *v69; // ebx
  signed int v70; // ebx
  int v71; // esi
  int v72; // edi
  unsigned __int16 v73; // ax
  unsigned int v74; // esi
  FreeEntry *v75; // ebx
  TESSaveLoad *v76; // ecx
  void *v77; // esi
  char *v78; // eax
  NiTMap_TESCELL **v79; // edi
  TESObjectCELL *v80; // eax
  TESFormVtbl *v81; // ecx
  int v82; // ebp
  int v83; // edi
  bool IsFormIDCreated; // al
  TESObjectREFR *v85; // esi
  int v86; // eax
  _DWORD *v87; // eax
  _DWORD *v88; // edi
  unsigned int *v89; // esi
  unsigned int v90; // eax
  unsigned int *v91; // eax
  size_t v92; // [esp-4h] [ebp-D8h]
  size_t v93; // [esp-4h] [ebp-D8h]
  TESObjectCELL *v94; // [esp+14h] [ebp-C0h] BYREF
  NiTMap_TESCELL **v95; // [esp+18h] [ebp-BCh]
  TESChildCELL *v96; // [esp+1Ch] [ebp-B8h]
  int a1; // [esp+20h] [ebp-B4h] BYREF
  TESFormVtbl *v98; // [esp+24h] [ebp-B0h]
  char v99; // [esp+2Bh] [ebp-A9h]
  int *v100; // [esp+2Ch] [ebp-A8h] BYREF
  int Src; // [esp+30h] [ebp-A4h] BYREF
  int v102; // [esp+34h] [ebp-A0h]
  NiTMap_Entry_TESCELL *v103; // [esp+38h] [ebp-9Ch] BYREF
  void **v104; // [esp+3Ch] [ebp-98h] BYREF
  unsigned int v105; // [esp+40h] [ebp-94h]
  int v106; // [esp+44h] [ebp-90h]
  int v107; // [esp+48h] [ebp-8Ch]
  void *v108[2]; // [esp+4Ch] [ebp-88h]
  int v109; // [esp+54h] [ebp-80h]
  int Size; // [esp+58h] [ebp-7Ch]
  _DWORD v111[7]; // [esp+5Ch] [ebp-78h] BYREF
  char Dst[8]; // [esp+78h] [ebp-5Ch] BYREF
  UInt32 v113; // [esp+80h] [ebp-54h]
  float v114; // [esp+84h] [ebp-50h]
  float v115; // [esp+88h] [ebp-4Ch]
  char v116[16]; // [esp+9Ch] [ebp-38h] BYREF
  UInt32 v117; // [esp+ACh] [ebp-28h]
  float v118; // [esp+B0h] [ebp-24h]
  float v119; // [esp+B4h] [ebp-20h]
  unsigned int v120; // [esp+D0h] [ebp-4h]

  v3 = this; /*0x4616ad*/
  v95 = (NiTMap_TESCELL **)this; /*0x4616af*/
  v4 = *((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + LODWORD(OB_ShaderConstantStorage_010201A0[0x18FF4])); /*0x4616bf*/
  v5 = *(_BYTE *)(v4 + 0x185); /*0x4616c2*/
  v109 = v4; /*0x4616c8*/
  *(_BYTE *)(v4 + 0x185) = 0; /*0x4616cc*/
  v99 = v5; /*0x4616d3*/
  v105 = 0x25; /*0x4616e0*/
  v107 = 0; /*0x4616f6*/
  v106 = FormHeapAlloc(0x94u); /*0x461712*/
  _memset(v106, 0, 0x94u); /*0x461716*/
  v104 = &NiTMap<unsigned int,NiTSimpleList<ExpiredCellData *> *>::`vftable'; /*0x46171e*/
  v120 = 0; /*0x46172b*/
  v6 = 0x18 * TimeGlobals_GetGameDaysPassed(&MEMORY[0xB332E0]); /*0x461743*/
  GameHour = TimeGlobals_GetGameHour(&MEMORY[0xB332E0]); /*0x461745*/
  v8 = *(NiTMap_TESCELL **)v3; /*0x461753*/
  v102 = (unsigned __int16)v96 | 0xC00; /*0x46175a*/
  v9 = 0; /*0x46175e*/
  *(_QWORD *)v108 = (__int64)GameHour; /*0x461764*/
  m_numBuckets = v8->m_numBuckets; /*0x46176e*/
  v102 = (__int64)GameHour + v6; /*0x461777*/
  if ( m_numBuckets ) /*0x46177b*/
  {
    m_buckets = v8->m_buckets; /*0x46177d*/
    v12 = m_buckets; /*0x461780*/
    while ( !*v12 ) /*0x461784*/
    {
      ++v9; /*0x46178a*/
      ++v12; /*0x46178d*/
      if ( v9 >= m_numBuckets ) /*0x461792*/
        goto LABEL_5; /*0x461792*/
    }
    v13 = m_buckets[v9]; /*0x461868*/
  }
  else
  {
LABEL_5:
    v13 = 0; /*0x461794*/
  }
  v103 = v13; /*0x461798*/
  while ( v103 ) /*0x46179c*/
  {
    v14 = *(NiTMap_TESCELL **)v3; /*0x4617a9*/
    v94 = 0; /*0x4617af*/
    a1 = 0; /*0x4617b3*/
    NiTMap_U32Pointer_GetNextEntry(v14, &v103, (void **)&a1, &v94); /*0x4617bd*/
    vtbl = v94->vtbl; /*0x4617c6*/
    XCoordinate = 0x7FFFFFFF; /*0x4617ce*/
    YCoordinate = 0x7FFFFFFF; /*0x4617d3*/
    if ( ((int)v94->vtbl & 0x8000000) != 0 ) /*0x4617d5*/
    {
      v18 = *(_DWORD *)&v94->members.super.type; /*0x4617db*/
      v94 = 0; /*0x4617e0*/
      if ( v18 ) /*0x4617e8*/
      {
        *((_DWORD *)v3 + 5) = v18; /*0x4617ee*/
        v19 = g_TESSaveLoadGame; /*0x4617f1*/
        v20 = (TESFormVtbl **)g_TESSaveLoadGame->unk000[5]; /*0x4617f7*/
        v98 = *v20; /*0x4617ff*/
        v21 = BYTE2(v98); /*0x4617fa*/
        v19->unk000[5] = (UInt32)(v20 + 1); /*0x461808*/
        if ( v21 == 0x30 && HIBYTE(v98) >= 0x5Bu ) /*0x461816*/
        {
          if ( ((unsigned int)vtbl & 0x4000000) != 0 ) /*0x461822*/
          {
            v22 = (TESObjectCELL **)g_TESSaveLoadGame->unk000[5]; /*0x46182a*/
            v23 = *v22; /*0x46182d*/
            g_TESSaveLoadGame->unk000[5] = (UInt32)(v22 + 1); /*0x461832*/
            v94 = v23; /*0x461838*/
            v24 = sub_459990(v3, (unsigned __int16)v23); /*0x46183c*/
            XCoordinate = SBYTE2(v94); /*0x461841*/
            YCoordinate = SHIBYTE(v94); /*0x461846*/
            refID = v24; /*0x46184b*/
            v26 = *((TESObjectCELL ***)v3 + 5); /*0x46184d*/
            v27 = *v26; /*0x461850*/
            *((_DWORD *)v3 + 5) = v26 + 1; /*0x461855*/
            v94 = v27; /*0x461858*/
            *((_DWORD *)v3 + 5) = 0; /*0x46185c*/
          }
          else
          {
            if ( ((unsigned int)vtbl & 0x2000000) != 0 ) /*0x461876*/
            {
              v28 = g_TESSaveLoadGame->unk000[5]; /*0x46187e*/
              v29 = *(void **)v28; /*0x461881*/
              LOWORD(YCoordinate) = *(_WORD *)(v28 + 4); /*0x461883*/
              g_TESSaveLoadGame->unk000[5] = v28 + 6; /*0x46188a*/
              v108[0] = v29; /*0x461890*/
              v30 = sub_459990(v3, (unsigned __int16)v29); /*0x461894*/
              XCoordinate = SHIWORD(v108[0]); /*0x461899*/
              refID = v30; /*0x46189e*/
              v31 = *((TESObjectCELL ***)v3 + 5); /*0x4618a0*/
              v32 = *v31; /*0x4618a3*/
              *((_DWORD *)v3 + 5) = v31 + 1; /*0x4618a8*/
              YCoordinate = (__int16)YCoordinate; /*0x4618ab*/
            }
            else
            {
              v33 = *((TESObjectCELL ***)v3 + 5); /*0x4618be*/
              v32 = *v33; /*0x4618c1*/
              refID = a1; /*0x4618c3*/
              *((_DWORD *)v3 + 5) = v33 + 1; /*0x4618ca*/
            }
            v94 = v32; /*0x4618ae*/
            *((_DWORD *)v3 + 5) = 0; /*0x4618b2*/
          }
        }
        else
        {
          refID = a1; /*0x4618da*/
          *((_DWORD *)v3 + 5) = 0; /*0x4618de*/
        }
LABEL_24:
        if ( v94 ) /*0x461944*/
        {
          if ( v102 - (int)v94 > (unsigned int)MEMORY[0xB35C1C] ) /*0x461956*/
          {
            if ( XCoordinate == 0x7FFFFFFF ) /*0x461962*/
            {
              NiTMap_SetAt(&v104, refID, 0); /*0x461a02*/
            }
            else
            {
              v37 = (int *)FormHeapAlloc(8u); /*0x46196a*/
              v100 = v37; /*0x461972*/
              *v37 = XCoordinate; /*0x461976*/
              v37[1] = YCoordinate; /*0x461978*/
              v94 = 0; /*0x461985*/
              if ( NiTMap_GetAt(&v104, refID, &v94) ) /*0x46198d*/
              {
                BSSimpleList_PushFront(v94, (int)v100); /*0x4619f4*/
              }
              else
              {
                v38 = (_DWORD *)FormHeapAlloc(8u); /*0x461998*/
                if ( v38 ) /*0x4619a2*/
                {
                  *v38 = 0; /*0x4619aa*/
                  v38[1] = 0; /*0x4619b0*/
                  v39 = v38; /*0x4619b7*/
                  NiTMap_SetAt(&v104, refID, (int)v38); /*0x4619b9*/
                  BSSimpleList_PushFront(v39, (int)v100); /*0x4619c5*/
                }
                else
                {
                  NiTMap_SetAt(&v104, refID, 0); /*0x4619d6*/
                  BSSimpleList_PushFront(0, (int)v100); /*0x4619e2*/
                }
              }
            }
          }
        }
        continue; /*0x4619ca*/
      }
      refID = a1; /*0x4618e7*/
      v34 = TESForm_LookupByFormID(a1); /*0x4618ec*/
      v35 = (TESObjectCELL *)v34; /*0x4618f1*/
      if ( v34 && v34->member.type == kFormType_Cell ) /*0x461902*/
      {
        TESObjectCELL_GetExtraDetachTime((ExtraDataList *)v34); /*0x46190a*/
        v94 = v36; /*0x461911*/
        if ( !TESObjectCELL_IsInterior(v35) ) /*0x461915*/
        {
          refID = TESObjectCELL_GetWorldSpace(v35)->super.refID; /*0x461925*/
          XCoordinate = TESObjectCELL_GetXCoordinate(v35); /*0x461931*/
          YCoordinate = TESObjectCELL_GetYCoordinate(v35); /*0x461938*/
        }
        v3 = (NiTMap<unsigned int,NiTSimpleList<ExpiredCellData *> *> *)v95; /*0x46193a*/
        goto LABEL_24; /*0x46193a*/
      }
      v3 = (NiTMap<unsigned int,NiTSimpleList<ExpiredCellData *> *> *)v95; /*0x461a09*/
    }
  }
  v40 = *(NiTMap_TESCELL **)v3; /*0x461a18*/
  v41 = v40->m_numBuckets; /*0x461a1a*/
  v42 = 0; /*0x461a1d*/
  if ( v41 ) /*0x461a21*/
  {
    v43 = v40->m_buckets; /*0x461a23*/
    v44 = v43; /*0x461a26*/
    while ( !*v44 ) /*0x461a33*/
    {
      ++v42; /*0x461a39*/
      ++v44; /*0x461a3c*/
      if ( v42 >= v41 ) /*0x461a41*/
        goto LABEL_39; /*0x461a41*/
    }
    v45 = v43[v42]; /*0x461b13*/
  }
  else
  {
LABEL_39:
    v45 = 0; /*0x461a43*/
  }
  v103 = v45; /*0x461a47*/
  if ( v45 ) /*0x461a4b*/
  {
    while ( 1 ) /*0x461a51*/
    {
      v46 = v95; /*0x461a51*/
      v47 = 0; /*0x461a63*/
      v48 = *v95; /*0x461a66*/
      v94 = 0; /*0x461a68*/
      a1 = 0; /*0x461a6c*/
      NiTMap_U32Pointer_GetNextEntry(v48, &v103, (void **)&a1, &v94); /*0x461a70*/
      v49 = *(NiTMap_TESCELL **)&v94->members.super.type; /*0x461a7b*/
      v50 = 0x7FFFFFFF; /*0x461a82*/
      v98 = v94->vtbl; /*0x461a87*/
      v51 = 0x7FFFFFFF; /*0x461a8b*/
      v96 = 0; /*0x461a8d*/
      LOWORD(Src) = 0; /*0x461a91*/
      if ( !v49 ) /*0x461a96*/
      {
        v63 = TESForm_LookupByFormID(a1); /*0x461bd1*/
        if ( !v63 ) /*0x461bdb*/
          goto LABEL_107; /*0x461bdb*/
        type = v63->member.type; /*0x461be1*/
        v102 = type; /*0x461be8*/
        if ( type != 0x31 && type != 0x32 && type != 0x33 ) /*0x461bf6*/
          goto LABEL_107; /*0x461bf6*/
        v96 = (TESChildCELL *)v63; /*0x461bfe*/
        ParentCell = Shared_GetDwordAtOffset40((TESObjectREFR *)v63); /*0x461c02*/
        v66 = ParentCell; /*0x461c07*/
        if ( !ParentCell ) /*0x461c0b*/
          goto LABEL_107; /*0x461c0b*/
        if ( TESObjectCELL_IsInterior(ParentCell) ) /*0x461c13*/
        {
          v47 = v66->members.super.refID; /*0x461c1c*/
          v50 = 0; /*0x461c1f*/
          v51 = 0; /*0x461c21*/
        }
        else
        {
          v47 = TESObjectCELL_GetWorldSpace(v66)->super.refID; /*0x461c2c*/
          v50 = TESObjectCELL_GetXCoordinate(v66); /*0x461c38*/
          v51 = TESObjectCELL_GetYCoordinate(v66); /*0x461c3f*/
        }
        goto LABEL_66; /*0x461c23*/
      }
      v46[5] = v49; /*0x461a9c*/
      v52 = g_TESSaveLoadGame; /*0x461a9f*/
      v53 = (int *)g_TESSaveLoadGame->unk000[5]; /*0x461aa5*/
      Src = *v53; /*0x461aad*/
      v52->unk000[5] = (UInt32)(v53 + 1); /*0x461ab1*/
      v102 = BYTE2(Src); /*0x461abc*/
      if ( BYTE2(Src) != 0x31 && BYTE2(Src) != 0x32 && BYTE2(Src) != 0x33 ) /*0x461aca*/
        goto LABEL_57; /*0x461aca*/
      if ( ((unsigned __int8)v98 & 2) != 0 ) /*0x461ad6*/
        break; /*0x461ad6*/
      if ( ((unsigned __int8)v98 & 0xC) != 0 ) /*0x461b1d*/
      {
        v58 = g_TESSaveLoadGame; /*0x461b25*/
        v59 = (const void *)g_TESSaveLoadGame->unk000[5]; /*0x461b2b*/
        if ( (int)v98 >= 0 ) /*0x461b2e*/
        {
          LODWORD(v92) = 0x1C; /*0x461b65*/
          memcpy(v111, v59, v92); /*0x461b6d*/
          v61 = *(float *)&v111[1]; /*0x461b72*/
          v47 = v111[0]; /*0x461b76*/
          v58->unk000[5] = (UInt32)v59 + 0x1C; /*0x461b80*/
          v57 = Double_To_SInt32(v61); /*0x461b83*/
          GameHour = *(float *)&v111[2]; /*0x461b88*/
        }
        else
        {
          LODWORD(v92) = 0x2C; /*0x461b30*/
          memcpy(v116, v59, v92); /*0x461b3b*/
          v60 = v118; /*0x461b40*/
          v47 = v117; /*0x461b47*/
          v58->unk000[5] = (UInt32)v59 + 0x2C; /*0x461b54*/
          v57 = Double_To_SInt32(v60); /*0x461b57*/
          GameHour = v119; /*0x461b5c*/
        }
        goto LABEL_52; /*0x461b63*/
      }
LABEL_53:
      if ( TESDataHandler_IsFormIDCreated_(v47) ) /*0x461ba2*/
        goto LABEL_57; /*0x461ba9*/
      v62 = v46[0x1D]; /*0x461bab*/
      if ( v47 <= v62->m_numItems ) /*0x461bb1*/
      {
        v47 = *(_DWORD *)(v62->m_numBuckets + 4 * v47); /*0x461bc0*/
LABEL_57:
        v46[5] = 0; /*0x461bc3*/
        goto LABEL_66; /*0x461bca*/
      }
      v47 = 0; /*0x461bb3*/
      v46[5] = 0; /*0x461bb5*/
LABEL_66:
      if ( !v47 ) /*0x461c43*/
        goto LABEL_107; /*0x461c43*/
      if ( v50 == 0x7FFFFFFF ) /*0x461c4f*/
        goto LABEL_107; /*0x461c4f*/
      if ( v51 == 0x7FFFFFFF ) /*0x461c5b*/
        goto LABEL_107; /*0x461c5b*/
      v100 = 0; /*0x461c6b*/
      if ( !NiTMap_GetAt(&v104, v47, &v100) ) /*0x461c73*/
        goto LABEL_107; /*0x461c7a*/
      v67 = (int)v100; /*0x461c80*/
      if ( v100 ) /*0x461c86*/
      {
        while ( 1 ) /*0x461c90*/
        {
          v68 = *(_DWORD **)v67; /*0x461c90*/
          if ( !*(_DWORD *)v67 ) /*0x461c90*/
            goto LABEL_107; /*0x461c94*/
          if ( *v68 == v50 && v68[1] == v51 ) /*0x461ca1*/
            break; /*0x461ca1*/
          v67 = *(_DWORD *)(v67 + 4); /*0x461ca3*/
          if ( !v67 ) /*0x461ca8*/
            goto LABEL_107; /*0x461ca8*/
        }
      }
      v69 = v98; /*0x461caf*/
      if ( ((unsigned __int8)v98 & 8) != 0 && ((unsigned __int8)v98 & 6) == 0 ) /*0x461cbf*/
      {
        if ( v98 == (TESFormVtbl *)8 ) /*0x461cc8*/
        {
          SaveLoadChangesMap_RemoveChanges(*v95, a1, 1); /*0x461cd7*/
          goto LABEL_91; /*0x461cdc*/
        }
        v108[0] = *(void **)&v94->members.super.type; /*0x461cea*/
        if ( v108[0] ) /*0x461cee*/
        {
          v70 = (unsigned int)v98 & 0xFFFFF7F7 | 0x800; /*0x461cf7*/
          v71 = v70; /*0x461cfd*/
          v98 = (TESFormVtbl *)v70; /*0x461d01*/
          if ( v70 >= 0 ) /*0x461d05*/
          {
            v72 = 0x1C; /*0x461d18*/
          }
          else
          {
            v71 = v70 & 0x7FFFFFFF; /*0x461d07*/
            v98 = (TESFormVtbl *)(v70 & 0x7FFFFFFF); /*0x461d0d*/
            v72 = 0x2C; /*0x461d11*/
          }
          v73 = Src - v72; /*0x461d22*/
          v74 = (unsigned int)&loc_800000 & v71; /*0x461d25*/
          LOWORD(Src) = Src - v72; /*0x461d2e*/
          Size = (unsigned __int16)Src; /*0x461d33*/
          if ( v74 ) /*0x461d37*/
          {
            v73 += 4; /*0x461d39*/
            LOWORD(Src) = v73; /*0x461d3d*/
          }
          v75 = sub_453500(v95, v47, v73 + 4); /*0x461d58*/
          LODWORD(v92) = 4; /*0x461d5a*/
          SaveLoad_SaveData((int)g_TESSaveLoadGame, &Src, v92); /*0x461d61*/
          if ( v74 ) /*0x461d68*/
          {
            LODWORD(v93) = 4; /*0x461d6a*/
            v76 = g_TESSaveLoadGame; /*0x461d71*/
            v100 = (int *)v47; /*0x461d77*/
            SaveLoad_SaveData((int)v76, &v100, v93); /*0x461d7b*/
          }
          v77 = v108[0]; /*0x461d84*/
          v78 = (char *)v108[0] + v72 + 4; /*0x461d88*/
          v79 = v95; /*0x461d8c*/
          LODWORD(v93) = Size; /*0x461d90*/
          SaveLoad_SaveData((int)v95, v78, v93); /*0x461d94*/
          MemoryHeap_Free_checked(v77); /*0x461d9f*/
          v80 = v94; /*0x461da4*/
          v81 = v98; /*0x461da8*/
          *(_DWORD *)&v94->members.super.type = v75; /*0x461dac*/
          v80->vtbl = v81; /*0x461daf*/
          v79[5] = 0; /*0x461db1*/
          v69 = v81; /*0x461db8*/
          goto LABEL_91; /*0x461dba*/
        }
        if ( v96 ) /*0x461dc1*/
        {
          ChangesMap_RemoveFormChangeFlags(*v95, (int)v96, 0x80000008); /*0x461dd3*/
LABEL_91:
          if ( v96 ) /*0x461dde*/
            sub_45BB30((int)v95, (char)v69, a3, a2, GameHour, (TESObjectREFR *)v96, 0); /*0x461de7*/
        }
      }
      v82 = v102; /*0x461dec*/
      if ( v102 == 0x32 || v102 == 0x33 ) /*0x461df8*/
      {
        v83 = a1; /*0x461dfa*/
        IsFormIDCreated = TESDataHandler_IsFormIDCreated_(a1); /*0x461e05*/
        v85 = (TESObjectREFR *)v96; /*0x461e0c*/
        if ( IsFormIDCreated /*0x461e30*/
          && (!v96
           || !TESObjectREFR_IsPersistent((TESObjectREFR *)v96)
           && !((unsigned __int8 (__thiscall *)(TESObjectREFR *))v85->vtbl->super.Unk_1E)(v85)
           && !sub_4D9040(v85)) )
        {
          SaveLoadChangesMap_RemoveChanges(*v95, v83, 1); /*0x461e42*/
          if ( v85 ) /*0x461e49*/
          {
            v85->vtbl->super.Destroy((TESForm *)v85, 1); /*0x461e54*/
            v85 = 0; /*0x461e56*/
          }
        }
      }
      else
      {
        v85 = (TESObjectREFR *)v96; /*0x461e5a*/
        v83 = a1; /*0x461e5e*/
      }
      if ( v82 == 0x31 && ((unsigned int)v69 & 0x20000) != 0 ) /*0x461e6d*/
      {
        SaveLoadChangesMap_RemoveChanges(*v95, v83, 1); /*0x461e78*/
        if ( v85 ) /*0x461e7f*/
          v85->vtbl->super.Destroy((TESForm *)v85, 1); /*0x461e8a*/
      }
LABEL_107:
      if ( !v103 ) /*0x461e91*/
        goto LABEL_108; /*0x461e91*/
    }
    v54 = g_TESSaveLoadGame; /*0x461ad8*/
    v55 = (const void *)g_TESSaveLoadGame->unk000[5]; /*0x461ade*/
    LODWORD(v92) = 0x24; /*0x461ae1*/
    memcpy(Dst, v55, v92); /*0x461ae9*/
    v56 = v114; /*0x461aee*/
    v47 = v113; /*0x461af5*/
    v54->unk000[5] = (UInt32)v55 + 0x24; /*0x461b02*/
    v57 = Double_To_SInt32(v56); /*0x461b05*/
    GameHour = v115; /*0x461b0a*/
LABEL_52:
    v50 = v57 >> 0xC; /*0x461b8c*/
    v51 = Double_To_SInt32(GameHour) >> 0xC; /*0x461b98*/
    goto LABEL_53; /*0x461b98*/
  }
LABEL_108:
  v86 = 0; /*0x461e97*/
  if ( v105 ) /*0x461e9f*/
  {
    while ( !*(_DWORD *)(v106 + 4 * v86) ) /*0x461ea9*/
    {
      if ( ++v86 >= v105 ) /*0x461eb0*/
        goto LABEL_111; /*0x461eb0*/
    }
    v87 = *(_DWORD **)(v106 + 4 * v86); /*0x461ecd*/
  }
  else
  {
LABEL_111:
    v87 = 0; /*0x461eb2*/
  }
  v88 = v87; /*0x461eb6*/
  while ( v88 ) /*0x461eb8*/
  {
    v89 = (unsigned int *)v88[2]; /*0x461ec4*/
    if ( *v88 ) /*0x461ec0*/
    {
      v88 = (_DWORD *)*v88; /*0x461ec9*/
    }
    else
    {
      v90 = ((int (__thiscall *)(void ***, _DWORD))v104[1])(&v104, v88[1]) + 1; /*0x461ee7*/
      if ( v90 >= v105 ) /*0x461eec*/
      {
LABEL_119:
        v88 = 0; /*0x461f00*/
      }
      else
      {
        while ( !*(_DWORD *)(v106 + 4 * v90) ) /*0x461ef7*/
        {
          if ( ++v90 >= v105 ) /*0x461efe*/
            goto LABEL_119; /*0x461efe*/
        }
        v88 = *(_DWORD **)(v106 + 4 * v90); /*0x461f31*/
      }
    }
    if ( v89 ) /*0x461f04*/
    {
      while ( *v89 ) /*0x461f0a*/
      {
        FormHeapFree(*v89); /*0x461f0d*/
        v91 = (unsigned int *)v89[1]; /*0x461f12*/
        if ( v91 ) /*0x461f1a*/
        {
          v89[1] = v91[1]; /*0x461f1f*/
          *v89 = *v91; /*0x461f25*/
          FormHeapFree((unsigned int)v91); /*0x461f27*/
        }
        else
        {
          *v89 = 0; /*0x461f35*/
        }
      }
      FormHeapFree((unsigned int)v89); /*0x461f3e*/
    }
  }
  NiTMap_Clear(&v104); /*0x461f52*/
  *(_BYTE *)(v109 + 0x185) = v99; /*0x461f5f*/
  v120 = 0xFFFFFFFF; /*0x461f69*/
  NiTMap<unsigned int,NiTSimpleList<ExpiredCellData *> *>::~NiTMap<unsigned int,NiTSimpleList<ExpiredCellData *> *>((unsigned int *)&v104); /*0x461f74*/
}
