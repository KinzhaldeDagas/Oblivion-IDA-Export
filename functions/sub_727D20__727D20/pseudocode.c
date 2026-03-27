bool __thiscall sub_727D20(NiTriBasedGeomData *this, int a2)
{
  return sub_726430(this, a2)
      && *(_DWORD *)&this->members.super.format == *(_DWORD *)(a2 + 0x2C)
      && *(_DWORD *)&this->members.super.m_ucKeepFlags == *(_DWORD *)(a2 + 0x30);
}
