NiLight *__thiscall sub_719760(NiLight *this)
{
  NiLight::NiLight(this);
  this->vtbl = (NiAVObjectVtbl *)&NiDirectionalLight::`vftable';
  *((float *)this + 0x42) = 1.0;
  *((float *)this + 0x43) = 0.0;
  *((float *)this + 0x44) = 0.0;
  return this;
}
