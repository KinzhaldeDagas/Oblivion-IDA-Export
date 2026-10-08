TESObjectANIO *__thiscall TESObjectANIO::TESObjectANIO(TESObjectANIO *this)
{
  TESForm_constr((TESForm *)this); /*0x4b42b9*/
  TESModel::TESModel((TESModel *)this + 1); /*0x4b42cb*/
  *(_DWORD *)this = &TESObjectANIO::`vftable'{for `TESObjectANIO'}; /*0x4b42d0*/
  *((_DWORD *)this + 6) = &TESObjectANIO::`vftable'{for `TESModel'}; /*0x4b42d6*/
  *((_BYTE *)this + 4) = 0x41; /*0x4b42dc*/
  *((_DWORD *)this + 0xC) = 0; /*0x4b42e0*/
  return this; /*0x4b42e9*/
}
