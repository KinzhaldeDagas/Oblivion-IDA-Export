NiRendererSpecificProperty *__thiscall NiRendererSpecificProperty::`scalar deleting destructor'(
        NiRendererSpecificProperty *this,
        char a2)
{
  *(_DWORD *)this = &NiRendererSpecificProperty::`vftable';
  NiDitherProperty::~NiDitherProperty(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
