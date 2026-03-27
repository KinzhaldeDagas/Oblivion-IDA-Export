TESObjectANIO *__thiscall TESObjectANIO::TESObjectANIO(TESObjectANIO *this)
{
  TESForm_constr((TESForm *)this);
  TESModel::TESModel((TESModel *)this + 1);
  *(_DWORD *)this = &TESObjectANIO::`vftable'{for `TESObjectANIO'};
  *((_DWORD *)this + 6) = &TESObjectANIO::`vftable'{for `TESModel'};
  *((_BYTE *)this + 4) = 0x41;
  *((_DWORD *)this + 0xC) = 0;
  return this;
}
