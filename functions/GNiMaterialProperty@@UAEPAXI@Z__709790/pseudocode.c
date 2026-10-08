NiMaterialProperty *__thiscall NiMaterialProperty::`scalar deleting destructor'(NiMaterialProperty *this, char a2)
{
  NiMaterialProperty::~NiMaterialProperty(this); /*0x709793*/
  if ( (a2 & 1) != 0 ) /*0x70979d*/
    FormHeapFree((unsigned int)this); /*0x7097a0*/
  return this; /*0x7097aa*/
}
