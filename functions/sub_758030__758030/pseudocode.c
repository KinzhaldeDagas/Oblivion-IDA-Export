int __thiscall sub_758030(_DWORD *this, float a2)
{
  int result; // eax

  result = *(this + 0x11); /*0x758030*/
  *(float *)(result + 0x40) = a2; /*0x758037*/
  return result; /*0x75803a*/
}
