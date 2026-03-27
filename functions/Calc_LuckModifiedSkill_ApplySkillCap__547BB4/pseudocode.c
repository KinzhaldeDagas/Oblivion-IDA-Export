__int16 __cdecl Calc_LuckModifiedSkill_::ApplySkillCap()
{
  __int16 result; // ax

  __asm
  {
    fld     qword ptr ds:0A309F0h
    fcom    st(1)
    fnstsw  ax
  }
  if ( (_AX & 0x4100) == 0 )
  {
    __asm
    {
      fld     st(1)
      fldz
      fcom    st(1)
      fnstsw  ax
      fstp    st(1)
    }
    if ( __SETP__(HIBYTE(result) & 5, 0) )
    {
      __asm { fstp    st(2) }
      goto LABEL_7;
    }
    __asm { fstp    st }
  }
  __asm
  {
    fcom    st(1)
    fnstsw  ax
  }
  if ( (result & 0x4100) != 0 )
  {
    __asm
    {
      fstp    st(1)
      fstp    [esp+arg_4]
      fld     [esp+arg_4]
    }
    return result;
  }
LABEL_7:
  __asm
  {
    fstp    st
    fstp    [esp+arg_4]
    fld     [esp+arg_4]
  }
  return result;
}
