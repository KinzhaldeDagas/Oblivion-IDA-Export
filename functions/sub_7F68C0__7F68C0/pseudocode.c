int __stdcall sub_7F68C0(unsigned __int16 a1, char a2, int a3, int a4, int a5)
{
  int v5; // ebx
  int v6; // ebp
  char v7; // si
  UInt32 *v8; // edi
  UInt32 v9; // edx
  int v10; // eax
  bool v11; // al
  int v12; // eax
  bool v13; // al
  UInt32 v14; // edx
  int v15; // eax
  bool v16; // al
  int v17; // edx
  char v18; // cl
  int *v19; // esi
  int v20; // ebp
  int v21; // eax
  bool v22; // al
  int v24; // [esp+10h] [ebp-4h]
  int v25; // [esp+18h] [ebp+4h]
  int v26; // [esp+18h] [ebp+4h]

  v5 = dword_B43B20[a1];
  v6 = a1;
  v25 = dword_B43490[v6];
  v7 = 2;
  v8 = &dword_B4501C;
  v24 = 9;
  do
  {
    v9 = v8[0xFFFFFFFF];
    if ( v9 )
    {
      v10 = 1 << (v7 - 1);
      if ( (v10 & v5) != 0 && (v10 & v25) == 0 )
      {
        v11 = !a2 || (v10 & a3) != 0;
        *(_BYTE *)(v9 + 8) = v11;
      }
    }
    if ( *v8 )
    {
      v12 = 1 << v7;
      if ( ((1 << v7) & v5) != 0 && (v12 & v25) == 0 )
      {
        v13 = !a2 || (v12 & a3) != 0;
        *(_BYTE *)(*v8 + 8) = v13;
      }
    }
    v14 = v8[1];
    if ( v14 )
    {
      v15 = 1 << (v7 + 1);
      if ( (v15 & v5) != 0 && (v15 & v25) == 0 )
      {
        v16 = !a2 || (v15 & a3) != 0;
        *(_BYTE *)(v14 + 8) = v16;
      }
    }
    v7 += 3;
    v8 += 3;
    --v24;
  }
  while ( v24 );
  (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(a5 + 0x30) + 0x48))(*(_DWORD *)(a5 + 0x30));
  v17 = dword_B441B0[v6];
  v26 = dword_B44840[v6];
  v18 = 1;
  v19 = dword_B45518;
  v20 = 0x11;
  do
  {
    if ( *v19 )
    {
      v21 = 1 << v18;
      if ( ((1 << v18) & v17) != 0 && (v21 & v26) == 0 )
      {
        v22 = !a2 || (v21 & a4) != 0;
        *(_BYTE *)(*v19 + 8) = v22;
      }
    }
    ++v18;
    ++v19;
    --v20;
  }
  while ( v20 );
  return (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(a5 + 0x2C) + 0x48))(*(_DWORD *)(a5 + 0x2C));
}
