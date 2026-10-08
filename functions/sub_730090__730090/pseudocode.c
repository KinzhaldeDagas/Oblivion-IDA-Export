char __thiscall sub_730090(_DWORD *this, unsigned int a2, float a3)
{
  if ( a2 >= *(this + 3) ) /*0x730097*/
    return 0; /*0x7300a8*/
  *(float *)(*(this + 4) + 4 * a2) = a3; /*0x7300a0*/
  return 1; /*0x7300a5*/
}
