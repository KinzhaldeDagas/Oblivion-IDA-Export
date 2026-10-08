// Copy authored FaceGen base positions into a writable strided vertex stream and mark only the position channel dirty.
void __cdecl NiGeometry_RestoreFaceGenBaseVertices(NiGeometry *geometry, NiStridedVertexStream *vertices)
{
  NiObject *FaceGenBaseVertexData; // eax
  unsigned int stride; // ebp
  _DWORD *data; // esi
  unsigned int v5; // edi
  NiObject *i; // eax
  NiGeometryData *geomData; // ebx

  FaceGenBaseVertexData = NiObjectNET_FindFaceGenBaseVertexData((NiObjectNET *)geometry); /*0x5508f9*/
  if ( FaceGenBaseVertexData ) /*0x550903*/
  {
    if ( vertices->data ) /*0x550909*/
    {
      stride = vertices->stride; /*0x550912*/
      data = vertices->data; /*0x550916*/
      v5 = 0; /*0x550924*/
      for ( i = FaceGenBaseVertexData->__vftable[1].Unk_02(FaceGenBaseVertexData); /*0x55092e*/
            v5 < geometry->member.geomData->member.m_usVertices;
            i = (NiObject *)((char *)i + 0xC) )
      {
        *data = i->__vftable; /*0x550936*/
        data[1] = i->members.m_uiRefCount; /*0x55093b*/
        data[2] = i[1].__vftable; /*0x550941*/
        ++v5; /*0x55094e*/
        data = (_DWORD *)((char *)data + stride); /*0x550951*/
      }
      geomData = geometry->member.geomData; /*0x55095a*/
      if ( geomData->member.m_pkVertex ) /*0x550960*/
        geomData->member.m_usDirtyFlags |= 1u;  // Mark only vertex positions dirty (bit 0) after restoring base vertices; normals remain unchanged. /*0x550969*/
    }
  }
}
