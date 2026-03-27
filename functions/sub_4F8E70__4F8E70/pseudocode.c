char __cdecl sub_4F8E70(_BYTE *a1, void *a2, int a3, double *a4)
{
  _BYTE *v7; // esi
  void *v8; // eax
  CHAR *v9; // eax
  const char *v10; // esi
  void *v11; // eax
  const char *v12; // eax

  *a4 = 0.0;
  v7 = 0;
  if ( a1 )
  {
    if ( (*(unsigned __int8 (__thiscall **)(_BYTE *))(*(_DWORD *)a1 + 0x190))(a1) )
      v7 = a1;
  }
  *a4 = (double)sub_420ED0((ExtraDataList *)(v7 + 0x44), (int)a2);
  if ( IsConsoleMode )
  {
    v8 = OblivionDynamicCast(
           v7,
           0,
           (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
           &TESFullName `RTTI Type Descriptor',
           0);
    if ( v8 )
    {
      v9 = *((CHAR **)v8 + 1);
      if ( !v9 )
        v9 = EmptyString;
      v10 = v9;
    }
    else
    {
      v10 = EmptyString;
    }
    v11 = OblivionDynamicCast(
            a2,
            0,
            (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
            &TESFullName `RTTI Type Descriptor',
            0);
    if ( !v11 || (v12 = *((const char **)v11 + 1)) == 0 )
      v12 = EmptyString;
    Interface_ConsolePrint("%s has hit %s %0.2f times", v12, v10, *a4);
  }
  return 1;
}
