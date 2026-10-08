bhkShape *__thiscall bhkSphereShape::`scalar deleting destructor'(bhkShape *this, char a2)
{
  bhkSphereShape::~bhkSphereShape(this); /*0x532163*/
  if ( (a2 & 1) != 0 ) /*0x53216d*/
    FormHeapFree((unsigned int)this); /*0x532170*/
  return this; /*0x53217a*/
}
