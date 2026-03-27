bhkRefObject *__thiscall bhkRefObject::`scalar deleting destructor'(bhkRefObject *this, char a2)
{
  bhkRefObject::~bhkRefObject(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
