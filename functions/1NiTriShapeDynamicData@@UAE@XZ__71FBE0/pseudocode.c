void __thiscall NiTriShapeDynamicData::~NiTriShapeDynamicData(NiTriShapeDynamicData *this)
{
  unsigned int v2; // eax
  unsigned int *v3; // esi
  unsigned int *v4; // ecx

  *(_DWORD *)this = &NiTriShapeData::`vftable';
  v2 = *((_DWORD *)this + 0x12);
  if ( v2 )
    FormHeapFree(v2);
  v3 = *((unsigned int **)this + 0x15);
  if ( v3 )
  {
    FormHeapFree(*v3);
    v4 = (unsigned int *)v3[4];
    if ( v4 )
      sub_71FB00(v4, 1);
    FormHeapFree((unsigned int)v3);
  }
  FormHeapFree(*((_DWORD *)this + 0x13));
  sub_732DF0((NiGeometryData *)this);
}
