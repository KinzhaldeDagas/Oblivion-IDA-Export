NiDynamicEffect *__thiscall NiAmbientLight::`scalar deleting destructor'(NiDynamicEffect *this, char a2)
{
  NiAmbientLight::~NiAmbientLight(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
