int __thiscall ContainerEntryExtraData_GetUses(void **this)
{
  ExtraDataList **v2; // ecx
  ExtraDataList *v3; // esi

  if ( !OblivionDynamicCast(
          *(this + 2),
          0,
          (struct _s_RTTICompleteObjectLocator *)&TESBoundObject `RTTI Type Descriptor',
          &TESUsesForm `RTTI Type Descriptor',
          0) )
    return ContainerEntryExtraData_GetUses_::Return_Neg1();
  v2 = (ExtraDataList **)*this;
  if ( *this )
  {
    v3 = *v2;
    if ( *v2 )
    {
      if ( ExtraDataList_GetUses(*v2) )
        return (unsigned __int8)ExtraDataList_GetUses(v3);
      return ContainerEntryExtraData_GetUses_::Return_Neg1();
    }
  }
  return ContainerEntryExtraData_GetUses_::Return_BaseUseCount();
}
