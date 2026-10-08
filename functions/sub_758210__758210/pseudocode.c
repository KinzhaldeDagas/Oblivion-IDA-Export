int __thiscall sub_758210(_DWORD *this, float a2)
{
  int result; // eax

  result = *(this + 0x11); /*0x758210*/
  *(float *)(result + 0x20) = a2; /*0x758217*/
  return result; /*0x75821a*/
}
