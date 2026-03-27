char __cdecl sub_4F8C20(_BYTE *a1, int a2, int a3, double *a4)
{
  _BYTE *v7; // edi
  void *v8; // eax
  const char *v9; // eax
  void *v11; // eax
  const char *v12; // eax

  *a4 = 0.0;
  v7 = 0;
  if ( a1 )
  {
    if ( (*(unsigned __int8 (__thiscall **)(_BYTE *))(*(_DWORD *)a1 + 0x190))(a1) )
    {
      v7 = a1;
      if ( sub_5E3290(a1) && ExtraDataList_GetCrimeGold((ExtraDataList *)(a1 + 0x44)) > *(float *)&SrcStr )
        *a4 = 1.0;
    }
  }
  if ( !IsConsoleMode )
    return 1;
  if ( 0.0 == *a4 )
  {
    v11 = OblivionDynamicCast(
            v7,
            0,
            (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
            &TESFullName `RTTI Type Descriptor',
            0);
    if ( !v11 || (v12 = *((const char **)v11 + 1)) == 0 )
      v12 = EmptyString;
    Interface_ConsolePrint("%s is not stolen", v12);
    return 1;
  }
  v8 = OblivionDynamicCast(
         v7,
         0,
         (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
         &TESFullName `RTTI Type Descriptor',
         0);
  if ( !v8 || (v9 = *((const char **)v8 + 1)) == 0 )
    v9 = EmptyString;
  Interface_ConsolePrint("%s is stolen", v9);
  return 1;
}
