NiTriBasedGeomData *__thiscall NiTriBasedGeomData::NiTriBasedGeomData(
        NiTriBasedGeomData *this,
        UInt16 a2,
        NiPoint3 *a3,
        NiPoint3 *a4,
        NiColorAlpha *a5,
        void *a6,
        char a7,
        __int16 a8,
        UInt16 a9)
{
  NiGeometryData::NiGeometryData((NiGeometryData *)this, a2, a3, a4, a5, a6, a7, a8); /*0x732d98*/
  this->__vftable = (NiTriBasedGeomDataVtbl *)&NiTriBasedGeomData::`vftable'; /*0x732da2*/
  this->members.m_usTriangles = a9; /*0x732da8*/
  return this; /*0x732dae*/
}
