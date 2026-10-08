Sky *__cdecl sub_540EF0(int a1)
{
  Sky *result; // eax

  result = MEMORY[0xB365C4]; /*0x540ef0*/
  if ( MEMORY[0xB365C4] ) /*0x540ef0*/
  {
    if ( result->masserMoon ) /*0x540ef9*/
    {
      result = *((Sky **)result->masserMoon + 5); /*0x540f02*/
      if ( result ) /*0x540f07*/
      {
        if ( a1 ) /*0x540f0e*/
          LOWORD(result->weather018) |= 0x20u; /*0x540f10*/
        else
          LOWORD(result->weather018) &= ~0x20u; /*0x540f16*/
      }
    }
  }
  return result; /*0x540f15*/
}
