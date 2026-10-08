void __thiscall sub_4C8DD0(_DWORD *this)
{
  int v2; // edi
  int v3; // edi

  v2 = *(this + 9); /*0x4c8dd4*/
  if ( v2 ) /*0x4c8dd9*/
  {
    if ( !InterlockedDecrement((volatile LONG *)(v2 + 4)) ) /*0x4c8ddf*/
      (**(void (__thiscall ***)(int, int))v2)(v2, 1); /*0x4c8df5*/
    *(this + 9) = 0; /*0x4c8df7*/
  }
  if ( *(this + 0xC) ) /*0x4c8dfe*/
  {
    do /*0x4c8e18*/
    {
      v3 = *(_DWORD *)(*(this + 0xC) + 4); /*0x4c8e07*/
      FormHeapFree(*(this + 0xC)); /*0x4c8e0b*/
      *(this + 0xC) = v3; /*0x4c8e15*/
    }
    while ( v3 ); /*0x4c8e18*/
  }
  *(this + 0xB) = 0; /*0x4c8e1b*/
  j_TESForm_ClearComponentReferences((TESForm *)this); /*0x4c8e25*/
}
