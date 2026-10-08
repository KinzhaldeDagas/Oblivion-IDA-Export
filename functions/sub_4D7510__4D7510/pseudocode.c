unsigned __int8 __thiscall sub_4D7510(_BYTE *this)
{
  void *v2; // eax
  _BYTE *v3; // edi
  BSExtraData *ExtraData; // eax

  v2 = (void *)(*(int (__thiscall **)(_BYTE *))(*(_DWORD *)this + 0x170))(this); /*0x4d752e*/
  v3 = OblivionDynamicCast( /*0x4d7536*/
         v2,
         0,
         (struct _s_RTTICompleteObjectLocator *)&TESBoundObject `RTTI Type Descriptor',
         &TESUsesForm `RTTI Type Descriptor',
         0);
  if ( !v3 ) /*0x4d753d*/
    return 0xFF; /*0x4d755d*/
  ExtraData = BaseExtraList_GetExtraData((ExtraDataList *)(this + 0x44), kExtraData_Uses); /*0x4d7544*/
  if ( ExtraData ) /*0x4d754b*/
    return (unsigned __int8)ExtraData[1].vtbl; /*0x4d754d*/
  else
    return v3[4]; /*0x4d7554*/
}
