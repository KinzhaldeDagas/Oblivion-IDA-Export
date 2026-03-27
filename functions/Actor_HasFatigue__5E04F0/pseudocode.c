bool __thiscall Actor_HasFatigue(_DWORD *this)
{
  return *(this + 0x16) && (*(int (__thiscall **)(_DWORD))(*(_DWORD *)*(this + 0x16) + 0x2E4))(*(this + 0x16));
}
