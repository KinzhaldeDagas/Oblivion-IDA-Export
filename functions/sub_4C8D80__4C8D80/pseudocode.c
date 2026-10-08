void __thiscall sub_4C8D80(_DWORD *this)
{
  int v2; // edi

  v2 = *(this + 9); /*0x4c8d84*/
  if ( v2 ) /*0x4c8d89*/
  {
    if ( !InterlockedDecrement((volatile LONG *)(v2 + 4)) ) /*0x4c8d8f*/
      (**(void (__thiscall ***)(int, int))v2)(v2, 1); /*0x4c8da5*/
    *(this + 9) = 0; /*0x4c8da7*/
  }
  *((_BYTE *)this + 0x28) = 2; /*0x4c8db1*/
  *((_BYTE *)this + 0x29) = 0x1E; /*0x4c8db5*/
  *((_BYTE *)this + 0x2A) = 0x1E; /*0x4c8db8*/
  *((_BYTE *)this + 0x2B) = 0x1E; /*0x4c8dbb*/
  j_TESForm_InitializeComponents((TESForm *)this); /*0x4c8dc1*/
}
