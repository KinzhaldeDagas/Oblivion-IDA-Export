void __thiscall sub_4102C0(float *this)
{
  if ( *(_DWORD *)this ) /*0x4102c4*/
    BinkClose(*(_DWORD *)this); /*0x4102cd*/
  if ( *((_DWORD *)this + 2) ) /*0x4102d3*/
    sub_410110(*((_DWORD **)this + 2)); /*0x4102db*/
  *this = 0.0; /*0x4102e5*/
  *(this + 5) = 1.0; /*0x4102e7*/
  *(this + 1) = 0.0; /*0x4102ea*/
  *(this + 2) = 0.0; /*0x4102ef*/
  *(this + 6) = 0.0; /*0x4102f2*/
  *(this + 3) = 0.0; /*0x4102f5*/
  *(this + 4) = 0.0; /*0x4102f8*/
  *(this + 7) = 0.0; /*0x4102fb*/
  *(this + 8) = 0.0; /*0x4102fe*/
  *((_BYTE *)this + 0x24) = 0; /*0x410301*/
}
