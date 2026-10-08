Sky *__cdecl sub_540E90(int a1)
{
  Sky *result; // eax

  result = MEMORY[0xB365C4]; /*0x540e90*/
  if ( MEMORY[0xB365C4] ) /*0x540e90*/
  {
    if ( result->masserMoon ) /*0x540e99*/
    {
      result = *((Sky **)result->masserMoon + 4); /*0x540ea2*/
      if ( result ) /*0x540ea7*/
      {
        if ( a1 ) /*0x540eae*/
          LOWORD(result->weather018) |= 0x20u; /*0x540eb0*/
        else
          LOWORD(result->weather018) &= ~0x20u; /*0x540eb6*/
      }
    }
  }
  return result; /*0x540eb5*/
}
