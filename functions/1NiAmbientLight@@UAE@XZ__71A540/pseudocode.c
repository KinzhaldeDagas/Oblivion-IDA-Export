void __thiscall NiAmbientLight::~NiAmbientLight(NiDynamicEffect *this)
{
  this->vtbl = (NiAVObjectVtbl *)&NiLight::`vftable';
  sub_701480((int)this);
  NiDynamicEffect::~NiDynamicEffect(this);
}
