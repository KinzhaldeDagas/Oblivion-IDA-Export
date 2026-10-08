NiTriBasedGeomData *__thiscall sub_719CB0(
        NiTriBasedGeomData *this,
        UInt16 a2,
        NiPoint3 *a3,
        NiPoint3 *a4,
        NiColorAlpha *a5,
        void *a6,
        char a7,
        __int16 a8,
        UInt16 a9,
        __int16 a10,
        int a11,
        int a12)
{
  NiTriBasedGeomData::NiTriBasedGeomData(this, a2, a3, a4, a5, a6, a7, a8, a9); /*0x719cdd*/
  *((_DWORD *)this + 0x12) = a11; /*0x719cef*/
  this->__vftable = (NiTriBasedGeomDataVtbl *)&NiTriStripsData::`vftable'; /*0x719cf2*/
  *((_WORD *)this + 0x22) = a10; /*0x719cf8*/
  *((_DWORD *)this + 0x13) = a12; /*0x719cfc*/
  return this; /*0x719d01*/
}
