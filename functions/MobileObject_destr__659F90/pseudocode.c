int __thiscall MobileObject_destr(TESForm *this)
{
  int v6; // ecx
  int v7; // eax
  void (__thiscall ***v8)(_DWORD, int); // ecx

  this->vtbl = (TESFormVtbl *)&MobileObject::`vftable'{for `MobileObject'}; /*0x659fb8*/
  *((_DWORD *)this + 6) = &MobileObject::`vftable'{for `TESChildCell'}; /*0x659fbe*/
  if ( (this->member.flags & 0x4000) == 0 ) /*0x659fd5*/
  {
    sub_674E10((int *)&qword_B3BB2C[0x75], this); /*0x659fdd*/
    if ( !g_TESDataHandler->activeFileState.unknownAfterActiveFileState[2] ) /*0x659fe8*/
      TESOjectREFR_stuffsWithPArentCell((TESChildCELL *)this); /*0x659ff3*/
    v6 = *((_DWORD *)this + 0x16); /*0x659ff8*/
    if ( v6 ) /*0x659ffd*/
    {
      v7 = (*(int (__thiscall **)(int))(*(_DWORD *)v6 + 8))(v6); /*0x65a004*/
      sub_674550((int)this, v7); /*0x65a00d*/
    }
  }
  v8 = *((void (__thiscall ****)(_DWORD, int))this + 0x16); /*0x65a012*/
  if ( v8 ) /*0x65a017*/
    (**v8)(v8, 1); /*0x65a01f*/
  return TESObjectREFR_destr((TESChildCELL *)this); /*0x65a030*/
}
