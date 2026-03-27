bhkWaterListener *__thiscall bhkWaterListener::`scalar deleting destructor'(bhkWaterListener *this, char a2)
{
  bhkWaterListener::~bhkWaterListener(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
