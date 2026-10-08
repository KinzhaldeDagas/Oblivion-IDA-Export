int __thiscall sub_8BEE00(_DWORD *this, float a2)
{
  int result; // eax

  result = *(this + 1); /*0x8bee00*/
  if ( result ) /*0x8bee05*/
    *(float *)(result + 0x10) = a2; /*0x8bee0b*/
  return result; /*0x8bee0e*/
}
