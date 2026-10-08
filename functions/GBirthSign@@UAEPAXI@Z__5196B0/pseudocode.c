BirthSign *__thiscall BirthSign::`scalar deleting destructor'(BirthSign *this, char a2)
{
  BirthSign::~BirthSign(this); /*0x5196b3*/
  if ( (a2 & 1) != 0 ) /*0x5196bd*/
    FormHeapFree((unsigned int)this); /*0x5196c0*/
  return this; /*0x5196ca*/
}
