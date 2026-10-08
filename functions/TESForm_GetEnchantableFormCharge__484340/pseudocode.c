void *__cdecl TESForm_GetEnchantableFormCharge(TESForm *a1)
{
  unsigned __int16 *v1; // eax

  v1 = (unsigned __int16 *)OblivionDynamicCast( /*0x484353*/
                             a1,
                             0,
                             (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                             &TESEnchantableForm `RTTI Type Descriptor',
                             0);
  if ( v1 ) /*0x48435d*/
    return (void *)v1[4]; /*0x48435f*/
  else
    return 0; /*0x484364*/
}
