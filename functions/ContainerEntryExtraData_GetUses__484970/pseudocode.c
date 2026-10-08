int __thiscall ContainerEntryExtraData_GetUses(void **this)
{
  void *v2; // eax
  ExtraDataList **v3; // ecx
  ExtraDataList *v4; // esi

  v2 = OblivionDynamicCast( /*0x484985*/
         *(this + 2),
         0,
         (struct _s_RTTICompleteObjectLocator *)&TESBoundObject `RTTI Type Descriptor',
         &TESUsesForm `RTTI Type Descriptor',
         0);
  if ( !v2 ) /*0x48498f*/
    return ContainerEntryExtraData_GetUses_::Return_Neg1(); /*0x48498f*/
  v3 = (ExtraDataList **)*this; /*0x484991*/
  if ( *this ) /*0x484991*/
  {
    v4 = *v3; /*0x484997*/
    if ( *v3 ) /*0x484997*/
    {
      if ( ExtraDataList_GetUses(*v3) ) /*0x48499f*/
        return (unsigned __int8)ExtraDataList_GetUses(v4); /*0x4849b3*/
      return ContainerEntryExtraData_GetUses_::Return_Neg1(); /*0x4849a6*/
    }
  }
  return ContainerEntryExtraData_GetUses_::Return_BaseUseCount((int)v2); /*0x4849b2*/
}
