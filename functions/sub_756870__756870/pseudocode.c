int __thiscall sub_756870(_DWORD *this, float a2)
{
  int result; // eax

  result = *(this + 0x11); /*0x756870*/
  *(float *)(result + 0x1C) = a2; /*0x756877*/
  return result; /*0x75687a*/
}
