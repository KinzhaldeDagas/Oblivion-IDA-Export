NiObject *__usercall sub_73E9A0@<eax>(void *this@<ecx>, int a2@<ebx>)
{
  NiObject *v3; // eax
  NiObject *v4; // esi
  size_t v6; // [esp-4h] [ebp-20h]

  v3 = (NiObject *)FormHeapAlloc(0x30u);
  v4 = 0;
  if ( v3 )
    v4 = sub_73E630(v3);
  v4[1].__vftable = *((NiObjectVtbl **)this + 2);
  v4[1].members.m_uiRefCount = *((_DWORD *)this + 3);
  v4[2].__vftable = *((NiObjectVtbl **)this + 4);
  v4[2].members.m_uiRefCount = *((_DWORD *)this + 5);
  sub_73E6A0(v4, a2, *((_DWORD *)this + 0xA));
  LODWORD(v6) = 4 * *((_DWORD *)this + 0xA);
  memcpy((void *)v4[5].members.m_uiRefCount, *((const void **)this + 0xB), v6);
  return v4;
}
