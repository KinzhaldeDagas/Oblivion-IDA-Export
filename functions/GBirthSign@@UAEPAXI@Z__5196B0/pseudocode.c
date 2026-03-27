BirthSign *__thiscall BirthSign::`scalar deleting destructor'(BirthSign *this, char a2)
{
  BirthSign::~BirthSign(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
