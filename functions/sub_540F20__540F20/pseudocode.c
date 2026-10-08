Sky *__cdecl sub_540F20(int a1)
{
  Sky *result; // eax

  result = MEMORY[0xB365C4]; /*0x540f20*/
  if ( MEMORY[0xB365C4] ) /*0x540f20*/
  {
    if ( result->secundaMoon ) /*0x540f29*/
    {
      result = *((Sky **)result->secundaMoon + 5); /*0x540f32*/
      if ( result ) /*0x540f37*/
      {
        if ( a1 ) /*0x540f3e*/
          LOWORD(result->weather018) |= 0x20u; /*0x540f40*/
        else
          LOWORD(result->weather018) &= ~0x20u; /*0x540f46*/
      }
    }
  }
  return result; /*0x540f45*/
}
