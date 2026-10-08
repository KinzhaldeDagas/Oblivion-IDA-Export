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

  result = *(_DWORD *)(a1 + 0x18); /*0x8d3696*/
  if ( result ) /*0x8d369b*/
  {
    sub_8B0E10(v28, a2); /*0x8d36a8*/
    v6 = a4; /*0x8d36ad*/
    sub_8B15C0(v28, a4); /*0x8d36b6*/
    v7 = 0; /*0x8d36bb*/
    if ( v6 > 0 ) /*0x8d36bf*/
    {
      v8 = a3; /*0x8d36c1*/
      do /*0x8d36d8*/
        sub_8B0E80(v28, *(_DWORD *)(v8 + 4 * v7++), 0); /*0x8d36d0*/
      while ( v7 < v6 ); /*0x8d36d8*/
    }
    v9 = 0; /*0x8d36dd*/
    v25 = 0; /*0x8d36e1*/
    if ( *(int *)(a1 + 0x18) > 0 ) /*0x8d36e5*/
    {
      v26 = 0; /*0x8d36eb*/
      do /*0x8d382c*/
      {
        v10 = *(_DWORD *)(a1 + 0x14); /*0x8d36f0*/
        v11 = *(_DWORD *)(v10 + v9 + 4); /*0x8d36f3*/
        v12 = (_DWORD *)(v9 + v10); /*0x8d36f7*/
        v13 = sub_8B0F00((int *)v28, v11); /*0x8d370b*/
        v27 = sub_8B0F00((int *)v28, v12[2]); /*0x8d3712*/
        if ( *sub_8B0D80(v28, (bool *)&a4, v13) || *sub_8B0D80(v28, (bool *)&a3, v27) ) /*0x8d373d*/
        {
          v14 = v12[1]; /*0x8d3749*/
          v15 = v12[6]; /*0x8d374c*/
          v32 = v12[2]; /*0x8d374f*/
          v29 = 0xFFFF; /*0x8d3757*/
          v30 = 0; /*0x8d375e*/
          v31 = v14; /*0x8d3766*/
          v33 = v15; /*0x8d376a*/
          sub_8DC920(v14, *(_DWORD *)(v14 + 8), (int)&v29); /*0x8d3773*/
          v16 = v12[1]; /*0x8d3778*/
          if ( *(_DWORD *)(v16 + 0x98) ) /*0x8d377b*/
            sub_8DC0A0(v16, v16, (int)&v29); /*0x8d378e*/
          v17 = v12[2]; /*0x8d3796*/
          v18 = *(_DWORD *)(v17 + 0x98); /*0x8d3799*/
          if ( v18 ) /*0x8d37a1*/
            sub_8DC0A0(v18, v17, (int)&v29); /*0x8d37a9*/
          v19 = *(_DWORD *)(a1 + 0x14); /*0x8d37b4*/
          v20 = v19 + (--*(_DWORD *)(a1 + 0x18) << 6); /*0x8d37bd*/
          v21 = v9 + v19; /*0x8d37c4*/
          *(_DWORD *)v21 = *(_DWORD *)v20; /*0x8d37c8*/
          v22 = (_DWORD *)(v21 + 4); /*0x8d37ca*/
          v23 = 2; /*0x8d37cf*/
          do /*0x8d37dd*/
          {
            *v22 = *(_DWORD *)((char *)v22 + v20 - v21); /*0x8d37d7*/
            ++v22; /*0x8d37d9*/
            --v23; /*0x8d37dc*/
          }
          while ( v23 ); /*0x8d37dd*/
          *(_DWORD *)(v21 + 0xC) = *(_DWORD *)(v20 + 0xC); /*0x8d37e6*/
          *(_DWORD *)(v21 + 0x10) = *(_DWORD *)(v20 + 0x10); /*0x8d37ec*/
          *(_DWORD *)(v21 + 0x14) = *(_DWORD *)(v20 + 0x14); /*0x8d37f2*/
          *(_DWORD *)(v21 + 0x18) = *(_DWORD *)(v20 + 0x18); /*0x8d37f8*/
          *(_OWORD *)(v21 + 0x20) = *(_OWORD *)(v20 + 0x20); /*0x8d37ff*/
          *(_OWORD *)(v21 + 0x30) = *(_OWORD *)(v20 + 0x30); /*0x8d380c*/
          --v25; /*0x8d3810*/
          v9 = v26 - 0x40; /*0x8d3814*/
        }
        v9 += 0x40; /*0x8d381f*/
        v24 = ++v25 < *(_DWORD *)(a1 + 0x18); /*0x8d3822*/
        v26 = v9; /*0x8d3828*/
      }
      while ( v24 ); /*0x8d382c*/
    }
    return sub_8B0E60(v28); /*0x8d3836*/
  }
  return result; /*0x8d383e*/
}
