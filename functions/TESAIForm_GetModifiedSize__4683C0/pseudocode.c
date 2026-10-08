signed int __stdcall TESAIForm_GetModifiedSize(__int16 a1)
{
  signed int result; // eax

  result = 0; /*0x4683c0*/
  if ( (a1 & 0x100) != 0 ) /*0x4683ca*/
    return 4; /*0x4683cc*/
  return result; /*0x4683d1*/
}
