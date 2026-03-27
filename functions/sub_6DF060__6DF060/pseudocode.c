char __thiscall sub_6DF060(_DWORD *this, int a2)
{
  int v3; // eax

  if ( *(this + 4) )
    return 1;
  v3 = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)a2 + 0x4C))(a2, *(this + 5));
  if ( v3 )
  {
    *(this + 4) = v3;
    return 1;
  }
  return 0;
}
