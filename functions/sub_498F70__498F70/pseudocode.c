NiAVObject *__stdcall sub_498F70(NiScreenElementsData *a2)
{
  NiGeometry *v1; // eax

  v1 = (NiGeometry *)FormHeapAlloc(0xC0u);
  if ( v1 )
    return NiTriShape_NiTriShape(v1, a2);
  else
    return 0;
}
