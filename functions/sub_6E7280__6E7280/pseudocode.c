bool __thiscall sub_6E7280(NiTriBasedGeomData *this, int a2)
{
  return sub_700670(this, a2)
      && *(_DWORD *)(a2 + 0x10) == LODWORD(this->members.super.m_kBound.Center.y)
      && *(_DWORD *)(a2 + 0x14) == LODWORD(this->members.super.m_kBound.Center.z);
}
