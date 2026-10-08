NiObject *__userpurge sub_73EAC0@<eax>(void *this@<ecx>, int a2@<ebx>, int a3)
{
  NiObject *v4; // eax
  NiObject *v5; // esi
  size_t v7; // [esp-4h] [ebp-20h]

  v4 = (NiObject *)FormHeapAlloc(0x30u); /*0x73eae7*/
  v5 = 0; /*0x73eaf3*/
  if ( v4 ) /*0x73eafb*/
    v5 = sub_73E630(v4); /*0x73eb04*/
  v5[1].__vftable = *((NiObjectVtbl **)this + 2); /*0x73eb09*/
  v5[1].members.m_uiRefCount = *((_DWORD *)this + 3); /*0x73eb0f*/
  v5[2].__vftable = *((NiObjectVtbl **)this + 4); /*0x73eb15*/
  v5[2].members.m_uiRefCount = *((_DWORD *)this + 5); /*0x73eb1b*/
  sub_73E6A0(v5, a2, *((_DWORD *)this + 0xA)); /*0x73eb2c*/
  LODWORD(v7) = 4 * *((_DWORD *)this + 0xA); /*0x73eb3e*/
  memcpy((void *)v5[5].members.m_uiRefCount, *((const void **)this + 0xB), v7); /*0x73eb41*/
  return v5; /*0x73eb4b*/
}
