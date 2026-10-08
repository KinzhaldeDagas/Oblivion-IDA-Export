// Verified: copy/merge constructor copies TESRegionData base fields and EntryData list from source Weather data; this is not the RDWT parser.
TESRegionDataWeather *__thiscall TESRegionDataWeather_CopyFrom(
        TESRegionDataWeather *this,
        TESRegionDataWeather *source)
{
  sub_4A34E0(this, source); /*0x4a569f*/
  this->base.vtable = (TESRegionDataVtable *)&TESRegionDataWeather::`vftable'; /*0x4a56b1*/
  sub_4EED50((unsigned int *)&this->weatherList); /*0x4a56b7*/
  OblivionTESWeatherList_CopyEntries(&this->weatherList, &source->weatherList, 0); /*0x4a56c9*/
  return this; /*0x4a56d0*/
}
