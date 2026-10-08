TESObjectSTAT *__thiscall TESObjectSTAT::TESObjectSTAT(TESObjectSTAT *this)
{
  TESBoundObject_constr((TESForm *)this); /*0x4b9ac9*/
  TESModel::TESModel((TESModel *)((char *)this + 0x24)); /*0x4b9adb*/
  *(_DWORD *)this = &TESObjectSTAT::`vftable'{for `TESObjectSTAT'}; /*0x4b9ae0*/
  *((_DWORD *)this + 9) = &TESObjectSTAT::`vftable'{for `TESModel'}; /*0x4b9ae6*/
  *((_BYTE *)this + 4) = 0x1C; /*0x4b9aec*/
  return this; /*0x4b9af2*/
}
