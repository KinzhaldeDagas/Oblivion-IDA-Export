signed int __stdcall TESAttributes_ModifiedSize(char a1)
{
  signed int result; // eax

  result = 0; /*0x468b40*/
  if ( (a1 & 8) != 0 ) /*0x468b47*/
    return 8; /*0x468b49*/
  return result; /*0x468b4e*/
}
