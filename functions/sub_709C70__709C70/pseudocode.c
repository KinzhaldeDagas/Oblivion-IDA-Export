NiAVObject *sub_709C70()
{
  NiAVObject *v0; // esi
  NiAVObject *result; // eax

  v0 = (NiAVObject *)FormHeapAlloc(0xC0u);
  result = 0;
  if ( v0 )
  {
    sub_717590(v0);
    v0->vtbl = (NiAVObjectVtbl *)&NiScreenElements::`vftable';
    return v0;
  }
  return result;
}
