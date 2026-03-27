char __thiscall sub_723A60(_DWORD *this, int a2)
{
  char result; // al
  int v4; // ecx

  result = sub_721A50(a2);
  if ( result )
  {
    v4 = *(this + 0x3F);
    if ( v4 )
      (*(void (__thiscall **)(int, int))(*(_DWORD *)v4 + 0x24))(v4, a2);
    return 1;
  }
  return result;
}
