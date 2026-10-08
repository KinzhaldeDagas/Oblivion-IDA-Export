char __cdecl sub_4F8CF0(_DWORD *a1, int a2, int a3, double *a4)
{
  _DWORD *v4; // esi
  void *v5; // eax
  const char *v6; // eax
  void *v8; // eax
  const char *v9; // eax

  *a4 = 0.0; /*0x4f8cf7*/
  v4 = 0; /*0x4f8cff*/
  if ( a1 ) /*0x4f8d03*/
  {
    if ( (*(unsigned __int8 (__thiscall **)(_DWORD *))(*a1 + 0x190))(a1) ) /*0x4f8d0f*/
      v4 = a1; /*0x4f8d15*/
  }
  if ( Actor_IsSneaking(v4) ) /*0x4f8d19*/
    *a4 = 1.0; /*0x4f8d24*/
  if ( !MEMORY[0xB361AC] ) /*0x4f8d2d*/
    return 1; /*0x4f8d2d*/
  if ( 0.0 == *a4 ) /*0x4f8d47*/
  {
    v8 = OblivionDynamicCast( /*0x4f8d75*/
           v4,
           0,
           (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
           &TESFullName `RTTI Type Descriptor',
           0);
    if ( !v8 || (v9 = *((const char **)v8 + 1)) == 0 ) /*0x4f8d86*/
      v9 = EmptyString; /*0x4f8d88*/
    Interface_ConsolePrint("%s is not sneaking", v9); /*0x4f8d93*/
    return 1; /*0x4f8d9d*/
  }
  v5 = OblivionDynamicCast( /*0x4f8d49*/
         v4,
         0,
         (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
         &TESFullName `RTTI Type Descriptor',
         0);
  if ( !v5 || (v6 = *((const char **)v5 + 1)) == 0 ) /*0x4f8d5a*/
    v6 = EmptyString; /*0x4f8d5c*/
  Interface_ConsolePrint("%s is sneaking", v6); /*0x4f8d67*/
  return 1; /*0x4f8d6f*/
}
