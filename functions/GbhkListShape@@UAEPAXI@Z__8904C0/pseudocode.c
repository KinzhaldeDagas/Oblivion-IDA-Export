bhkShape *__thiscall bhkListShape::`scalar deleting destructor'(bhkShape *this, char a2)
{
  bhkListShape::~bhkListShape(this); /*0x8904c3*/
  if ( (a2 & 1) != 0 ) /*0x8904cd*/
    FormHeapFree((unsigned int)this); /*0x8904d0*/
  return this; /*0x8904da*/
}
