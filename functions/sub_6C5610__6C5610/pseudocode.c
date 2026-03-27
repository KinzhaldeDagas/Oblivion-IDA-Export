NiTimeController *__thiscall sub_6C5610(NiTimeController *this, NiObjectNET *a2, char a3)
{
  int v4; // eax
  NiDefaultAVObjectPalette *v5; // eax
  NiDefaultAVObjectPalette *v6; // ebp
  volatile LONG *v7; // edi
  int v9; // [esp-8h] [ebp-2Ch]

  NiTimeController::NiTimeController(this);
  this->vtbl = (NiTimeControllerVtbl *)&NiControllerManager::`vftable';
  *((_DWORD *)this + 0xF) = &NiTArray<NiPointer<NiControllerSequence>>::`vftable';
  *((_WORD *)this + 0x22) = 0;
  *((_WORD *)this + 0x25) = 0xA;
  *((_WORD *)this + 0x23) = 0;
  *((_WORD *)this + 0x24) = 0;
  *((_DWORD *)this + 0x10) = 0;
  *((_DWORD *)this + 0x13) = 0;
  *((_DWORD *)this + 0x14) = 0;
  *((_DWORD *)this + 0x15) = 0;
  *((_DWORD *)this + 0x17) = 0x25;
  *((_DWORD *)this + 0x16) = &NiTMapBase<NiTPointerAllocator<unsigned int>,char const *,NiControllerSequence *>::`vftable';
  *((_DWORD *)this + 0x19) = 0;
  v4 = FormHeapAlloc(0x94u);
  v9 = 4 * *((_DWORD *)this + 0x17);
  *((_DWORD *)this + 0x18) = v4;
  _memset(v4, 0, v9);
  *((_BYTE *)this + 0x68) = 0;
  *((_DWORD *)this + 0x16) = &NiTStringPointerMap<NiControllerSequence *>::`vftable';
  *((_BYTE *)this + 0x6C) = a3;
  *((_DWORD *)this + 0x1C) = 0;
  *((_DWORD *)this + 0x1D) = 0;
  *((_DWORD *)this + 0x1E) = 0;
  *((_DWORD *)this + 0x1F) = 0;
  NiTimeController::SetTarget(this, a2);
  v5 = (NiDefaultAVObjectPalette *)FormHeapAlloc(0x20u);
  if ( v5 )
    v6 = NiDefaultAVObjectPalette::NiDefaultAVObjectPalette(v5, (int)a2);
  else
    v6 = 0;
  v7 = *((volatile LONG **)this + 0x1F);
  if ( v7 != (volatile LONG *)v6 )
  {
    if ( v7 )
    {
      if ( !InterlockedDecrement(v7 + 1) )
        (**(void (__thiscall ***)(volatile LONG *, int))v7)(v7, 1);
    }
    *((_DWORD *)this + 0x1F) = v6;
    if ( v6 )
      InterlockedIncrement((volatile LONG *)v6 + 1);
  }
  return this;
}
