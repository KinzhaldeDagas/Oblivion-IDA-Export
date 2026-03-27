int __thiscall sub_8B0E60(_DWORD *this)
{
  return (*(int (__thiscall **)(int, _DWORD, int, int))(*(_DWORD *)dword_BA7D98 + 0x14))(
           dword_BA7D98,
           *this,
           8 * *(this + 2) + 8,
           0x14);
}
