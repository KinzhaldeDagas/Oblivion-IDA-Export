NiGeometryGroup *sub_77DE00()
{
  NiGeometryGroup *result; // eax
  NiGeometryGroup *v1; // eax
  NiGeometryGroup *v2; // esi

  result = dword_B428A0;
  if ( !dword_B428A0 )
  {
    v1 = (NiGeometryGroup *)FormHeapAlloc(0xCu);
    v2 = v1;
    if ( v1 )
    {
      sub_7828D0(v1);
      v2->vtbl = (NiGeometryGroupVtbl *)&NiUnsharedGeometryGroup::`vftable';
      dword_B428A0 = v2;
      return v2;
    }
    else
    {
      dword_B428A0 = 0;
      return 0;
    }
  }
  return result;
}
