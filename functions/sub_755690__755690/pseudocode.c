NiObject *sub_755690()
{
  NiObject *v0; // eax
  NiObject *v1; // esi

  v0 = (NiObject *)FormHeapAlloc(0x18u);
  v1 = v0;
  if ( !v0 )
    return 0;
  sub_752BF0(v0);
  v1->__vftable = (NiObjectVtbl *)&NiPSysPositionModifier::`vftable';
  return v1;
}
