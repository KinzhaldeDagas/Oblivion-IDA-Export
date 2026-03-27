int __thiscall sub_76FDD0(_DWORD *this, unsigned int a2)
{
  if ( a2 >= *(this + 8) )
    return 0;
  (*(void (__thiscall **)(_DWORD *))(*this + 0x74))(this);
  return *(_DWORD *)(*(this + 9) + 0x10 * a2 + 0xC);
}
