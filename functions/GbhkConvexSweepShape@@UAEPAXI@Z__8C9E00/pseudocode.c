bhkShape *__thiscall bhkConvexSweepShape::`scalar deleting destructor'(bhkShape *this, char a2)
{
  bhkConvexSweepShape::~bhkConvexSweepShape(this); /*0x8c9e03*/
  if ( (a2 & 1) != 0 ) /*0x8c9e0d*/
    FormHeapFree((unsigned int)this); /*0x8c9e10*/
  return this; /*0x8c9e1a*/
}
