unsigned int __cdecl __sbh_alloc_new_group(_DWORD *a1)
{
  int v1; // eax
  int v2; // esi
  int v3; // ebx
  int v4; // eax
  int v5; // edx
  _DWORD *v6; // edi
  _DWORD *v8; // edx
  _DWORD *v9; // eax
  int v10; // ecx
  DWORD v12; // [esp+0h] [ebp-14h]

  v1 = a1[2];
  v2 = a1[4];
  v3 = 0;
  while ( v1 >= 0 )
  {
    v1 *= 2;
    ++v3;
  }
  v4 = 0x204 * v3 + v2 + 0x144;
  v5 = 0x3F;
  do
  {
    *(_DWORD *)(v4 + 8) = v4;
    *(_DWORD *)(v4 + 4) = v4;
    v4 += 8;
    --v5;
  }
  while ( v5 );
  v6 = (_DWORD *)(a1[3] + (v3 << 0xF));
  if ( !VirtualAlloc(v6, 0x100000008000uLL, 4u, v12) )
    return 0xFFFFFFFF;
  v8 = v6 + 0x1C00;
  if ( v6 < v6 + 0x1C00 )
  {
    v9 = v6 + 4;
    v10 = 8;
    do
    {
      v9[0xFFFFFFFE] = 0xFFFFFFFF;
      v9[0x3FB] = 0xFFFFFFFF;
      *v9 = v9 + 0x3FF;
      v9[0xFFFFFFFF] = 0xFF0;
      v9[1] = v9 + 0xFFFFFBFF;
      v9[0x3FA] = 0xFF0;
      v9 += 0x400;
      --v10;
    }
    while ( v10 );
    v8 = v6 + 0x1C00;
  }
  *(_DWORD *)(0x204 * v3 + v2 + 0x340) = v6 + 3;
  v6[5] = 0x204 * v3 + v2 + 0x33C;
  *(_DWORD *)(0x204 * v3 + v2 + 0x344) = v8 + 3;
  v8[4] = 0x204 * v3 + v2 + 0x33C;
  *(_DWORD *)(v2 + 4 * v3 + 0x44) = 0;
  *(_DWORD *)(v2 + 4 * v3 + 0xC4) = 1;
  if ( (*(_BYTE *)(v2 + 0x43))++ == 0 )
    a1[1] |= 1u;
  a1[2] &= ~(0x80000000 >> v3);
  return v3;
}
