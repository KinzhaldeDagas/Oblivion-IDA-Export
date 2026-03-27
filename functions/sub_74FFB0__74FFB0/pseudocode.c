char __thiscall sub_74FFB0(_DWORD *this, int a2)
{
  char result; // al

  result = sub_75E490(this, a2);
  if ( result )
    return (*(unsigned __int8 (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)(a2 + 0x48) + 0x2C))(
             *(_DWORD *)(a2 + 0x48),
             *(this + 0x12)) != 0;
  return result;
}
