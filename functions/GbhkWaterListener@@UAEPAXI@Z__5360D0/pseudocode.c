bhkWaterListener *__thiscall bhkWaterListener::`scalar deleting destructor'(bhkWaterListener *this, char a2)
{
  bhkWaterListener::~bhkWaterListener(this); /*0x5360d3*/
  if ( (a2 & 1) != 0 ) /*0x5360dd*/
    FormHeapFree((unsigned int)this); /*0x5360e0*/
  return this; /*0x5360ea*/
}
