int __thiscall sub_757F30(_DWORD *this, float a2)
{
  int result; // eax

  result = *(this + 0x11); /*0x757f30*/
  *(float *)(result + 0x48) = a2; /*0x757f37*/
  return result; /*0x757f3a*/
}
