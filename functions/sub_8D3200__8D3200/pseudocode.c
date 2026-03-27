int __cdecl sub_8D3200(int *a1, _DWORD *a2, _DWORD *a3)
{
  int *v3; // edx
  int result; // eax
  _DWORD *v5; // edi
  int v6; // ebx
  int v7; // esi
  int v8; // eax
  int v9; // ebp
  int v10; // eax
  int v11; // ecx
  int v12; // edx
  int *v13; // eax
  int *v14; // ecx
  int v15; // edx
  int v16; // edi
  int v17; // [esp+8h] [ebp-10h]
  int v18; // [esp+14h] [ebp-4h]

  v3 = a1;
  result = a1[1];
  v5 = a2;
  v6 = *a2;
  v17 = *a2;
  if ( *a2 < result )
  {
    v7 = 0xC * v6;
    do
    {
      v8 = *(_DWORD *)(*(_DWORD *)(*v3 + v7) + 0x24);
      v9 = *(unsigned __int16 *)(*(_DWORD *)(v8 + 4) + 0x8C);
      v10 = v8 + 4;
      if ( *(_BYTE *)(*a3 + v9) == 8 && *(_BYTE *)(*(unsigned __int16 *)(*(_DWORD *)(v10 + 4) + 0x8C) + *a3) == 8 )
      {
        v11 = (*v5)++;
        v12 = *v3;
        v13 = (int *)(v7 + v12);
        v14 = (int *)(v12 + 0xC * v11);
        v15 = *v14;
        v16 = v14[1];
        v18 = v14[2];
        *v14 = *v13;
        v14[1] = v13[1];
        v14[2] = v13[2];
        v6 = v17;
        *v13 = v15;
        v13[1] = v16;
        v5 = a2;
        v13[2] = v18;
        v3 = a1;
      }
      result = v3[1];
      ++v6;
      v7 += 0xC;
      v17 = v6;
    }
    while ( v6 < result );
  }
  return result;
}
