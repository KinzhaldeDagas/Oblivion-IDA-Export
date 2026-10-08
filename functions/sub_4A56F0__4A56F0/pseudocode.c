// Verified: writes region-data RDAT header and serializes weatherList as RDWT; Climate instead serializes the same EntryData abstraction as WLS(T).
void __thiscall TESRegionDataWeather_Save(TESRegionDataWeather *this)
{
  TESRegionData_SaveHeader(&this->base); /*0x4a56f3*/
  OblivionTESWeatherList_SaveChunk((signed int)&this->weatherList, (int)this, 0x54574452); /*0x4a5700*/
}
