int __thiscall sub_51FCD0(TESForm *this)
{
  TESForm *v2; // edi

  v2 = (TESForm *)((char *)this + 0x24);
  this->vtbl = (TESFormVtbl *)&TESFaction::`vftable'{for `TESFaction'};
  *((_DWORD *)this + 6) = &TESFaction::`vftable'{for `TESFullName'};
  *((_DWORD *)this + 9) = &TESFaction::`vftable'{for `TESReactionForm'};
  sub_51FB00((int *)this);
  j_TESForm_ClearComponentReferences(this);
  sub_46E5C0(v2);
  FormHeapFree(*((_DWORD *)this + 7));
  *((_DWORD *)this + 7) = 0;
  *((_DWORD *)this + 8) = 0;
  return TESForm_destr(this);
}
