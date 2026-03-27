NiAVObject *__thiscall sub_7177E0(
        NiAVObject *this,
        unsigned __int16 a2,
        int a3,
        int a4,
        int a5,
        char a6,
        __int16 a7,
        int a8)
{
  _DWORD *v9; // eax
  NiGeometryData *v10; // eax

  v9 = (_DWORD *)FormHeapAlloc(0x44u);
  if ( v9 )
    v10 = (NiGeometryData *)sub_732A30(v9, a2, a3, a4, a5, a6, a7, a8);
  else
    v10 = 0;
  NiGeometry::NiGeometry((NiGeometry *)this, v10);
  this->vtbl = (NiAVObjectVtbl *)&NiLines::`vftable';
  return this;
}
