int __cdecl NiObjectNET_LookupObjectByName(_DWORD *a1, char *a2)
{
  int result; // eax
  _DWORD *v3; // eax

  if ( !a1 )
    return 0;
  v3 = sub_700010(a1, (int)&stru_B3CAC0);
  if ( !v3 )
    return (*(int (__thiscall **)(_DWORD *, char *))(*a1 + 0x58))(a1, a2);
  result = (*(int (__thiscall **)(_DWORD, char *))(*(_DWORD *)v3[0x1F] + 0x4C))(v3[0x1F], a2);
  if ( !result )
    return (*(int (__thiscall **)(_DWORD *, char *))(*a1 + 0x58))(a1, a2);
  return result;
}
