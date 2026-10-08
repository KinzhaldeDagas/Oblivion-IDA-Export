NiAVObject *__thiscall sub_4A1780(
        NiAVObject *this,
        UInt16 vertexCount,
        NiPoint3 *vertices,
        NiPoint3 *normals,
        NiColorAlpha *colors,
        void *textureCoordinates,
        char hasVertexColors,
        __int16 dataFlags,
        UInt16 triangleCount,
        UInt16 *triangleIndices,
        int a11,
        int a12,
        int a13,
        int a14)
{
  NiTriShape_ctorWithGeometryData( /*0x4a17b2*/
    this,
    vertexCount,
    vertices,
    normals,
    colors,
    textureCoordinates,
    hasVertexColors,
    dataFlags,
    triangleCount,
    triangleIndices);
  *((_DWORD *)this + 0x30) = a11; /*0x4a17c3*/
  *((_DWORD *)this + 0x33) = a14; /*0x4a17cd*/
  this->vtbl = (NiAVObjectVtbl *)&BSScissorTriShape::`vftable'; /*0x4a17d3*/
  *((_DWORD *)this + 0x31) = a12; /*0x4a17d9*/
  *((_DWORD *)this + 0x32) = a13; /*0x4a17df*/
  return this; /*0x4a17e7*/
}
