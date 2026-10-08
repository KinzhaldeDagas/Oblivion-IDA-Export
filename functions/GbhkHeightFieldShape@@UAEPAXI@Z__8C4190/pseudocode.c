bhkShape *__thiscall bhkHeightFieldShape::`scalar deleting destructor'(bhkShape *this, char a2)
{
  bhkHeightFieldShape::~bhkHeightFieldShape(this); /*0x8c4193*/
  if ( (a2 & 1) != 0 ) /*0x8c419d*/
    FormHeapFree((unsigned int)this); /*0x8c41a0*/
  return this; /*0x8c41aa*/
}
