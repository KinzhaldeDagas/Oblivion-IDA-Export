bhkShape *__thiscall bhkMoppBvTreeShape::`scalar deleting destructor'(bhkShape *this, char a2)
{
  bhkMoppBvTreeShape::~bhkMoppBvTreeShape(this); /*0x8c37f3*/
  if ( (a2 & 1) != 0 ) /*0x8c37fd*/
    FormHeapFree((unsigned int)this); /*0x8c3800*/
  return this; /*0x8c380a*/
}
