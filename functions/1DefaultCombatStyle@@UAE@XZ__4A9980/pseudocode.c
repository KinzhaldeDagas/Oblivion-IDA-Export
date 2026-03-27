void __thiscall DefaultCombatStyle::~DefaultCombatStyle(TESForm *this)
{
  unsigned int v2; // eax

  this->vtbl = (TESFormVtbl *)&TESCombatStyle::`vftable';
  v2 = *((_DWORD *)this + 0x25);
  if ( v2 )
  {
    FormHeapFree(v2);
    *((_DWORD *)this + 0x25) = 0;
  }
  j_TESForm_ClearComponentReferences(this);
  TESForm_destr(this);
}
