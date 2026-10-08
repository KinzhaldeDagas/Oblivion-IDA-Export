NiLight *__thiscall NiLight::NiLight(NiLight *this)
{
  NiDynamicEffect::NiDynamicEffect(this); /*0x71a493*/
  this->vtbl = (NiAVObjectVtbl *)&NiLight::`vftable'; /*0x71a49a*/
  this->m_kAmb.r = 0.0; /*0x71a4a0*/
  this->m_kAmb.g = 0.0; /*0x71a4a6*/
  this->m_kAmb.b = 0.0; /*0x71a4ae*/
  this->m_kDiff.r = 0.0; /*0x71a4b4*/
  this->m_kDiff.g = 0.0; /*0x71a4ba*/
  this->m_kDiff.b = 0.0; /*0x71a4c0*/
  this->m_kSpec.r = 0.0; /*0x71a4c6*/
  this->m_kSpec.g = 0.0; /*0x71a4cc*/
  this->m_kSpec.b = 0.0; /*0x71a4d2*/
  this->unk104 = 0; /*0x71a4da*/
  this->m_fDimmer = 1.0; /*0x71a4e4*/
  this->m_kAmb.r = 1.0; /*0x71a4ea*/
  this->m_kAmb.g = 1.0; /*0x71a4f0*/
  this->m_kAmb.b = 1.0; /*0x71a4f6*/
  this->m_kDiff.r = 1.0; /*0x71a4fc*/
  this->m_kDiff.g = 1.0; /*0x71a502*/
  this->m_kDiff.b = 1.0; /*0x71a508*/
  this->m_kSpec.r = 1.0; /*0x71a50e*/
  this->m_kSpec.g = 1.0; /*0x71a514*/
  this->m_kSpec.b = 1.0; /*0x71a51a*/
  return this; /*0x71a520*/
}
