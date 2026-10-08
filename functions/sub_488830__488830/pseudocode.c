void __thiscall sub_488830(
        void **this,
        BSExtraDataVtbl *a2,
        ExtraContainerChanges_Data *a3,
        ExtraDataList *a4,
        char a5)
{
  void *v6; // ebx
  void *v7; // esi
  ExtraDataList **v8; // eax
  ExtraDataList *v9; // ebp
  double HealthData; // st7
  int v11; // eax
  TESObjectREFR *owner; // ecx
  int v13; // esi
  ExtraDataList **v14; // eax
  ExtraDataList *v15; // esi
  int **EntryForForm; // eax
  ExtraDataList **v17; // eax
  _DWORD *v18; // eax
  ExtraDataList *v19; // ebp
  _DWORD *v20; // eax
  _DWORD *v21; // esi
  ExtraDataList *v22; // ecx
  _DWORD *v23; // eax
  ExtraDataList *v24; // esi
  int v25; // [esp+1Ch] [ebp-14h]
  int v26; // [esp+1Ch] [ebp-14h]
  float v27; // [esp+1Ch] [ebp-14h]
  int HealthForForm; // [esp+20h] [ebp-10h]

  v6 = OblivionDynamicCast( /*0x488874*/
         *(this + 2),
         0,
         (struct _s_RTTICompleteObjectLocator *)&TESBoundObject `RTTI Type Descriptor',
         &TESHealthForm `RTTI Type Descriptor',
         0);
  HealthForForm = TESHealthForm_GetHealthForForm(*(this + 2)); /*0x48888d*/
  v7 = OblivionDynamicCast( /*0x488896*/
         *(this + 2),
         0,
         (struct _s_RTTICompleteObjectLocator *)&TESBoundObject `RTTI Type Descriptor',
         &TESHealthForm `RTTI Type Descriptor',
         0);
  if ( v7 ) /*0x48889d*/
  {
    v8 = (ExtraDataList **)*this; /*0x48889f*/
    if ( *this && (v9 = *v8) != 0 ) /*0x4888a5*/
    {
      if ( ExtraDataList_GetHealthData(*v8) == kTerrainLODQuadRayDirectionZ ) /*0x4888bd*/
      {
        v25 = (*(int (__thiscall **)(void *))(*(_DWORD *)v7 + 0x10))(v7); /*0x4888d3*/
        HealthData = (double)v25; /*0x4888d7*/
        if ( v25 < 0 ) /*0x4888db*/
          HealthData = HealthData + flt_A2FC78; /*0x4888dd*/
      }
      else
      {
        HealthData = ExtraDataList_GetHealthData(v9); /*0x4888c1*/
      }
    }
    else
    {
      v26 = (*(int (__thiscall **)(void *))(*(_DWORD *)v7 + 0x10))(v7); /*0x4888f0*/
      HealthData = (double)v26; /*0x4888f4*/
      if ( v26 < 0 ) /*0x4888f8*/
        HealthData = HealthData + flt_A2FC78; /*0x4888fa*/
    }
  }
  else
  {
    HealthData = kTerrainLODQuadRayDirectionZ; /*0x488902*/
  }
  v27 = HealthData; /*0x488908*/
  v11 = Double_To_SInt32(v27); /*0x488910*/
  owner = a3->owner; /*0x488919*/
  v13 = v11; /*0x48891e*/
  if ( owner ) /*0x488920*/
    owner->vtbl->super.MarkAsModified((TESForm *)owner, 0x8000000); /*0x48892c*/
  if ( v6 ) /*0x488930*/
  {
    if ( (double)HealthForForm > *(float *)&a2 || v13 > HealthForForm ) /*0x48894b*/
    {
      v17 = (ExtraDataList **)*this; /*0x4889bc*/
      if ( *this ) /*0x4889bc*/
      {
        do /*0x488a32*/
        {
          v22 = *v17; /*0x488a23*/
          if ( !*v17 ) /*0x488a23*/
            break; /*0x488a27*/
          if ( v22 == a4 ) /*0x488a2b*/
          {
            ExtraDataList_SetHealthValue(v22, a2); /*0x488a5f*/
            return; /*0x488a64*/
          }
          v17 = (ExtraDataList **)v17[1]; /*0x488a2d*/
        }
        while ( v17 ); /*0x488a32*/
        v23 = (_DWORD *)FormHeapAlloc(0x14u); /*0x488a38*/
        if ( v23 ) /*0x488a4e*/
          v24 = (ExtraDataList *)ExtraDataList_constr(v23); /*0x488a57*/
        else
          v24 = 0; /*0x488a66*/
        ExtraDataList_SetHealthValue(v24, a2); /*0x488a7a*/
        BSSimpleList_PushFront(*this, (int)v24); /*0x488a82*/
      }
      else
      {
        v18 = (_DWORD *)FormHeapAlloc(0x14u); /*0x4889c6*/
        v19 = 0; /*0x4889d2*/
        if ( v18 ) /*0x4889da*/
          v19 = (ExtraDataList *)ExtraDataList_constr(v18); /*0x4889e3*/
        v20 = (_DWORD *)FormHeapAlloc(8u); /*0x4889ef*/
        v21 = 0; /*0x4889f4*/
        if ( v20 ) /*0x4889fb*/
        {
          *v20 = 0; /*0x4889fd*/
          v20[1] = 0; /*0x4889ff*/
          v21 = v20; /*0x488a02*/
        }
        ExtraDataList_SetCharge(v19, a2); /*0x488a0e*/
        BSSimpleList_PushFront(v21, (int)v19); /*0x488a16*/
        *this = v21; /*0x488a1b*/
      }
    }
    else
    {
      v14 = (ExtraDataList **)*this; /*0x48894d*/
      if ( *this ) /*0x48894d*/
      {
        do /*0x488960*/
        {
          v15 = *v14; /*0x488960*/
          if ( !*v14 ) /*0x488960*/
            break; /*0x488960*/
          if ( v15 == a4 ) /*0x48896c*/
          {
            sub_41F610(*v14); /*0x48897c*/
            if ( !v15->members.m_data ) /*0x488981*/
            {
              if ( a5 ) /*0x488990*/
              {
                EntryForForm = (int **)ContainerExtraData_GetEntryForForm(a3, (TESForm *)*(this + 2), 1, 0); /*0x4889a0*/
                BSSimpleList_Remove(*EntryForForm, (int)v15); /*0x4889a8*/
                (*(void (__thiscall **)(ExtraDataList *, int))v15->vtbl)(v15, 1); /*0x4889b5*/
              }
            }
            return; /*0x4889b7*/
          }
          v14 = (ExtraDataList **)v14[1]; /*0x48896e*/
        }
        while ( v14 ); /*0x488960*/
      }
    }
  }
}
