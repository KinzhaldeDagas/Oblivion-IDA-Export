Sky *__cdecl sub_542E40(int a1)
{
  Sky *result; // eax

  result = MEMORY[0xB365C4]; /*0x542e40*/
  if ( MEMORY[0xB365C4] ) /*0x542e40*/
  {
    if ( result->sun ) /*0x542e49*/
    {
      result = (Sky *)result->sun->membr.super.rootNode; /*0x542e57*/
      if ( a1 ) /*0x542e5a*/
        LOWORD(result->weather018) |= 0x20u; /*0x542e5c*/
      else
        LOWORD(result->weather018) &= ~0x20u; /*0x542e62*/
    }
  }
  return result; /*0x542e61*/
}
