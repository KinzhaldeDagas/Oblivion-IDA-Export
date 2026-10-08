int __thiscall sub_756AC0(_DWORD *this, float *a2)
{
  int result; // eax

  result = *(this + 0x11); /*0x756ac0*/
  *a2 = *(float *)(result + 0x24); /*0x756aca*/
  return result; /*0x756acc*/
}
