TESForm *__thiscall TESBoundAnimObject_constr(TESForm *this)
{
  TESForm_constr(this); /*0x4b31d3*/
  *((_DWORD *)this + 7) = 0; /*0x4b31da*/
  *((_DWORD *)this + 8) = 0; /*0x4b31dd*/
  *((_DWORD *)this + 6) = 0; /*0x4b31e0*/
  this->vtbl = (TESFormVtbl *)&TESBoundAnimObject::`vftable'; /*0x4b31e3*/
  return this; /*0x4b31eb*/
}
