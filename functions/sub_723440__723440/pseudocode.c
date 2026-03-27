char __thiscall sub_723440(int *this, int a2)
{
  char result; // al
  int v4; // ecx

  result = sub_707B50(this, a2);
  if ( result )
  {
    v4 = *(this + 0x2E);
    if ( (v4 == 0) == (*(_DWORD *)(a2 + 0xB8) == 0)
      && (!v4 || (*(unsigned __int8 (__thiscall **)(int, _DWORD))(*(_DWORD *)v4 + 0x2C))(v4, *(_DWORD *)(a2 + 0xB8))) )
    {
      return (*(int (__thiscall **)(_DWORD, _DWORD))(*(_DWORD *)*(this + 0x2D) + 0x2C))(
               *(this + 0x2D),
               *(_DWORD *)(a2 + 0xB4));
    }
    else
    {
      return 0;
    }
  }
  return result;
}
