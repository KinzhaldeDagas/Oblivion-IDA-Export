char __thiscall sub_4A4FE0(_DWORD *this, unsigned int a2)
{
  if ( a2 > 2 || a2 == *(this + 2) ) /*0x4a4fec*/
    return 0; /*0x4a4ff6*/
  *(this + 2) = a2; /*0x4a4fee*/
  return 1; /*0x4a4ff3*/
}
