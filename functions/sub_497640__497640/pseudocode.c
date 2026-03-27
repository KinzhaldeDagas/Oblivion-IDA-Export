char __thiscall sub_497640(unsigned __int8 *this, int a2, _DWORD *a3)
{
  unsigned __int8 *v3; // edi
  int v4; // eax
  _WORD *v5; // ebp
  int v6; // eax
  int v7; // eax
  int v8; // eax
  int v9; // ecx
  int v10; // eax
  void (__thiscall *v12)(_WORD *, int, _DWORD); // edx
  unsigned int v13; // ebp
  unsigned int i; // esi
  int v15; // ecx
  int v16; // eax
  char v17; // [esp+1Fh] [ebp-29h]
  float v19[9]; // [esp+24h] [ebp-24h] BYREF

  v3 = this;
  v17 = 1;
  if ( a2 && *a3 < (unsigned int)*this )
  {
    v4 = sub_497420(a2);
    v5 = (_WORD *)v4;
    if ( v4 )
    {
      v6 = *(_DWORD *)(v4 + 0x10);
      if ( v6 && (v7 = *(_DWORD *)(v6 + 8)) != 0 && (v8 = v7 + 0x14) != 0 )
        v9 = *(_DWORD *)(v8 + 0x1C);
      else
        BYTE1(v9) = 0;
      v10 = *((_DWORD *)v3 + 1) + 0x1C * *a3;
      if ( *(_BYTE *)v10 != (BYTE1(v9) & 0x1F) )
        return 0;
      *(_DWORD *)(a2 + 0x54) = *(_DWORD *)(v10 + 4);
      *(_DWORD *)(a2 + 0x58) = *(_DWORD *)(v10 + 8);
      *(_DWORD *)(a2 + 0x5C) = *(_DWORD *)(v10 + 0xC);
      sub_711580(
        v19,
        *(float *)(*((_DWORD *)v3 + 1) + 0x1C * *a3 + 0x10),
        *(float *)(*((_DWORD *)v3 + 1) + 0x1C * *a3 + 0x14),
        *(float *)(*((_DWORD *)v3 + 1) + 0x1C * *a3 + 0x18));
      qmemcpy((void *)(a2 + 0x30), v19, 0x24u);
      v12 = *(void (__thiscall **)(_WORD *, int, _DWORD))(*(_DWORD *)v5 + 0x70);
      v5[6] |= 0x40u;
      v12(v5, 1, 0);
      ++*a3;
      v3 = this;
    }
    (*(void (__thiscall **)(int))(*(_DWORD *)a2 + 0x74))(a2);
    v13 = *(unsigned __int16 *)(a2 + 0xB6);
    for ( i = 0; i < v13; ++i )
    {
      if ( *(unsigned __int16 *)(a2 + 0xB6) > i )
      {
        v15 = *(_DWORD *)(*(_DWORD *)(a2 + 0xB0) + 4 * i);
        if ( v15 )
        {
          v16 = (*(int (__thiscall **)(int))(*(_DWORD *)v15 + 8))(v15);
          if ( v16 )
          {
            if ( !sub_497640(v3, v16, a3) )
              v17 = 0;
          }
        }
      }
      if ( *a3 >= (unsigned int)*v3 )
        break;
    }
  }
  return v17;
}
