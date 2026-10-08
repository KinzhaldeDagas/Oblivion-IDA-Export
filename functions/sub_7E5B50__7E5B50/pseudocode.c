void __thiscall sub_7E5B50(MEF_RefPointerArray16 *this, NiAVObject *element)
{
  NiAVObject *v3; // esi
  void *m_spCollision; // ebx
  int v5; // eax
  int v6; // edi
  unsigned int i; // esi

  v3 = element; /*0x7e5b76*/
  if ( element ) /*0x7e5b7c*/
  {
    m_spCollision = element->members.m_spCollision; /*0x7e5b87*/
    v5 = (int)element->vtbl->super.Unk_02((NiObject *)element); /*0x7e5b8f*/
    v6 = v5; /*0x7e5b93*/
    if ( m_spCollision ) /*0x7e5b95*/
    {
      if ( !v5 ) /*0x7e5b99*/
        return; /*0x7e5b99*/
      element = v3; /*0x7e5b9f*/
      InterlockedIncrement((volatile LONG *)&v3->members); /*0x7e5ba3*/
      NiTObjectArray_AddFirstEmpty(this + 0x11, (void **)&element); /*0x7e5bbc*/
      if ( !InterlockedDecrement((volatile LONG *)&v3->members) ) /*0x7e5bca*/
        v3->vtbl->super.super.Destructor((NiRefObject *)v3, 1); /*0x7e5bdc*/
    }
    if ( v6 ) /*0x7e5be0*/
    {
      for ( i = 0; *(unsigned __int16 *)(v6 + 0xB6) > i; sub_7E5B50( /*0x7e5be9*/
                                                           this,
                                                           *(_DWORD **)(*(_DWORD *)(v6 + 0xB0) + 4 * i++)) )
        ; /*0x7e5c03*/
    }
  }
}
