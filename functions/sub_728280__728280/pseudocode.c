// Ensure NiGeometryData normal storage exists and optionally clear it. Allocates one NiPoint3 per vertex, or three per vertex when format & 0xF000 indicates NBT data. Clearing an NBT buffer also zeros binormal/tangent planes.
void __thiscall NiGeometryData_AllocateAndClearNormals(NiGeometryData *self, bool clearStorage)
{
  int v3; // edi

  v3 = 1; /*0x72828a*/
  if ( (self->member.format & 0xF000) != 0 )    // NiGeometryData format bits 0xF000 indicate NBT storage. Allocate/clear one vector plane normally or three planes (normal, binormal, tangent) for NBT data. /*0x72828f*/
    v3 = 3; /*0x728291*/
  if ( !self->member.m_pkNormal )
    self->member.m_pkNormal = (NiPoint3 *)FormHeapAlloc(
                                            (0xC * (unsigned __int64)(v3 * (unsigned int)self->member.m_usVertices)) >> 0x20 != 0
                                          ? 0xFFFFFFFF
                                          : 0xC * v3 * self->member.m_usVertices);
  if ( clearStorage ) /*0x7282c4*/
    _memset((int)self->member.m_pkNormal, 0, 0xC * v3 * self->member.m_usVertices);// Clear every allocated vector plane. UpdateNormals callers rebuild only the first normal plane, so invoking them on NBT geometry would erase tangent-space data. /*0x7282db*/
}
