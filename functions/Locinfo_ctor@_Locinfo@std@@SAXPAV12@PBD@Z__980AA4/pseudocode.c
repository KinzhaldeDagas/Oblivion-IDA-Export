void __cdecl std::_Locinfo::_Locinfo_ctor(struct std::_Locinfo *a1, char *a2)
{
  CHAR *v2; // eax
  char *v3; // eax

  v2 = setlocale(0, 0); /*0x980aa8*/
  if ( !v2 ) /*0x980ab1*/
    v2 = EmptyString; /*0x980ab3*/
  sub_4146B0((OB_stString28_010201A0 *)((char *)a1 + 0x3C), v2); /*0x980ac1*/
  if ( !a2 || (v3 = setlocale(0, a2)) == 0 ) /*0x980adc*/
    v3 = "*"; /*0x980ade*/
  sub_4146B0((OB_stString28_010201A0 *)((char *)a1 + 0x58), v3); /*0x980ae7*/
}
