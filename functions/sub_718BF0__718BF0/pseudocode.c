bool __thiscall sub_718BF0(NiTriBasedGeomData *this, int a2)
{
  return sub_6D7E00(this, a2) /*0x718c1c*/
      && *(_WORD *)(a2 + 0x18) == LOWORD(this->members.super.m_kBound.Radius)
      && *(NiPoint3 **)(a2 + 0x1C) == this->members.super.m_pkVertex
      && *(NiPoint3 **)(a2 + 0x20) == this->members.super.m_pkNormal;
}
