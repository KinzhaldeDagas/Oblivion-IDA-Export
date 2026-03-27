int __thiscall sub_439B60(_DWORD *this, int a2)
{
  sub_4392E0(this, a2);
  return (*(int (__thiscall **)(_DWORD, _DWORD))(**((_DWORD **)ModelLoaderPtr + 4) + 0x10))(
           *((_DWORD *)ModelLoaderPtr + 4),
           *(this + 0xC));
}
