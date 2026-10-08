HairShaderProperty *__thiscall HairShaderProperty::`scalar deleting destructor'(HairShaderProperty *this, char a2)
{
  HairShaderProperty::~HairShaderProperty(this); /*0x882a43*/
  if ( (a2 & 1) != 0 ) /*0x882a4d*/
    FormHeapFree((unsigned int)this); /*0x882a50*/
  return this; /*0x882a5a*/
}
