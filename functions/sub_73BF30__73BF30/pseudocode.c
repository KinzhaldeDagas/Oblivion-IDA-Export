char __thiscall sub_73BF30(_DWORD *this, int a2)
{
  char result; // al
  int v4; // ecx

  result = sub_708B40(a2);
  if ( result )
  {
    v4 = *(this + 0x4F);
    if ( v4 )
      (*(void (__thiscall **)(int, int))(*(_DWORD *)v4 + 0x24))(v4, a2);
    return 1;
  }
  return result;
}
