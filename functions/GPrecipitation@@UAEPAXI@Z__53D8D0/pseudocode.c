Precipitation *__thiscall Precipitation::`scalar deleting destructor'(Precipitation *this, char a2)
{
  Precipitation::~Precipitation(this); /*0x53d8d3*/
  if ( (a2 & 1) != 0 ) /*0x53d8dd*/
    FormHeapFree((unsigned int)this); /*0x53d8e0*/
  return this; /*0x53d8ea*/
}
