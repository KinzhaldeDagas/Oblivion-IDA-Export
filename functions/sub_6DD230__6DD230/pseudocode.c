char __thiscall sub_6DD230(_DWORD *this, int a2)
{
  char result; // al
  int v4; // ecx
  int v5; // ecx

  result = sub_715F10(this, a2);
  if ( result )
  {
    v4 = *(this + 0x12);
    if ( v4 )
      (*(void (__thiscall **)(int, int))(*(_DWORD *)v4 + 0x24))(v4, a2);
    v5 = *(this + 0x13);
    if ( v5 )
      (*(void (__thiscall **)(int, int))(*(_DWORD *)v5 + 0x24))(v5, a2);
    return 1;
  }
  return result;
}
