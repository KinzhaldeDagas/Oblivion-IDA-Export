TESObjectSTAT *__thiscall TESObjectSTAT::TESObjectSTAT(TESObjectSTAT *this)
{
  TESBoundObject_constr((TESForm *)this);
  TESModel::TESModel((TESModel *)((char *)this + 0x24));
  *(_DWORD *)this = &TESObjectSTAT::`vftable'{for `TESObjectSTAT'};
  *((_DWORD *)this + 9) = &TESObjectSTAT::`vftable'{for `TESModel'};
  *((_BYTE *)this + 4) = 0x1C;
  return this;
}
