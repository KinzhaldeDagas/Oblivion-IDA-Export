BSFogProperty *__thiscall BSFogProperty::`scalar deleting destructor'(BSFogProperty *this, char a2)
{
  *(_DWORD *)this = &BSFogProperty::`vftable';
  NiDitherProperty::~NiDitherProperty(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
