char __cdecl sub_4F8E70(_BYTE *a1, void *a2, int a3, double *a4)
{
  _BYTE *v4; // esi
  void *v5; // eax
  CHAR *v6; // eax
  const char *v7; // esi
  void *v8; // eax
  const char *v9; // eax

  *a4 = 0.0; /*0x4f8e77*/
  v4 = 0; /*0x4f8e7f*/
  if ( a1 ) /*0x4f8e83*/
  {
    if ( (*(unsigned __int8 (__thiscall **)(_BYTE *))(*(_DWORD *)a1 + 0x190))(a1) ) /*0x4f8e8f*/
      v4 = a1; /*0x4f8e95*/
  }
  *a4 = (double)ExtraDataList_GetFriendHitCount((ExtraDataList *)(v4 + 0x44), (int)a2); /*0x4f8eac*/
  if ( MEMORY[0xB361AC] ) /*0x4f8eae*/
  {
    v5 = OblivionDynamicCast( /*0x4f8ec6*/
           v4,
           0,
           (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
           &TESFullName `RTTI Type Descriptor',
           0);
    if ( v5 ) /*0x4f8ed0*/
    {
      v6 = *((CHAR **)v5 + 1); /*0x4f8ed2*/
      if ( !v6 ) /*0x4f8ed7*/
        v6 = EmptyString; /*0x4f8ed9*/
      v7 = v6; /*0x4f8ede*/
    }
    else
    {
      v7 = EmptyString; /*0x4f8ee2*/
    }
    v8 = OblivionDynamicCast( /*0x4f8ef6*/
           a2,
           0,
           (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
           &TESFullName `RTTI Type Descriptor',
           0);
    if ( !v8 || (v9 = *((const char **)v8 + 1)) == 0 ) /*0x4f8f07*/
      v9 = EmptyString; /*0x4f8f09*/
    Interface_ConsolePrint("%s has hit %s %0.2f times", v9, v7, *a4); /*0x4f8f1d*/
  }
  return 1; /*0x4f8f25*/
}
