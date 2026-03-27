NiGeometryData *__thiscall NiGeometryData::NiGeometryData(
        NiGeometryData *this,
        UInt16 a2,
        NiPoint3 *a3,
        NiPoint3 *a4,
        NiColorAlpha *a5,
        void *a6,
        char a7,
        __int16 a8)
{
  UInt16 m_usVertices; // ax
  UInt16 v10; // dx

  NiObject_constr((NiObject *)this);
  this->member.m_usVertices = a2;
  this->member.m_pkVertex = a3;
  this->__vftable = (NiGeometryDataVtbl *)&NiGeometryData::`vftable';
  this->member.m_pkNormal = a4;
  this->member.m_pkColor = a5;
  this->member.m_pkTexture = a6;
  this->member.format = 0;
  this->member.m_usDirtyFlags = 0;
  this->member.m_ucKeepFlags = 0;
  this->member.m_ucCompressFlags = 0;
  this->member.m_spAdditionalGeomData = 0;
  m_usVertices = this->member.m_usVertices;
  v10 = a8 | a7 & 0x3F | this->member.format & 0xFC0;
  this->member.unk3C = 0;
  this->member.unk3D = 0;
  this->member.format = v10;
  if ( m_usVertices )
  {
    if ( this->member.m_pkVertex )
      sub_72A0F0(&this->member.m_kBound.Center.x, m_usVertices, &this->member.m_pkVertex->x);
  }
  this->member.BuffData = 0;
  this->member.serial = word_B27504++;
  this->member.m_usDirtyFlags &= 0xFFFu;
  return this;
}
