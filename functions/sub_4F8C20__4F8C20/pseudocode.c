char __cdecl sub_4F8C20(_BYTE *a1, int a2, int a3, double *a4)
{
  _BYTE *v4; // edi
  void *v5; // eax
  const char *v6; // eax
  void *v8; // eax
  const char *v9; // eax

  *a4 = 0.0; /*0x4f8c27*/
  v4 = 0; /*0x4f8c2f*/
  if ( a1 ) /*0x4f8c33*/
  {
    if ( (*(unsigned __int8 (__thiscall **)(_BYTE *))(*(_DWORD *)a1 + 0x190))(a1) ) /*0x4f8c3f*/
    {
      v4 = a1; /*0x4f8c47*/
      if ( sub_5E3290(a1) && ExtraDataList_GetCrimeGold((ExtraDataList *)(a1 + 0x44)) > *(float *)&SrcStr ) /*0x4f8c65*/
        *a4 = 1.0; /*0x4f8c69*/
    }
  }
  if ( !MEMORY[0xB361AC] ) /*0x4f8c72*/
    return 1; /*0x4f8c72*/
  if ( 0.0 == *a4 ) /*0x4f8c8c*/
  {
    v8 = OblivionDynamicCast( /*0x4f8cba*/
           v4,
           0,
           (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
           &TESFullName `RTTI Type Descriptor',
           0);
    if ( !v8 || (v9 = *((const char **)v8 + 1)) == 0 ) /*0x4f8ccb*/
      v9 = EmptyString; /*0x4f8ccd*/
    Interface_ConsolePrint("%s is not stolen", v9); /*0x4f8cd8*/
    return 1; /*0x4f8ce2*/
  }
  v5 = OblivionDynamicCast( /*0x4f8c8e*/
         v4,
         0,
         (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
         &TESFullName `RTTI Type Descriptor',
         0);
  if ( !v5 || (v6 = *((const char **)v5 + 1)) == 0 ) /*0x4f8c9f*/
    v6 = EmptyString; /*0x4f8ca1*/
  Interface_ConsolePrint("%s is stolen", v6); /*0x4f8cac*/
  return 1; /*0x4f8cb4*/
}
