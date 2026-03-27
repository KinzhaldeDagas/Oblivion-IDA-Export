void __usercall NiTMap<unsigned int,NiTSimpleList<ExpiredCellData *> *>::NiTMap<unsigned int,NiTSimpleList<ExpiredCellData *> *>(
        NiTMap<unsigned int,NiTSimpleList<ExpiredCellData *> *> *this@<ecx>,
        double a2@<st1>)
{
  NiTMap<unsigned int,NiTSimpleList<ExpiredCellData *> *> *v3; // esi
  int v4; // eax
  char v5; // dl
  double v6; // st5
  int v7; // edi
  double GameHour; // st7
  NiTMap_TESCELL *v9; // edx
  UInt32 v10; // ecx
  UInt32 m_numBuckets; // eax
  NiTMap_Entry_TESCELL **m_buckets; // edx
  NiTMap_Entry_TESCELL **v13; // edi
  NiTMap_Entry_TESCELL *v14; // ecx
  NiTMap_TESCELL *v15; // ecx
  TESFormVtbl *vtbl; // ecx
  int XCoordinate; // ebp
  int YCoordinate; // ebx
  int v19; // eax
  TESSaveLoad *v20; // edi
  TESFormVtbl **v21; // eax
  char v22; // edx^2
  TESObjectCELL **v23; // eax
  TESObjectCELL *v24; // edx
  int v25; // eax
  int refID; // edi
  TESObjectCELL **v27; // eax
  TESObjectCELL *v28; // ecx
  UInt32 v29; // eax
  void *v30; // edx
  int v31; // eax
  TESObjectCELL **v32; // eax
  TESObjectCELL *v33; // ecx
  TESObjectCELL **v34; // eax
  TESForm *v35; // eax
  TESObjectCELL *v36; // esi
  TESObjectCELL *v37; // eax
  int *v38; // eax
  _DWORD *v39; // eax
  _DWORD *v40; // ebx
  NiTMap_TESCELL *v41; // esi
  UInt32 v42; // edx
  UInt32 v43; // eax
  NiTMap_Entry_TESCELL **v44; // esi
  NiTMap_Entry_TESCELL **v45; // ecx
  NiTMap_Entry_TESCELL *v46; // eax
  NiTMap<unsigned int,NiTSimpleList<ExpiredCellData *> *> *v47; // ebx
  UInt32 v48; // ebp
  NiTMap_TESCELL *v49; // ecx
  int v50; // eax
  int v51; // esi
  int v52; // edi
  TESSaveLoad *v53; // ecx
  int *v54; // eax
  TESSaveLoad *v55; // edi
  const void *v56; // esi
  double v57; // st7
  int v58; // eax
  TESSaveLoad *v59; // edi
  const void *v60; // esi
  double v61; // st7
  double v62; // st7
  int v63; // eax
  TESForm *v64; // eax
  int type; // ecx
  TESObjectCELL *ParentCell; // eax
  TESObjectCELL *v67; // edi
  int v68; // ecx
  _DWORD *v69; // eax
  TESFormVtbl *v70; // ebx
  signed int v71; // ebx
  int v72; // esi
  int v73; // edi
  unsigned __int16 v74; // ax
  unsigned int v75; // esi
  FreeEntry *v76; // ebx
  TESSaveLoad *v77; // ecx
  void *v78; // esi
  char *v79; // eax
  NiTMap<unsigned int,NiTSimpleList<ExpiredCellData *> *> *v80; // edi
  TESObjectCELL *v81; // eax
  TESFormVtbl *v82; // ecx
  int v83; // ebp
  int v84; // edi
  bool IsFormIDCreated; // al
  TESObjectREFR *v86; // esi
  int v87; // eax
  _DWORD *v88; // eax
  _DWORD *v89; // edi
  unsigned int *v90; // esi
  unsigned int v91; // eax
  unsigned int *v92; // eax
  size_t v93; // [esp-4h] [ebp-D8h]
  size_t v94; // [esp-4h] [ebp-D8h]
  TESObjectCELL *v95; // [esp+14h] [ebp-C0h] BYREF
  NiTMap<unsigned int,NiTSimpleList<ExpiredCellData *> *> *v96; // [esp+18h] [ebp-BCh]
  TESChildCELL *v97; // [esp+1Ch] [ebp-B8h]
  int a1; // [esp+20h] [ebp-B4h] BYREF
  TESFormVtbl *v99; // [esp+24h] [ebp-B0h]
  char v100; // [esp+2Bh] [ebp-A9h]
  int *v101; // [esp+2Ch] [ebp-A8h] BYREF
  int Src; // [esp+30h] [ebp-A4h] BYREF
  int v103; // [esp+34h] [ebp-A0h]
  NiTMap_Entry_TESCELL *v104; // [esp+38h] [ebp-9Ch] BYREF
  void **v105; // [esp+3Ch] [ebp-98h] BYREF
  unsigned int v106; // [esp+40h] [ebp-94h]
  int v107; // [esp+44h] [ebp-90h]
  int v108; // [esp+48h] [ebp-8Ch]
  void *v109[2]; // [esp+4Ch] [ebp-88h]
  int v110; // [esp+54h] [ebp-80h]
  int Size; // [esp+58h] [ebp-7Ch]
  _DWORD v112[7]; // [esp+5Ch] [ebp-78h] BYREF
  char Dst[8]; // [esp+78h] [ebp-5Ch] BYREF
  UInt32 v114; // [esp+80h] [ebp-54h]
  float v115; // [esp+84h] [ebp-50h]
  float v116; // [esp+88h] [ebp-4Ch]
  char v117[16]; // [esp+9Ch] [ebp-38h] BYREF
  UInt32 v118; // [esp+ACh] [ebp-28h]
  float v119; // [esp+B0h] [ebp-24h]
  float v120; // [esp+B4h] [ebp-20h]
  unsigned int v121; // [esp+D0h] [ebp-4h]

  v3 = this;
  v96 = this;
  v4 = *((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + TlsIndex);
  v5 = *(_BYTE *)(v4 + 0x185);
  v110 = v4;
  *(_BYTE *)(v4 + 0x185) = 0;
  v100 = v5;
  v106 = 0x25;
  v108 = 0;
  v107 = FormHeapAlloc(0x94u);
  v6 = _memset(v107, 0, 0x94);
  v105 = &NiTMap<unsigned int,NiTSimpleList<ExpiredCellData *> *>::`vftable';
  v121 = 0;
  v7 = 0x18 * TimeGlobals_GetGameDaysPassed(&TimeGlobals);
  GameHour = TimeGlobals_GetGameHour(&TimeGlobals);
  v9 = *(NiTMap_TESCELL **)v3;
  v103 = (unsigned __int16)v97 | 0xC00;
  v10 = 0;
  *(_QWORD *)v109 = (__int64)GameHour;
  m_numBuckets = v9->m_numBuckets;
  v103 = (__int64)GameHour + v7;
  if ( m_numBuckets )
  {
    m_buckets = v9->m_buckets;
    v13 = m_buckets;
    while ( !*v13 )
    {
      ++v10;
      ++v13;
      if ( v10 >= m_numBuckets )
        goto LABEL_5;
    }
    v14 = m_buckets[v10];
  }
  else
  {
LABEL_5:
    v14 = 0;
  }
  v104 = v14;
  while ( v104 )
  {
    v15 = *(NiTMap_TESCELL **)v3;
    v95 = 0;
    a1 = 0;
    sub_452600(v15, &v104, (void **)&a1, &v95);
    vtbl = v95->vtbl;
    XCoordinate = 0x7FFFFFFF;
    YCoordinate = 0x7FFFFFFF;
    if ( ((int)v95->vtbl & 0x8000000) != 0 )
    {
      v19 = *(_DWORD *)&v95->members.super.type;
      v95 = 0;
      if ( v19 )
      {
        *((_DWORD *)v3 + 5) = v19;
        v20 = SaveLoad_CurrentSavegame;
        v21 = (TESFormVtbl **)SaveLoad_CurrentSavegame->unk000[5];
        v99 = *v21;
        v22 = BYTE2(v99);
        v20->unk000[5] = (UInt32)(v21 + 1);
        if ( v22 == 0x30 && HIBYTE(v99) >= 0x5Bu )
        {
          if ( ((unsigned int)vtbl & 0x4000000) != 0 )
          {
            v23 = (TESObjectCELL **)SaveLoad_CurrentSavegame->unk000[5];
            v24 = *v23;
            SaveLoad_CurrentSavegame->unk000[5] = (UInt32)(v23 + 1);
            v95 = v24;
            v25 = sub_459990(v3, (unsigned __int16)v24);
            XCoordinate = SBYTE2(v95);
            YCoordinate = SHIBYTE(v95);
            refID = v25;
            v27 = *((TESObjectCELL ***)v3 + 5);
            v28 = *v27;
            *((_DWORD *)v3 + 5) = v27 + 1;
            v95 = v28;
            *((_DWORD *)v3 + 5) = 0;
          }
          else
          {
            if ( ((unsigned int)vtbl & 0x2000000) != 0 )
            {
              v29 = SaveLoad_CurrentSavegame->unk000[5];
              v30 = *(void **)v29;
              LOWORD(YCoordinate) = *(_WORD *)(v29 + 4);
              SaveLoad_CurrentSavegame->unk000[5] = v29 + 6;
              v109[0] = v30;
              v31 = sub_459990(v3, (unsigned __int16)v30);
              XCoordinate = SHIWORD(v109[0]);
              refID = v31;
              v32 = *((TESObjectCELL ***)v3 + 5);
              v33 = *v32;
              *((_DWORD *)v3 + 5) = v32 + 1;
              YCoordinate = (__int16)YCoordinate;
            }
            else
            {
              v34 = *((TESObjectCELL ***)v3 + 5);
              v33 = *v34;
              refID = a1;
              *((_DWORD *)v3 + 5) = v34 + 1;
            }
            v95 = v33;
            *((_DWORD *)v3 + 5) = 0;
          }
        }
        else
        {
          refID = a1;
          *((_DWORD *)v3 + 5) = 0;
        }
LABEL_24:
        if ( v95 )
        {
          if ( v103 - (int)v95 > (unsigned int)iHoursToRespawnCell )
          {
            if ( XCoordinate == 0x7FFFFFFF )
            {
              NiTMap_SetAt(&v105, refID, 0);
            }
            else
            {
              v38 = (int *)FormHeapAlloc(8u);
              v101 = v38;
              *v38 = XCoordinate;
              v38[1] = YCoordinate;
              v95 = 0;
              if ( NiTMap_GetAt(&v105, refID, &v95) )
              {
                BSSimpleList_PushFront(v95, (int)v101);
              }
              else
              {
                v39 = (_DWORD *)FormHeapAlloc(8u);
                if ( v39 )
                {
                  *v39 = 0;
                  v39[1] = 0;
                  v40 = v39;
                  NiTMap_SetAt(&v105, refID, (int)v39);
                  BSSimpleList_PushFront(v40, (int)v101);
                }
                else
                {
                  NiTMap_SetAt(&v105, refID, 0);
                  BSSimpleList_PushFront(0, (int)v101);
                }
              }
            }
          }
        }
        continue;
      }
      refID = a1;
      v35 = TESForm_LookupByFormID(a1);
      v36 = (TESObjectCELL *)v35;
      if ( v35 && v35->member.type == kFormType_Cell )
      {
        TESObjectCELL_GetExtraDetachTime(v35);
        v95 = v37;
        if ( !TESObjectCELL_IsInterior(v36) )
        {
          refID = TESObjectCELL_GetWorldSpace(v36)->super.refID;
          XCoordinate = TESObjectCELL_GetXCoordinate(v36);
          YCoordinate = TESObjectCELL_GetYCoordinate(v36);
        }
        v3 = v96;
        goto LABEL_24;
      }
      v3 = v96;
    }
  }
  v41 = *(NiTMap_TESCELL **)v3;
  v42 = v41->m_numBuckets;
  v43 = 0;
  if ( v42 )
  {
    v44 = v41->m_buckets;
    v45 = v44;
    while ( !*v45 )
    {
      ++v43;
      ++v45;
      if ( v43 >= v42 )
        goto LABEL_39;
    }
    v46 = v44[v43];
  }
  else
  {
LABEL_39:
    v46 = 0;
  }
  v104 = v46;
  if ( v46 )
  {
    while ( 1 )
    {
      v47 = v96;
      v48 = 0;
      v49 = *(NiTMap_TESCELL **)v96;
      v95 = 0;
      a1 = 0;
      sub_452600(v49, &v104, (void **)&a1, &v95);
      v50 = *(_DWORD *)&v95->members.super.type;
      v51 = 0x7FFFFFFF;
      v99 = v95->vtbl;
      v52 = 0x7FFFFFFF;
      v97 = 0;
      LOWORD(Src) = 0;
      if ( !v50 )
      {
        v64 = TESForm_LookupByFormID(a1);
        if ( !v64 )
          goto LABEL_107;
        type = v64->member.type;
        v103 = type;
        if ( type != 0x31 && type != 0x32 && type != 0x33 )
          goto LABEL_107;
        v97 = (TESChildCELL *)v64;
        ParentCell = TESObjectREFR_GetParentCell((TESObjectREFR *)v64);
        v67 = ParentCell;
        if ( !ParentCell )
          goto LABEL_107;
        if ( TESObjectCELL_IsInterior(ParentCell) )
        {
          v48 = v67->members.super.refID;
          v51 = 0;
          v52 = 0;
        }
        else
        {
          v48 = TESObjectCELL_GetWorldSpace(v67)->super.refID;
          v51 = TESObjectCELL_GetXCoordinate(v67);
          v52 = TESObjectCELL_GetYCoordinate(v67);
        }
        goto LABEL_66;
      }
      *((_DWORD *)v47 + 5) = v50;
      v53 = SaveLoad_CurrentSavegame;
      v54 = (int *)SaveLoad_CurrentSavegame->unk000[5];
      Src = *v54;
      v53->unk000[5] = (UInt32)(v54 + 1);
      v103 = BYTE2(Src);
      if ( BYTE2(Src) != 0x31 && BYTE2(Src) != 0x32 && BYTE2(Src) != 0x33 )
        goto LABEL_57;
      if ( ((unsigned __int8)v99 & 2) != 0 )
        break;
      if ( ((unsigned __int8)v99 & 0xC) != 0 )
      {
        v59 = SaveLoad_CurrentSavegame;
        v60 = (const void *)SaveLoad_CurrentSavegame->unk000[5];
        if ( (int)v99 >= 0 )
        {
          LODWORD(v93) = 0x1C;
          memcpy(v112, v60, v93);
          v62 = *(float *)&v112[1];
          v48 = v112[0];
          v59->unk000[5] = (UInt32)v60 + 0x1C;
          v58 = Double_To_SInt32(v62);
          GameHour = *(float *)&v112[2];
        }
        else
        {
          LODWORD(v93) = 0x2C;
          memcpy(v117, v60, v93);
          v61 = v119;
          v48 = v118;
          v59->unk000[5] = (UInt32)v60 + 0x2C;
          v58 = Double_To_SInt32(v61);
          GameHour = v120;
        }
        goto LABEL_52;
      }
LABEL_53:
      if ( TESDataHandler_IsFormIDCreated_(v48) )
        goto LABEL_57;
      v63 = *((_DWORD *)v47 + 0x1D);
      if ( v48 <= *(_DWORD *)(v63 + 0xC) )
      {
        v48 = *(_DWORD *)(*(_DWORD *)(v63 + 4) + 4 * v48);
LABEL_57:
        *((_DWORD *)v47 + 5) = 0;
        goto LABEL_66;
      }
      v48 = 0;
      *((_DWORD *)v47 + 5) = 0;
LABEL_66:
      if ( !v48 )
        goto LABEL_107;
      if ( v51 == 0x7FFFFFFF )
        goto LABEL_107;
      if ( v52 == 0x7FFFFFFF )
        goto LABEL_107;
      v101 = 0;
      if ( !NiTMap_GetAt(&v105, v48, &v101) )
        goto LABEL_107;
      v68 = (int)v101;
      if ( v101 )
      {
        while ( 1 )
        {
          v69 = *(_DWORD **)v68;
          if ( !*(_DWORD *)v68 )
            goto LABEL_107;
          if ( *v69 == v51 && v69[1] == v52 )
            break;
          v68 = *(_DWORD *)(v68 + 4);
          if ( !v68 )
            goto LABEL_107;
        }
      }
      v70 = v99;
      if ( ((unsigned __int8)v99 & 8) != 0 && ((unsigned __int8)v99 & 6) == 0 )
      {
        if ( v99 == (TESFormVtbl *)8 )
        {
          sub_452DF0(*(_DWORD **)v96, a1, 1);
          goto LABEL_91;
        }
        v109[0] = *(void **)&v95->members.super.type;
        if ( v109[0] )
        {
          v71 = (unsigned int)v99 & 0xFFFFF7F7 | 0x800;
          v72 = v71;
          v99 = (TESFormVtbl *)v71;
          if ( v71 >= 0 )
          {
            v73 = 0x1C;
          }
          else
          {
            v72 = v71 & 0x7FFFFFFF;
            v99 = (TESFormVtbl *)(v71 & 0x7FFFFFFF);
            v73 = 0x2C;
          }
          v74 = Src - v73;
          v75 = (unsigned int)&loc_800000 & v72;
          LOWORD(Src) = Src - v73;
          Size = (unsigned __int16)Src;
          if ( v75 )
          {
            v74 += 4;
            LOWORD(Src) = v74;
          }
          v76 = sub_453500(v96, v48, v74 + 4);
          LODWORD(v93) = 4;
          SaveLoad_SaveData((int)SaveLoad_CurrentSavegame, &Src, v93);
          if ( v75 )
          {
            LODWORD(v94) = 4;
            v77 = SaveLoad_CurrentSavegame;
            v101 = (int *)v48;
            SaveLoad_SaveData((int)v77, &v101, v94);
          }
          v78 = v109[0];
          v79 = (char *)v109[0] + v73 + 4;
          v80 = v96;
          LODWORD(v94) = Size;
          SaveLoad_SaveData((int)v96, v79, v94);
          MemoryHeap_Free_checked(v78);
          v81 = v95;
          v82 = v99;
          *(_DWORD *)&v95->members.super.type = v76;
          v81->vtbl = v82;
          *((_DWORD *)v80 + 5) = 0;
          v70 = v82;
          goto LABEL_91;
        }
        if ( v97 )
        {
          sub_452D60(*(_DWORD **)v96, (int)v97, 0x80000008);
LABEL_91:
          if ( v97 )
            sub_45BB30((int)v96, (char)v70, v6, a2, GameHour, (TESObjectREFR *)v97, 0);
        }
      }
      v83 = v103;
      if ( v103 == 0x32 || v103 == 0x33 )
      {
        v84 = a1;
        IsFormIDCreated = TESDataHandler_IsFormIDCreated_(a1);
        v86 = (TESObjectREFR *)v97;
        if ( IsFormIDCreated
          && (!v97
           || !TESObjectREFR_IsPersistent_((TESObjectREFR *)v97)
           && !((unsigned __int8 (__thiscall *)(TESObjectREFR *))v86->vtbl->super.Unk_1E)(v86)
           && !sub_4D9040(v86)) )
        {
          sub_452DF0(*(_DWORD **)v96, v84, 1);
          if ( v86 )
          {
            v86->vtbl->super.Destroy((TESForm *)v86, 1);
            v86 = 0;
          }
        }
      }
      else
      {
        v86 = (TESObjectREFR *)v97;
        v84 = a1;
      }
      if ( v83 == 0x31 && ((unsigned int)v70 & 0x20000) != 0 )
      {
        sub_452DF0(*(_DWORD **)v96, v84, 1);
        if ( v86 )
          v86->vtbl->super.Destroy((TESForm *)v86, 1);
      }
LABEL_107:
      if ( !v104 )
        goto LABEL_108;
    }
    v55 = SaveLoad_CurrentSavegame;
    v56 = (const void *)SaveLoad_CurrentSavegame->unk000[5];
    LODWORD(v93) = 0x24;
    memcpy(Dst, v56, v93);
    v57 = v115;
    v48 = v114;
    v55->unk000[5] = (UInt32)v56 + 0x24;
    v58 = Double_To_SInt32(v57);
    GameHour = v116;
LABEL_52:
    v51 = v58 >> 0xC;
    v52 = Double_To_SInt32(GameHour) >> 0xC;
    goto LABEL_53;
  }
LABEL_108:
  v87 = 0;
  if ( v106 )
  {
    while ( !*(_DWORD *)(v107 + 4 * v87) )
    {
      if ( ++v87 >= v106 )
        goto LABEL_111;
    }
    v88 = *(_DWORD **)(v107 + 4 * v87);
  }
  else
  {
LABEL_111:
    v88 = 0;
  }
  v89 = v88;
  while ( v89 )
  {
    v90 = (unsigned int *)v89[2];
    if ( *v89 )
    {
      v89 = (_DWORD *)*v89;
    }
    else
    {
      v91 = ((int (__thiscall *)(void ***, _DWORD))v105[1])(&v105, v89[1]) + 1;
      if ( v91 >= v106 )
      {
LABEL_119:
        v89 = 0;
      }
      else
      {
        while ( !*(_DWORD *)(v107 + 4 * v91) )
        {
          if ( ++v91 >= v106 )
            goto LABEL_119;
        }
        v89 = *(_DWORD **)(v107 + 4 * v91);
      }
    }
    if ( v90 )
    {
      while ( *v90 )
      {
        FormHeapFree(*v90);
        v92 = (unsigned int *)v90[1];
        if ( v92 )
        {
          v90[1] = v92[1];
          *v90 = *v92;
          FormHeapFree((unsigned int)v92);
        }
        else
        {
          *v90 = 0;
        }
      }
      FormHeapFree((unsigned int)v90);
    }
  }
  NiTMap_Clear(&v105);
  *(_BYTE *)(v110 + 0x185) = v100;
  v121 = 0xFFFFFFFF;
  NiTMap<unsigned int,NiTSimpleList<ExpiredCellData *> *>::~NiTMap<unsigned int,NiTSimpleList<ExpiredCellData *> *>((unsigned int *)&v105);
}
