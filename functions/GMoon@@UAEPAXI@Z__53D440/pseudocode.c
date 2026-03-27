SkyObject *__thiscall Moon::`scalar deleting destructor'(SkyObject *this, char a2)
{
  Moon::~Moon(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
