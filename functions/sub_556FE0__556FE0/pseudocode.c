char __thiscall sub_556FE0(_DWORD *this, unsigned int a2)
{
  int v4; // eax

  *(this + 1) = 0; /*0x556feb*/
  *(this + 2) = 0; /*0x556fee*/
  *(this + 3) = 0; /*0x556ff1*/
  if ( !a2 ) /*0x556ff4*/
    return 0; /*0x556ff6*/
  v4 = FormHeapAlloc(0xC * a2); /*0x55700f*/
  *(this + 3) = v4 + 0xC * a2; /*0x557019*/
  *(this + 1) = v4; /*0x55701c*/
  *(this + 2) = v4; /*0x55701f*/
  return 1; /*0x556ff8*/
}
