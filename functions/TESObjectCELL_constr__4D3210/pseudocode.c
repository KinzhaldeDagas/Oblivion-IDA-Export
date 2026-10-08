TESForm *__thiscall TESObjectCELL_constr(TESForm *this)
{
  TESForm_constr(this); /*0x4d3239*/
  *((_DWORD *)this + 6) = &TESFullName::`vftable'; /*0x4d3240*/
  *((_DWORD *)this + 7) = 0; /*0x4d324b*/
  *((_DWORD *)this + 8) = 0; /*0x4d324e*/
  this->vtbl = (TESFormVtbl *)&TESObjectCELL::`vftable'{for `TESObjectCELL'}; /*0x4d325e*/
  *((_DWORD *)this + 6) = &TESObjectCELL::`vftable'{for `TESFullName'}; /*0x4d3264*/
  ExtraDataList_constr((_DWORD *)this + 0xA); /*0x4d326b*/
  *((_DWORD *)this + 0x12) = 0; /*0x4d3270*/
  *((_DWORD *)this + 0x13) = 0; /*0x4d3273*/
  *((_DWORD *)this + 0x15) = 0; /*0x4d3276*/
  *((_BYTE *)this + 0x24) = 0; /*0x4d3282*/
  *((_BYTE *)this + 0x26) = 0; /*0x4d3285*/
  *((_DWORD *)this + 0xF) = 0; /*0x4d3288*/
  *((_DWORD *)this + 0x10) = 0; /*0x4d328b*/
  *((_DWORD *)this + 0x11) = 0; /*0x4d328e*/
  this->member.type = kFormType_Cell; /*0x4d3291*/
  *((_DWORD *)this + 0x14) = 0; /*0x4d3295*/
  *((_BYTE *)this + 0x25) = 0; /*0x4d3298*/
  TESForm_SetIsLinked(this, 1); /*0x4d329b*/
  return this; /*0x4d32a2*/
}
