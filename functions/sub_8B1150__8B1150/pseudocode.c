int __thiscall sub_8B1150(_DWORD *this)
{
  return (*(int (__thiscall **)(int, _DWORD, int, int))(*(_DWORD *)dword_BA7D98 + 0x14))(
           dword_BA7D98,
           *this,
           0x10 * (*(this + 2) + 1),
           0x14);
}
