NiTriBasedGeomData *__thiscall sub_73B430(
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
        int a12,
        __int16 a13,
        __int16 a14)
{
  sub_719CB0(this, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12); /*0x73b46c*/
  *((_WORD *)this + 0x29) = a14; /*0x73b47b*/
  this->__vftable = (NiTriBasedGeomDataVtbl *)&NiTriStripsDynamicData::`vftable'; /*0x73b47f*/
  *((_WORD *)this + 0x28) = a13; /*0x73b485*/
  return this; /*0x73b48b*/
}
