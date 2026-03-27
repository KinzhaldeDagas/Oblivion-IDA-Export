void __thiscall sub_540380(Sky *this)
{
  UInt32 Flags0FC; // eax
  Clouds *clouds; // ecx
  Precipitation *precipitation; // ecx

  this->unk0F4 = 0.0;
  Flags0FC = this->Flags0FC;
  clouds = this->clouds;
  this->weatherOverride = 0;
  this->secondWeather = 0;
  this->firstWeather = 0;
  this->Flags0FC = Flags0FC & 0xFFFFFFF6 | 1;
  if ( clouds )
    sub_53BBC0(clouds);
  precipitation = this->precipitation;
  if ( precipitation )
    sub_53D6C0((int)precipitation);
}
