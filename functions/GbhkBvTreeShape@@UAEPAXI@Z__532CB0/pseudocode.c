bhkShape *__thiscall bhkBvTreeShape::`scalar deleting destructor'(bhkShape *this, char a2)
{
  bhkBvTreeShape::~bhkBvTreeShape(this); /*0x532cb3*/
  if ( (a2 & 1) != 0 ) /*0x532cbd*/
    FormHeapFree((unsigned int)this); /*0x532cc0*/
  return this; /*0x532cca*/
}
