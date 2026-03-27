TESForm *__thiscall TESObjectCELL_constr(TESForm *this)
{
  TESForm_constr(this);
  *((_DWORD *)this + 6) = &TESFullName::`vftable';
  *((_DWORD *)this + 7) = 0;
  *((_DWORD *)this + 8) = 0;
  this->vtbl = (TESFormVtbl *)&TESObjectCELL::`vftable'{for `TESObjectCELL'};
  *((_DWORD *)this + 6) = &TESObjectCELL::`vftable'{for `TESFullName'};
  ExtraDataList_constr((_DWORD *)this + 0xA);
  *((_DWORD *)this + 0x12) = 0;
  *((_DWORD *)this + 0x13) = 0;
  *((_DWORD *)this + 0x15) = 0;
  *((_BYTE *)this + 0x24) = 0;
  *((_BYTE *)this + 0x26) = 0;
  *((_DWORD *)this + 0xF) = 0;
  *((_DWORD *)this + 0x10) = 0;
  *((_DWORD *)this + 0x11) = 0;
  this->member.type = kFormType_Cell;
  *((_DWORD *)this + 0x14) = 0;
  *((_BYTE *)this + 0x25) = 0;
  TESForm_SetIsLinked(this, 1);
  return this;
}
