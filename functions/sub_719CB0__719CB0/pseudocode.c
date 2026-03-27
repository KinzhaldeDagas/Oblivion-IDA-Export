NiTriBasedGeomData *__thiscall sub_719CB0(
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
        int a12)
{
  NiTriBasedGeomData::NiTriBasedGeomData(this, a2, a3, a4, a5, a6, a7, a8, a9);
  *((_DWORD *)this + 0x12) = a11;
  this->__vftable = (NiTriBasedGeomDataVtbl *)&NiTriStripsData::`vftable';
  *((_WORD *)this + 0x22) = a10;
  *((_DWORD *)this + 0x13) = a12;
  return this;
}
