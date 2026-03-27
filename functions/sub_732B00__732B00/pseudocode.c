NiObject *sub_732B00()
{
  NiObject *v0; // eax
  NiObject *v1; // esi

  v0 = (NiObject *)FormHeapAlloc(0x44u);
  v1 = v0;
  if ( !v0 )
    return 0;
  sub_728770(v0);
  v1->__vftable = (NiObjectVtbl *)&NiLinesData::`vftable';
  v1[8].__vftable = 0;
  return v1;
}
