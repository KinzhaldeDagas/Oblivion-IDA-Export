NiObject *sub_73F170()
{
  NiObject *v0; // eax
  NiObject *v1; // esi

  v0 = (NiObject *)FormHeapAlloc(0x5Cu);
  v1 = v0;
  if ( v0 )
  {
    sub_728770(v0);
    HIWORD(v1[5].members.m_uiRefCount) = HIWORD(v1[5].members.m_uiRefCount) & 0xFFF | 0x8000;
    v1->__vftable = (NiObjectVtbl *)&NiParticlesData::`vftable';
    v1[8].members.m_uiRefCount = 0;
    LOWORD(v1[9].__vftable) = 0;
    v1[9].members.m_uiRefCount = 0;
    v1[0xA].__vftable = 0;
    v1[0xA].members.m_uiRefCount = 0;
    v1[0xB].__vftable = 0;
    LOBYTE(v1[8].__vftable) = 1;
    return v1;
  }
  else
  {
    *(_BYTE *)0x40 = 1;
    return 0;
  }
}
