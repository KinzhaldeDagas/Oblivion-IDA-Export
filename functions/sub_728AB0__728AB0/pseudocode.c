// Returns false immediately for an already-locked stream. Otherwise records bool argument at +0x3D and sets locked byte +0x3C. Additional-data branch: true argument invokes sub_7261D0 at acquisition; false invokes sub_726190 and later sub_7261D0 on unlock. Do not infer operation semantics from old writeAccess label alone.
// local variable allocation has failed, the output may be wrong!
bool __thiscall NiGeometryData_LockVertexStream(NiGeometryData *self, bool writeAccess)
{
  UInt8 v4; // bl
  NiAdditionalGeometryData *m_spAdditionalGeomData; // esi

  if ( self->member.m_bVertexStreamLocked ) /*0x728ab3*/
    return 0; /*0x728abc*/
  v4 = writeAccess; /*0x728ac0*/
  m_spAdditionalGeomData = self->member.m_spAdditionalGeomData; /*0x728ac5*/
  if ( m_spAdditionalGeomData /*0x728ad3*/
    && (*(unsigned __int8 (__thiscall **)(NiAdditionalGeometryData *))(*(_DWORD *)m_spAdditionalGeomData + 0x4C))(self->member.m_spAdditionalGeomData) )
  {
    if ( v4 ) /*0x728add*/
    {
      sub_7261D0((int)m_spAdditionalGeomData, 0); /*0x728ae1*/
      self->member.unk3D = v4; /*0x728ae7*/
      self->member.m_bVertexStreamLocked = 1; /*0x728aed*/
      return 1; /*0x728af1*/
    }
    *(_DWORD *)&writeAccess = 0; /*0x728afb*/
    sub_726190((int)m_spAdditionalGeomData, 0, &writeAccess); /*0x728b03*/
  }
  self->member.unk3D = v4; /*0x728b09*/
  self->member.m_bVertexStreamLocked = 1; /*0x728b0f*/
  return 1; /*0x728abb*/
}
