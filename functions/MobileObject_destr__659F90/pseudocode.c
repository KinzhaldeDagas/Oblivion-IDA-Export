int __usercall MobileObject_destr@<eax>(
        TESForm *this@<ecx>,
        char a2@<bpl>,
        double a3@<st2>,
        double a4@<st1>,
        double a5@<st0>)
{
  int v6; // ecx
  int v7; // eax
  void (__thiscall ***v8)(_DWORD, int); // ecx

  this->vtbl = (TESFormVtbl *)&MobileObject::`vftable'{for `MobileObject'};
  *((_DWORD *)this + 6) = &MobileObject::`vftable'{for `TESChildCell'};
  if ( (this->member.flags & 0x4000) == 0 )
  {
    sub_674E10(&ActorProcessManager_ptr, this);
    if ( !*(_BYTE *)(TESDataHandler + 0xCD4) )
      TESOjectREFR_stuffsWithPArentCell((TESChildCELL *)this);
    v6 = *((_DWORD *)this + 0x16);
    if ( v6 )
    {
      v7 = (*(int (__thiscall **)(int))(*(_DWORD *)v6 + 8))(v6);
      sub_674550(a2, a3, a4, a5, (int)this, v7);
    }
  }
  v8 = *((void (__thiscall ****)(_DWORD, int))this + 0x16);
  if ( v8 )
    (**v8)(v8, 1);
  return TESObjectREFR_destr((TESChildCELL *)this);
}
