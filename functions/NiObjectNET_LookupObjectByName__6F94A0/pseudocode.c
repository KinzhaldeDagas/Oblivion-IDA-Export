int __cdecl NiObjectNET_LookupObjectByName(_DWORD *a1, char *a2)
{
  int result; // eax
  _DWORD *v3; // eax

  if ( !a1 ) /*0x6f94a7*/
    return 0; /*0x6f94a9*/
  v3 = sub_700010(a1, (int)&stru_B3CAC0); /*0x6f94b5*/
  if ( !v3 ) /*0x6f94c0*/
    return (*(int (__thiscall **)(_DWORD *, char *))(*a1 + 0x58))(a1, a2); /*0x6f94c0*/
  result = (*(int (__thiscall **)(_DWORD, char *))(*(_DWORD *)v3[0x1F] + 0x4C))(v3[0x1F], a2); /*0x6f94cb*/
  if ( !result ) /*0x6f94cf*/
    return (*(int (__thiscall **)(_DWORD *, char *))(*a1 + 0x58))(a1, a2); /*0x6f94d9*/
  return result; /*0x6f94ab*/
}
