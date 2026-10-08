NiLight *__thiscall sub_4B0BF0(NiLight *this)
{
  NiLight::NiLight(this); /*0x4b0bf3*/
  *((float *)this + 0x42) = 0.0; /*0x4b0bfa*/
  this->vtbl = (NiAVObjectVtbl *)&NiPointLight::`vftable'; /*0x4b0c00*/
  *((float *)this + 0x43) = 1.0; /*0x4b0c0a*/
  *((float *)this + 0x44) = 0.0; /*0x4b0c10*/
  return this; /*0x4b0c16*/
}
