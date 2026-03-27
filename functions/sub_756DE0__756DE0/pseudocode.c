bool __thiscall sub_756DE0(NiTriBasedGeomData *this, int a2)
{
  return sub_752CD0(this, a2)
      && *(float *)(a2 + 0x18) == this->members.super.m_kBound.Radius
      && LOWORD(this->members.super.m_pkVertex) == *(_WORD *)(a2 + 0x1C)
      && *(float *)(a2 + 0x20) == *(float *)&this->members.super.m_pkNormal
      && LOWORD(this->members.super.m_pkColor) == *(_WORD *)(a2 + 0x24);
}
