double __thiscall sub_54EA70(_DWORD *this, unsigned int a2)
{
  if ( a2 >= *(this + 4) ) /*0x54ea77*/
    return (float)0.0; /*0x54ea90*/
  else
    return *(float *)(*(this + 3) + 4 * a2); /*0x54ea83*/
}
