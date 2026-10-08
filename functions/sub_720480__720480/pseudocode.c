bool __thiscall sub_720480(NiTriBasedGeomData *this, int a2)
{
  return sub_7022D0(this, a2) /*0x7204b2*/
      && LODWORD(this->members.super.m_kBound.Radius) == *(_DWORD *)(a2 + 0x18)
      && this->members.super.m_pkNormal == *(NiPoint3 **)(a2 + 0x20)
      && this->members.super.m_pkVertex == *(NiPoint3 **)(a2 + 0x1C)
      && LOBYTE(this->members.m_usTriangles) == *(_BYTE *)(a2 + 0x40);
}
