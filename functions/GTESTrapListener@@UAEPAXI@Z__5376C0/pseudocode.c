TESTrapListener *__thiscall TESTrapListener::`scalar deleting destructor'(TESTrapListener *this, char a2)
{
  TESTrapListener::~TESTrapListener(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
