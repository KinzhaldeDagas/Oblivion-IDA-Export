void __thiscall ForceWeather(Sky *this, TESWeather *a2, char a3)
{
  double unk0D0; // st7
  Clouds *clouds; // ecx
  Precipitation *precipitation; // ecx

  this->firstWeather = a2;
  if ( a3 )
  {
    this->weatherOverride = a2;
    this->weather018 = 0;
  }
  else
  {
    this->weather018 = a2;
    this->weatherOverride = 0;
  }
  this->Flags0FC &= ~8u;
  this->unk0F4 = 0.0;
  this->secondWeather = 0;
  this->weatherPercent = 1.0;
  unk0D0 = this->unk0D0;
  this->unk0D4 = this->unk0D0;
  TESDataHandler_g_PlayerRef->region = 0;
  this->Flags0FC = this->Flags0FC & 0xFFFFFFFC | 2;
  sub_540850(this, unk0D0);
  clouds = this->clouds;
  if ( clouds )
    sub_53BBC0(clouds);
  precipitation = this->precipitation;
  if ( precipitation )
    sub_53D6C0((int)precipitation);
}
