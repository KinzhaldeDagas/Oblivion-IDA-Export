_BYTE *__thiscall sub_927F00(_DWORD *this, _BYTE *a2, int a3, int a4)
{
  int v4; // ebp
  int v5; // esi
  int v6; // eax
  _DWORD *v8; // edi
  int v9; // ebx
  int v10; // ebp
  int v11; // eax
  int v12; // esi

  if ( *(_BYTE *)(a3 + 0x18) == 1 )
    v4 = a3 + *(_DWORD *)(a3 + 0x10);
  else
    v4 = 0;
  if ( *(_BYTE *)(a4 + 0x18) == 1 )
    v5 = a4 + *(_DWORD *)(a4 + 0x10);
  else
    v5 = 0;
  v6 = *(this + 4);
  if ( !v6 || *(_BYTE *)(**(int (__thiscall ***)(int, int *, int, int))(v6 + 8))(v6 + 8, &a3, a3, a4) )
  {
    if ( v4 && v5 )
    {
      if ( *(_DWORD *)(v4 + 0x6C) + *(_DWORD *)(v4 + 0x78) <= *(_DWORD *)(v5 + 0x6C) + *(_DWORD *)(v5 + 0x78) )
      {
        v8 = (_DWORD *)v4;
        a4 = v5;
      }
      else
      {
        v8 = (_DWORD *)v5;
        a4 = v4;
      }
      v9 = v8[0x1B] + v8[0x1E];
      v10 = 0;
      if ( v9 <= 0 )
      {
LABEL_25:
        *a2 = 1;
        return a2;
      }
      else
      {
        a3 = 0;
        while ( 1 )
        {
          v11 = v8[0x1B];
          v12 = v10 >= v11 ? *(_DWORD *)(v8[0x1D] + 4 * (v10 - v11)) : *(_DWORD *)(a3 + v8[0x1A]);
          if ( v12
            && (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(v12 + 0xC) + 0xC))(*(_DWORD *)(v12 + 0xC)) != 0xB
            && (*(_DWORD *)(v12 + 0x10) == a4 || *(_DWORD *)(v12 + 0x14) == a4) )
          {
            break;
          }
          ++v10;
          a3 += 0x1C;
          if ( v10 >= v9 )
            goto LABEL_25;
        }
        *a2 = 0;
        return a2;
      }
    }
    else
    {
      *a2 = 1;
      return a2;
    }
  }
  else
  {
    *a2 = 0;
    return a2;
  }
}
