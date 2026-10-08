void __thiscall sub_43CAE0(volatile LONG *this)
{
  int v2; // eax
  TESObjectCELL *DwordAtOffset40; // eax

  if ( *((int *)this + 3) >= 4 /*0x43cb0c*/
    && (!*((_DWORD *)this + 7)
     || *(unsigned __int16 *)(*((_DWORD *)this + 7) + 0xC) == *(_DWORD *)(*((_DWORD *)this + 7) + 0x10))
    && *((_DWORD *)this + 3) != 6 )
  {
    v2 = *((_DWORD *)this + 9); /*0x43cb0e*/
    if ( v2 ) /*0x43cb13*/
    {
      if ( !*((_DWORD *)this + 0xA) ) /*0x43cb15*/
        sub_435AB0((_DWORD *)this + 0xA, *(_DWORD *)(v2 + 0x28)); /*0x43cb22*/
    }
    if ( *((_DWORD *)this + 0xA) /*0x43cb6e*/
      && !(*(unsigned __int8 (__thiscall **)(_DWORD))(**((_DWORD **)this + 8) + 0x190))(*((_DWORD *)this + 8))
      && (DwordAtOffset40 = (TESObjectCELL *)Shared_GetDwordAtOffset40(*((void **)this + 8)),
          TESObjectCELL_IsProcessLevel_LowHigh(DwordAtOffset40, 0))
      && sub_441E90(*((_DWORD **)this + 8))
      && !*(_DWORD *)(*((_DWORD *)this + 8) + 0x3C) )
    {
      sub_43C530(MEMORY[0xB33A1C], (int)this); /*0x43cb7b*/
    }
    else
    {
      DistantLODLoaderTask_SubmitToIOManager(this); /*0x43cb85*/
    }
  }
}
