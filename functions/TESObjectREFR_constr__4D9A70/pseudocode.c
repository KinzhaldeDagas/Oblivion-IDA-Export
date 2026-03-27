TESChildCELL *__thiscall TESObjectREFR_constr(TESChildCELL *this)
{
  TESForm_constr((TESForm *)this);
  *((_DWORD *)this + 6) = &TESChildCell::`vftable';
  this->vtbl = &TESObjectREFR::`vftable'{for `TESObjectREFR'};
  *((_DWORD *)this + 6) = &TESObjectREFR::`vftable'{for `TESChildCell'};
  *((_DWORD *)this + 0xF) = 0;
  ExtraDataList_constr((_DWORD *)this + 0x11);
  *((_BYTE *)this + 4) = 0x31;
  TESObjectREFR_InitializeAllComponents((TESObjectREFR *)this);
  *((_DWORD *)this + 7) = 0;
  *((_DWORD *)this + 8) = 0;
  *((_DWORD *)this + 9) = 0;
  *((_DWORD *)this + 0xA) = 0;
  *((_DWORD *)this + 0xB) = 0;
  *((_DWORD *)this + 0xC) = 0;
  *((_DWORD *)this + 0xD) = 0;
  *((_DWORD *)this + 0x10) = 0;
  return this;
}
