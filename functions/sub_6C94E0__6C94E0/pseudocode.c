unsigned int __thiscall sub_6C94E0(unsigned int *this, int a2, int *a3)
{
  unsigned int v4; // eax
  unsigned int v5; // esi
  _DWORD *v6; // ecx
  int v8; // eax
  int *v9; // edi
  int v10; // ebp

  v4 = *(this + 3);
  v5 = 0;
  if ( v4 )
  {
    v6 = (_DWORD *)*(this + 5);
    do
    {
      if ( !*v6 )
        break;
      ++v5;
      v6 += 4;
    }
    while ( v5 < v4 );
  }
  if ( v5 == v4 && !sub_6C8580(this) )
    return 0xFFFFFFFF;
  v8 = a2;
  v9 = (int *)(0x10 * v5 + *(this + 5));
  v10 = *v9;
  if ( *v9 != a2 )
  {
    if ( v10 )
    {
      if ( !InterlockedDecrement((volatile LONG *)(v10 + 4)) )
        (**(void (__thiscall ***)(int, int))v10)(v10, 1);
      v8 = a2;
    }
    *v9 = v8;
    if ( v8 )
      InterlockedIncrement((volatile LONG *)(v8 + 4));
  }
  sub_6C67F0((_DWORD *)(0x10 * v5 + *(this + 6)), a3);
  return v5;
}
