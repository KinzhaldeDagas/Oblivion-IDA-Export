Sky *__cdecl sub_542E70(int a1)
{
  Sky *result; // eax

  result = MEMORY[0xB365C4]; /*0x542e70*/
  if ( MEMORY[0xB365C4] ) /*0x542e70*/
  {
    if ( result->sun ) /*0x542e79*/
    {
      result = (Sky *)result->sun->membr.SunGlareBillboard; /*0x542e82*/
      if ( result ) /*0x542e87*/
      {
        if ( a1 ) /*0x542e8e*/
          LOWORD(result->weather018) |= 0x20u; /*0x542e90*/
        else
          LOWORD(result->weather018) &= ~0x20u; /*0x542e96*/
      }
    }
  }
  return result; /*0x542e95*/
}
