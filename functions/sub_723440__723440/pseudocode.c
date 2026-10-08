char __thiscall sub_723440(int *this, int a2)
{
  char result; // al
  int v4; // ecx

  result = sub_707B50(this, a2); /*0x723449*/
  if ( result ) /*0x723450*/
  {
    v4 = *(this + 0x2E); /*0x723457*/
    if ( (v4 == 0) == (*(_DWORD *)(a2 + 0xB8) == 0) /*0x72347c*/
      && (!v4 || (*(unsigned __int8 (__thiscall **)(int, _DWORD))(*(_DWORD *)v4 + 0x2C))(v4, *(_DWORD *)(a2 + 0xB8))) )
    {
      return (*(int (__thiscall **)(_DWORD, _DWORD))(*(_DWORD *)*(this + 0x2D) + 0x2C))( /*0x72349c*/
               *(this + 0x2D),
               *(_DWORD *)(a2 + 0xB4));
    }
    else
    {
      return 0; /*0x723484*/
    }
  }
  return result; /*0x723453*/
}
