NiLight *__thiscall sub_4B0BF0(NiLight *this)
{
  NiLight::NiLight(this);
  *((float *)this + 0x42) = 0.0;
  this->vtbl = (NiAVObjectVtbl *)&NiPointLight::`vftable';
  *((float *)this + 0x43) = 1.0;
  *((float *)this + 0x44) = 0.0;
  return this;
}
