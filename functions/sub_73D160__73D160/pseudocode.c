NiLight *__thiscall sub_73D160(NiLight *this)
{
  NiLight::NiLight(this);
  *((float *)this + 0x42) = 0.0;
  this->vtbl = (NiAVObjectVtbl *)&NiSpotLight::`vftable';
  *((float *)this + 0x43) = 1.0;
  *((float *)this + 0x44) = 0.0;
  *((float *)this + 0x45) = 1.0;
  *((float *)this + 0x49) = 1.0;
  *((float *)this + 0x46) = 0.0;
  *((float *)this + 0x47) = 0.0;
  *((float *)this + 0x48) = 0.0;
  return this;
}
