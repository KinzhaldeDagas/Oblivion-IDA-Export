NiObject *__usercall sub_73E9A0@<eax>(void *this@<ecx>, int a2@<ebx>)
{
  NiObject *v3; // eax
  NiObject *v4; // esi
  size_t v6; // [esp-4h] [ebp-20h]

  v3 = (NiObject *)FormHeapAlloc(0x30u); /*0x73e9c7*/
  v4 = 0; /*0x73e9d3*/
  if ( v3 ) /*0x73e9db*/
    v4 = sub_73E630(v3); /*0x73e9e4*/
  v4[1].__vftable = *((NiObjectVtbl **)this + 2); /*0x73e9e9*/
  v4[1].members.m_uiRefCount = *((_DWORD *)this + 3); /*0x73e9ef*/
  v4[2].__vftable = *((NiObjectVtbl **)this + 4); /*0x73e9f5*/
  v4[2].members.m_uiRefCount = *((_DWORD *)this + 5); /*0x73e9fb*/
  sub_73E6A0(v4, a2, *((_DWORD *)this + 0xA)); /*0x73ea0c*/
  LODWORD(v6) = 4 * *((_DWORD *)this + 0xA); /*0x73ea1e*/
  memcpy((void *)v4[5].members.m_uiRefCount, *((const void **)this + 0xB), v6); /*0x73ea21*/
  return v4; /*0x73ea2b*/
}
