void __thiscall DefaultCombatStyle::~DefaultCombatStyle(TESForm *this)
{
  unsigned int v2; // eax

  this->vtbl = (TESFormVtbl *)&TESCombatStyle::`vftable'; /*0x4a99a8*/
  v2 = *((_DWORD *)this + 0x25); /*0x4a99ae*/
  if ( v2 ) /*0x4a99be*/
  {
    FormHeapFree(v2); /*0x4a99c1*/
    *((_DWORD *)this + 0x25) = 0; /*0x4a99c9*/
  }
  j_TESForm_ClearComponentReferences(this); /*0x4a99d5*/
  TESForm_destr(this); /*0x4a99e4*/
}
