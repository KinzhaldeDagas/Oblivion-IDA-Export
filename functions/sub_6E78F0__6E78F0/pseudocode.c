int __thiscall sub_6E78F0(char *this, _DWORD **a2)
{
  NiObject *v3; // eax
  NiObject *v4; // esi
  int v5; // ebx
  double v6; // st7

  v3 = (NiObject *)FormHeapAlloc(0x28u);
  v4 = v3;
  v5 = 0;
  if ( v3 )
  {
    NiObject_constr(v3);
    v6 = flt_A30634;
    v4->__vftable = (NiObjectVtbl *)&NiBSplineBasisData::`vftable';
    *(float *)&v4[3].members.m_uiRefCount = v6;
    v4[1].__vftable = 0;
    v4[4].__vftable = 0;
    v4[4].members.m_uiRefCount = 3;
    v5 = (int)v4;
  }
  sub_700770(this, v5, a2);
  qmemcpy((void *)(v5 + 8), this + 8, 0x20u);
  return v5;
}
