void __thiscall NiTriStripsDynamicData::~NiTriStripsDynamicData(NiTriStripsDynamicData *this)
{
  unsigned int *v2; // eax
  unsigned int v3; // edi
  bool v4; // zf
  unsigned int *v5; // eax
  unsigned int v6; // edi

  *(_DWORD *)this = &NiTriStripsData::`vftable';
  if ( sub_728650() )
  {
    v2 = (unsigned int *)sub_728650();
    v3 = (unsigned int)v2;
    v4 = v2[3]-- == 1;
    if ( v4 )
    {
      sub_732A20(v2);
      FormHeapFree(v3);
    }
    v5 = (unsigned int *)sub_728650();
    v6 = (unsigned int)v5;
    v4 = v5[3]-- == 1;
    if ( v4 )
    {
      sub_732A20(v5);
      FormHeapFree(v6);
    }
  }
  else
  {
    FormHeapFree(*((_DWORD *)this + 0x12));
    FormHeapFree(*((_DWORD *)this + 0x13));
  }
  sub_732DF0((NiGeometryData *)this);
}
