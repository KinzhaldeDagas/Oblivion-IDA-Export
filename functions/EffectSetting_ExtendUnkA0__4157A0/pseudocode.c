int __thiscall EffectSetting_ExtendUnkA0(int *this)
{
  int v1; // eax
  int result; // eax

  v1 = *(this + 0x28); /*0x4157a0*/
  if ( v1 >= 0 ) /*0x4157a8*/
    result = v1 + 1; /*0x4157b4*/
  else
    result = v1 - 1; /*0x4157aa*/
  *(this + 0x28) = result; /*0x4157ad*/
  return result; /*0x4157b3*/
}
