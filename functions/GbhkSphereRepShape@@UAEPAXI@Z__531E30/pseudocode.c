bhkShape *__thiscall bhkSphereRepShape::`scalar deleting destructor'(bhkShape *this, char a2)
{
  bhkSphereRepShape::~bhkSphereRepShape(this); /*0x531e33*/
  if ( (a2 & 1) != 0 ) /*0x531e3d*/
    FormHeapFree((unsigned int)this); /*0x531e40*/
  return this; /*0x531e4a*/
}
