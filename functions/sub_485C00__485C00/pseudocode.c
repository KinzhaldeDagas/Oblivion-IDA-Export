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

  extendData = (ExtraDataList **)this->extendData; /*0x485c07*/
  v3 = 0; /*0x485c09*/
  if ( this->extendData ) /*0x485c07*/
  {
    v4 = *extendData; /*0x485c0f*/
    if ( *extendData ) /*0x485c0f*/
    {
      if ( ExtraDataList_GetOwner(*extendData) ) /*0x485c17*/
      {
        if ( ExtraDataList_GetOwner(v4) ) /*0x485c22*/
        {
          v5 = (ExtraDataList **)this->extendData; /*0x485c2b*/
          if ( this->extendData && (v6 = *v5) != 0 && ExtraDataList_GetOwner(*v5) ) /*0x485c39*/
            Owner = ExtraDataList_GetOwner(v6); /*0x485c49*/
          else
            Owner = 0; /*0x485c4d*/
          if ( Owner != reference->vtbl->super.super.super.GetBaseForm(reference) ) /*0x485c61*/
            v3 = 1; /*0x485c63*/
        }
      }
    }
  }
  v8 = OblivionDynamicCast( /*0x485c7a*/
         this->type,
         0,
         (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
         &TESEnchantableForm `RTTI Type Descriptor',
         0);
  if ( v8 ) /*0x485c84*/
  {
    if ( v8[1] ) /*0x485c86*/
      v3 |= 2u; /*0x485c8c*/
  }
  v9 = (ExtraDataList **)this->extendData; /*0x485c8f*/
  if ( this->extendData ) /*0x485c8f*/
  {
    v10 = *v9; /*0x485c95*/
    if ( *v9 ) /*0x485c95*/
    {
      if ( ExtraDataList_GetPoison(*v9) ) /*0x485c9d*/
      {
        if ( ExtraDataList_GetPoison(v10) ) /*0x485ca8*/
          v3 |= 4u; /*0x485cb1*/
      }
    }
  }
  v11 = OblivionDynamicCast( /*0x485ccb*/
          this->type,
          0,
          (struct _s_RTTICompleteObjectLocator *)&TESBoundObject `RTTI Type Descriptor',
          &TESHealthForm `RTTI Type Descriptor',
          0);
  if ( v11 ) /*0x485cd2*/
  {
    v12 = this->extendData; /*0x485cd4*/
    if ( this->extendData /*0x485cf2*/
      && (data = (ExtraDataList *)v12->node.data) != 0
      && ExtraDataList_GetHealthData((ExtraDataList *)v12->node.data) != kTerrainLODQuadRayDirectionZ )
    {
      HealthData = ExtraDataList_GetHealthData(data); /*0x485cf6*/
    }
    else
    {
      v15 = (*(int (__thiscall **)(void *))(*(_DWORD *)v11 + 0x10))(v11); /*0x485d17*/
      HealthData = (double)v15; /*0x485d1d*/
      if ( v15 < 0 ) /*0x485d23*/
        HealthData = HealthData + flt_A2FC78; /*0x485d25*/
    }
    v17 = HealthData; /*0x485d2b*/
    if ( 0.0 == v17 ) /*0x485d3a*/
      return v3 | 8; /*0x485d3c*/
  }
  return v3; /*0x485d3f*/
}
