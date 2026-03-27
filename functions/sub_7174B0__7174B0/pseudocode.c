NiAVObject *__thiscall sub_7174B0(
        NiAVObject *this,
        __int16 a2,
        int a3,
        int a4,
        int a5,
        int a6,
        char a7,
        __int16 a8,
        __int16 a9,
        UInt16 *a10)
{
  NiTriShapeData *v11; // eax
  NiTriShapeData *v12; // eax

  v11 = (NiTriShapeData *)FormHeapAlloc(0x58u);
  if ( v11 )
    v12 = sub_71FB40(v11, a2, a3, a4, a5, a6, a7, a8, a9, a10);
  else
    v12 = 0;
  NiTriBasedGeom::NiTriBasedGeom((NiGeometry *)this, (NiScreenElementsData *)v12);
  this->vtbl = (NiAVObjectVtbl *)&NiTriShape::`vftable';
  return this;
}
