bhkShape *__thiscall bhkShape::`scalar deleting destructor'(bhkShape *this, char a2)
{
  bhkShape::~bhkShape(this); /*0x531d63*/
  if ( (a2 & 1) != 0 ) /*0x531d6d*/
    FormHeapFree((unsigned int)this); /*0x531d70*/
  return this; /*0x531d7a*/
}
