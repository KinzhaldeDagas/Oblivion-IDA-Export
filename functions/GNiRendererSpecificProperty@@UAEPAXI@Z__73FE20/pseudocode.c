NiRendererSpecificProperty *__thiscall NiRendererSpecificProperty::`scalar deleting destructor'(
        NiRendererSpecificProperty *this,
        char a2)
{
  *(_DWORD *)this = &NiRendererSpecificProperty::`vftable'; /*0x73fe23*/
  NiDitherProperty::~NiDitherProperty(this); /*0x73fe29*/
  if ( (a2 & 1) != 0 ) /*0x73fe33*/
    FormHeapFree((unsigned int)this); /*0x73fe36*/
  return this; /*0x73fe40*/
}
