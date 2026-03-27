int __thiscall sub_9186D0(int *this, int a2)
{
  int v3; // ebx
  int v4; // esi
  int v5; // ecx

  v3 = *(this + 0xF);
  v4 = 0;
  if ( v3 <= 0 )
    return 0xFFFFFFFF;
  while ( 1 )
  {
    v5 = *(_DWORD *)(*(this + 0xE) + 4 * v4);
    if ( (*(int (__thiscall **)(int))(*(_DWORD *)v5 + 4))(v5) == a2 )
      break;
    if ( ++v4 >= v3 )
      return 0xFFFFFFFF;
  }
  return v4;
}
