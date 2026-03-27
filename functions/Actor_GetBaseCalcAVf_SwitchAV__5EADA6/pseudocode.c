int __userpurge Actor_GetBaseCalcAVf_::SwitchAV@<eax>(int a1@<ebp>, int a2)
{
  if ( (unsigned int)(a1 - 0x25) > 2 )
    JUMPOUT(0x5EAD50);
  if ( a1 == 0x25 )
    return Actor_GetBaseCalcAVf_::GetBounty(a2);
  if ( a1 == 0x26 )
    return Actor_GetBaseCalcAVf_::GetFame(a2);
  return Actor_GetBaseCalcAVf_::GetInfamy(a2);
}
