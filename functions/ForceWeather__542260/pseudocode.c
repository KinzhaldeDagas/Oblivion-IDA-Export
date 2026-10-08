void __thiscall ForceWeather(Sky *this, TESWeather *a2, char a3)
{
  Clouds *clouds; // ecx
  Precipitation *precipitation; // ecx

  this->firstWeather = a2;                      // ForceWeather writes Sky+0x10 firstWeather immediately. This confirms firstWeather is the current weather pointer used by GetIsCurrentWeather and should be the FormID source for weather-based encounter chances. /*0x54226e*/
  if ( a3 ) /*0x542271*/
  {
    this->weatherOverride = a2;                 // ForceWeather override path writes Sky+0x1C weatherOverride only when forced/persistent override is requested; fast travel clears this field before relocation. /*0x542273*/
    this->weather018 = 0; /*0x542276*/
  }
  else
  {
    this->weather018 = a2; /*0x54227b*/
    this->weatherOverride = 0; /*0x54227e*/
  }
  this->Flags0FC &= ~8u; /*0x542283*/
  this->unk0F4 = 0.0; /*0x54228a*/
  this->secondWeather = 0;                      // ForceWeather clears Sky+0x14 secondWeather and sets weatherPercent to 1.0, making firstWeather the sole active weather. /*0x542290*/
  this->weatherPercent = 1.0;                   // Sky+0xD8 weatherPercent is set to 1.0 for immediate forced weather; GetCurrentWeatherPercent reads this field. /*0x542295*/
  this->unk0D4 = this->unk0D0; /*0x5422a1*/
  reference->region = 0; /*0x5422ac*/
  this->Flags0FC = this->Flags0FC & 0xFFFFFFFC | 2; /*0x5422be*/
  OB_Sky_UpdateHDRWeatherAndTreeDimmerConstants_010201A0(this); /*0x5422c6*/
  clouds = this->clouds; /*0x5422cb*/
  if ( clouds ) /*0x5422d0*/
    sub_53BBC0(clouds); /*0x5422d2*/
  precipitation = this->precipitation; /*0x5422d7*/
  if ( precipitation ) /*0x5422de*/
    sub_53D6C0((int)precipitation); /*0x5422e0*/
}
