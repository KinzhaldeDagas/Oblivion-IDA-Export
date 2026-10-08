NiLight *__thiscall sub_719760(NiLight *this)
{
  NiLight::NiLight(this); /*0x719766*/
  this->vtbl = (NiAVObjectVtbl *)&NiDirectionalLight::`vftable'; /*0x719771*/
  *((float *)this + 0x42) = 1.0; /*0x719781*/
  *((float *)this + 0x43) = 0.0; /*0x719795*/
  *((float *)this + 0x44) = 0.0; /*0x71979b*/
  return this; /*0x7197a1*/
}
