char __usercall sub_4053E0@<al>(int a1@<esi>, int a2)
{
  const char *v2; // eax
  char *v3; // esi
  size_t v5; // [esp-8h] [ebp-Ch]

  if ( !a2 ) /*0x4053e9*/
    return 0; /*0x4053e9*/
  v2 = *(const char **)(a2 + 0x34); /*0x4053eb*/
  if ( !v2 ) /*0x4053f0*/
    return 0; /*0x405436*/
  HIDWORD(v5) = a1; /*0x4053f2*/
  v3 = strchr(v2, 0x5C); /*0x4053fb*/
  if ( !v3 ) /*0x405402*/
    return 0; /*0x40542c*/
  while ( 1 ) /*0x405404*/
  {
    LODWORD(v5) = 6; /*0x405404*/
    if ( !_strnicmp(v3, "\\menus", v5) ) /*0x40540c*/
      break; /*0x40540c*/
    v3 = strchr(v3 + 1, 0x5C); /*0x405423*/
    if ( !v3 ) /*0x40542a*/
      return 0; /*0x40542a*/
  }
  return 1; /*0x40542f*/
}
