NiTexturingProperty *__thiscall NiTexturingProperty::`scalar deleting destructor'(NiTexturingProperty *this, char a2)
{
  NiTexturingProperty::~NiTexturingProperty(this); /*0x704513*/
  if ( (a2 & 1) != 0 ) /*0x70451d*/
    FormHeapFree((unsigned int)this); /*0x704520*/
  return this; /*0x70452a*/
}
