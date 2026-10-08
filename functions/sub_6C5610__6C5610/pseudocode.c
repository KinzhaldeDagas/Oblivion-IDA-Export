NiTimeController *__thiscall sub_6C5610(NiTimeController *this, NiObjectNET *a2, char a3)
{
  int v4; // eax
  NiDefaultAVObjectPalette *v5; // eax
  NiDefaultAVObjectPalette *v6; // ebp
  volatile LONG *v7; // edi
  unsigned int v9; // [esp-8h] [ebp-2Ch]

  NiTimeController::NiTimeController(this); /*0x6c563b*/
  this->vtbl = (NiTimeControllerVtbl *)&NiControllerManager::`vftable'; /*0x6c5642*/
  *((_DWORD *)this + 0xF) = &NiTArray<NiPointer<NiControllerSequence>>::`vftable'; /*0x6c564c*/
  *((_WORD *)this + 0x22) = 0; /*0x6c5653*/
  *((_WORD *)this + 0x25) = 0xA; /*0x6c5657*/
  *((_WORD *)this + 0x23) = 0; /*0x6c565d*/
  *((_WORD *)this + 0x24) = 0; /*0x6c5661*/
  *((_DWORD *)this + 0x10) = 0; /*0x6c5665*/
  *((_DWORD *)this + 0x13) = 0; /*0x6c5668*/
  *((_DWORD *)this + 0x14) = 0; /*0x6c566b*/
  *((_DWORD *)this + 0x15) = 0; /*0x6c566e*/
  *((_DWORD *)this + 0x17) = 0x25; /*0x6c5678*/
  *((_DWORD *)this + 0x16) = &NiTMapBase<NiTPointerAllocator<unsigned int>,char const *,NiControllerSequence *>::`vftable'; /*0x6c568a*/
  *((_DWORD *)this + 0x19) = 0; /*0x6c5691*/
  v4 = FormHeapAlloc(0x94u); /*0x6c5699*/
  v9 = 4 * *((_DWORD *)this + 0x17); /*0x6c56a5*/
  *((_DWORD *)this + 0x18) = v4; /*0x6c56a8*/
  _memset(v4, 0, v9); /*0x6c56ab*/
  *((_BYTE *)this + 0x68) = 0; /*0x6c56b3*/
  *((_DWORD *)this + 0x16) = &NiTStringPointerMap<NiControllerSequence *>::`vftable'; /*0x6c56b6*/
  *((_BYTE *)this + 0x6C) = a3; /*0x6c56c1*/
  *((_DWORD *)this + 0x1C) = 0; /*0x6c56c4*/
  *((_DWORD *)this + 0x1D) = 0; /*0x6c56c7*/
  *((_DWORD *)this + 0x1E) = 0; /*0x6c56ca*/
  *((_DWORD *)this + 0x1F) = 0; /*0x6c56cd*/
  NiTimeController::SetTarget(this, a2); /*0x6c56dc*/
  v5 = (NiDefaultAVObjectPalette *)FormHeapAlloc(0x20u); /*0x6c56e3*/
  if ( v5 ) /*0x6c56f6*/
    v6 = NiDefaultAVObjectPalette::NiDefaultAVObjectPalette(v5, (int)a2); /*0x6c5700*/
  else
    v6 = 0; /*0x6c5704*/
  v7 = *((volatile LONG **)this + 0x1F); /*0x6c5706*/
  if ( v7 != (volatile LONG *)v6 ) /*0x6c5710*/
  {
    if ( v7 ) /*0x6c5714*/
    {
      if ( !InterlockedDecrement(v7 + 1) ) /*0x6c571a*/
        (**(void (__thiscall ***)(volatile LONG *, int))v7)(v7, 1); /*0x6c5730*/
    }
    *((_DWORD *)this + 0x1F) = v6; /*0x6c5734*/
    if ( v6 ) /*0x6c5737*/
      InterlockedIncrement((volatile LONG *)v6 + 1); /*0x6c573d*/
  }
  return this; /*0x6c5745*/
}
