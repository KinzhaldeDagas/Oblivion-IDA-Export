// 3DTheft decode: Actor_IsSneaking returns true when process movement flags include 0x400 and do not include swimming flag 0x800.
bool __thiscall Actor_IsSneaking(_DWORD *this)
{
  return *(this + 0x16) /*0x5e0581*/
      && ((*(int (__thiscall **)(_DWORD))(*(_DWORD *)*(this + 0x16) + 0x2C0))(*(this + 0x16)) & 0x400) != 0
      && ((*(int (__thiscall **)(_DWORD))(*(_DWORD *)*(this + 0x16) + 0x2C0))(*(this + 0x16)) & 0x800) == 0;
}
