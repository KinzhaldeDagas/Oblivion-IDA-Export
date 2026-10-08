// Constructs a 0x1C NiAlphaProperty over NiObjectNET: installs NiAlphaProperty vtable, initializes flags to 0x00EC and threshold byte to 0.
NiAlphaProperty *__thiscall NiAlphaProperty_ctor(NiAlphaProperty *this)
{
  NiObjectNET::NiObjectNET(&this->base); /*0x47f923*/
  this->base.vtbl = (NiObjectVtbl **)&NiAlphaProperty::`vftable'; /*0x47f928*/
  this->flags = 0xEC; /*0x47f92e*/
  this->threshold = 0; /*0x47f934*/
  return this; /*0x47f93a*/
}
