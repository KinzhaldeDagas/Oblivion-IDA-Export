SkyObject *__thiscall SkyObject::`scalar deleting destructor'(SkyObject *this, char a2)
{
  SkyObject::~SkyObject(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
