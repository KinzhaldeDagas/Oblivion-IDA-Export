int __cdecl sub_6BE6B0(int a1, int a2)
{
  int v3; // ecx
  int *v4; // edi
  int v5; // edx
  unsigned __int8 *v6; // ebp
  int result; // eax
  unsigned int v8; // ebx
  unsigned int v9; // esi
  int v10; // [esp+10h] [ebp-Ch]
  int v11; // [esp+14h] [ebp-8h]
  int (__cdecl *v12)(unsigned int, unsigned int); // [esp+18h] [ebp-4h]
  _DWORD *v13; // [esp+20h] [ebp+4h]
  int v14; // [esp+24h] [ebp+8h]

  v13 = (_DWORD *)(a1 + 0x30);
  v3 = a1 - a2;
  v4 = (int *)(a2 + 0x20);
  v5 = a2 - a1;
  v6 = (unsigned __int8 *)(a1 + 0x2C);
  v14 = a1 - a2;
  v11 = v5;
  v10 = 3;
  do
  {
    *(int *)((char *)v4 + v3 - 0xC) = v4[0xFFFFFFFD];
    result = *v4;
    *(int *)((char *)v4 + v3) = *v4;
    v8 = v4[0xFFFFFFFD];
    if ( v8 )
    {
      *v13 = (*(int (__cdecl **)(int))(4 * *v4 + 0xB3D358))(v4[0xFFFFFFFD]);
      v9 = 0;
      v12 = *(int (__cdecl **)(unsigned int, unsigned int))(4 * *v4 + 0xB3D530);
      do
      {
        result = v12(*v13 + v9 * *v6, v4[4] + v9 * v6[v11]);
        ++v9;
      }
      while ( v9 < v8 );
      v3 = v14;
    }
    ++v13;
    ++v4;
    ++v6;
    --v10;
  }
  while ( v10 );
  return result;
}
