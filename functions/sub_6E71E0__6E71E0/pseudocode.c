void sub_6E71E0()
{
  NiObject *v0; // eax
  NiObject *v1; // esi

  v0 = (NiObject *)FormHeapAlloc(0x18u); /*0x6e7205*/
  v1 = v0; /*0x6e720a*/
  if ( v0 ) /*0x6e721b*/
  {
    NiObject_constr(v0); /*0x6e721f*/
    v1->__vftable = (NiObjectVtbl *)&NiBSplineData::`vftable'; /*0x6e7224*/
    v1[1].__vftable = 0; /*0x6e722a*/
    v1[1].members.m_uiRefCount = 0; /*0x6e722d*/
    v1[2].__vftable = 0; /*0x6e7230*/
    v1[2].members.m_uiRefCount = 0; /*0x6e7233*/
  }
  else
  {
    sub_6E7250(); /*0x6e724d*/
  }
}
