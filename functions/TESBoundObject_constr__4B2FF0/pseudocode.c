TESForm *__thiscall TESBoundObject_constr(TESForm *this)
{
  TESForm_constr(this); /*0x4b2ff3*/
  *((_DWORD *)this + 7) = 0; /*0x4b2ffa*/
  *((_DWORD *)this + 8) = 0; /*0x4b2ffd*/
  *((_DWORD *)this + 6) = 0; /*0x4b3000*/
  this->vtbl = (TESFormVtbl *)&TESBoundObject::`vftable'; /*0x4b3003*/
  return this; /*0x4b300b*/
}
