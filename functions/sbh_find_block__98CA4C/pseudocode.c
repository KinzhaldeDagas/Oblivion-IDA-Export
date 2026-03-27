char *__cdecl __sbh_find_block(int a1)
{
  char *result; // eax

  for ( result = (char *)lpMem; result < (char *)lpMem + 0x14 * dword_BAABC4; result += 0x14 )
  {
    if ( (unsigned int)(a1 - *((_DWORD *)result + 3)) < 0x100000 )
      return result;
  }
  return 0;
}
