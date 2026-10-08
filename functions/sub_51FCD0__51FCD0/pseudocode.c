int __thiscall sub_51FCD0(TESForm *this)
{
  TESForm *v2; // edi

  v2 = (TESForm *)((char *)this + 0x24); /*0x51fcfb*/
  this->vtbl = (TESFormVtbl *)&TESFaction::`vftable'{for `TESFaction'}; /*0x51fcfe*/
  *((_DWORD *)this + 6) = &TESFaction::`vftable'{for `TESFullName'}; /*0x51fd04*/
  *((_DWORD *)this + 9) = &TESFaction::`vftable'{for `TESReactionForm'}; /*0x51fd0b*/
  sub_51FB00((int *)this); /*0x51fd19*/
  j_TESForm_ClearComponentReferences(this); /*0x51fd20*/
  sub_46E5C0(v2); /*0x51fd2c*/
  FormHeapFree(*((_DWORD *)this + 7)); /*0x51fd35*/
  *((_DWORD *)this + 7) = 0; /*0x51fd41*/
  *((_DWORD *)this + 8) = 0; /*0x51fd44*/
  return TESForm_destr(this); /*0x51fd59*/
}
