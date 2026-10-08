int __thiscall sub_757E00(_DWORD *this, float a2)
{
  int result; // eax

  result = *(this + 0x11); /*0x757e00*/
  *(float *)(result + 0x28) = a2; /*0x757e07*/
  return result; /*0x757e0a*/
}
