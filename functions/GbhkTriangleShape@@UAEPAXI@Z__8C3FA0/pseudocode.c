bhkShape *__thiscall bhkTriangleShape::`scalar deleting destructor'(bhkShape *this, char a2)
{
  bhkTriangleShape::~bhkTriangleShape(this); /*0x8c3fa3*/
  if ( (a2 & 1) != 0 ) /*0x8c3fad*/
    FormHeapFree((unsigned int)this); /*0x8c3fb0*/
  return this; /*0x8c3fba*/
}
