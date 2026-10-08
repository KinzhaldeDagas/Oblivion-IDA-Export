bhkShape *__thiscall bhkMultiSphereShape::`scalar deleting destructor'(bhkShape *this, char a2)
{
  bhkMultiSphereShape::~bhkMultiSphereShape(this); /*0x563ad3*/
  if ( (a2 & 1) != 0 ) /*0x563add*/
    FormHeapFree((unsigned int)this); /*0x563ae0*/
  return this; /*0x563aea*/
}
