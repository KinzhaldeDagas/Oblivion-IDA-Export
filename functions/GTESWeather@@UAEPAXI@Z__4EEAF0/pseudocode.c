TESWeather *__thiscall TESWeather::`scalar deleting destructor'(TESWeather *this, char a2)
{
  TESWeather::~TESWeather(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
