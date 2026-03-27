int __cdecl sub_92CAB0(int a1, int a2, int a3, int (__cdecl *a4)(char *, int, int *))
{
  int (__cdecl *v4)(char *, int, int *); // ebx
  int v5; // esi
  int v6; // edi
  _DWORD *v7; // edx
  int v8; // ecx
  int v9; // eax
  int v10; // ecx
  int v11; // edx
  int *i; // eax
  int *j; // eax
  int *v14; // eax
  int v15; // ebx
  int *v16; // ecx
  int v17; // edx
  int v18; // eax
  int v19; // edx
  int v20; // eax
  int result; // eax
  char v22; // [esp+1Ah] [ebp-46h] BYREF
  char v23; // [esp+1Bh] [ebp-45h] BYREF
  int *v24; // [esp+1Ch] [ebp-44h]
  int v25; // [esp+20h] [ebp-40h]
  int v26; // [esp+24h] [ebp-3Ch]
  int v27; // [esp+28h] [ebp-38h]
  int v28; // [esp+2Ch] [ebp-34h]
  int v29; // [esp+30h] [ebp-30h]
  _DWORD v30[8]; // [esp+40h] [ebp-20h] BYREF

  v4 = a4;
  while ( 1 )
  {
    v5 = a3;
    v6 = a2;
    v7 = (_DWORD *)(a1 + 0x14 * ((a2 + a3) >> 1));
    v8 = v7[1];
    v30[0] = *v7;
    v9 = v7[2];
    v30[1] = v8;
    v10 = v7[3];
    v11 = v7[4];
    v30[2] = v9;
    v30[3] = v10;
    v30[4] = v11;
    do
    {
      v24 = (int *)(a1 + 0x14 * v6);
      if ( *(_BYTE *)v4(&v22, (int)v24, v30) )
      {
        for ( i = v24; ; i = v24 )
        {
          ++v6;
          v24 = i + 5;
          if ( !*(_BYTE *)v4(&v22, (int)(i + 5), v30) )
            break;
        }
      }
      v24 = (int *)(a1 + 0x14 * v5);
      if ( *(_BYTE *)v4(&v23, (int)v30, v24) )
      {
        for ( j = v24; ; j = v24 )
        {
          --v5;
          v24 = j + 0xFFFFFFFB;
          if ( !*(_BYTE *)v4(&v23, (int)v30, j + 0xFFFFFFFB) )
            break;
        }
      }
      if ( v5 < v6 )
        break;
      if ( v5 != v6 )
      {
        v14 = (int *)(a1 + 0x14 * v5);
        v25 = *v14;
        v26 = v14[1];
        v27 = v14[2];
        v15 = v14[3];
        v29 = v14[4];
        v16 = (int *)(a1 + 0x14 * v6);
        v28 = v15;
        *v14 = *v16;
        v14[1] = v16[1];
        v14[2] = v16[2];
        v14[3] = v16[3];
        v4 = a4;
        v14[4] = v16[4];
        v17 = v26;
        *v16 = v25;
        v18 = v27;
        v16[1] = v17;
        v19 = v28;
        v16[2] = v18;
        v20 = v29;
        v16[3] = v19;
        v16[4] = v20;
      }
      --v5;
      ++v6;
    }
    while ( v6 <= v5 );
    result = a2;
    if ( a2 < v5 )
      result = sub_92CAB0(a1, a2, v5, v4);
    if ( v6 >= a3 )
      break;
    a2 = v6;
  }
  return result;
}
