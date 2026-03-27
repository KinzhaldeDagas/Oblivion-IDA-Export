void __thiscall TESRoad::~TESRoad(TESRoad *this)
{
  *(_DWORD *)this = &TESRoad::`vftable';
  sub_4E8C20(this);
  NiTPointerMap<unsigned int,BSSimpleList<TESConnectedPoint *> *>::~NiTPointerMap<unsigned int,BSSimpleList<TESConnectedPoint *> *>((unsigned int *)this + 7);
  TESForm_destr((TESForm *)this);
}
