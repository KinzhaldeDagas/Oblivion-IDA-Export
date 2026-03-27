NiTriShapeData *__thiscall sub_72AB00(
        NiTriShapeData *this,
        UInt16 a2,
        int a3,
        int a4,
        int a5,
        int a6,
        char a7,
        __int16 a8,
        UInt16 a9,
        UInt16 *a10,
        __int16 a11,
        UInt16 a12)
{
  sub_71FB40(this, a11, a3, a4, a5, a6, a7, a8, a12, a10);
  this->member.super.m_usTriangles = a9;
  *((_WORD *)this + 0x2D) = a12;
  *((_WORD *)this + 0x2C) = a11;
  this->__vftable = (NiTriBasedGeomDataVtbl *)&NiTriShapeDynamicData::`vftable';
  this->member.super.super.m_usVertices = a2;
  this->member.m_uiTriListLength = 3 * a9;
  return this;
}
