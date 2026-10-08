bhkShape *__thiscall bhkConvexTransformShape::`scalar deleting destructor'(bhkShape *this, char a2)
{
  bhkConvexTransformShape::~bhkConvexTransformShape(this); /*0x8c98c3*/
  if ( (a2 & 1) != 0 ) /*0x8c98cd*/
    FormHeapFree((unsigned int)this); /*0x8c98d0*/
  return this; /*0x8c98da*/
}
