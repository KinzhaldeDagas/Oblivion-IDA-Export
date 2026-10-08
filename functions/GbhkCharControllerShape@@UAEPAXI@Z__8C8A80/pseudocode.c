bhkShape *__thiscall bhkCharControllerShape::`scalar deleting destructor'(bhkShape *this, char a2)
{
  bhkCharControllerShape::~bhkCharControllerShape(this); /*0x8c8a83*/
  if ( (a2 & 1) != 0 ) /*0x8c8a8d*/
    FormHeapFree((unsigned int)this); /*0x8c8a90*/
  return this; /*0x8c8a9a*/
}
