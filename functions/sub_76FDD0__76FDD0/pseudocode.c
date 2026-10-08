int __thiscall sub_76FDD0(_DWORD *this, unsigned int a2)
{
  if ( a2 >= *(this + 8) ) /*0x76fddb*/
    return 0; /*0x76fdde*/
  (*(void (__thiscall **)(_DWORD *))(*this + 0x74))(this); /*0x76fde9*/
  return *(_DWORD *)(*(this + 9) + 0x10 * a2 + 0xC); /*0x76fddd*/
}
