Sky *__cdecl sub_540EC0(int a1)
{
  Sky *result; // eax

  result = MEMORY[0xB365C4]; /*0x540ec0*/
  if ( MEMORY[0xB365C4] ) /*0x540ec0*/
  {
    if ( result->secundaMoon ) /*0x540ec9*/
    {
      result = *((Sky **)result->secundaMoon + 4); /*0x540ed2*/
      if ( result ) /*0x540ed7*/
      {
        if ( a1 ) /*0x540ede*/
          LOWORD(result->weather018) |= 0x20u; /*0x540ee0*/
        else
          LOWORD(result->weather018) &= ~0x20u; /*0x540ee6*/
      }
    }
  }
  return result; /*0x540ee5*/
}
