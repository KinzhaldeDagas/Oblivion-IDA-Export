Precipitation *__thiscall Precipitation::`scalar deleting destructor'(Precipitation *this, char a2)
{
  Precipitation::~Precipitation(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
