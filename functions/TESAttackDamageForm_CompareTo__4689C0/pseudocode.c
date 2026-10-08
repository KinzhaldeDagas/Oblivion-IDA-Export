bool __thiscall TESAttackDamageForm_CompareTo(void *this, void *a2)
{
  void *v3; // eax
  unsigned __int16 v5; // di

  v3 = OblivionDynamicCast( /*0x4689d6*/
         a2,
         0,
         (struct _s_RTTICompleteObjectLocator *)&BaseFormComponent `RTTI Type Descriptor',
         &TESAttackDamageForm `RTTI Type Descriptor',
         0);
  if ( !v3 ) /*0x4689e0*/
    return 1; /*0x4689e2*/
  v5 = (*(int (__thiscall **)(void *))(*(_DWORD *)v3 + 0x10))(v3); /*0x4689f4*/
  return (*(unsigned __int16 (__thiscall **)(void *))(*(_DWORD *)this + 0x10))(this) != v5; /*0x4689e4*/
}
