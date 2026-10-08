NiDitherProperty *__thiscall NiDitherProperty::`scalar deleting destructor'(NiDitherProperty *this, char a2)
{
  NiDitherProperty::~NiDitherProperty(this); /*0x741373*/
  if ( (a2 & 1) != 0 ) /*0x74137d*/
    FormHeapFree((unsigned int)this); /*0x741380*/
  return this; /*0x74138a*/
}
