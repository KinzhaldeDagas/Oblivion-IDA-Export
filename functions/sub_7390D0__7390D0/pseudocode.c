NiObject *sub_7390D0()
{
  NiObject *v0; // eax
  NiObject *v1; // esi

  v0 = (NiObject *)FormHeapAlloc(0x1Cu);
  v1 = v0;
  if ( !v0 )
    return 0;
  NiObject_constr(v0);
  v1->__vftable = (NiObjectVtbl *)&NiScreenPolygon::`vftable';
  v1[1].__vftable = 0;
  LOWORD(v1[1].members.m_uiRefCount) = 0;
  v1[2].__vftable = 0;
  v1[2].members.m_uiRefCount = 0;
  v1[3].__vftable = 0;
  return v1;
}
