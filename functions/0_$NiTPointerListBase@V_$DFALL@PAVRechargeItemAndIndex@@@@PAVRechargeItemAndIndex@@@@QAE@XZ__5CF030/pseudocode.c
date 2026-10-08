void __userpurge NiTPointerListBase<DFALL<RechargeItemAndIndex *>,RechargeItemAndIndex *>::NiTPointerListBase<DFALL<RechargeItemAndIndex *>,RechargeItemAndIndex *>(
        NiTPointerListBase<DFALL<RechargeItemAndIndex *>,RechargeItemAndIndex *> *this@<ecx>,
        double Float@<st0>,
        char a3)
{
  TESObjectREFR *v6; // ecx
  bool v7; // zf
  EntryData *InventoryEntryOfItem; // eax
  Menu *v9; // edx
  TESHealthForm *v10; // edi
  _WORD *v11; // eax
  _WORD *v12; // ebx
  unsigned __int16 v13; // bp
  int v14; // eax
  Tile *tile; // esi
  BaseFormComponentVtbl *vtbl; // eax
  double Charge; // st4
  _DWORD *v18; // esi
  EntryData *v19; // ebx
  _DWORD *v20; // ebp
  unsigned __int8 *v21; // eax
  CHAR *v22; // eax
  TESHealthForm **v23; // eax
  TESHealthForm **v24; // esi
  TESHealthForm **v25; // eax
  TESHealthForm **v26; // esi
  _DWORD *v27; // eax
  _DWORD *v28; // ecx
  TESHealthForm **v29; // eax
  _DWORD *v30; // eax
  Tile *vftable; // ecx
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
  void *v49; // ecx
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
  Menu *v83; // [esp+38h] [ebp-134h]
  BSStringT v84; // [esp+3Ch] [ebp-130h] BYREF
  BSStringT v85; // [esp+44h] [ebp-128h] BYREF
  unsigned __int8 *v86; // [esp+4Ch] [ebp-120h] BYREF
  int v87; // [esp+50h] [ebp-11Ch]
  signed int v88; // [esp+54h] [ebp-118h]
  char v89[260]; // [esp+58h] [ebp-114h] BYREF
  int v90; // [esp+168h] [ebp-4h]

  v6 = (TESObjectREFR *)reference; /*0x5cf06d*/
  v7 = reference == 0; /*0x5cf075*/
  v83 = (Menu *)this; /*0x5cf077*/
  if ( !v7 ) /*0x5cf07b*/
  {
    v87 = *((_DWORD *)this + 0xE); /*0x5cf085*/
    TotalEntryCountForITem = (EntryData **)TESObjectREF_GetTotalEntryCountForITem(v6, 0); /*0x5cf08e*/
    v79 = 0; /*0x5cf092*/
    v77 = 0; /*0x5cf096*/
    v78 = 0; /*0x5cf09a*/
    v76 = &NiTList<RechargeItemAndIndex *>::`vftable'; /*0x5cf09e*/
    v90 = 0; /*0x5cf0a8*/
    v74 = 0; /*0x5cf0af*/
    if ( (int)TotalEntryCountForITem > 0 ) /*0x5cf0b3*/
    {
      while ( 1 ) /*0x5cf0cd*/
      {
        InventoryEntryOfItem = GetInventoryEntryOfItem((TESObjectREFR *)reference, v74, 0); /*0x5cf0cd*/
        v10 = (TESHealthForm *)InventoryEntryOfItem; /*0x5cf0d2*/
        if ( !InventoryEntryOfItem ) /*0x5cf0d6*/
          break; /*0x5cf0d6*/
        v11 = OblivionDynamicCast( /*0x5cf0ea*/
                InventoryEntryOfItem->type,
                0,
                (struct _s_RTTICompleteObjectLocator *)&TESBoundObject `RTTI Type Descriptor',
                &TESEnchantableForm `RTTI Type Descriptor',
                0);
        v12 = v11; /*0x5cf0ef*/
        if ( !v11 ) /*0x5cf0f6*/
          goto LABEL_7; /*0x5cf0f6*/
        v13 = v11[4]; /*0x5cf0fc*/
LABEL_8:
        if ( v10 ) /*0x5cf10a*/
        {
          v9 = v83; /*0x5cf10c*/
          v14 = *(_DWORD *)&v83[1].members.ownsTemplates; /*0x5cf110*/
          if ( v14 ) /*0x5cf115*/
          {
            if ( v10[1].vtbl == *(BaseFormComponentVtbl **)(v14 + 8) /*0x5cf131*/
              && EquippedEntryData_GetCharge((EntryData *)v10) > (double)*(float *)&SrcStr )
            {
              tile = v83->members.tile; /*0x5cf137*/
              Health = (unsigned __int8 *)TESHealthForm_GetHealth(v10); /*0x5cf141*/
              a2 = (float)(int)Health; /*0x5cf14c*/
              Tile_SetFloat(tile, 0xFB4u, a2); /*0x5cf154*/
            }
          }
        }
        if ( !v12 /*0x5cf191*/
          || (vtbl = v10[1].vtbl, LOBYTE(vtbl->ClearComponentReferences) == 0x15)
          || LOBYTE(vtbl->ClearComponentReferences) == 0x16
          || LOBYTE(vtbl->ClearComponentReferences) == 0x14
          || !*((_DWORD *)v12 + 1)
          || (Charge = EquippedEntryData_GetCharge((EntryData *)v10),
              Health = (unsigned __int8 *)v13,
              (double)v13 <= Charge) )
        {
          if ( v10 ) /*0x5cf195*/
          {
            ContainerEntryExtraData_DestroyDataTable((unsigned int *)v10, (int)v9); /*0x5cf199*/
            FormHeapFree((unsigned int)v10); /*0x5cf19f*/
          }
          v10 = 0; /*0x5cf1a7*/
        }
        v18 = v77; /*0x5cf1ab*/
        i = 0; /*0x5cf1af*/
        if ( v10 ) /*0x5cf1b7*/
          i = (unsigned __int8 *)sub_485150((EntryData *)v10); /*0x5cf1c0*/
        if ( v18 ) /*0x5cf1c6*/
        {
          while ( 1 ) /*0x5cf1c8*/
          {
            if ( !v10 ) /*0x5cf1ca*/
              goto LABEL_49; /*0x5cf1ca*/
            v19 = *(EntryData **)v18[2]; /*0x5cf1d5*/
            v20 = v18; /*0x5cf1d7*/
            v18 = (_DWORD *)*v18; /*0x5cf1d9*/
            v21 = (unsigned __int8 *)sub_485150(v19); /*0x5cf1dd*/
            if ( (int)v21 < (int)i ) /*0x5cf1e6*/
              break; /*0x5cf1e6*/
            if ( v21 == i ) /*0x5cf1e8*/
            {
              Health = (unsigned __int8 *)sub_488DF0((EntryData *)v10); /*0x5cf1f3*/
              v22 = sub_488DF0(v19); /*0x5cf1f7*/
              if ( _mbsicmp((const unsigned __int8 *)v22, Health) <= 0 ) /*0x5cf20c*/
              {
                v29 = (TESHealthForm **)FormHeapAlloc(8u); /*0x5cf28a*/
                if ( v29 ) /*0x5cf294*/
                {
                  v29[1] = (TESHealthForm *)v74; /*0x5cf29a*/
                  *v29 = v10; /*0x5cf29d*/
                  v26 = v29; /*0x5cf29f*/
                }
                else
                {
                  v26 = 0; /*0x5cf2bb*/
                }
LABEL_36:
                v27 = (_DWORD *)((int (__thiscall *)(void ***))v76[1])(&v76); /*0x5cf259*/
                v27[2] = v26; /*0x5cf266*/
                *v27 = v20; /*0x5cf269*/
                v27[1] = v20[1]; /*0x5cf26e*/
                v28 = (_DWORD *)v20[1]; /*0x5cf271*/
                if ( v28 ) /*0x5cf276*/
                  *v28 = v27; /*0x5cf278*/
                else
                  v77 = v27; /*0x5cf27f*/
                v20[1] = v27; /*0x5cf27a*/
                goto LABEL_48; /*0x5cf27d*/
              }
            }
            if ( !v18 ) /*0x5cf210*/
              goto LABEL_30; /*0x5cf210*/
          }
          v25 = (TESHealthForm **)FormHeapAlloc(8u); /*0x5cf23e*/
          if ( v25 ) /*0x5cf248*/
          {
            *v25 = v10; /*0x5cf24e*/
            v25[1] = (TESHealthForm *)v74; /*0x5cf250*/
            v26 = v25; /*0x5cf253*/
          }
          else
          {
            v26 = 0; /*0x5cf257*/
          }
          goto LABEL_36; /*0x5cf255*/
        }
LABEL_30:
        if ( v10 ) /*0x5cf214*/
        {
          v23 = (TESHealthForm **)FormHeapAlloc(8u); /*0x5cf21c*/
          if ( v23 ) /*0x5cf226*/
          {
            *v23 = v10; /*0x5cf230*/
            v23[1] = (TESHealthForm *)v74; /*0x5cf232*/
            v24 = v23; /*0x5cf235*/
          }
          else
          {
            v24 = 0; /*0x5cf2c1*/
          }
          v30 = (_DWORD *)((int (__thiscall *)(void ***))v76[1])(&v76); /*0x5cf2ce*/
          v30[2] = v24; /*0x5cf2d0*/
          *v30 = 0; /*0x5cf2d3*/
          v30[1] = v78; /*0x5cf2dd*/
          if ( v78 ) /*0x5cf2e6*/
            *(_DWORD *)v78 = v30; /*0x5cf2e8*/
          else
            v77 = v30; /*0x5cf2ec*/
          v78 = (unsigned __int8 *)v30; /*0x5cf2f0*/
LABEL_48:
          ++v79; /*0x5cf2f4*/
        }
LABEL_49:
        v74 = (TESForm *)((char *)v74 + 1); /*0x5cf2f9*/
        if ( (int)v74 >= (int)TotalEntryCountForITem ) /*0x5cf308*/
          goto LABEL_50; /*0x5cf308*/
      }
      v12 = 0; /*0x5cf101*/
LABEL_7:
      v13 = 0xFFFF; /*0x5cf103*/
      goto LABEL_8; /*0x5cf103*/
    }
LABEL_50:
    if ( a3 ) /*0x5cf316*/
    {
      vftable = (Tile *)v83[1].__vftable; /*0x5cf31e*/
      v83[1].members.unk14 = 0; /*0x5cf32a*/
      Tile_SetFloat(vftable, 0xFA1u, 1.0); /*0x5cf331*/
    }
    v32 = *(_DWORD **)(v87 + 0x34); /*0x5cf33a*/
    while ( v32 ) /*0x5cf33f*/
    {
      v33 = (Tile *)v32[2]; /*0x5cf34a*/
      v32 = (_DWORD *)*v32; /*0x5cf34c*/
      Tile_SetFloat(v33, 0xFAEu, flt_A690E0); /*0x5cf359*/
    }
    v75 = 0; /*0x5cf36a*/
    v88 = 0; /*0x5cf36e*/
    for ( i = v78; i; v75 = (TESForm *)((char *)v75 + 1) ) /*0x5cf376*/
    {
      v34 = *((_DWORD *)i + 2); /*0x5cf387*/
      v35 = *(EntryData **)v34; /*0x5cf38c*/
      v36 = *(unsigned __int8 **)(v34 + 4); /*0x5cf38e*/
      i = *((unsigned __int8 **)i + 1); /*0x5cf391*/
      TotalEntryCountForITem = (EntryData **)v34; /*0x5cf397*/
      Health = v36; /*0x5cf39b*/
      v37 = sub_485150(v35); /*0x5cf39f*/
      if ( v37 != v88 ) /*0x5cf3a8*/
        v88 = v37; /*0x5cf3aa*/
      v38 = sub_4851B0((ExtraDataList ***)v35, (TESObjectREFR *)reference); /*0x5cf3b6*/
      _sprintf(v89, "%s\\%s", "Icons", v38); /*0x5cf3cb*/
      v39 = *(_DWORD **)(v87 + 0x34); /*0x5cf3d4*/
      if ( v39 ) /*0x5cf3dc*/
      {
        while ( 1 ) /*0x5cf3e0*/
        {
          v40 = (Tile *)v39[2]; /*0x5cf3e0*/
          v39 = (_DWORD *)*v39; /*0x5cf3e6*/
          if ( sub_588C10(v40, 0xFAF) ) /*0x5cf3f0*/
          {
            if ( sub_488DF0(*TotalEntryCountForITem) ) /*0x5cf3ff*/
            {
              Float = Tile_GetFloat(v40, 0xFAE); /*0x5cf40f*/
              if ( Float == flt_A690E0 ) /*0x5cf41f*/
              {
                v86 = (unsigned __int8 *)sub_488DF0(*TotalEntryCountForITem); /*0x5cf433*/
                v41 = sub_588C10(v40, 0xFAF); /*0x5cf437*/
                if ( !_mbscmp((const unsigned __int8 *)v41, v86) ) /*0x5cf442*/
                  break; /*0x5cf442*/
              }
            }
          }
          if ( !v39 ) /*0x5cf450*/
            goto LABEL_63; /*0x5cf450*/
        }
        v44 = (unsigned __int16 *)OblivionDynamicCast( /*0x5cf48e*/
                                    v35->type,
                                    0,
                                    (struct _s_RTTICompleteObjectLocator *)&TESBoundObject `RTTI Type Descriptor',
                                    &TESEnchantableForm `RTTI Type Descriptor',
                                    0);
        if ( v44 ) /*0x5cf498*/
          v45 = v44[4]; /*0x5cf49e*/
        else
          v45 = 0x7FFFFFFF; /*0x5cf4a3*/
        v46 = sub_488DF0(v35); /*0x5cf4aa*/
        Tile_SetString(v40, (_DWORD *)0xFAF, v46); /*0x5cf4b7*/
        Tile_SetString(v40, (_DWORD *)0xFB1, v89); /*0x5cf4c8*/
        a2a = (float)(int)Health; /*0x5cf4d4*/
        Tile_SetFloat(v40, 0xFB9u, a2a); /*0x5cf4dc*/
        a2b = (float)(int)v75; /*0x5cf4e8*/
        Tile_SetFloat(v40, 0xFAEu, a2b); /*0x5cf4f0*/
        v84.m_data = 0; /*0x5cf4f5*/
        v84.m_dataLen = 0; /*0x5cf4f9*/
        v84.m_bufLen = 0; /*0x5cf4fe*/
        LOBYTE(v90) = 1; /*0x5cf506*/
        Float = EquippedEntryData_GetCharge(v35); /*0x5cf50e*/
        v47 = Double_To_SInt32(Float); /*0x5cf513*/
        BSStringT_Static_Format(&v84, "%d/%d", v47, v45); /*0x5cf523*/
        m_data = v84.m_data; /*0x5cf528*/
        Tile_SetString(v40, (_DWORD *)0xFB0, v84.m_data); /*0x5cf537*/
        v49 = (void *)(*((_DWORD *)v40 + 4) + 0x30); /*0x5cf53f*/
        v50 = *(unsigned __int8 **)(*((_DWORD *)v40 + 4) + 0x34); /*0x5cf542*/
        if ( v50 ) /*0x5cf547*/
        {
          while ( 1 ) /*0x5cf550*/
          {
            v7 = v40 == *((Tile **)v50 + 2); /*0x5cf550*/
            v51 = v50; /*0x5cf556*/
            v50 = *(unsigned __int8 **)v50; /*0x5cf558*/
            if ( v7 ) /*0x5cf55a*/
              break; /*0x5cf55a*/
            if ( !v50 ) /*0x5cf55e*/
              goto LABEL_71; /*0x5cf55e*/
          }
        }
        else
        {
LABEL_71:
          v51 = 0; /*0x5cf560*/
        }
        v86 = v51; /*0x5cf564*/
        if ( v51 ) /*0x5cf568*/
          NiTPointerList_RemoveNode(v49, (void **)&v86); /*0x5cf56f*/
        v52 = *((_DWORD *)v40 + 4); /*0x5cf574*/
        v53 = *(int (__thiscall **)(_DWORD *))(*(_DWORD *)(v52 + 0x30) + 4); /*0x5cf57a*/
        v54 = (_DWORD *)(v52 + 0x30); /*0x5cf57d*/
        v55 = (_DWORD *)v53(v54); /*0x5cf582*/
        v55[2] = v40; /*0x5cf584*/
        v55[1] = 0; /*0x5cf587*/
        *v55 = v54[1]; /*0x5cf58d*/
        v56 = v54[1]; /*0x5cf58f*/
        if ( v56 ) /*0x5cf594*/
          *(_DWORD *)(v56 + 4) = v55; /*0x5cf596*/
        else
          v54[2] = v55; /*0x5cf59b*/
        ++v54[3]; /*0x5cf59e*/
        v54[1] = v55; /*0x5cf5a3*/
        LOBYTE(v90) = 0; /*0x5cf5a6*/
        FormHeapFree((unsigned int)m_data); /*0x5cf5ae*/
        v84.m_data = 0; /*0x5cf5b3*/
        v84.m_bufLen = 0; /*0x5cf5b7*/
        v84.m_dataLen = 0; /*0x5cf5bc*/
      }
      else
      {
LABEL_63:
        v42 = (unsigned __int16 *)OblivionDynamicCast( /*0x5cf452*/
                                    v35->type,
                                    0,
                                    (struct _s_RTTICompleteObjectLocator *)&TESBoundObject `RTTI Type Descriptor',
                                    &TESEnchantableForm `RTTI Type Descriptor',
                                    0);
        if ( v42 ) /*0x5cf46c*/
          v43 = v42[4]; /*0x5cf476*/
        else
          v43 = 0x7FFFFFFF; /*0x5cf5c6*/
        v57 = sub_488DF0(v35); /*0x5cf5d6*/
        v58 = (Tile *)sub_5CEE10(v83, v89, v57, (signed int)v75, (signed int)&v75[2].vtbl + 3); /*0x5cf5ef*/
        a2c = (float)(int)Health; /*0x5cf5f1*/
        Tile_SetFloat(v58, 0xFB9u, a2c); /*0x5cf5fb*/
        v85.m_data = 0; /*0x5cf600*/
        v85.m_dataLen = 0; /*0x5cf604*/
        v85.m_bufLen = 0; /*0x5cf609*/
        LOBYTE(v90) = 2; /*0x5cf611*/
        EquippedEntryData_GetCharge(v35); /*0x5cf619*/
        v59 = Double_To_SInt32(Float); /*0x5cf61e*/
        BSStringT_Static_Format(&v85, "%d/%d", v59, v43); /*0x5cf62e*/
        v60 = v85.m_data; /*0x5cf633*/
        Tile_SetString(v58, (_DWORD *)0xFB0, v85.m_data); /*0x5cf642*/
        LOBYTE(v90) = 0; /*0x5cf648*/
        FormHeapFree((unsigned int)v60); /*0x5cf650*/
        v85.m_data = 0; /*0x5cf655*/
        v85.m_bufLen = 0; /*0x5cf659*/
        v85.m_dataLen = 0; /*0x5cf65e*/
      }
    }
    v61 = *(_DWORD **)(v87 + 0x34); /*0x5cf679*/
    while ( v61 ) /*0x5cf67e*/
    {
      v62 = (_DWORD *)v61[2]; /*0x5cf680*/
      v61 = (_DWORD *)*v61; /*0x5cf686*/
      if ( Tile_GetFloat(v62, 0xFAE) == flt_A690E0 ) /*0x5cf69f*/
      {
        if ( v62 ) /*0x5cf6a3*/
          (*(void (__thiscall **)(_DWORD *, int))*v62)(v62, 1); /*0x5cf6ad*/
      }
    }
    while ( v79 ) /*0x5cf6b7*/
    {
      v63 = v77; /*0x5cf6bb*/
      v64 = (_DWORD *)*v77; /*0x5cf6bf*/
      v77 = (_DWORD *)*v77; /*0x5cf6c3*/
      if ( v77 ) /*0x5cf6c7*/
        v64[1] = 0; /*0x5cf6c9*/
      else
        v78 = 0; /*0x5cf6ce*/
      v65 = (unsigned int **)v63[2]; /*0x5cf6d2*/
      ((void (__thiscall *)(void ***, _DWORD *))v76[2])(&v76, v63); /*0x5cf6e1*/
      --v79; /*0x5cf6e3*/
      if ( v65 ) /*0x5cf6ea*/
      {
        v67 = *v65; /*0x5cf6ec*/
        if ( *v65 ) /*0x5cf6ec*/
        {
          ContainerEntryExtraData_DestroyDataTable(*v65, v66); /*0x5cf6f4*/
          FormHeapFree((unsigned int)v67); /*0x5cf6fa*/
        }
        FormHeapFree((unsigned int)v65); /*0x5cf703*/
      }
    }
    v76 = &NiTPointerListBase<DFALL<RechargeItemAndIndex *>,RechargeItemAndIndex *>::`vftable'; /*0x5cf711*/
    v68 = v77; /*0x5cf719*/
    v90 = 3; /*0x5cf71f*/
    while ( v68 ) /*0x5cf72a*/
    {
      v69 = v68; /*0x5cf72c*/
      v68 = (_DWORD *)*v68; /*0x5cf72e*/
      ((void (__thiscall *)(void ***, _DWORD *))v76[2])(&v76, v69); /*0x5cf73c*/
    }
  }
}
