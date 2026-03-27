int __thiscall sub_918010(_DWORD **this, int a2, int a3)
{
  int v3; // esi
  int v5; // eax

  v3 = 0;
  if ( a3 <= 0 )
    return a3;
  while ( 1 )
  {
    v5 = (*(int (__thiscall **)(_DWORD, int, int))(**(this + 2) + 0x10))(*(this + 2), v3 + a2, a3 - v3);
    v3 += v5;
    if ( !v5 )
      break;
    if ( v3 >= a3 )
      return a3;
  }
  return v3;
}
