void __thiscall NiAmbientLight::~NiAmbientLight(NiDynamicEffect *this)
{
  this->vtbl = (NiAVObjectVtbl *)&NiLight::`vftable'; /*0x71a568*/
  sub_701480((int)this); /*0x71a577*/
  NiDynamicEffect::~NiDynamicEffect(this); /*0x71a589*/
}
