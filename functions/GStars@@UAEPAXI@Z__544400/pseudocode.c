SkyObject *__thiscall Stars::`scalar deleting destructor'(SkyObject *this, char a2)
{
  Stars::~Stars(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
