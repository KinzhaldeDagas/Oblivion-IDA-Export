TESForm *__thiscall TESBoundAnimObject_constr(TESForm *this)
{
  TESForm_constr(this);
  *((_DWORD *)this + 7) = 0;
  *((_DWORD *)this + 8) = 0;
  *((_DWORD *)this + 6) = 0;
  this->vtbl = (TESFormVtbl *)&TESBoundAnimObject::`vftable';
  return this;
}
