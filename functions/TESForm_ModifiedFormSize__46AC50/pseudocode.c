signed int __stdcall TESForm_ModifiedFormSize(char a1)
{
  signed int result; // eax

  result = 0; /*0x46ac50*/
  if ( (a1 & 1) != 0 ) /*0x46ac57*/
    return 4; /*0x46ac59*/
  return result; /*0x46ac5e*/
}
