// Native Oblivion clamp tail for Luck-modified effective skill: preserve fractional precision while bounding the result to 0..100.
__int16 __cdecl Calc_LuckModifiedSkill_::ApplySkillCap()
{
  __int16 result; // ax

  __asm
  {
    fld     qword ptr ds:0A309F0h; Native Oblivion clamp tail for Luck-modified effective skill: preserve fractional precision while bounding the result to 0..100.
    fcom    st(1)
    fnstsw  ax
  }
  if ( (_AX & 0x4100) == 0 ) /*0x547bc1*/
  {
    __asm /*0x547bc3*/
    {
      fld     st(1)
      fldz
      fcom    st(1)
      fnstsw  ax
      fstp    st(1)
    }
    if ( __SETP__(HIBYTE(result) & 5, 0) ) /*0x547bd0*/
    {
      __asm { fstp    st(2) } /*0x547be8*/
      goto LABEL_7; /*0x547be8*/
    }
    __asm { fstp    st } /*0x547bd2*/
  }
  __asm /*0x547bd4*/
  {
    fcom    st(1)
    fnstsw  ax
  }
  if ( (result & 0x4100) != 0 ) /*0x547bdb*/
  {
    __asm /*0x547bdd*/
    {
      fstp    st(1)
      fstp    [esp+arg_4]
      fld     [esp+arg_4]
    }
    return result; /*0x547be7*/
  }
LABEL_7:
  __asm /*0x547bea*/
  {
    fstp    st
    fstp    [esp+arg_4]
    fld     [esp+arg_4]
  }
  return result; /*0x547be7*/
}
