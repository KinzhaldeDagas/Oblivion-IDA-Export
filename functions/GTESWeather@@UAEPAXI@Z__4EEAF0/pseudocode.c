TESWeather *__thiscall TESWeather::`scalar deleting destructor'(TESWeather *this, char a2)
{
  TESWeather::~TESWeather(this); /*0x4eeaf3*/
  if ( (a2 & 1) != 0 ) /*0x4eeafd*/
    FormHeapFree((unsigned int)this); /*0x4eeb00*/
  return this; /*0x4eeb0a*/
}
