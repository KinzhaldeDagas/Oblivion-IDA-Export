int __cdecl sub_8D3140(_DWORD *a1, _DWORD *a2, int a3)
{
  _DWORD *v3; // edi
  int result; // eax
  int v5; // ecx
  _DWORD *v6; // edx
  int v7; // esi
  int v8; // eax
  int v9; // ebx
  int v10; // eax
  int v11; // ecx
  int *v12; // eax
  int *v13; // ecx
  int v14; // edx
  int v15; // edi
  int v16; // [esp+10h] [ebp-4h]
  int v17; // [esp+20h] [ebp+Ch]

  v3 = a1;
  result = a1[1];
  v17 = result - a3;
  v5 = v17;
  if ( v17 < result )
  {
    v6 = a2;
    v7 = 0xC * v17;
    do
    {
      v8 = *(_DWORD *)(*(_DWORD *)(*v3 + v7) + 0x24);
      v9 = *(_DWORD *)(v8 + 4);
      v10 = v8 + 4;
      if ( *(_BYTE *)(v9 + 0x92) || *(_BYTE *)(*(_DWORD *)(v10 + 4) + 0x92) )
      {
        v11 = (*v6)++;
        v12 = (int *)(v7 + *v3);
        v13 = (int *)(*v3 + 0xC * v11);
        v14 = *v13;
        v15 = v13[1];
        v16 = v13[2];
        *v13 = *v12;
        v13[1] = v12[1];
        v13[2] = v12[2];
        v5 = v17;
        *v12 = v14;
        v12[1] = v15;
        v3 = a1;
        v12[2] = v16;
        v6 = a2;
      }
      result = v3[1];
      ++v5;
      v7 += 0xC;
      v17 = v5;
    }
    while ( v5 < result );
  }
  return result;
}
