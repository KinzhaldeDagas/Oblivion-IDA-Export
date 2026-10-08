int *__thiscall sub_90D960(int *this, int a2)
{
  *this = a2; /*0x90d969*/
  *(this + 1) = 0; /*0x90d96e*/
  *(this + 2) = 0; /*0x90d971*/
  *(this + 3) = 0x80000000; /*0x90d979*/
  *(this + 4) = 0; /*0x90d983*/
  *(this + 5) = 0; /*0x90d986*/
  *(this + 6) = 0x80000000; /*0x90d989*/
  sub_942D70((int)(this + 8), a2, (_DWORD *)(a2 + 4)); /*0x90d98c*/
  *(this + 0xC) = 0; /*0x90d991*/
  *(this + 0xD) = 0; /*0x90d994*/
  *(this + 0xE) = 0x80000000; /*0x90d997*/
  *(this + 0xF) = 0; /*0x90d99a*/
  *(this + 0x10) = 0; /*0x90d99d*/
  *(this + 0x11) = 0x80000000; /*0x90d9a0*/
  *((_BYTE *)this + 0x48) = BYTE1(dword_B2FDE4) != *(_BYTE *)(a2 + 5); /*0x90d9b2*/
  return this; /*0x90d9ae*/
}
