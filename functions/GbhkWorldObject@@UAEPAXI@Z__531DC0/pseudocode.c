bhkWorldObject *__thiscall bhkWorldObject::`scalar deleting destructor'(bhkWorldObject *this, char a2)
{
  bhkWorldObject::~bhkWorldObject(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
