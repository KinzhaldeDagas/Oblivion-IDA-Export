NiTriBasedGeomData *__thiscall sub_73B430(
        NiTriBasedGeomData *this,
        __int16 a2,
        int a3,
        int a4,
        int a5,
        int a6,
        char a7,
        __int16 a8,
        UInt16 a9,
        __int16 a10,
        int a11,
        int a12,
        __int16 a13,
        __int16 a14)
{
  sub_719CB0(this, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12);
  *((_WORD *)this + 0x29) = a14;
  this->__vftable = (NiTriBasedGeomDataVtbl *)&NiTriStripsDynamicData::`vftable';
  *((_WORD *)this + 0x28) = a13;
  return this;
}
