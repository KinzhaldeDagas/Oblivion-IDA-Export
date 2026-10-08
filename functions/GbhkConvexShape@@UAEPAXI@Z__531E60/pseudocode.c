bhkShape *__thiscall bhkConvexShape::`scalar deleting destructor'(bhkShape *this, char a2)
{
  bhkConvexShape::~bhkConvexShape(this); /*0x531e63*/
  if ( (a2 & 1) != 0 ) /*0x531e6d*/
    FormHeapFree((unsigned int)this); /*0x531e70*/
  return this; /*0x531e7a*/
}
