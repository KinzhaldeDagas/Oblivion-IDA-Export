TESForm *__thiscall TESObject_VDdestr(TESForm *this, char a2)
{
  _DWORD *v3; // ecx

  v3 = *((_DWORD **)this + 6);
  this->vtbl = (TESFormVtbl *)&TESObject::`vftable';
  if ( v3 )
    TESObjectListHead_RemoveObject(v3, this);
  TESForm_destr(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
