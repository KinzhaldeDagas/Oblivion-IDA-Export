int __thiscall EffectSetting_ReduceUnkA4(_DWORD *this)
{
  int result; // eax

  result = *(this + 0x29); /*0x415760*/
  if ( result >= 0 ) /*0x415768*/
  {
    if ( result > 0 ) /*0x415774*/
      *(this + 0x29) = --result; /*0x415779*/
  }
  else
  {
    *(this + 0x29) = ++result; /*0x41576d*/
  }
  return result; /*0x415773*/
}
