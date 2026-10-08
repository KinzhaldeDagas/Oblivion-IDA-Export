bhkShape *__thiscall bhkTransformShape::`scalar deleting destructor'(bhkShape *this, char a2)
{
  bhkTransformShape::~bhkTransformShape(this); /*0x563b93*/
  if ( (a2 & 1) != 0 ) /*0x563b9d*/
    FormHeapFree((unsigned int)this); /*0x563ba0*/
  return this; /*0x563baa*/
}
