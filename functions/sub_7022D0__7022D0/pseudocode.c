bool __thiscall sub_7022D0(NiTriBasedGeomData *this, int a2)
{
  const char *m_spAdditionalGeomData; // eax
  int v4; // ecx

  if ( !sub_6D7E00(this, a2) ) /*0x7022e0*/
    return 0; /*0x7022e0*/
  m_spAdditionalGeomData = (const char *)this->members.super.m_spAdditionalGeomData; /*0x7022e6*/
  if ( m_spAdditionalGeomData ) /*0x7022eb*/
  {
    if ( !*(_DWORD *)(a2 + 0x34) || strcmp(m_spAdditionalGeomData, *(const char **)(a2 + 0x34)) ) /*0x702314*/
      return 0; /*0x702337*/
  }
  else if ( *(_DWORD *)(a2 + 0x34) ) /*0x7022fb*/
  {
    return 0; /*0x7022ff*/
  }
  v4 = *(_DWORD *)&this->members.super.m_bVertexStreamLocked; /*0x702339*/
  if ( v4 ) /*0x70233e*/
  {
    if ( !*(_DWORD *)(a2 + 0x3C) /*0x70235d*/
      || !(*(unsigned __int8 (__thiscall **)(int, _DWORD))(*(_DWORD *)v4 + 0x2C))(v4, *(_DWORD *)(a2 + 0x3C)) )
    {
      return 0; /*0x702361*/
    }
  }
  else if ( *(_DWORD *)(a2 + 0x3C) ) /*0x70234a*/
  {
    return 0; /*0x70234e*/
  }
  return LODWORD(this->members.super.m_kBound.Radius) == *(_DWORD *)(a2 + 0x18) /*0x70238b*/
      && this->members.super.m_pkNormal == *(NiPoint3 **)(a2 + 0x20)
      && this->members.super.m_pkVertex == *(NiPoint3 **)(a2 + 0x1C)
      && LOBYTE(this->members.m_usTriangles) == *(_BYTE *)(a2 + 0x40)
      && HIBYTE(this->members.m_usTriangles) == *(_BYTE *)(a2 + 0x41);
}
