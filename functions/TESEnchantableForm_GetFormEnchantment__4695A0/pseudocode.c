int __cdecl TESEnchantableForm_GetFormEnchantment(void *a1)
{
  _DWORD *v1; // eax

  v1 = OblivionDynamicCast( /*0x4695b3*/
         a1,
         0,
         (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
         &TESEnchantableForm `RTTI Type Descriptor',
         0);
  if ( v1 ) /*0x4695bd*/
    return v1[1]; /*0x4695bf*/
  else
    return 0; /*0x4695c3*/
}
