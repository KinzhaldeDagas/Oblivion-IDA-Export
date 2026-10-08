__int16 __cdecl TESAttackDamageForm_GetDamageForForm(void *a1)
{
  void *v1; // eax

  v1 = OblivionDynamicCast( /*0x468a23*/
         a1,
         0,
         (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
         &TESAttackDamageForm `RTTI Type Descriptor',
         0);
  if ( v1 ) /*0x468a2d*/
    return (*(__int16 (__thiscall **)(void *))(*(_DWORD *)v1 + 0x10))(v1); /*0x468a36*/
  else
    return 0; /*0x468a38*/
}
