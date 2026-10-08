int __thiscall sub_6E78F0(char *this, _DWORD **a2)
{
  NiObject *v3; // eax
  NiObject *v4; // esi
  int v5; // ebx
  double v6; // st7

  v3 = (NiObject *)FormHeapAlloc(0x28u); /*0x6e7918*/
  v4 = v3; /*0x6e791d*/
  v5 = 0; /*0x6e7926*/
  if ( v3 ) /*0x6e792e*/
  {
    NiObject_constr(v3); /*0x6e7932*/
    v6 = kTerrainLODQuadRayDirectionZ; /*0x6e7937*/
    v4->__vftable = (NiObjectVtbl *)&NiBSplineBasisData::`vftable'; /*0x6e793d*/
    *(float *)&v4[3].members.m_uiRefCount = v6; /*0x6e7943*/
    v4[1].__vftable = 0; /*0x6e7946*/
    v4[4].__vftable = 0; /*0x6e7949*/
    v4[4].members.m_uiRefCount = 3; /*0x6e794c*/
    v5 = (int)v4; /*0x6e7953*/
  }
  sub_700770(this, v5, a2); /*0x6e7965*/
  qmemcpy((void *)(v5 + 8), this + 8, 0x20u); /*0x6e7975*/
  return v5; /*0x6e7979*/
}
