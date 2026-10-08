BSFogProperty *__thiscall BSFogProperty::`scalar deleting destructor'(BSFogProperty *this, char a2)
{
  *(_DWORD *)this = &BSFogProperty::`vftable'; /*0x7c8303*/
  NiDitherProperty::~NiDitherProperty(this); /*0x7c8309*/
  if ( (a2 & 1) != 0 ) /*0x7c8313*/
    FormHeapFree((unsigned int)this); /*0x7c8316*/
  return this; /*0x7c8320*/
}
