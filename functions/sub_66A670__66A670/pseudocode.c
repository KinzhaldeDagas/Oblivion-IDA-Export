void __thiscall sub_66A670(TESObjectREFR *this)
{
  TESObjectCELL *DwordAtOffset40; // eax
  ExtraDataList *v3; // edi
  BSExtraDataVtbl *v4; // edi
  int v5; // eax
  int v6; // eax
  int v7; // eax
  int v8; // edi

  if ( *((_DWORD *)this + 0x15D) ) /*0x66a676*/
  {
    DwordAtOffset40 = (TESObjectCELL *)Shared_GetDwordAtOffset40(this); /*0x66a67f*/
    v3 = (ExtraDataList *)DwordAtOffset40; /*0x66a684*/
    if ( DwordAtOffset40 ) /*0x66a688*/
    {
      if ( TESObjectCELL_IsInterior(DwordAtOffset40) ) /*0x66a68c*/
        v4 = sub_424180(v3 + 2); /*0x66a69d*/
      else
        v4 = (BSExtraDataVtbl *)MEMORY[0xB35C24]; /*0x66a6a1*/
    }
    else
    {
      v4 = 0; /*0x66a6a9*/
    }
    (*(void (__thiscall **)(_DWORD))(**((_DWORD **)this + 0x15D) + 0x60))(*((_DWORD *)this + 0x15D)); /*0x66a6b6*/
    if ( v4 ) /*0x66a6ba*/
      (*((void (__thiscall **)(BSExtraDataVtbl *))v4->Destructor + 0x16))(v4); /*0x66a6c3*/
    v5 = *((_DWORD *)this + 0x15D); /*0x66a6c5*/
    if ( v5 && (v6 = *(_DWORD *)(v5 + 8)) != 0 ) /*0x66a6d4*/
      v7 = *(_DWORD *)(v6 + 0x18); /*0x66a6d6*/
    else
      v7 = 0; /*0x66a6db*/
    if ( v7 ) /*0x66a6df*/
      sub_8A6410(v7); /*0x66a6e3*/
    if ( v4 ) /*0x66a6ea*/
      (*((void (__thiscall **)(BSExtraDataVtbl *))v4->Destructor + 0x16))(v4); /*0x66a6f3*/
  }
  v8 = *((_DWORD *)this + 0x15D); /*0x66a6f5*/
  if ( v8 ) /*0x66a6fd*/
  {
    if ( !InterlockedDecrement((volatile LONG *)(v8 + 4)) ) /*0x66a703*/
      (**(void (__thiscall ***)(int, int))v8)(v8, 1); /*0x66a719*/
    *((_DWORD *)this + 0x15D) = 0; /*0x66a71b*/
  }
  *((_DWORD *)this + 0x15E) = 0; /*0x66a722*/
  *((_DWORD *)this + 0x15F) = 0; /*0x66a728*/
}
