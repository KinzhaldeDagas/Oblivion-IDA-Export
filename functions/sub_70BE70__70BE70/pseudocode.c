NiObject *__cdecl sub_70BE70(NiObjectVtbl *a1, UInt32 a2, int a3)
{
  NiObject *v3; // eax
  NiObject *v4; // esi
  NiObjectVtbl *vftable; // edi

  v3 = (NiObject *)FormHeapAlloc(0x18u); /*0x70be96*/
  v4 = v3; /*0x70be9b*/
  if ( v3 ) /*0x70beae*/
  {
    sub_731EA0(v3); /*0x70beb2*/
    v4->__vftable = (NiObjectVtbl *)&NiDepthStencilBuffer::`vftable'; /*0x70beb7*/
    v4[2].members.m_uiRefCount = 0; /*0x70bebd*/
  }
  else
  {
    v4 = 0; /*0x70bec6*/
  }
  v4[1].__vftable = a1; /*0x70bed4*/
  v4[1].members.m_uiRefCount = a2; /*0x70bed7*/
  vftable = v4[2].__vftable; /*0x70beda*/
  if ( vftable != (NiObjectVtbl *)a3 ) /*0x70bee7*/
  {
    if ( vftable ) /*0x70beeb*/
    {
      if ( !InterlockedDecrement((volatile LONG *)&vftable->GetType) ) /*0x70bef1*/
        (*(void (__thiscall **)(NiObjectVtbl *, int))vftable->super.Destructor)(vftable, 1); /*0x70bf07*/
    }
    v4[2].__vftable = (NiObjectVtbl *)a3; /*0x70bf0b*/
    if ( a3 ) /*0x70bf0e*/
      InterlockedIncrement((volatile LONG *)(a3 + 4)); /*0x70bf14*/
  }
  return v4; /*0x70bf1c*/
}
