TESTrapListener *__thiscall TESTrapListener::`scalar deleting destructor'(TESTrapListener *this, char a2)
{
  TESTrapListener::~TESTrapListener(this); /*0x5376c3*/
  if ( (a2 & 1) != 0 ) /*0x5376cd*/
    FormHeapFree((unsigned int)this); /*0x5376d0*/
  return this; /*0x5376da*/
}
