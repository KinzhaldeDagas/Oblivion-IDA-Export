int __thiscall EffectSetting_ExtendUnkA4(int *this)
{
  int v1; // eax
  int result; // eax

  v1 = *(this + 0x29);
  if ( v1 >= 0 )
    result = v1 + 1;
  else
    result = v1 - 1;
  *(this + 0x29) = result;
  return result;
}
