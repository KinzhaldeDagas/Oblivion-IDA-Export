// Verified: reports data presence when either EntryData's head or tail at WeatherData +8 is non-null.
bool __thiscall TESRegionDataWeather_HasData(TESRegionDataWeather *this)
{
  return this->weatherList.overflowNodes || this->weatherList.firstEntry; /*0x4a594a*/
}
