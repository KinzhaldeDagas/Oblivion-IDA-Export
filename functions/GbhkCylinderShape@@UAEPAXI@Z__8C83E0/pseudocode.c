bhkShape *__thiscall bhkCylinderShape::`scalar deleting destructor'(bhkShape *this, char a2)
{
  bhkCylinderShape::~bhkCylinderShape(this); /*0x8c83e3*/
  if ( (a2 & 1) != 0 ) /*0x8c83ed*/
    FormHeapFree((unsigned int)this); /*0x8c83f0*/
  return this; /*0x8c83fa*/
}
