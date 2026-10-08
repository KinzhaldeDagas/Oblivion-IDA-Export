// Return the locked vertex pointer and stride. Additional geometry may provide an alternate writable stream that does not alias m_pkVertex; otherwise the function returns m_pkVertex with 12-byte stride.
void __thiscall NiGeometryData_GetLockedVertexStream(NiGeometryData *self, NiStridedVertexStream *outVertices)
{
  NiAdditionalGeometryData *m_spAdditionalGeomData; // esi
  NiPoint3 *m_pkVertex; // ecx
  unsigned int v5; // edx
  void *v6; // [esp+8h] [ebp-18h] BYREF
  unsigned int v7; // [esp+Ch] [ebp-14h] BYREF
  int v8; // [esp+10h] [ebp-10h] BYREF
  int v9; // [esp+14h] [ebp-Ch] BYREF
  int v10; // [esp+18h] [ebp-8h] BYREF
  int v11; // [esp+1Ch] [ebp-4h] BYREF

  if ( self->member.m_bVertexStreamLocked ) /*0x728b69*/
  {
    m_spAdditionalGeomData = self->member.m_spAdditionalGeomData; /*0x728b73*/
    v7 = 0; /*0x728b78*/
    v9 = 0; /*0x728b7c*/
    v6 = 0; /*0x728b80*/
    if ( !m_spAdditionalGeomData ) /*0x728b84*/
      goto LABEL_6; /*0x728b84*/
    if ( (*(unsigned __int8 (__thiscall **)(NiAdditionalGeometryData *))(*(_DWORD *)m_spAdditionalGeomData + 0x4C))(m_spAdditionalGeomData) ) /*0x728b8d*/
    {
      v8 = 0; /*0x728bb4*/
      sub_726320((int)m_spAdditionalGeomData, 0, &v6, &v11, &v9, &v10, &v8, &v7); /*0x728bb8*/
    }
    if ( v6 )                                   // When additional geometry supplies a locked stream, return its buffer pointer and stride. This writable morph stream is not guaranteed to alias NiGeometryData::m_pkVertex. /*0x728bc3*/
    {
      v5 = v7; /*0x728be6*/
      outVertices->data = v6; /*0x728bea*/
      outVertices->stride = v5; /*0x728bec*/
      outVertices->unknown08 = 0; /*0x728bef*/
    }
    else
    {
LABEL_6:
      m_pkVertex = self->member.m_pkVertex; /*0x728bc5*/
      outVertices->unknown08 = 0; /*0x728bd3*/
      outVertices->data = m_pkVertex;           // Fallback only: without an additional-geometry stream, expose m_pkVertex with the native 12-byte NiPoint3 stride. /*0x728bd6*/
      outVertices->stride = 0xC; /*0x728bd8*/
    }
  }
}
