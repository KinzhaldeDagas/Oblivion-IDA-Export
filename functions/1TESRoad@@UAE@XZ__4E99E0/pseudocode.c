// Verified TESRoad destructor calls TESRoad_ClearConnectedPointMap, destroys the connected-point map at +0x1C, then runs TESForm destruction. TESWorldSpace owns/releases the TESRoad pointer at WorldSpace+0x54.
void __thiscall TESRoad_dtor(TESRoad *this)
{
  *(_DWORD *)this = &TESRoad::`vftable'; /*0x4e9a08*/
  TESRoad_ClearConnectedPointMap(this); /*0x4e9a16*/
  NiTPointerMap<unsigned int,BSSimpleList<TESConnectedPoint *> *>::~NiTPointerMap<unsigned int,BSSimpleList<TESConnectedPoint *> *>((unsigned int *)this + 7); /*0x4e9a23*/
  TESForm_destr((TESForm *)this); /*0x4e9a32*/
}
