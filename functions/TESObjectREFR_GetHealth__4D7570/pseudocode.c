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

  v9 = flt_A30634;
  v2 = !(*((bool (__thiscall **)(TESChildCELL *))this->vtbl + 0x64))(this);
  vtbl = (int (__thiscall **)(TESChildCELL *, int))this->vtbl;
  if ( !v2 )
    return (float)vtbl[0xA1](this, 8);
  v5 = (TESForm *)((int (__thiscall *)(TESChildCELL *))vtbl[0x5C])(this);
  v6 = OblivionDynamicCast(
         v5,
         0,
         (struct _s_RTTICompleteObjectLocator *)&TESBoundObject `RTTI Type Descriptor',
         &TESHealthForm `RTTI Type Descriptor',
         0);
  if ( v6 )
  {
    ExtraData = BaseExtraList_GetExtraData((ExtraDataList *)(this + 0x11), kExtraData_Health);
    if ( ExtraData )
      return *(float *)&ExtraData[1].vtbl;
    v11 = (*(int (__thiscall **)(void *))(*(_DWORD *)v6 + 0x10))(v6);
    v8 = (double)v11;
    if ( v11 < 0 )
      return (float)(v8 + flt_A2FC78);
    return (float)v8;
  }
  return v9;
}
