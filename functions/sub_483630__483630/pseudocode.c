// Verified cell-grid lookup first removes stale DistantLOD/tree-batch references for the requested packed cell coordinates, then returns the current GridDistantArray cell slot.
int __thiscall sub_483630(_DWORD *this, int a2, int a3)
{
  int v4; // eax
  TESObjectCELL *v5; // eax

  v4 = *(this + 4) + 0x10 * (a3 + a2 * *(this + 3)); /*0x483648*/
  v5 = (TESObjectCELL *)TESObjectCELL_PackExteriorGroupLabel(*(_WORD *)(v4 + 8), *(_WORD *)(v4 + 0xC)); /*0x483655*/
  sub_7B3A40(v5); /*0x48365b*/
  return (*(int (__thiscall **)(_DWORD *, int, int))(*this + 0x1C))(this, a2, a3); /*0x48366e*/
}
