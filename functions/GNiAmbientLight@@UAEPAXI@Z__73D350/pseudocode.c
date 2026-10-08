NiDynamicEffect *__thiscall NiAmbientLight::`scalar deleting destructor'(NiDynamicEffect *this, char a2)
{
  NiAmbientLight::~NiAmbientLight(this); /*0x73d353*/
  if ( (a2 & 1) != 0 ) /*0x73d35d*/
    FormHeapFree((unsigned int)this); /*0x73d360*/
  return this; /*0x73d36a*/
}
