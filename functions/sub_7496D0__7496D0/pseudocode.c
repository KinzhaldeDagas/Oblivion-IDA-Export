char __thiscall sub_7496D0(_DWORD *this, int a2)
{
  char result; // al
  _DWORD *v4; // esi
  int v5; // ecx

  result = sub_717910(this, a2);
  if ( result )
  {
    v4 = (_DWORD *)*(this + 0x32);
    while ( v4 )
    {
      v5 = v4[2];
      v4 = (_DWORD *)*v4;
      (*(void (__thiscall **)(int, int))(*(_DWORD *)v5 + 0x24))(v5, a2);
    }
    return 1;
  }
  return result;
}
