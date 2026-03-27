int __userpurge sub_8D3690@<eax>(int a1@<ecx>, int a2@<ebx>, int a3, int a4)
{
  int result; // eax
  int v6; // ebx
  int v7; // esi
  int v8; // ebp
  int v9; // ebx
  int v10; // esi
  unsigned int v11; // ecx
  _DWORD *v12; // esi
  int v13; // ebp
  int v14; // eax
  int v15; // edx
  int v16; // eax
  int v17; // esi
  int v18; // eax
  int v19; // eax
  int v20; // ecx
  int v21; // eax
  _DWORD *v22; // edx
  int v23; // ebp
  bool v24; // cc
  int v25; // [esp+4h] [ebp-30h]
  int v26; // [esp+8h] [ebp-2Ch]
  int v27; // [esp+Ch] [ebp-28h]
  char *v28[3]; // [esp+10h] [ebp-24h] BYREF
  __int16 v29; // [esp+1Ch] [ebp-18h] BYREF
  int v30; // [esp+20h] [ebp-14h]
  int v31; // [esp+24h] [ebp-10h]
  int v32; // [esp+28h] [ebp-Ch]
  int v33; // [esp+30h] [ebp-4h]

  result = *(_DWORD *)(a1 + 0x18);
  if ( result )
  {
    sub_8B0E10(v28, a2);
    v6 = a4;
    sub_8B15C0(v28, a4);
    v7 = 0;
    if ( v6 > 0 )
    {
      v8 = a3;
      do
        sub_8B0E80(v28, *(_DWORD *)(v8 + 4 * v7++), 0);
      while ( v7 < v6 );
    }
    v9 = 0;
    v25 = 0;
    if ( *(int *)(a1 + 0x18) > 0 )
    {
      v26 = 0;
      do
      {
        v10 = *(_DWORD *)(a1 + 0x14);
        v11 = *(_DWORD *)(v10 + v9 + 4);
        v12 = (_DWORD *)(v9 + v10);
        v13 = sub_8B0F00((int *)v28, v11);
        v27 = sub_8B0F00((int *)v28, v12[2]);
        if ( *sub_8B0D80(v28, (bool *)&a4, v13) || *sub_8B0D80(v28, (bool *)&a3, v27) )
        {
          v14 = v12[1];
          v15 = v12[6];
          v32 = v12[2];
          v29 = 0xFFFF;
          v30 = 0;
          v31 = v14;
          v33 = v15;
          sub_8DC920(v14, *(_DWORD *)(v14 + 8), (int)&v29);
          v16 = v12[1];
          if ( *(_DWORD *)(v16 + 0x98) )
            sub_8DC0A0(v16, v16, (int)&v29);
          v17 = v12[2];
          v18 = *(_DWORD *)(v17 + 0x98);
          if ( v18 )
            sub_8DC0A0(v18, v17, (int)&v29);
          v19 = *(_DWORD *)(a1 + 0x14);
          v20 = v19 + (--*(_DWORD *)(a1 + 0x18) << 6);
          v21 = v9 + v19;
          *(_DWORD *)v21 = *(_DWORD *)v20;
          v22 = (_DWORD *)(v21 + 4);
          v23 = 2;
          do
          {
            *v22 = *(_DWORD *)((char *)v22 + v20 - v21);
            ++v22;
            --v23;
          }
          while ( v23 );
          *(_DWORD *)(v21 + 0xC) = *(_DWORD *)(v20 + 0xC);
          *(_DWORD *)(v21 + 0x10) = *(_DWORD *)(v20 + 0x10);
          *(_DWORD *)(v21 + 0x14) = *(_DWORD *)(v20 + 0x14);
          *(_DWORD *)(v21 + 0x18) = *(_DWORD *)(v20 + 0x18);
          *(_OWORD *)(v21 + 0x20) = *(_OWORD *)(v20 + 0x20);
          *(_OWORD *)(v21 + 0x30) = *(_OWORD *)(v20 + 0x30);
          --v25;
          v9 = v26 - 0x40;
        }
        v9 += 0x40;
        v24 = ++v25 < *(_DWORD *)(a1 + 0x18);
        v26 = v9;
      }
      while ( v24 );
    }
    return sub_8B0E60(v28);
  }
  return result;
}
