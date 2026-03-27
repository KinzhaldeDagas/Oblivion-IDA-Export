bhkSerializable *__thiscall bhkSerializable::`scalar deleting destructor'(bhkSerializable *this, char a2)
{
  bhkSerializable::~bhkSerializable(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
