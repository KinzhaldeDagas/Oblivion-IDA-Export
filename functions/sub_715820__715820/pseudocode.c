// NiTimeController equality compares NiObject state, flags +0x08, frequency/phase/low/high key times +0x0C..+0x18, and only target nullness at +0x30. It excludes target identity, next-controller chain, and runtime time/update caches.
char __thiscall NiTimeController_IsEqual(NiTriBasedGeomData *this, int a2)
{
  if ( sub_700670(this, a2) /*0x715876*/
    && this->members.super.m_usVertices == *(_WORD *)(a2 + 8)
    && *(float *)(a2 + 0xC) == this->members.super.m_kBound.Center.x
    && *(float *)(a2 + 0x10) == this->members.super.m_kBound.Center.y
    && *(float *)(a2 + 0x14) == this->members.super.m_kBound.Center.z
    && *(float *)(a2 + 0x18) == this->members.super.m_kBound.Radius )
  {
    if ( *(_DWORD *)&this->members.super.m_ucKeepFlags ) /*0x715878*/
    {
      if ( *(_DWORD *)(a2 + 0x30) ) /*0x71587f*/
        return 1; /*0x715883*/
    }
    else if ( !*(_DWORD *)(a2 + 0x30) ) /*0x715889*/
    {
      return 1; /*0x715893*/
    }
  }
  return 0; /*0x71588f*/
}
