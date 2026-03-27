int __thiscall EffectSetting_ExtendUnkA0(int *this)
{
  int v1; // eax
  int result; // eax

  v1 = *(this + 0x28);
  if ( v1 >= 0 )
    result = v1 + 1;
  else
    result = v1 - 1;
  *(this + 0x28) = result;
  return result;
}
