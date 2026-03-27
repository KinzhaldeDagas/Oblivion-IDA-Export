char __cdecl sub_50FF70(int a1, int a2, int a3)
{
  int v7; // edi
  int v8; // eax
  int v9; // esi
  int v10; // edx
  unsigned int v11; // ecx
  unsigned int v12; // eax
  unsigned int i; // ebp
  int j; // eax
  int v15; // ecx
  int v16; // edi
  int v17; // eax
  char v18; // al
  int v19; // eax
  unsigned int k; // edi
  int m; // eax
  int v22; // ecx

  if ( !a3 || !(*(int (__thiscall **)(int))(*(_DWORD *)a3 + 0x154))(a3) )
  {
    Interface_ConsolePrint("Must supply a valid reference to show viewer string.");
    return 1;
  }
  v7 = (*(int (__thiscall **)(int))(*(_DWORD *)a3 + 0x154))(a3);
  v8 = FormHeapAlloc(0x10u);
  if ( v8 )
  {
    *(_DWORD *)v8 = &NiTArray<char *>::`vftable';
    *(_WORD *)(v8 + 8) = 0;
    *(_WORD *)(v8 + 0xE) = 1;
    *(_WORD *)(v8 + 0xA) = 0;
    *(_WORD *)(v8 + 0xC) = 0;
    *(_DWORD *)(v8 + 4) = 0;
    v9 = v8;
  }
  else
  {
    v9 = 0;
  }
  if ( !v7 )
    goto LABEL_15;
  if ( (*(int (__thiscall **)(int))(*(_DWORD *)v7 + 8))(v7) )
  {
    v10 = v7;
    v11 = *(unsigned __int16 *)(v7 + 0xB6);
    v7 = 0;
    v12 = 0;
    if ( v11 )
    {
      while ( !v7 )
      {
        if ( v11 > v12 )
          v7 = *(_DWORD *)(*(_DWORD *)(v10 + 0xB0) + 4 * v12);
        else
          v7 = 0;
        if ( ++v12 >= v11 )
          goto LABEL_14;
      }
      goto LABEL_16;
    }
LABEL_15:
    Interface_ConsolePrint("Node with no children supplied as reference...");
    return 1;
  }
LABEL_14:
  if ( !v7 )
    goto LABEL_15;
LABEL_16:
  (*(void (__thiscall **)(int, int))(*(_DWORD *)v7 + 0x30))(v7, v9);
  for ( i = 0; i < *(unsigned __int16 *)(v9 + 0xA); Interface_ConsolePrint(*(char **)(*(_DWORD *)(v9 + 4) + 4 * i++)) )
    ;
  for ( j = 0; (unsigned __int16)j < *(_WORD *)(v9 + 0xA); *(_DWORD *)(*(_DWORD *)(v9 + 4) + 4 * v15) = 0 )
    v15 = (unsigned __int16)j++;
  *(_WORD *)(v9 + 0xA) = 0;
  *(_WORD *)(v9 + 0xC) = 0;
  v16 = *(_DWORD *)(v7 + 0xA8);
  if ( v16 )
  {
    v17 = (*(int (__thiscall **)(int))(*(_DWORD *)v16 + 4))(v16);
    if ( v17 )
    {
      while ( (char *)v17 != dword_BA7D24 )
      {
        v17 = *(_DWORD *)(v17 + 4);
        if ( !v17 )
          goto LABEL_24;
      }
      v18 = 1;
    }
    else
    {
LABEL_24:
      v18 = 0;
    }
    v19 = v18 != 0 ? v16 : 0;
    if ( v19 )
    {
      (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(v19 + 0x10) + 0x30))(*(_DWORD *)(v19 + 0x10), v9);
      for ( k = 0; k < *(unsigned __int16 *)(v9 + 0xA); Interface_ConsolePrint(*(char **)(*(_DWORD *)(v9 + 4) + 4 * k++)) )
        ;
      for ( m = 0; (unsigned __int16)m < *(_WORD *)(v9 + 0xA); *(_DWORD *)(*(_DWORD *)(v9 + 4) + 4 * v22) = 0 )
        v22 = (unsigned __int16)m++;
      *(_WORD *)(v9 + 0xA) = 0;
      *(_WORD *)(v9 + 0xC) = 0;
    }
  }
  (**(void (__thiscall ***)(int, int))v9)(v9, 1);
  return 1;
}
