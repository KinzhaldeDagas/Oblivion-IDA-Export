int __thiscall TESActorBase_GetHealth(_DWORD *this)
{
  return (*(int (__thiscall **)(_DWORD *))(*(this + 0x20) + 0x10))(this + 0x20);
}
