// positive sp value has been detected, the output may be wrong!
void PlayerCharacter_GetBounty_::Return()
{
  __asm { fstp    st(1) }
}
