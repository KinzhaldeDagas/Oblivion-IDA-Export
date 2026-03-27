NiAVObject *__stdcall sub_709D60(int a1)
{
  NiAVObject *v1; // eax
  NiAVObject *v2; // esi

  v1 = (NiAVObject *)FormHeapAlloc(0xC0u);
  v2 = v1;
  if ( v1 )
  {
    sub_717590(v1);
    v2->vtbl = (NiAVObjectVtbl *)&NiScreenElements::`vftable';
  }
  else
  {
    v2 = 0;
  }
  sub_7175B0(v2, a1);
  return v2;
}
