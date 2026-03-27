int __thiscall EffectSetting_ReduceUnkA4(_DWORD *this)
{
  int result; // eax

  result = *(this + 0x29);
  if ( result >= 0 )
  {
    if ( result > 0 )
      *(this + 0x29) = --result;
  }
  else
  {
    *(this + 0x29) = ++result;
  }
  return result;
}
