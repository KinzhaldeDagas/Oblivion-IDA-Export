int __thiscall sub_439B90(_DWORD *this, int a2)
{
  int v3; // eax

  v3 = *(this + 0xC);
  if ( v3 )
    *(_DWORD *)(v3 + 0xC) = 6;
  sub_4392E0(this, a2);
  return (*(int (__thiscall **)(_DWORD, _DWORD))(**((_DWORD **)ModelLoaderPtr + 2) + 0x10))(
           *((_DWORD *)ModelLoaderPtr + 2),
           *(this + 8));
}
