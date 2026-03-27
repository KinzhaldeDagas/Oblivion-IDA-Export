void __thiscall sub_488830(void **this, BSExtraDataVtbl *a2, int a3, ExtraDataList *a4, char a5)
{
  void *v6; // ebx
  void *v7; // esi
  ExtraDataList **v8; // eax
  ExtraDataList *v9; // ebp
  double HealthData; // st7
  int v11; // eax
  int v12; // ecx
  int v13; // esi
  ExtraDataList **v14; // eax
  int v15; // esi
  _DWORD **v16; // eax
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

  v6 = OblivionDynamicCast(
         *(this + 2),
         0,
         (struct _s_RTTICompleteObjectLocator *)&TESBoundObject `RTTI Type Descriptor',
         &TESHealthForm `RTTI Type Descriptor',
         0);
  HealthForForm = TESHealthForm_GetHealthForForm(*(this + 2));
  v7 = OblivionDynamicCast(
         *(this + 2),
         0,
         (struct _s_RTTICompleteObjectLocator *)&TESBoundObject `RTTI Type Descriptor',
         &TESHealthForm `RTTI Type Descriptor',
         0);
  if ( v7 )
  {
    v8 = (ExtraDataList **)*this;
    if ( *this && (v9 = *v8) != 0 )
    {
      if ( ExtraDataList_GetHealthData(*v8) == flt_A30634 )
      {
        v25 = (*(int (__thiscall **)(void *))(*(_DWORD *)v7 + 0x10))(v7);
        HealthData = (double)v25;
        if ( v25 < 0 )
          HealthData = HealthData + flt_A2FC78;
      }
      else
      {
        HealthData = ExtraDataList_GetHealthData(v9);
      }
    }
    else
    {
      v26 = (*(int (__thiscall **)(void *))(*(_DWORD *)v7 + 0x10))(v7);
      HealthData = (double)v26;
      if ( v26 < 0 )
        HealthData = HealthData + flt_A2FC78;
    }
  }
  else
  {
    HealthData = flt_A30634;
  }
  v27 = HealthData;
  v11 = Double_To_SInt32(v27);
  v12 = *(_DWORD *)(a3 + 4);
  v13 = v11;
  if ( v12 )
    (*(void (__thiscall **)(int, int))(*(_DWORD *)v12 + 0x40))(v12, 0x8000000);
  if ( v6 )
  {
    if ( (double)HealthForForm > *(float *)&a2 || v13 > HealthForForm )
    {
      v17 = (ExtraDataList **)*this;
      if ( *this )
      {
        do
        {
          v22 = *v17;
          if ( !*v17 )
            break;
          if ( v22 == a4 )
          {
            ExtraDataList_SetHealthValue(v22, a2);
            return;
          }
          v17 = (ExtraDataList **)v17[1];
        }
        while ( v17 );
        v23 = (_DWORD *)FormHeapAlloc(0x14u);
        if ( v23 )
          v24 = (ExtraDataList *)ExtraDataList_constr(v23);
        else
          v24 = 0;
        ExtraDataList_SetHealthValue(v24, a2);
        BSSimpleList_PushFront(*this, (int)v24);
      }
      else
      {
        v18 = (_DWORD *)FormHeapAlloc(0x14u);
        v19 = 0;
        if ( v18 )
          v19 = (ExtraDataList *)ExtraDataList_constr(v18);
        v20 = (_DWORD *)FormHeapAlloc(8u);
        v21 = 0;
        if ( v20 )
        {
          *v20 = 0;
          v20[1] = 0;
          v21 = v20;
        }
        sub_41EE90(v19, a2);
        BSSimpleList_PushFront(v21, (int)v19);
        *this = v21;
      }
    }
    else
    {
      v14 = (ExtraDataList **)*this;
      if ( *this )
      {
        do
        {
          v15 = (int)*v14;
          if ( !*v14 )
            break;
          if ( (ExtraDataList *)v15 == a4 )
          {
            sub_41F610(*v14);
            if ( !*(_DWORD *)(v15 + 4) )
            {
              if ( a5 )
              {
                ContainerExtraData_GetEntryForForm((_DWORD **)a3, (int)*(this + 2), 1, 0);
                BSSimpleList_Remove(*v16, v15);
                (**(void (__thiscall ***)(int, int))v15)(v15, 1);
              }
            }
            return;
          }
          v14 = (ExtraDataList **)v14[1];
        }
        while ( v14 );
      }
    }
  }
}
