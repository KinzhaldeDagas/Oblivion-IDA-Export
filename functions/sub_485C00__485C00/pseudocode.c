signed int __thiscall sub_485C00(EntryData *this)
{
  ExtraDataList **extendData; // eax
  int v3; // ebp
  ExtraDataList *v4; // esi
  ExtraDataList **v5; // eax
  ExtraDataList *v6; // esi
  TESForm *Owner; // esi
  _DWORD *v8; // eax
  ExtraDataList **v9; // eax
  ExtraDataList *v10; // esi
  void *v11; // ebx
  tListVoid *v12; // eax
  ExtraDataList *data; // esi
  double HealthData; // st7
  int v15; // eax
  float v17; // [esp+10h] [ebp-4h]

  extendData = (ExtraDataList **)this->extendData;
  v3 = 0;
  if ( this->extendData )
  {
    v4 = *extendData;
    if ( *extendData )
    {
      if ( ExtraDataList_GetOwner(*extendData) )
      {
        if ( ExtraDataList_GetOwner(v4) )
        {
          v5 = (ExtraDataList **)this->extendData;
          if ( this->extendData && (v6 = *v5) != 0 && ExtraDataList_GetOwner(*v5) )
            Owner = (TESForm *)ExtraDataList_GetOwner(v6);
          else
            Owner = 0;
          if ( Owner != TESDataHandler_g_PlayerRef->vtbl->super.super.super.GetBaseForm(TESDataHandler_g_PlayerRef) )
            v3 = 1;
        }
      }
    }
  }
  v8 = OblivionDynamicCast(
         this->type,
         0,
         (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
         &TESEnchantableForm `RTTI Type Descriptor',
         0);
  if ( v8 )
  {
    if ( v8[1] )
      v3 |= 2u;
  }
  v9 = (ExtraDataList **)this->extendData;
  if ( this->extendData )
  {
    v10 = *v9;
    if ( *v9 )
    {
      if ( ExtraDataList_GetPoison(*v9) )
      {
        if ( ExtraDataList_GetPoison(v10) )
          v3 |= 4u;
      }
    }
  }
  v11 = OblivionDynamicCast(
          this->type,
          0,
          (struct _s_RTTICompleteObjectLocator *)&TESBoundObject `RTTI Type Descriptor',
          &TESHealthForm `RTTI Type Descriptor',
          0);
  if ( v11 )
  {
    v12 = this->extendData;
    if ( this->extendData
      && (data = (ExtraDataList *)v12->node.data) != 0
      && ExtraDataList_GetHealthData((ExtraDataList *)v12->node.data) != flt_A30634 )
    {
      HealthData = ExtraDataList_GetHealthData(data);
    }
    else
    {
      v15 = (*(int (__thiscall **)(void *))(*(_DWORD *)v11 + 0x10))(v11);
      HealthData = (double)v15;
      if ( v15 < 0 )
        HealthData = HealthData + flt_A2FC78;
    }
    v17 = HealthData;
    if ( 0.0 == v17 )
      return v3 | 8;
  }
  return v3;
}
