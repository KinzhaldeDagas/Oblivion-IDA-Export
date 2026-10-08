TESForm *__thiscall TESObject_VDdestr(TESForm *this, char a2)
{
  _DWORD *v3; // ecx

  v3 = *((_DWORD **)this + 6); /*0x4b3643*/
  this->vtbl = (TESFormVtbl *)&TESObject::`vftable'; /*0x4b3648*/
  if ( v3 ) /*0x4b364e*/
    TESObjectListHead_RemoveObject(v3, this); /*0x4b3651*/
  TESForm_destr(this); /*0x4b3658*/
  if ( (a2 & 1) != 0 ) /*0x4b3662*/
    FormHeapFree((unsigned int)this); /*0x4b3665*/
  return this; /*0x4b366f*/
}
