int __thiscall TESObject_destr(TESForm *this)
{
  _DWORD *v2; // ecx

  v2 = *((_DWORD **)this + 6); /*0x4b3013*/
  this->vtbl = (TESFormVtbl *)&TESObject::`vftable'; /*0x4b3018*/
  if ( v2 ) /*0x4b301e*/
    TESObjectListHead_RemoveObject(v2, this); /*0x4b3021*/
  return TESForm_destr(this); /*0x4b3028*/
}
