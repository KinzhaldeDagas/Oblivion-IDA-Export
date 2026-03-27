NiAVObject *sub_7175C0()
{
  NiAVObject *v0; // esi
  NiAVObject *result; // eax

  v0 = (NiAVObject *)FormHeapAlloc(0xC0u);
  result = 0;
  if ( v0 )
  {
    sub_7226C0(v0);
    v0->vtbl = (NiAVObjectVtbl *)&NiTriShape::`vftable';
    return v0;
  }
  return result;
}
