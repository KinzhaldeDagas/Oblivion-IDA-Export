unsigned __int8 __thiscall sub_4D7510(_BYTE *this)
{
  void *v2; // eax
  _BYTE *v3; // edi
  BSExtraData *ExtraData; // eax

  v2 = (void *)(*(int (__thiscall **)(_BYTE *))(*(_DWORD *)this + 0x170))(this);
  v3 = OblivionDynamicCast(
         v2,
         0,
         (struct _s_RTTICompleteObjectLocator *)&TESBoundObject `RTTI Type Descriptor',
         &TESUsesForm `RTTI Type Descriptor',
         0);
  if ( !v3 )
    return 0xFF;
  ExtraData = BaseExtraList_GetExtraData((ExtraDataList *)(this + 0x44), kExtraData_Uses);
  if ( ExtraData )
    return (unsigned __int8)ExtraData[1].vtbl;
  else
    return v3[4];
}
