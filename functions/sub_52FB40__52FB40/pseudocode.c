TESForm *__thiscall sub_52FB40(TESForm *this, char a2)
{
  TESForm_constr(this);
  *((_DWORD *)this + 6) = &TESFullName::`vftable';
  *((_DWORD *)this + 7) = 0;
  *((_DWORD *)this + 8) = 0;
  this->vtbl = (TESFormVtbl *)&TESTopic::`vftable'{for `TESTopic'};
  *((_DWORD *)this + 6) = &TESTopic::`vftable'{for `TESFullName'};
  *((_DWORD *)this + 0xA) = 0;
  *((_DWORD *)this + 0xB) = 0;
  *((_DWORD *)this + 0xD) = 0;
  *((_DWORD *)this + 0xE) = 0;
  *((_DWORD *)this + 0xC) = 0;
  *((_BYTE *)this + 0x24) = a2;
  this->member.type = kFormType_Dialog;
  return this;
}
