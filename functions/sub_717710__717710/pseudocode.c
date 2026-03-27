NiAVObject *__stdcall sub_717710(int a1)
{
  NiAVObject *v1; // eax
  NiAVObject *v2; // esi

  v1 = (NiAVObject *)FormHeapAlloc(0xC0u);
  v2 = v1;
  if ( v1 )
  {
    sub_7226C0(v1);
    v2->vtbl = (NiAVObjectVtbl *)&NiTriShape::`vftable';
  }
  else
  {
    v2 = 0;
  }
  sub_722700(v2, a1);
  return v2;
}
