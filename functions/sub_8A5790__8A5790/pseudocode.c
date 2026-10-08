float *__thiscall sub_8A5790(float *this)
{
  *(this + 3) = 0.0; /*0x8a57bb*/
  *(this + 4) = 0.0; /*0x8a57be*/
  *(this + 5) = -0.0; /*0x8a57c1*/
  *this = 0.0; /*0x8a57ca*/
  *(this + 1) = 0.0; /*0x8a57cc*/
  *((_BYTE *)this + 8) = 1; /*0x8a57cf*/
  *((_BYTE *)this + 0x18) = 1; /*0x8a57d2*/
  *((_WORD *)this + 0xD) = 0xFFFF; /*0x8a57d5*/
  sub_8DF420((_OWORD *)this + 2); /*0x8a57e2*/
  *(this + 0x31) = flt_A5A04C; /*0x8a57ed*/
  *((_BYTE *)this + 0xD3) = 0; /*0x8a57f3*/
  *(this + 0x32) = flt_A97490; /*0x8a5801*/
  return this; /*0x8a5807*/
}
