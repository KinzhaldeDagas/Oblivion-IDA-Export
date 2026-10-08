signed __int16 __stdcall sub_74F870(char *a1)
{
  signed __int16 result; // ax
  bool v2; // zf

  if ( !j_CRT_strcmp(a1, off_B283E0[0]) ) /*0x74f87c*/
    return 0; /*0x74f888*/
  v2 = j_CRT_strcmp(a1, off_B283E4[0]) == 0; /*0x74f89f*/
  result = 1; /*0x74f8a1*/
  if ( !v2 ) /*0x74f8a5*/
    return word_A7A160; /*0x74f8a7*/
  return result; /*0x74f88b*/
}
