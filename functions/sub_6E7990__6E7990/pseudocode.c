NiObject *sub_6E7990()
{
  NiObject *v0; // eax
  NiObject *v1; // esi
  double v2; // st7

  v0 = (NiObject *)FormHeapAlloc(0x28u);
  v1 = v0;
  if ( !v0 )
    return 0;
  NiObject_constr(v0);
  v2 = flt_A30634;
  v1->__vftable = (NiObjectVtbl *)&NiBSplineBasisData::`vftable';
  *(float *)&v1[3].members.m_uiRefCount = v2;
  v1[1].__vftable = 0;
  v1[4].__vftable = 0;
  v1[4].members.m_uiRefCount = 3;
  return v1;
}
