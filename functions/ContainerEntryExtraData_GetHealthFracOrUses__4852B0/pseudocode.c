double __thiscall ContainerEntryExtraData_GetHealthFracOrUses(void **this, int a2, int a3, double a4)
{
  void *v5; // edi
  void *v6; // ebx
  void *v7; // eax

  v5 = OblivionDynamicCast( /*0x4852eb*/
         *(this + 2),
         0,
         (struct _s_RTTICompleteObjectLocator *)&TESBoundObject `RTTI Type Descriptor',
         &TESHealthForm `RTTI Type Descriptor',
         0);
  v6 = OblivionDynamicCast( /*0x485304*/
         *(this + 2),
         0,
         (struct _s_RTTICompleteObjectLocator *)&TESBoundObject `RTTI Type Descriptor',
         &TESUsesForm `RTTI Type Descriptor',
         0);
  v7 = OblivionDynamicCast( /*0x485306*/
         *(this + 2),
         0,
         (struct _s_RTTICompleteObjectLocator *)&TESBoundObject `RTTI Type Descriptor',
         &TESSigilStone `RTTI Type Descriptor',
         0);
  if ( v5 ) /*0x485310*/
    return ContainerEntryExtraData_GetHealthFracOrUses_::Return_Health((int)v5, this, a2, a3, a4); /*0x485311*/
  else
    return ContainerEntryExtraData_GetHealthFracOrUses_::Return_Uses( /*0x485310*/
             (int)v7,
             (int)v6,
             this,
             a2,
             a3,
             SLODWORD(a4),
             SHIDWORD(a4));
}
