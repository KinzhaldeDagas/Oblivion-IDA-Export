NiLight *__thiscall NiLight::NiLight(NiLight *this)
{
  NiDynamicEffect::NiDynamicEffect(this);
  this->vtbl = (NiAVObjectVtbl *)&NiLight::`vftable';
  this->m_kAmb.r = 0.0;
  this->m_kAmb.g = 0.0;
  this->m_kAmb.b = 0.0;
  this->m_kDiff.r = 0.0;
  this->m_kDiff.g = 0.0;
  this->m_kDiff.b = 0.0;
  this->m_kSpec.r = 0.0;
  this->m_kSpec.g = 0.0;
  this->m_kSpec.b = 0.0;
  this->unk104 = 0;
  this->m_fDimmer = 1.0;
  this->m_kAmb.r = 1.0;
  this->m_kAmb.g = 1.0;
  this->m_kAmb.b = 1.0;
  this->m_kDiff.r = 1.0;
  this->m_kDiff.g = 1.0;
  this->m_kDiff.b = 1.0;
  this->m_kSpec.r = 1.0;
  this->m_kSpec.g = 1.0;
  this->m_kSpec.b = 1.0;
  return this;
}
