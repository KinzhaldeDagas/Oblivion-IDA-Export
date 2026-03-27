double __thiscall ContainerEntryExtraData_GetHealthFracOrUses(void **this, int a2, int a3, double a4)
{
  double result; // st7
  void *v6; // edi

  result = flt_A30634;
  v6 = OblivionDynamicCast(
         *(this + 2),
         0,
         (struct _s_RTTICompleteObjectLocator *)&TESBoundObject `RTTI Type Descriptor',
         &TESHealthForm `RTTI Type Descriptor',
         0);
  OblivionDynamicCast(
    *(this + 2),
    0,
    (struct _s_RTTICompleteObjectLocator *)&TESBoundObject `RTTI Type Descriptor',
    &TESUsesForm `RTTI Type Descriptor',
    0);
  OblivionDynamicCast(
    *(this + 2),
    0,
    (struct _s_RTTICompleteObjectLocator *)&TESBoundObject `RTTI Type Descriptor',
    &TESSigilStone `RTTI Type Descriptor',
    0);
  if ( v6 )
    ContainerEntryExtraData_GetHealthFracOrUses_::Return_Health(a2, a3, a4);
  else
    ContainerEntryExtraData_GetHealthFracOrUses_::Return_Uses(a2, a3, LODWORD(a4), HIDWORD(a4));
  return result;
}
