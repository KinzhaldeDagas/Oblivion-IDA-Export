signed __int16 __stdcall sub_74F870(char *a1)
{
  signed __int16 result; // ax
  bool v2; // zf

  if ( !j_CRT_strcmp(a1, off_B283E0[0]) )
    return 0;
  v2 = j_CRT_strcmp(a1, off_B283E4[0]) == 0;
  result = 1;
  if ( !v2 )
    return word_A7A160;
  return result;
}
