TESRegionData *__thiscall TESRegionList_SelectDataForLocation(
        TESRegionList *this,
        int dataID,
        float *worldXY,
        TESWorldSpace *worldspace)
{
  int *p_regions; // ebp
  int v5; // eax
  int v6; // edi
  TESRegionData *DataByID; // eax
  int v8; // esi
  OblivionRegionListNode *v9; // eax
  void (__thiscall ***v10)(_DWORD, int); // esi
  TESRegionData **v11; // edi
  TESRegionList *v12; // ecx
  void (__thiscall ***v14)(_DWORD, int); // ecx
  TESRegionList **v15; // esi
  OblivionRegionListNode *v16; // edi
  TESRegionData *v17; // eax
  TESRegionData *v18; // esi
  OblivionRegionListNode *v19; // eax
  int v20; // ecx
  int v21; // edi
  TESRegionList *v22; // eax
  bool v23; // zf
  char v24; // [esp+1Bh] [ebp-1Dh]
  TESRegionList *self; // [esp+1Ch] [ebp-1Ch]
  TESRegionData *v26; // [esp+20h] [ebp-18h]
  unsigned __int16 priority; // [esp+24h] [ebp-14h]
  TESRegionData *v28; // [esp+28h] [ebp-10h]
  TESWorldSpace *worldspacea; // [esp+44h] [ebp+Ch]

  v24 = 0; /*0x4a648b*/
  priority = 0; /*0x4a648f*/
  v28 = 0; /*0x4a6493*/
  v26 = 0; /*0x4a6497*/
  if ( this ) /*0x4a649b*/
    p_regions = (int *)&this->regions; /*0x4a649d*/
  else
    p_regions = 0; /*0x4a64a2*/
  v5 = FormHeapAlloc(0x10u); /*0x4a64a6*/
  if ( v5 ) /*0x4a64b0*/
  {
    *(_DWORD *)(v5 + 4) = 0; /*0x4a64b2*/
    *(_DWORD *)(v5 + 8) = 0; /*0x4a64b5*/
    *(_DWORD *)v5 = &TESRegionList::`vftable'; /*0x4a64b8*/
    *(_BYTE *)(v5 + 0xC) = 0; /*0x4a64be*/
    self = (TESRegionList *)v5; /*0x4a64c1*/
  }
  else
  {
    self = 0; /*0x4a64c7*/
  }
  for ( ; p_regions; p_regions = (int *)p_regions[1] ) /*0x4a64d5*/
  {
    v6 = *p_regions; /*0x4a64e0*/
    if ( !*p_regions ) /*0x4a64e0*/
      break; /*0x4a64e5*/
    if ( (*(_DWORD *)(v6 + 8) & 0x20) == 0 && (!worldspace || worldspace == *(TESWorldSpace **)(v6 + 0x20)) ) /*0x4a6500*/
    {
      DataByID = TESRegion_FindDataByID(*(TESRegionDataList **)(v6 + 0x18), dataID); /*0x4a650a*/
      if ( DataByID ) /*0x4a6511*/
      {
        if ( !DataByID->bIgnore ) /*0x4a6513*/
        {
          if ( worldXY ) /*0x4a651c*/
          {
            v8 = *(_DWORD *)(v6 + 0x1C); /*0x4a651e*/
            if ( v8 ) /*0x4a6523*/
            {
              while ( *(_DWORD *)v8 ) /*0x4a6529*/
              {
                if ( sub_4A7330(*(float **)v8, worldXY) ) /*0x4a6530*/
                {
                  TESRegionList_AddUniqueRegion(self, (TESForm *)v6); /*0x4a6547*/
                  break; /*0x4a654c*/
                }
                v8 = *(_DWORD *)(v8 + 4); /*0x4a6539*/
                if ( !v8 ) /*0x4a653e*/
                  break; /*0x4a653e*/
              }
            }
          }
          else
          {
            v9 = &self->regions; /*0x4a6555*/
            if ( self == (TESRegionList *)0xFFFFFFFC ) /*0x4a6559*/
            {
LABEL_24:
              BSSimpleList_PushFront(&self->regions.regionForm, v6); /*0x4a656b*/
            }
            else
            {
              while ( v9->regionForm != (TESForm *)v6 ) /*0x4a6562*/
              {
                v9 = v9->next; /*0x4a6564*/
                if ( !v9 ) /*0x4a6569*/
                  goto LABEL_24; /*0x4a6569*/
              }
            }
          }
        }
      }
    }
  }
  v10 = *(void (__thiscall ****)(_DWORD, int))(8 * dataID + 0xB35420);// Verified: cache slot selected-data pointer address = 0xB35420 + 8 * regionDataID. /*0x4a6580*/
  v11 = (TESRegionData **)(8 * dataID + 0xB35420);// Verified: corresponding cache slot matched-region-list pointer is selected-data slot +4. /*0x4a6589*/
  worldspacea = (TESWorldSpace *)v11; /*0x4a6590*/
  if ( v10 ) /*0x4a6594*/
  {
    v12 = *(TESRegionList **)(8 * dataID + 0xB35424); /*0x4a6596*/
    if ( v12 && TESRegionList_AreEqual(v12, self) ) /*0x4a65a6*/
    {
      BSSimpleList_Clear(&self->regions.regionForm); /*0x4a65b6*/
      if ( self ) /*0x4a65bd*/
        self->vtable->scalarDeletingDestructor(self, 1u); /*0x4a65c7*/
      return *v11; /*0x4a65cb*/
    }
    *v11 = 0; /*0x4a65d4*/
    (**v10)(v10, 1); /*0x4a65de*/
  }
  v14 = *(void (__thiscall ****)(_DWORD, int))(8 * dataID + 0xB35424); /*0x4a65e0*/
  v15 = (TESRegionList **)(8 * dataID + 0xB35424); /*0x4a65e9*/
  if ( v14 ) /*0x4a65f4*/
  {
    *v15 = 0; /*0x4a65f6*/
    (**v14)(v14, 1); /*0x4a65fe*/
  }
  if ( self ) /*0x4a6606*/
  {
    v16 = &self->regions; /*0x4a660f*/
    if ( self == (TESRegionList *)0xFFFFFFFC ) /*0x4a6613*/
      goto LABEL_63; /*0x4a6613*/
    do /*0x4a66c1*/
    {
      if ( !v16->regionForm ) /*0x4a6620*/
        break; /*0x4a6624*/
      v17 = TESRegion_FindDataByID((TESRegionDataList *)v16->regionForm[1].vtbl, dataID); /*0x4a6634*/
      v18 = v17; /*0x4a6639*/
      if ( v17 ) /*0x4a663d*/
      {
        if ( v17->bOverride ) /*0x4a663f*/
        {
          v24 = 1; /*0x4a664a*/
          if ( v26 ) /*0x4a664f*/
          {
            ((void (__thiscall *)(TESRegionData *, int))v26->vtable->scalarDeletingDestructor)(v26, 1); /*0x4a6657*/
            v26 = 0; /*0x4a6659*/
          }
          if ( v18->priority > priority ) /*0x4a6667*/
          {
            v28 = v18; /*0x4a666c*/
            priority = v18->priority; /*0x4a6670*/
          }
        }
        else if ( !v24 ) /*0x4a667a*/
        {
          if ( v26 ) /*0x4a6682*/
          {
            v19 = &self->regions; /*0x4a6684*/
            v20 = 0; /*0x4a6686*/
            do /*0x4a669c*/
            {
              if ( v19->regionForm ) /*0x4a6690*/
                ++v20; /*0x4a6694*/
              v19 = v19->next; /*0x4a6697*/
            }
            while ( v19 ); /*0x4a669c*/
            ((void (__thiscall *)(TESRegionData *, TESRegionData *, int))v26->vtable->unknown18)(v26, v18, v20); /*0x4a66a7*/
          }
          else
          {
            v26 = (TESRegionData *)((int (__thiscall *)(TESRegionData *))v17->vtable->unknown10)(v17); /*0x4a66b4*/
          }
        }
      }
      v16 = v16->next; /*0x4a66b8*/
      v15 = (TESRegionList **)(8 * dataID + 0xB35424); /*0x4a66bd*/
    }
    while ( v16 ); /*0x4a66c1*/
    if ( v24 ) /*0x4a66cb*/
    {
      v21 = ((int (__thiscall *)(TESRegionData *))v28->vtable->unknown10)(v28); /*0x4a66d8*/
      v26 = (TESRegionData *)v21; /*0x4a66da*/
    }
    else
    {
      v21 = (int)v26; /*0x4a66e0*/
    }
    if ( !v21 ) /*0x4a66e6*/
    {
LABEL_63:
      BSSimpleList_Clear(&self->regions.regionForm); /*0x4a6724*/
      self->vtable->scalarDeletingDestructor(self, 1u); /*0x4a6733*/
    }
    else
    {
      if ( worldspacea->vtbl ) /*0x4a66ec*/
        (*(void (__thiscall **)(TESFormVtbl *, int))worldspacea->vtbl->super.InitializeComponent)(worldspacea->vtbl, 1); /*0x4a66f9*/
      v22 = *v15; /*0x4a66fb*/
      v23 = *v15 == 0; /*0x4a66fd*/
      worldspacea->vtbl = (TESFormVtbl *)v21; /*0x4a66ff*/
      if ( !v23 ) /*0x4a6702*/
      {
        BSSimpleList_Clear(&v22->regions.regionForm); /*0x4a6707*/
        if ( *v15 ) /*0x4a670c*/
          (*v15)->vtable->scalarDeletingDestructor(*v15, 1u); /*0x4a6718*/
      }
      *v15 = self; /*0x4a671e*/
    }
  }
  return v26; /*0x4a6739*/
}
