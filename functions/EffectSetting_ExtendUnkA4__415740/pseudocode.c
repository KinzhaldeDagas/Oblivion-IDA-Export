int __thiscall EffectSetting_ExtendUnkA4(int *this)
{
  int v1; // eax
  int result; // eax

  v1 = *(this + 0x29); /*0x415740*/
  if ( v1 >= 0 ) /*0x415748*/
    result = v1 + 1; /*0x415754*/
  else
    result = v1 - 1; /*0x41574a*/
  *(this + 0x29) = result; /*0x41574d*/
  return result; /*0x415753*/
}
