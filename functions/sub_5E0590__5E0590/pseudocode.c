bool __thiscall sub_5E0590(_DWORD *this)
{
  return *(this + 0x16)
      && ((*(int (__thiscall **)(_DWORD))(*(_DWORD *)*(this + 0x16) + 0x2C0))(*(this + 0x16)) & 0x30) != 0;
}
