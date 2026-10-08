double __thiscall TESObjectREFR_GetHealth(TESChildCELL *this)
{
  bool v2; // zf
  int (__thiscall **vtbl)(TESChildCELL *, int); // eax
  TESForm *v5; // eax
  void *v6; // edi
  BSExtraData *ExtraData; // eax
  double v8; // st7
  float v9; // [esp+4h] [ebp-4h]
  int v11; // [esp+4h] [ebp-4h]

  v9 = kTerrainLODQuadRayDirectionZ; /*0x4d757a*/
  v2 = !(*((bool (__thiscall **)(TESChildCELL *))this->vtbl + 0x64))(this); /*0x4d7588*/
  vtbl = (int (__thiscall **)(TESChildCELL *, int))this->vtbl; /*0x4d758a*/
  if ( !v2 ) /*0x4d758e*/
    return (float)vtbl[0xA1](this, 8); /*0x4d75aa*/
  v5 = (TESForm *)((int (__thiscall *)(TESChildCELL *))vtbl[0x5C])(this); /*0x4d75c0*/
  v6 = OblivionDynamicCast( /*0x4d75c8*/
         v5,
         0,
         (struct _s_RTTICompleteObjectLocator *)&TESBoundObject `RTTI Type Descriptor',
         &TESHealthForm `RTTI Type Descriptor',
         0);
  if ( v6 ) /*0x4d75cf*/
  {
    ExtraData = BaseExtraList_GetExtraData((ExtraDataList *)(this + 0x11), kExtraData_Health); /*0x4d75d6*/
    if ( ExtraData ) /*0x4d75dd*/
      return *(float *)&ExtraData[1].vtbl; /*0x4d75ec*/
    v11 = (*(int (__thiscall **)(void *))(*(_DWORD *)v6 + 0x10))(v6); /*0x4d75f8*/
    v8 = (double)v11; /*0x4d75fc*/
    if ( v11 < 0 ) /*0x4d7600*/
      return (float)(v8 + flt_A2FC78); /*0x4d7602*/
    return (float)v8; /*0x4d7608*/
  }
  return v9; /*0x4d75a9*/
}
