char __thiscall sub_6E8DD0(int this, unsigned int a2)
{
  int v2; // edx
  unsigned int v3; // eax
  signed int v4; // edi
  unsigned int v5; // ebp
  char v6; // bl
  _DWORD *v7; // esi
  unsigned int v8; // ecx
  int v9; // eax
  unsigned int i; // eax
  int v11; // ecx
  _DWORD *v12; // ebp
  int v13; // eax
  int v14; // esi
  int v15; // ebx
  int v16; // edi
  unsigned int v19; // [esp+8h] [ebp-4h]

  v2 = this;
  v3 = *(_DWORD *)(this + 0x40);
  if ( !v3 )
    return 0;
  v4 = a2;
  if ( *(_DWORD *)(this + 0x3C) == a2 || a2 != 0xFFFFFFFF && ((int)a2 <= (int)0xFFFFFFFF || a2 >= v3) )
    return 0;
  v5 = 0;
  v6 = 0;
  if ( *(_WORD *)(this + 0x4E) )
  {
    do
    {
      v7 = *(_DWORD **)(*(_DWORD *)(v2 + 0x48) + 4 * v5);
      if ( v7 )
      {
        if ( v5 == v4 )
          v6 = 1;
        v8 = 0;
        if ( v7[2] )
        {
          do
          {
            v9 = *(_DWORD *)(*v7 + 4 * v8);
            if ( v6 )
              *(_WORD *)(v9 + 0x18) |= 2u;
            else
              *(_WORD *)(v9 + 0x18) &= ~2u;
            ++v8;
          }
          while ( v8 < v7[2] );
          v4 = a2;
        }
      }
      ++v5;
    }
    while ( v5 < *(unsigned __int16 *)(v2 + 0x4E) );
  }
  for ( i = 0; i < *(_DWORD *)(v2 + 0x6C); *(_WORD *)(v11 + 0x18) = *(_WORD *)(v11 + 0x18) & 0xFFFC | 1 )
    v11 = *(_DWORD *)(*(_DWORD *)(v2 + 0x64) + 4 * i++);
  if ( v4 != 0xFFFFFFFF )
  {
    v12 = *(_DWORD **)(*(_DWORD *)(v2 + 0x58) + 4 * v4);
    if ( v12 )
    {
      v13 = 0;
      v19 = 0;
      if ( v12[2] )
      {
        do
        {
          v14 = **(_DWORD **)(*v12 + 4 * v13);
          *(_WORD *)(v14 + 0x18) = *(_WORD *)(v14 + 0x18) & 0xFFFC | 2;
          v15 = *(_DWORD *)(*(_DWORD *)(*v12 + 4 * v13) + 4);
          v16 = *(_DWORD *)(v14 + 0xB8);
          if ( v16 != v15 )
          {
            if ( v16 )
            {
              if ( !InterlockedDecrement((volatile LONG *)(v16 + 4)) )
                (**(void (__thiscall ***)(int, int))v16)(v16, 1);
              v2 = this;
            }
            *(_DWORD *)(v14 + 0xB8) = v15;
            if ( v15 )
            {
              InterlockedIncrement((volatile LONG *)(v15 + 4));
              v2 = this;
            }
          }
          v13 = ++v19;
        }
        while ( v19 < v12[2] );
        v4 = a2;
      }
    }
  }
  *(_DWORD *)(v2 + 0x3C) = v4;
  return 1;
}
