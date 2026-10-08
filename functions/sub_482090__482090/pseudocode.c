char __thiscall sub_482090(float *this, int a2, int a3)
{
  if ( !sub_482050(this, a2, a3) ) /*0x4820a2*/
    return 0; /*0x4820e6*/
  *(this + 5) = (float)(a2 << 0xC); /*0x4820c0*/
  *(this + 6) = (float)(a3 << 0xC); /*0x4820c7*/
  *(this + 7) = 0.0; /*0x4820cc*/
  sub_4CCCC0(this + 5); /*0x4820cf*/
  *((_BYTE *)this + 0x20) = 0; /*0x4820d8*/
  return 1; /*0x4820d7*/
}
