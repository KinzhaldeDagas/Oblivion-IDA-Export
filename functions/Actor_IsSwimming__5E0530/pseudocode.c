bool __thiscall Actor_IsSwimming(_DWORD *this)
{
  return *(this + 0x16)
      && ((*(int (__thiscall **)(_DWORD))(*(_DWORD *)*(this + 0x16) + 0x2C0))(*(this + 0x16)) & 0x800) != 0;
}
