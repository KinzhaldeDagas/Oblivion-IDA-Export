NiObject *sub_75A650()
{
  NiObject *v0; // eax
  NiObject *v1; // esi

  v0 = (NiObject *)FormHeapAlloc(0x1Cu); /*0x75a653*/
  v1 = v0; /*0x75a658*/
  if ( !v0 ) /*0x75a65f*/
    return 0; /*0x75a679*/
  sub_752BF0(v0); /*0x75a663*/
  v1->__vftable = (NiObjectVtbl *)&NiPSysColliderManager::`vftable'; /*0x75a668*/
  v1[3].__vftable = 0; /*0x75a66e*/
  return v1; /*0x75a677*/
}
