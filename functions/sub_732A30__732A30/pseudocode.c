NiGeometryData *__thiscall sub_732A30(
        NiGeometryData *this,
        unsigned __int16 a2,
        NiPoint3 *a3,
        NiColorAlpha *a4,
        void *a5,
        char a6,
        __int16 a7,
        int a8)
{
  int v9; // eax
  int v10; // ecx

  NiGeometryData::NiGeometryData(this, a2, a3, 0, a4, a5, a6, a7);
  this->__vftable = (NiGeometryDataVtbl *)&NiLinesData::`vftable';
  if ( a8 )
  {
    *((_DWORD *)this + 0x10) = a8;
  }
  else
  {
    *((_DWORD *)this + 0x10) = FormHeapAlloc(a2);
    v9 = 0;
    if ( a2 )
    {
      v10 = 0;
      do
      {
        *(_BYTE *)(v10 + *((_DWORD *)this + 0x10)) = (v9++ & 1) == 0;
        ++v10;
      }
      while ( (unsigned __int16)v9 < a2 );
    }
  }
  return this;
}
