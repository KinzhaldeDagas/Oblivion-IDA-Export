char __thiscall sub_6DB890(_DWORD *this, int a2)
{
  char result; // al
  int v4; // ecx
  int v5; // ecx

  result = sub_6EC2C0(a2);
  if ( result )
  {
    v4 = *(this + 6);
    if ( v4 )
      (*(void (__thiscall **)(int, int))(*(_DWORD *)v4 + 0x24))(v4, a2);
    v5 = *(this + 7);
    if ( v5 )
      (*(void (__thiscall **)(int, int))(*(_DWORD *)v5 + 0x24))(v5, a2);
    return 1;
  }
  return result;
}
