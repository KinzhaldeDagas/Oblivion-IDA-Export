bool __thiscall sub_74FFB0(const char **this, int a2)
{
  bool result; // al

  result = sub_75E490(this, a2); /*0x74ffb9*/
  if ( result ) /*0x74ffc0*/
    return (*(unsigned __int8 (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)(a2 + 0x48) + 0x2C))( /*0x74ffd8*/
             *(_DWORD *)(a2 + 0x48),
             *(this + 0x12)) != 0;
  return result; /*0x74ffc2*/
}
