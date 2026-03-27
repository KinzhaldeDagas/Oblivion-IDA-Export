void __cdecl sub_88AB60(int a1, int a2)
{
  int v2; // eax
  char v3; // al
  int v4; // ecx
  int v5; // esi
  int v6; // eax
  _DWORD *v7; // ecx
  int v8; // eax
  int v9; // eax
  int v10; // eax
  int v11; // esi
  int v12; // eax
  _DWORD *v13; // ecx
  int v14; // edx
  int v15; // edx
  int v16; // esi
  int v17; // eax

  if ( a1 )
  {
    v2 = (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 4))(a1);
    if ( v2 )
    {
      while ( (char *)v2 != dword_BA7A20 )
      {
        v2 = *(_DWORD *)(v2 + 4);
        if ( !v2 )
          goto LABEL_5;
      }
      v3 = 1;
    }
    else
    {
LABEL_5:
      v3 = 0;
    }
    v4 = v3 != 0 ? a1 : 0;
    if ( v4 )
    {
      if ( *(_DWORD *)(a2 + 0xC) )
      {
        v5 = v3 != 0 ? a1 : 0;
        v6 = *(_DWORD *)(v4 + 0x24);
        *(_DWORD *)(v4 + 0x24) = v6 + 1;
        if ( !v6 )
        {
          if ( dword_BA7A8C != 3 )
          {
            if ( (*(_BYTE *)(v4 + 0xC) & 0x40) != 0 )
            {
              if ( dword_BA7A8C != 2 )
              {
                sub_89EAE0((_DWORD *)v4);
                *(_WORD *)(v5 + 0xC) &= ~0x40u;
              }
            }
            else if ( (*(_BYTE *)(v4 + 0xC) & 1) != 0 )
            {
              (*(void (__thiscall **)(int, int))(*(_DWORD *)v4 + 0x64))(v4, a1);
            }
          }
          v7 = *(_DWORD **)(v5 + 0x10);
          if ( v7 )
          {
            v8 = v7[2];
            if ( v8 && (v9 = v8 + 0x14) != 0 )
              v10 = *(_DWORD *)(v9 + 0x1C);
            else
              LOBYTE(v10) = 0;
            if ( (v10 & 0x3F) == 8 )
            {
              v11 = *(_DWORD *)(v5 + 0x20);
              if ( v11 )
                (*(void (__thiscall **)(_DWORD *, int))(*v7 + 0x5C))(v7, v11);
            }
          }
        }
      }
      else
      {
        v12 = v3 != 0 ? a1 : 0;
        if ( (int)--*(_DWORD *)(v4 + 0x24) <= 0 )
        {
          v13 = *(_DWORD **)(v4 + 0x10);
          *(_DWORD *)(v12 + 0x24) = 0;
          if ( v13 )
          {
            v14 = v13[2];
            if ( v14 && (v15 = v14 + 0x14) != 0 )
              v16 = *(_DWORD *)(v15 + 0x1C);
            else
              LOBYTE(v16) = 0;
            if ( (v16 & 0x3F) == 8 )
            {
              v17 = *(_DWORD *)(v12 + 0x20);
              if ( v17 )
                (*(void (__thiscall **)(_DWORD *, int))(*v13 + 0x5C))(v13, v17);
            }
          }
        }
      }
    }
  }
}
