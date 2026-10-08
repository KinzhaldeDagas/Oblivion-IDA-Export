bhkShape *__thiscall bhkCapsuleShape::`scalar deleting destructor'(bhkShape *this, char a2)
{
  bhkCapsuleShape::~bhkCapsuleShape(this); /*0x563c63*/
  if ( (a2 & 1) != 0 ) /*0x563c6d*/
    FormHeapFree((unsigned int)this); /*0x563c70*/
  return this; /*0x563c7a*/
}
