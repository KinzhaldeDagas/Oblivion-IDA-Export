NiTriShapeData *__thiscall sub_71FB40(
        NiTriShapeData *this,
        __int16 a2,
        int a3,
        int a4,
        int a5,
        int a6,
        char a7,
        __int16 a8,
        UInt16 a9,
        UInt16 *a10)
{
  UInt32 v11; // edx

  NiTriBasedGeomData::NiTriBasedGeomData((NiTriBasedGeomData *)this, a2, a3, a4, a5, a6, a7, a8, a9);
  v11 = 3 * this->member.super.m_usTriangles;
  this->member.m_pusTriList = a10;
  this->member.unk4C = 0;
  this->member.unk50 = 0;
  this->member.unk54 = 0;
  this->__vftable = (NiTriBasedGeomDataVtbl *)&NiTriShapeData::`vftable';
  this->member.m_uiTriListLength = v11;
  return this;
}
