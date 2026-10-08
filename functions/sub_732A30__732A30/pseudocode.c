// Verified NiLinesData constructor: initializes vertex/color buffers through NiGeometryData, assigns NiLinesData vtable, and either stores supplied line-flag bytes or allocates default alternating endpoint flags.
NiGeometryData *__thiscall NiLinesData_ctor(
        NiGeometryData *this,
        UInt16 vertexCount,
        NiPoint3 *vertices,
        NiColorAlpha *colors,
        void *arg5,
        char arg6,
        __int16 arg7,
        int lineFlags)
{
  int v9; // eax
  int v10; // ecx

  NiGeometryData::NiGeometryData(this, vertexCount, vertices, 0, colors, arg5, arg6, arg7); /*0x732a7c*/
  this->__vftable = (NiGeometryDataVtbl *)&NiLinesData::`vftable'; /*0x732a8f*/
  if ( lineFlags ) /*0x732a95*/
  {
    *((_DWORD *)this + 0x10) = lineFlags; /*0x732a97*/
  }
  else
  {
    *((_DWORD *)this + 0x10) = FormHeapAlloc(vertexCount); /*0x732aa5*/
    v9 = 0; /*0x732aab*/
    if ( vertexCount ) /*0x732ab0*/
    {
      v10 = 0; /*0x732ab2*/
      do /*0x732aca*/
      {
        *(_BYTE *)(v10 + *((_DWORD *)this + 0x10)) = (v9++ & 1) == 0; /*0x732abe*/
        ++v10; /*0x732ac4*/
      }
      while ( (unsigned __int16)v9 < vertexCount ); /*0x732aca*/
    }
  }
  return this; /*0x732ace*/
}
