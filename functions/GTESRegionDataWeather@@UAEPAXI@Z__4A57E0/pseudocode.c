TESRegionDataWeather *__thiscall TESRegionDataWeather::`scalar deleting destructor'(
        TESRegionDataWeather *this,
        char a2)
{
  TESRegionDataWeather::~TESRegionDataWeather(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
