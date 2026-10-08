// Corrected audit: if locked, checks additional-data virtual predicate +0x4C; calls sub_7261D0(additional,0) only when saved lock-mode byte +0x3D is ZERO, then clears locked byte +0x3C. Earlier description as committing a write lock was unsupported/opposite to this branch. Exact additional-data operation remains unresolved.
void __thiscall NiGeometryData_UnlockVertexStream(NiGeometryData *self)
{
  NiAdditionalGeometryData *m_spAdditionalGeomData; // edi

  if ( self->member.m_bVertexStreamLocked ) /*0x728b23*/
  {
    m_spAdditionalGeomData = self->member.m_spAdditionalGeomData; /*0x728b2a*/
    if ( m_spAdditionalGeomData ) /*0x728b2f*/
    {
      if ( (*(unsigned __int8 (__thiscall **)(NiAdditionalGeometryData *))(*(_DWORD *)m_spAdditionalGeomData + 0x4C))(self->member.m_spAdditionalGeomData) ) /*0x728b38*/
      {
        if ( !self->member.unk3D ) /*0x728b3e*/
          sub_7261D0((int)m_spAdditionalGeomData, 0); /*0x728b48*/
      }
    }
    self->member.m_bVertexStreamLocked = 0; /*0x728b4d*/
  }
}
