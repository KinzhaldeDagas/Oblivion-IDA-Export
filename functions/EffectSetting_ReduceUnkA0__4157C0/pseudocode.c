int __thiscall EffectSetting_ReduceUnkA0(_DWORD *this)
{
  int result; // eax

  result = *(this + 0x28);
  if ( result >= 0 )
  {
    if ( result > 0 )
      *(this + 0x28) = --result;
  }
  else
  {
    *(this + 0x28) = ++result;
  }
  return result;
}
