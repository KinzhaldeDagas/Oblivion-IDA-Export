void __userpurge NiTPointerListBase<DFALL<RechargeItemAndIndex *>,RechargeItemAndIndex *>::NiTPointerListBase<DFALL<RechargeItemAndIndex *>,RechargeItemAndIndex *>(
        NiTPointerListBase<DFALL<RechargeItemAndIndex *>,RechargeItemAndIndex *> *this@<ecx>,
        double st5_0@<st2>,
        double a3@<st1>,
        double Float@<st0>,
        char a5)
{
  TESObjectREFR *v6; // ecx
  bool v7; // zf
  EntryData *InventoryEntryOfItem; // eax
  NiTPointerListBase<DFALL<RechargeItemAndIndex *>,RechargeItemAndIndex *> *v9; // edx
  Sky *v10; // edi
  _WORD *v11; // eax
  _WORD *v12; // ebx
  unsigned __int16 v13; // bp
  int v14; // eax
  Tile *v15; // esi
  NiNode *nodeMoonsRoot; // eax
  double v17; // st4
  _DWORD *v18; // esi
  EntryData *v19; // ebx
  _DWORD *v20; // ebp
  unsigned __int8 *v21; // eax
  CHAR *v22; // eax
  Sky **v23; // eax
  Sky **v24; // esi
  Sky **v25; // eax
  Sky **v26; // esi
  _DWORD *v27; // eax
  _DWORD *v28; // ecx
  Sky **v29; // eax
  _DWORD *v30; // eax
  Tile *v31; // ecx
  _DWORD *v32; // esi
  Tile *v33; // eax
  int v34; // eax
  EntryData *v35; // edi
  unsigned __int8 *v36; // edx
  signed int v37; // eax
  CHAR *v38; // eax
  _DWORD *v39; // ebp
  Tile *v40; // esi
  CHAR *v41; // eax
  unsigned __int16 *v42; // eax
  int v43; // ebp
  unsigned __int16 *v44; // eax
  int v45; // ebp
  char *v46; // eax
  int v47; // eax
  char *m_data; // ebp
  BSTextureManager *v49; // ecx
  unsigned __int8 *v50; // eax
  unsigned __int8 *v51; // edi
  int v52; // edi
  int (__thiscall *v53)(_DWORD *); // edx
  _DWORD *v54; // edi
  _DWORD *v55; // eax
  int v56; // ecx
  char *v57; // eax
  Tile *v58; // esi
  int v59; // eax
  char *v60; // edi
  _DWORD *v61; // esi
  _DWORD *v62; // edi
  _DWORD *v63; // eax
  _DWORD *v64; // ecx
  unsigned int **v65; // esi
  int v66; // edx
  unsigned int *v67; // edi
  _DWORD *v68; // esi
  _DWORD *v69; // eax
  float a2; // [esp+0h] [ebp-16Ch]
  float a2a; // [esp+0h] [ebp-16Ch]
  float a2b; // [esp+0h] [ebp-16Ch]
  float a2c; // [esp+0h] [ebp-16Ch]
  TESForm *v74; // [esp+18h] [ebp-154h]
  TESForm *v75; // [esp+18h] [ebp-154h]
  void **v76; // [esp+1Ch] [ebp-150h] BYREF
  _DWORD *v77; // [esp+20h] [ebp-14Ch]
  unsigned __int8 *v78; // [esp+24h] [ebp-148h]
  int v79; // [esp+28h] [ebp-144h]
  unsigned __int8 *Health; // [esp+2Ch] [ebp-140h]
  unsigned __int8 *i; // [esp+30h] [ebp-13Ch]
  EntryData **TotalEntryCountForITem; // [esp+34h] [ebp-138h]
  NiTPointerListBase<DFALL<RechargeItemAndIndex *>,RechargeItemAndIndex *> *v83; // [esp+38h] [ebp-134h]
  BSStringT v84; // [esp+3Ch] [ebp-130h] BYREF
  BSStringT v85; // [esp+44h] [ebp-128h] BYREF
  unsigned __int8 *v86; // [esp+4Ch] [ebp-120h] BYREF
  int v87; // [esp+50h] [ebp-11Ch]
  signed int v88; // [esp+54h] [ebp-118h]
  char v89[260]; // [esp+58h] [ebp-114h] BYREF
  int v90; // [esp+168h] [ebp-4h]

  v6 = (TESObjectREFR *)TESDataHandler_g_PlayerRef;
  v7 = TESDataHandler_g_PlayerRef == 0;
  v83 = this;
  if ( !v7 )
  {
    v87 = *((_DWORD *)this + 0xE);
    TotalEntryCountForITem = (EntryData **)TESObjectREF_GetTotalEntryCountForITem(v6, 0);
    v79 = 0;
    v77 = 0;
    v78 = 0;
    v76 = &NiTList<RechargeItemAndIndex *>::`vftable';
    v90 = 0;
    v74 = 0;
    if ( (int)TotalEntryCountForITem > 0 )
    {
      while ( 1 )
      {
        InventoryEntryOfItem = GetInventoryEntryOfItem((TESObjectREFR *)TESDataHandler_g_PlayerRef, v74, 0);
        v10 = (Sky *)InventoryEntryOfItem;
        if ( !InventoryEntryOfItem )
          break;
        v11 = OblivionDynamicCast(
                InventoryEntryOfItem->type,
                0,
                (struct _s_RTTICompleteObjectLocator *)&TESBoundObject `RTTI Type Descriptor',
                &TESEnchantableForm `RTTI Type Descriptor',
                0);
        v12 = v11;
        if ( !v11 )
          goto LABEL_7;
        v13 = v11[4];
LABEL_8:
        if ( v10 )
        {
          v9 = v83;
          v14 = *((_DWORD *)v83 + 0x11);
          if ( v14 )
          {
            if ( v10->nodeMoonsRoot == *(NiNode **)(v14 + 8) && sub_4849C0((void **)&v10->vtbl) > *(float *)&SrcStr )
            {
              v15 = *((Tile **)v83 + 1);
              Health = (unsigned __int8 *)TESHealthForm_GetHealth(v10);
              a2 = (float)(int)Health;
              Tile_SetFloat(v15, (_DWORD *)0xFB4, a2);
            }
          }
        }
        if ( !v12
          || (nodeMoonsRoot = v10->nodeMoonsRoot, LOBYTE(nodeMoonsRoot->members.super.super.super.m_uiRefCount) == 0x15)
          || LOBYTE(nodeMoonsRoot->members.super.super.super.m_uiRefCount) == 0x16
          || LOBYTE(nodeMoonsRoot->members.super.super.super.m_uiRefCount) == 0x14
          || !*((_DWORD *)v12 + 1)
          || (v17 = sub_4849C0((void **)&v10->vtbl), Health = (unsigned __int8 *)v13, (double)v13 <= v17) )
        {
          if ( v10 )
          {
            ContainerEntryExtraData_DestroyDataTable((unsigned int *)v10, (int)v9);
            FormHeapFree((unsigned int)v10);
          }
          v10 = 0;
        }
        v18 = v77;
        i = 0;
        if ( v10 )
          i = (unsigned __int8 *)sub_485150((EntryData *)v10);
        if ( v18 )
        {
          while ( 1 )
          {
            if ( !v10 )
              goto LABEL_49;
            v19 = *(EntryData **)v18[2];
            v20 = v18;
            v18 = (_DWORD *)*v18;
            v21 = (unsigned __int8 *)sub_485150(v19);
            if ( (int)v21 < (int)i )
              break;
            if ( v21 == i )
            {
              Health = (unsigned __int8 *)sub_488DF0((EntryData *)v10);
              v22 = sub_488DF0(v19);
              if ( _mbsicmp((const unsigned __int8 *)v22, Health) <= 0 )
              {
                v29 = (Sky **)FormHeapAlloc(8u);
                if ( v29 )
                {
                  v29[1] = (Sky *)v74;
                  *v29 = v10;
                  v26 = v29;
                }
                else
                {
                  v26 = 0;
                }
LABEL_36:
                v27 = (_DWORD *)((int (__thiscall *)(void ***))v76[1])(&v76);
                v27[2] = v26;
                *v27 = v20;
                v27[1] = v20[1];
                v28 = (_DWORD *)v20[1];
                if ( v28 )
                  *v28 = v27;
                else
                  v77 = v27;
                v20[1] = v27;
                goto LABEL_48;
              }
            }
            if ( !v18 )
              goto LABEL_30;
          }
          v25 = (Sky **)FormHeapAlloc(8u);
          if ( v25 )
          {
            *v25 = v10;
            v25[1] = (Sky *)v74;
            v26 = v25;
          }
          else
          {
            v26 = 0;
          }
          goto LABEL_36;
        }
LABEL_30:
        if ( v10 )
        {
          v23 = (Sky **)FormHeapAlloc(8u);
          if ( v23 )
          {
            *v23 = v10;
            v23[1] = (Sky *)v74;
            v24 = v23;
          }
          else
          {
            v24 = 0;
          }
          v30 = (_DWORD *)((int (__thiscall *)(void ***))v76[1])(&v76);
          v30[2] = v24;
          *v30 = 0;
          v30[1] = v78;
          if ( v78 )
            *(_DWORD *)v78 = v30;
          else
            v77 = v30;
          v78 = (unsigned __int8 *)v30;
LABEL_48:
          ++v79;
        }
LABEL_49:
        v74 = (TESForm *)((char *)v74 + 1);
        if ( (int)v74 >= (int)TotalEntryCountForITem )
          goto LABEL_50;
      }
      v12 = 0;
LABEL_7:
      v13 = 0xFFFF;
      goto LABEL_8;
    }
LABEL_50:
    if ( a5 )
    {
      v31 = *((Tile **)v83 + 0xA);
      *((_DWORD *)v83 + 0xF) = 0;
      Tile_SetFloat(v31, (_DWORD *)0xFA1, 1.0);
    }
    v32 = *(_DWORD **)(v87 + 0x34);
    while ( v32 )
    {
      v33 = (Tile *)v32[2];
      v32 = (_DWORD *)*v32;
      Tile_SetFloat(v33, (_DWORD *)0xFAE, flt_A690E0);
    }
    v75 = 0;
    v88 = 0;
    for ( i = v78; i; v75 = (TESForm *)((char *)v75 + 1) )
    {
      v34 = *((_DWORD *)i + 2);
      v35 = *(EntryData **)v34;
      v36 = *(unsigned __int8 **)(v34 + 4);
      i = *((unsigned __int8 **)i + 1);
      TotalEntryCountForITem = (EntryData **)v34;
      Health = v36;
      v37 = sub_485150(v35);
      if ( v37 != v88 )
        v88 = v37;
      v38 = sub_4851B0((ExtraDataList ***)v35, (TESObjectREFR *)TESDataHandler_g_PlayerRef);
      _sprintf(v89, "%s\\%s", "Icons", v38);
      v39 = *(_DWORD **)(v87 + 0x34);
      if ( v39 )
      {
        while ( 1 )
        {
          v40 = (Tile *)v39[2];
          v39 = (_DWORD *)*v39;
          if ( sub_588C10(v40, 0xFAF) )
          {
            if ( sub_488DF0(*TotalEntryCountForITem) )
            {
              Float = Tile_GetFloat(v40, 0xFAE);
              if ( Float == flt_A690E0 )
              {
                v86 = (unsigned __int8 *)sub_488DF0(*TotalEntryCountForITem);
                v41 = sub_588C10(v40, 0xFAF);
                if ( !_mbscmp((const unsigned __int8 *)v41, v86) )
                  break;
              }
            }
          }
          if ( !v39 )
            goto LABEL_63;
        }
        v44 = (unsigned __int16 *)OblivionDynamicCast(
                                    v35->type,
                                    0,
                                    (struct _s_RTTICompleteObjectLocator *)&TESBoundObject `RTTI Type Descriptor',
                                    &TESEnchantableForm `RTTI Type Descriptor',
                                    0);
        if ( v44 )
          v45 = v44[4];
        else
          v45 = 0x7FFFFFFF;
        v46 = sub_488DF0(v35);
        Tile_SetString(v40, (_DWORD *)0xFAF, v46);
        Tile_SetString(v40, (_DWORD *)0xFB1, v89);
        a2a = (float)(int)Health;
        Tile_SetFloat(v40, (_DWORD *)0xFB9, a2a);
        a2b = (float)(int)v75;
        Tile_SetFloat(v40, (_DWORD *)0xFAE, a2b);
        v84.m_data = 0;
        v84.m_dataLen = 0;
        v84.m_bufLen = 0;
        LOBYTE(v90) = 1;
        Float = sub_4849C0((void **)&v35->extendData);
        v47 = Double_To_SInt32(Float);
        BSStringT_Static_Format(&v84, "%d/%d", v47, v45);
        m_data = v84.m_data;
        Tile_SetString(v40, (_DWORD *)0xFB0, v84.m_data);
        v49 = (BSTextureManager *)(*((_DWORD *)v40 + 4) + 0x30);
        v50 = *(unsigned __int8 **)(*((_DWORD *)v40 + 4) + 0x34);
        if ( v50 )
        {
          while ( 1 )
          {
            v7 = v40 == *((Tile **)v50 + 2);
            v51 = v50;
            v50 = *(unsigned __int8 **)v50;
            if ( v7 )
              break;
            if ( !v50 )
              goto LABEL_71;
          }
        }
        else
        {
LABEL_71:
          v51 = 0;
        }
        v86 = v51;
        if ( v51 )
          sub_7AA860(v49, (NiTPointerList_Node_void **)&v86);
        v52 = *((_DWORD *)v40 + 4);
        v53 = *(int (__thiscall **)(_DWORD *))(*(_DWORD *)(v52 + 0x30) + 4);
        v54 = (_DWORD *)(v52 + 0x30);
        v55 = (_DWORD *)v53(v54);
        v55[2] = v40;
        v55[1] = 0;
        *v55 = v54[1];
        v56 = v54[1];
        if ( v56 )
          *(_DWORD *)(v56 + 4) = v55;
        else
          v54[2] = v55;
        ++v54[3];
        v54[1] = v55;
        LOBYTE(v90) = 0;
        FormHeapFree((unsigned int)m_data);
        v84.m_data = 0;
        v84.m_bufLen = 0;
        v84.m_dataLen = 0;
      }
      else
      {
LABEL_63:
        v42 = (unsigned __int16 *)OblivionDynamicCast(
                                    v35->type,
                                    0,
                                    (struct _s_RTTICompleteObjectLocator *)&TESBoundObject `RTTI Type Descriptor',
                                    &TESEnchantableForm `RTTI Type Descriptor',
                                    0);
        if ( v42 )
          v43 = v42[4];
        else
          v43 = 0x7FFFFFFF;
        v57 = sub_488DF0(v35);
        v58 = (Tile *)sub_5CEE10(v83, st5_0, a3, Float, v89, v57, (signed int)v75, (signed int)&v75[2].vtbl + 3);
        a2c = (float)(int)Health;
        Tile_SetFloat(v58, (_DWORD *)0xFB9, a2c);
        v85.m_data = 0;
        v85.m_dataLen = 0;
        v85.m_bufLen = 0;
        LOBYTE(v90) = 2;
        sub_4849C0((void **)&v35->extendData);
        v59 = Double_To_SInt32(Float);
        BSStringT_Static_Format(&v85, "%d/%d", v59, v43);
        v60 = v85.m_data;
        Tile_SetString(v58, (_DWORD *)0xFB0, v85.m_data);
        LOBYTE(v90) = 0;
        FormHeapFree((unsigned int)v60);
        v85.m_data = 0;
        v85.m_bufLen = 0;
        v85.m_dataLen = 0;
      }
    }
    v61 = *(_DWORD **)(v87 + 0x34);
    while ( v61 )
    {
      v62 = (_DWORD *)v61[2];
      v61 = (_DWORD *)*v61;
      if ( Tile_GetFloat(v62, 0xFAE) == flt_A690E0 )
      {
        if ( v62 )
          (*(void (__thiscall **)(_DWORD *, int))*v62)(v62, 1);
      }
    }
    while ( v79 )
    {
      v63 = v77;
      v64 = (_DWORD *)*v77;
      v77 = (_DWORD *)*v77;
      if ( v77 )
        v64[1] = 0;
      else
        v78 = 0;
      v65 = (unsigned int **)v63[2];
      ((void (__thiscall *)(void ***, _DWORD *))v76[2])(&v76, v63);
      --v79;
      if ( v65 )
      {
        v67 = *v65;
        if ( *v65 )
        {
          ContainerEntryExtraData_DestroyDataTable(*v65, v66);
          FormHeapFree((unsigned int)v67);
        }
        FormHeapFree((unsigned int)v65);
      }
    }
    v76 = &NiTPointerListBase<DFALL<RechargeItemAndIndex *>,RechargeItemAndIndex *>::`vftable';
    v68 = v77;
    v90 = 3;
    while ( v68 )
    {
      v69 = v68;
      v68 = (_DWORD *)*v68;
      ((void (__thiscall *)(void ***, _DWORD *))v76[2])(&v76, v69);
    }
  }
}
