double __thiscall sub_540380(Sky *this)
{
  double result; // st7
  UInt32 Flags0FC; // eax
  Clouds *clouds; // ecx
  Precipitation *precipitation; // ecx

  result = 0.0; /*0x540380*/
  this->unk0F4 = 0.0; /*0x540385*/
  Flags0FC = this->Flags0FC; /*0x54038b*/
  clouds = this->clouds; /*0x540391*/
  this->weatherOverride = 0; /*0x54039c*/
  this->secondWeather = 0; /*0x5403a3*/
  this->firstWeather = 0; /*0x5403aa*/
  this->Flags0FC = Flags0FC & 0xFFFFFFF6 | 1; /*0x5403b1*/
  if ( clouds ) /*0x5403b7*/
    sub_53BBC0(clouds); /*0x5403b9*/
  precipitation = this->precipitation; /*0x5403be*/
  if ( precipitation ) /*0x5403c4*/
    sub_53D6C0((int)precipitation); /*0x5403c6*/
  return result; /*0x5403c3*/
}
