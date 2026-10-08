NiStencilProperty *__thiscall NiStencilProperty::`scalar deleting destructor'(NiStencilProperty *this, char a2)
{
  *(_DWORD *)this = &NiStencilProperty::`vftable'; /*0x4825d3*/
  NiDitherProperty::~NiDitherProperty(this); /*0x4825d9*/
  if ( (a2 & 1) != 0 ) /*0x4825e3*/
    FormHeapFree((unsigned int)this); /*0x4825e6*/
  return this; /*0x4825f0*/
}
