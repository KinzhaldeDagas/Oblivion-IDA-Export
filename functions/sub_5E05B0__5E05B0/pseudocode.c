// Checks process movement flags low nibble via vfunc +0x2C0. Player input uses this alongside swimming/sneaking skill progression; useful as a broad movement-mode guard.
bool __thiscall sub_5E05B0(_DWORD *this)
{
  return *(this + 0x16) /*0x5e05c9*/
      && ((*(int (__thiscall **)(_DWORD))(*(_DWORD *)*(this + 0x16) + 0x2C0))(*(this + 0x16)) & 0xF) != 0;
}
