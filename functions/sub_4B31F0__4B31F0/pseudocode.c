TESForm *__thiscall sub_4B31F0(TESForm *this)
{
  TESForm_constr(this); /*0x4b31f3*/
  *((_DWORD *)this + 7) = 0; /*0x4b31fa*/
  *((_DWORD *)this + 8) = 0; /*0x4b31fd*/
  *((_DWORD *)this + 6) = 0; /*0x4b3200*/
  this->vtbl = (TESFormVtbl *)&TESBoundTreeObject::`vftable'; /*0x4b3203*/
  return this; /*0x4b320b*/
}
