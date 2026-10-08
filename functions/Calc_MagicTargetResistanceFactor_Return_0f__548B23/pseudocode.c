// positive sp value has been detected, the output may be wrong!
void Calc_MagicTargetResistanceFactor_::Return_0f()
{
  __asm /*0x548b23*/
  {
    fstp    st
    fstp    st
    fldz
  }
}
