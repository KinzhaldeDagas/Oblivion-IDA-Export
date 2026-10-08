double __userpurge Actor_GetBaseCalcAVf_::SwitchAV@<st0>(int a1@<ebp>, int a2@<esi>, int a3)
{
  double result; // st7

  if ( (unsigned int)(a1 - 0x25) > 2 ) /*0x5eadac*/
    JUMPOUT(0x5EAD50); /*0x5ead50*/
  if ( a1 == 0x25 ) /*0x5eadb3*/
  {
    Actor_GetBaseCalcAVf_::GetBounty(a2, a3); /*0x5eadb3*/
  }
  else if ( a1 == 0x26 ) /*0x5eadb8*/
  {
    return Actor_GetBaseCalcAVf_::GetFame(a2, a3); /*0x5eadb8*/
  }
  else
  {
    return Actor_GetBaseCalcAVf_::GetInfamy(a2, a3); /*0x5eadbe*/
  }
  return result;
}
