NiObject *sub_7390D0()
{
  NiObject *v0; // eax
  NiObject *v1; // esi

  v0 = (NiObject *)FormHeapAlloc(0x1Cu); /*0x7390f5*/
  v1 = v0; /*0x7390fa*/
  if ( !v0 ) /*0x73910b*/
    return 0; /*0x73913e*/
  NiObject_constr(v0); /*0x73910f*/
  v1->__vftable = (NiObjectVtbl *)&NiScreenPolygon::`vftable'; /*0x739114*/
  v1[1].__vftable = 0; /*0x73911a*/
  LOWORD(v1[1].members.m_uiRefCount) = 0; /*0x73911d*/
  v1[2].__vftable = 0; /*0x739121*/
  v1[2].members.m_uiRefCount = 0; /*0x739124*/
  v1[3].__vftable = 0; /*0x739127*/
  return v1; /*0x73912c*/
}
