void __thiscall NiTriStripsDynamicData::~NiTriStripsDynamicData(NiTriStripsDynamicData *this)
{
  unsigned int *v2; // eax
  unsigned int v3; // edi
  bool v4; // zf
  unsigned int *v5; // eax
  unsigned int v6; // edi

  *(_DWORD *)this = &NiTriStripsData::`vftable'; /*0x719fa9*/
  if ( sub_728650() ) /*0x719fb7*/
  {
    v2 = (unsigned int *)sub_728650(); /*0x719fc2*/
    v3 = (unsigned int)v2; /*0x719fc7*/
    v4 = v2[3]-- == 1; /*0x719fc9*/
    if ( v4 ) /*0x719fcd*/
    {
      sub_732A20(v2); /*0x719fd1*/
      FormHeapFree(v3); /*0x719fd7*/
    }
    v5 = (unsigned int *)sub_728650(); /*0x719fe1*/
    v6 = (unsigned int)v5; /*0x719fe6*/
    v4 = v5[3]-- == 1; /*0x719fe8*/
    if ( v4 ) /*0x719fec*/
    {
      sub_732A20(v5); /*0x719ff0*/
      FormHeapFree(v6); /*0x719ff6*/
    }
  }
  else
  {
    FormHeapFree(*((_DWORD *)this + 0x12)); /*0x71a004*/
    FormHeapFree(*((_DWORD *)this + 0x13)); /*0x71a00d*/
  }
  sub_732DF0((NiGeometryData *)this); /*0x71a01f*/
}
