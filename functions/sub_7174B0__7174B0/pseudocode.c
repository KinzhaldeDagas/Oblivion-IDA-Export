// Verified NiTriShape constructor wrapper: allocate/init NiTriShapeData from caller-supplied vertices, colors and triangle-index buffer; initialize NiTriBasedGeom and install NiTriShape vtable.
NiAVObject *__thiscall NiTriShape_ctorWithGeometryData(
        NiAVObject *this,
        UInt16 vertexCount,
        NiPoint3 *vertices,
        NiPoint3 *normals,
        NiColorAlpha *colors,
        void *textureCoordinates,
        char hasVertexColors,
        __int16 dataFlags,
        UInt16 triangleCount,
        UInt16 *triangleIndices)
{
  NiTriShapeData *v11; // eax
  NiTriShapeData *v12; // eax

  v11 = (NiTriShapeData *)FormHeapAlloc(0x58u); /*0x7174d6*/
  if ( v11 ) /*0x7174ec*/
    v12 = NiTriShapeData_ConstructWithData( /*0x71751d*/
            v11,
            vertexCount,
            vertices,
            normals,
            colors,
            textureCoordinates,
            hasVertexColors,
            dataFlags,
            triangleCount,
            triangleIndices);
  else
    v12 = 0; /*0x717524*/
  NiTriBasedGeom::NiTriBasedGeom((NiGeometry *)this, (NiScreenElementsData *)v12); /*0x717531*/
  this->vtbl = (NiAVObjectVtbl *)&NiTriShape::`vftable'; /*0x717536*/
  return this; /*0x71753e*/
}
