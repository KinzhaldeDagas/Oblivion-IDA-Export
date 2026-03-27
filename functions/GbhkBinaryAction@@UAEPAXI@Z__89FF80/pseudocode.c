bhkSerializable *__thiscall bhkBinaryAction::`scalar deleting destructor'(bhkSerializable *this, char a2)
{
  bhkBinaryAction::~bhkBinaryAction(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
