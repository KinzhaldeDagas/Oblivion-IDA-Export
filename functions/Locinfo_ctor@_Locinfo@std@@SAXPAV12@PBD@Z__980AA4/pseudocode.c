void __cdecl std::_Locinfo::_Locinfo_ctor(struct std::_Locinfo *a1, char *a2)
{
  CHAR *v2; // eax
  char *v3; // eax

  v2 = setlocale(0, 0);
  if ( !v2 )
    v2 = EmptyString;
  sub_4146B0((_DWORD *)a1 + 0xF, v2);
  if ( !a2 || (v3 = setlocale(0, a2)) == 0 )
    v3 = "*";
  sub_4146B0((_DWORD *)a1 + 0x16, v3);
}
