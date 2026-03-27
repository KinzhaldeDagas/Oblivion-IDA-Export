_DWORD *__thiscall sub_722A50(NiGeometry *this, NiGeometryData *a2)
{
  void *m_spCollision; // ecx
  _DWORD *result; // eax

  if ( a2 )
  {
    m_spCollision = this->member.super.m_spCollision;
    if ( m_spCollision )
    {
      (*(void (__thiscall **)(void *))(*(_DWORD *)m_spCollision + 0x54))(m_spCollision);
      (*(void (__thiscall **)(void *))(*(_DWORD *)this->member.super.m_spCollision + 0x50))(this->member.super.m_spCollision);
    }
    return NiSmartPointer_Set__((Ni2DBuffer **)&this->member.geomData, (Ni2DBuffer *)a2);
  }
  return result;
}
