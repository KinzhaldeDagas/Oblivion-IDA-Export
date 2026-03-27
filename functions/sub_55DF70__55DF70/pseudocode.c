int __thiscall sub_55DF70(_DWORD **this, int a2, int (__thiscall ***a3)(_DWORD, signed int))
{
  int result; // eax

  result = (*(int (__thiscall **)(_DWORD, int, int (__thiscall ***)(_DWORD, signed int), _DWORD))(**(this + 9) + 0xC))(
             *(this + 9),
             a2,
             a3,
             0);
  if ( !(_BYTE)result )
  {
    if ( a3 )
      return (**a3)(a3, 1);
  }
  return result;
}
