int __thiscall EffectSetting_ReduceUnkA0(_DWORD *this)
{
  int result; // eax

  result = *(this + 0x28); /*0x4157c0*/
  if ( result >= 0 ) /*0x4157c8*/
  {
    if ( result > 0 ) /*0x4157d4*/
      *(this + 0x28) = --result; /*0x4157d9*/
  }
  else
  {
    *(this + 0x28) = ++result; /*0x4157cd*/
  }
  return result; /*0x4157d3*/
}
