char *__cdecl __sbh_find_block(int a1)
{
  char *result; // eax

  for ( result = (char *)MEMORY[0xBAABC8]; result < (char *)MEMORY[0xBAABC8] + 0x14 * unk_BAABC4; result += 0x14 ) /*0x98ca52*/
  {
    if ( (unsigned int)(a1 - *((_DWORD *)result + 3)) < 0x100000 ) /*0x98ca6b*/
      return result; /*0x98ca6b*/
  }
  return 0; /*0x98ca76*/
}
