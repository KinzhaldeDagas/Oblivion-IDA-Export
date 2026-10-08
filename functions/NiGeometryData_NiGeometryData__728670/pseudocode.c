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

  NiObject_constr((NiObject *)this); /*0x728699*/
  this->member.m_usVertices = a2; /*0x7286ad*/
  this->member.m_pkVertex = a3; /*0x7286b5*/
  this->__vftable = (NiGeometryDataVtbl *)&NiGeometryData::`vftable'; /*0x7286bc*/
  this->member.m_pkNormal = a4; /*0x7286c2*/
  this->member.m_pkColor = a5; /*0x7286c5*/
  this->member.m_pkTexture = a6; /*0x7286c8*/
  this->member.format = 0; /*0x7286cb*/
  this->member.m_usDirtyFlags = 0; /*0x7286cf*/
  this->member.m_ucKeepFlags = 0; /*0x7286d3*/
  this->member.m_ucCompressFlags = 0; /*0x7286d6*/
  this->member.m_spAdditionalGeomData = 0; /*0x7286dd*/
  m_usVertices = this->member.m_usVertices; /*0x7286f4*/
  v10 = a8 | a7 & 0x3F | this->member.format & 0xFC0; /*0x7286f8*/
  this->member.m_bVertexStreamLocked = 0; /*0x728705*/
  this->member.unk3D = 0; /*0x728708*/
  this->member.format = v10; /*0x72870b*/
  if ( m_usVertices ) /*0x72870f*/
  {
    if ( this->member.m_pkVertex ) /*0x728711*/
      NiSphere_ComputeFromVertices(&this->member.m_kBound.Center.x, m_usVertices, &this->member.m_pkVertex->x);// Compute the initial NiGeometryData local bounding sphere from the constructor's contiguous vertex array. /*0x728720*/
  }
  this->member.BuffData = 0; /*0x728725*/
  this->member.serial = word_B27504++; /*0x72872f*/
  this->member.m_usDirtyFlags &= 0xFFFu; /*0x72873b*/
  return this; /*0x728743*/
}
