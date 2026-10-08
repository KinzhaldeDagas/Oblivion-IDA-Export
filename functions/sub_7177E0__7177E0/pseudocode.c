// Verified NiLines constructor wrapper: create NiGeometryData via NiLinesData_ctor, initialize NiGeometry, then install NiLines vtable.
NiAVObject *__thiscall NiLines_ctorWithGeometryData(
        NiAVObject *this,
        UInt16 vertexCount,
        NiPoint3 *vertices,
        NiColorAlpha *colors,
        void *arg5,
        char arg6,
        __int16 arg7,
        int lineFlags)
{
  NiGeometryData *v9; // eax
  NiGeometryData *v10; // eax

  v9 = (NiGeometryData *)FormHeapAlloc(0x44u); /*0x717806*/
  if ( v9 ) /*0x71781c*/
    v10 = NiLinesData_ctor(v9, vertexCount, vertices, colors, arg5, arg6, arg7, lineFlags); /*0x717843*/
  else
    v10 = 0; /*0x71784a*/
  NiGeometry::NiGeometry((NiGeometry *)this, v10); /*0x717857*/
  this->vtbl = (NiAVObjectVtbl *)&NiLines::`vftable'; /*0x71785c*/
  return this; /*0x717864*/
}
