TESRegionDataWeather *__thiscall TESRegionDataWeather_Destructor(TESRegionDataWeather *this, char a2)
{
  TESRegionDataWeather::~TESRegionDataWeather(this); /*0x4a57e3*/
  if ( (a2 & 1) != 0 ) /*0x4a57ed*/
    FormHeapFree((unsigned int)this); /*0x4a57f0*/
  return this; /*0x4a57fa*/
}
