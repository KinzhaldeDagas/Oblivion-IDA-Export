int __thiscall TESObject_destr(TESForm *this)
{
  _DWORD *v2; // ecx

  v2 = *((_DWORD **)this + 6);
  this->vtbl = (TESFormVtbl *)&TESObject::`vftable';
  if ( v2 )
    TESObjectListHead_RemoveObject(v2, this);
  return TESForm_destr(this);
}
