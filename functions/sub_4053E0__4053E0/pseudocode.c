char __usercall sub_4053E0@<al>(int a1@<esi>, int a2)
{
  const char *v2; // eax
  char *v3; // esi
  size_t v5; // [esp-8h] [ebp-Ch]

  if ( !a2 )
    return 0;
  v2 = *(const char **)(a2 + 0x34);
  if ( !v2 )
    return 0;
  HIDWORD(v5) = a1;
  v3 = strchr(v2, 0x5C);
  if ( !v3 )
    return 0;
  while ( 1 )
  {
    LODWORD(v5) = 6;
    if ( !_strnicmp(v3, "\\menus", v5) )
      break;
    v3 = strchr(v3 + 1, 0x5C);
    if ( !v3 )
      return 0;
  }
  return 1;
}
