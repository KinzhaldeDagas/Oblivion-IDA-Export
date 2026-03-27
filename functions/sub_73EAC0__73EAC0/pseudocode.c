NiObject *__userpurge sub_73EAC0@<eax>(void *this@<ecx>, int a2@<ebx>, int a3)
{
  NiObject *v4; // eax
  NiObject *v5; // esi
  size_t v7; // [esp-4h] [ebp-20h]

  v4 = (NiObject *)FormHeapAlloc(0x30u);
  v5 = 0;
  if ( v4 )
    v5 = sub_73E630(v4);
  v5[1].__vftable = *((NiObjectVtbl **)this + 2);
  v5[1].members.m_uiRefCount = *((_DWORD *)this + 3);
  v5[2].__vftable = *((NiObjectVtbl **)this + 4);
  v5[2].members.m_uiRefCount = *((_DWORD *)this + 5);
  sub_73E6A0(v5, a2, *((_DWORD *)this + 0xA));
  LODWORD(v7) = 4 * *((_DWORD *)this + 0xA);
  memcpy((void *)v5[5].members.m_uiRefCount, *((const void **)this + 0xB), v7);
  return v5;
}
