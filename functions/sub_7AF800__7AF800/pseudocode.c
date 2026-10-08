// Generic vtable wrapper: calls virtual +0x94 with the inherited pass/list slot at this+0x25. Present in frond vtable but shared.
int __thiscall sub_7AF800(_DWORD *this)
{
  return (*(int (__thiscall **)(_DWORD *, _DWORD))(*this + 0x94))(this, *(this + 0x25)); /*0x7af811*/
}
