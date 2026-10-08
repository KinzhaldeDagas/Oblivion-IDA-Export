int __thiscall sub_756AD0(_DWORD *this, float a2)
{
  int result; // eax

  result = *(this + 0x11); /*0x756ad0*/
  *(float *)(result + 0x24) = a2; /*0x756ad7*/
  return result; /*0x756ada*/
}
