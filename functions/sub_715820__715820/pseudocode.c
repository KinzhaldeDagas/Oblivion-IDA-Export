char __thiscall sub_715820(NiTriBasedGeomData *this, int a2)
{
  if ( sub_700670(this, a2)
    && this->members.super.m_usVertices == *(_WORD *)(a2 + 8)
    && *(float *)(a2 + 0xC) == this->members.super.m_kBound.Center.x
    && *(float *)(a2 + 0x10) == this->members.super.m_kBound.Center.y
    && *(float *)(a2 + 0x14) == this->members.super.m_kBound.Center.z
    && *(float *)(a2 + 0x18) == this->members.super.m_kBound.Radius )
  {
    if ( *(_DWORD *)&this->members.super.m_ucKeepFlags )
    {
      if ( *(_DWORD *)(a2 + 0x30) )
        return 1;
    }
    else if ( !*(_DWORD *)(a2 + 0x30) )
    {
      return 1;
    }
  }
  return 0;
}
