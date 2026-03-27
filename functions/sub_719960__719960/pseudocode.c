NiAVObject *__thiscall sub_719960(
        NiAVObject *this,
        __int16 a2,
        int a3,
        int a4,
        int a5,
        int a6,
        char a7,
        __int16 a8,
        __int16 a9,
        __int16 a10,
        int a11,
        int a12)
{
  _WORD *v13; // eax
  NiScreenElementsData *v14; // eax

  v13 = (_WORD *)FormHeapAlloc(0x50u);
  if ( v13 )
    v14 = (NiScreenElementsData *)sub_719CB0(v13, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12);
  else
    v14 = 0;
  NiTriBasedGeom::NiTriBasedGeom((NiGeometry *)this, v14);
  this->vtbl = (NiAVObjectVtbl *)&NiTriStrips::`vftable';
  return this;
}
