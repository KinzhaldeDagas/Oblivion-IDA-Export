Atmosphere *__thiscall Atmosphere::`scalar deleting destructor'(Atmosphere *this, char a2)
{
  Atmosphere::~Atmosphere(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
