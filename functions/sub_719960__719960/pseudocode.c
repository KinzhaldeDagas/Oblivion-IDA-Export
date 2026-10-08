NiAVObject *__thiscall sub_719960(
        NiAVObject *this,
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
  NiTriBasedGeomData *v13; // eax
  NiTriBasedGeomData *v14; // eax

  v13 = (NiTriBasedGeomData *)FormHeapAlloc(0x50u); /*0x719986*/
  if ( v13 ) /*0x71999c*/
    v14 = sub_719CB0(v13, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12); /*0x7199d7*/
  else
    v14 = 0; /*0x7199de*/
  NiTriBasedGeom::NiTriBasedGeom((NiGeometry *)this, (NiScreenElementsData *)v14); /*0x7199eb*/
  this->vtbl = (NiAVObjectVtbl *)&NiTriStrips::`vftable'; /*0x7199f0*/
  return this; /*0x7199f8*/
}
