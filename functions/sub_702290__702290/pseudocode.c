char __thiscall sub_702290(_DWORD *this, int a2)
{
  char result; // al
  int v4; // ecx

  result = sub_700A70(a2);
  if ( result )
  {
    v4 = *(this + 0xF);
    if ( v4 )
      return (*(char (__thiscall **)(int, int))(*(_DWORD *)v4 + 0x24))(v4, a2);
    else
      return 1;
  }
  return result;
}
