int __thiscall sub_757900(_DWORD *this, float a2)
{
  int result; // eax

  result = *(this + 0x11); /*0x757900*/
  *(float *)(result + 0x28) = a2; /*0x757907*/
  *(float *)(result + 0x2C) = a2 * a2; /*0x75790c*/
  return result; /*0x75790f*/
}
