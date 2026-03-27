NiObject *sub_75A650()
{
  NiObject *v0; // eax
  NiObject *v1; // esi

  v0 = (NiObject *)FormHeapAlloc(0x1Cu);
  v1 = v0;
  if ( !v0 )
    return 0;
  sub_752BF0(v0);
  v1->__vftable = (NiObjectVtbl *)&NiPSysColliderManager::`vftable';
  v1[3].__vftable = 0;
  return v1;
}
