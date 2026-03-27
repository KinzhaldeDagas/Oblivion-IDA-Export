NiStencilProperty *__thiscall NiStencilProperty::`scalar deleting destructor'(NiStencilProperty *this, char a2)
{
  *(_DWORD *)this = &NiStencilProperty::`vftable';
  NiDitherProperty::~NiDitherProperty(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
