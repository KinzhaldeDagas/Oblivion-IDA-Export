char __thiscall sub_8A0110(int *this, int *a2)
{
  int v3; // eax
  int v4; // eax
  int v5; // ecx
  int *v7; // [esp-8h] [ebp-10h]

  if ( !this )
    return 0;
  v3 = *(this + 2);
  if ( !v3 )
    return 0;
  if ( a2 )
  {
    v4 = *(_DWORD *)(v3 + 0x1C);
    if ( v4 )
      v5 = *(_DWORD *)(v4 + 0xC);
    else
      v5 = 0;
    v7 = a2;
    if ( !v5 )
      return sub_89D960(this, v7);
    if ( (*(unsigned __int8 (__thiscall **)(int, int *))(*(_DWORD *)v5 + 0x5C))(v5, a2) )
    {
      v7 = a2;
      return sub_89D960(this, v7);
    }
  }
  else
  {
    (*(void (__thiscall **)(int *))(*this + 0x60))(this);
  }
  return 0;
}
