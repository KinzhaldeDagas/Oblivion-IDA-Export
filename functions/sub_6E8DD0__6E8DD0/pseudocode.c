char __thiscall sub_6E8DD0(int this, int a2)
{
  int v2; // edx
  unsigned int v3; // eax
  int v4; // edi
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

  v2 = this; /*0x6e8dd3*/
  v3 = *(_DWORD *)(this + 0x40); /*0x6e8dd5*/
  if ( !v3 ) /*0x6e8ddf*/
    return 0; /*0x6e8ddf*/
  v4 = a2; /*0x6e8de5*/
  if ( *(_DWORD *)(this + 0x3C) == a2 || a2 != 0xFFFFFFFF && (a2 <= (int)0xFFFFFFFF || a2 >= v3) ) /*0x6e8dff*/
    return 0; /*0x6e8f30*/
  v5 = 0; /*0x6e8e07*/
  v6 = 0; /*0x6e8e09*/
  if ( *(_WORD *)(this + 0x4E) ) /*0x6e8e0b*/
  {
    do /*0x6e8e5b*/
    {
      v7 = *(_DWORD **)(*(_DWORD *)(v2 + 0x48) + 4 * v5); /*0x6e8e15*/
      if ( v7 ) /*0x6e8e1a*/
      {
        if ( v5 == v4 ) /*0x6e8e1e*/
          v6 = 1; /*0x6e8e20*/
        v8 = 0; /*0x6e8e22*/
        if ( v7[2] ) /*0x6e8e24*/
        {
          do /*0x6e8e4c*/
          {
            v9 = *(_DWORD *)(*v7 + 4 * v8); /*0x6e8e34*/
            if ( v6 ) /*0x6e8e37*/
              *(_WORD *)(v9 + 0x18) |= 2u; /*0x6e8e39*/
            else
              *(_WORD *)(v9 + 0x18) &= ~2u; /*0x6e8e40*/
            ++v8; /*0x6e8e46*/
          }
          while ( v8 < v7[2] ); /*0x6e8e4c*/
          v4 = a2; /*0x6e8e4e*/
        }
      }
      ++v5; /*0x6e8e56*/
    }
    while ( v5 < *(unsigned __int16 *)(v2 + 0x4E) ); /*0x6e8e5b*/
  }
  for ( i = 0; i < *(_DWORD *)(v2 + 0x6C); *(_WORD *)(v11 + 0x18) = *(_WORD *)(v11 + 0x18) & 0xFFFC | 1 ) /*0x6e8e5f*/
    v11 = *(_DWORD *)(*(_DWORD *)(v2 + 0x64) + 4 * i++); /*0x6e8e67*/
  if ( v4 != 0xFFFFFFFF ) /*0x6e8e86*/
  {
    v12 = *(_DWORD **)(*(_DWORD *)(v2 + 0x58) + 4 * v4); /*0x6e8e8f*/
    if ( v12 ) /*0x6e8e94*/
    {
      v13 = 0; /*0x6e8e9a*/
      v19 = 0; /*0x6e8e9f*/
      if ( v12[2] ) /*0x6e8e9c*/
      {
        do /*0x6e8f1b*/
        {
          v14 = **(_DWORD **)(*v12 + 4 * v13); /*0x6e8eab*/
          *(_WORD *)(v14 + 0x18) = *(_WORD *)(v14 + 0x18) & 0xFFFC | 2; /*0x6e8eba*/
          v15 = *(_DWORD *)(*(_DWORD *)(*v12 + 4 * v13) + 4); /*0x6e8ec4*/
          v16 = *(_DWORD *)(v14 + 0xB8); /*0x6e8ec7*/
          if ( v16 != v15 ) /*0x6e8ecf*/
          {
            if ( v16 ) /*0x6e8ed3*/
            {
              if ( !InterlockedDecrement((volatile LONG *)(v16 + 4)) ) /*0x6e8ed9*/
                (**(void (__thiscall ***)(int, int))v16)(v16, 1); /*0x6e8eef*/
              v2 = this; /*0x6e8ef1*/
            }
            *(_DWORD *)(v14 + 0xB8) = v15; /*0x6e8ef7*/
            if ( v15 ) /*0x6e8efd*/
            {
              InterlockedIncrement((volatile LONG *)(v15 + 4)); /*0x6e8f03*/
              v2 = this; /*0x6e8f09*/
            }
          }
          v13 = ++v19; /*0x6e8f11*/
        }
        while ( v19 < v12[2] ); /*0x6e8f1b*/
        v4 = a2; /*0x6e8f1d*/
      }
    }
  }
  *(_DWORD *)(v2 + 0x3C) = v4; /*0x6e8f24*/
  return 1; /*0x6e8f29*/
}
