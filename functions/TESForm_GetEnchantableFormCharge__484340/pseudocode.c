void *__cdecl TESForm_GetEnchantableFormCharge(TESForm *a1)
{
  unsigned __int16 *v1; // eax

  v1 = (unsigned __int16 *)OblivionDynamicCast(
                             a1,
                             0,
                             (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                             &TESEnchantableForm `RTTI Type Descriptor',
                             0);
  if ( v1 )
    return (void *)v1[4];
  else
    return 0;
}
