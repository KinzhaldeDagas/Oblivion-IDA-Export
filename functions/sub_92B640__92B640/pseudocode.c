int __cdecl sub_92B640(int a1, int a2, int a3, int (__cdecl *a4)(char *, int, __int128 *))
{
  int v4; // ebx
  int v5; // edi
  int v6; // edi
  __int128 *v7; // edi
  int v8; // edx
  __int128 v9; // xmm0
  _OWORD *v10; // ecx
  int result; // eax
  char v12; // [esp+16h] [ebp-1Ah] BYREF
  char v13; // [esp+17h] [ebp-19h] BYREF
  int v14; // [esp+18h] [ebp-18h]
  __int128 *v15; // [esp+1Ch] [ebp-14h]
  __int128 v16; // [esp+20h] [ebp-10h] BYREF

  while ( 1 )
  {
    v4 = a3;
    v5 = a1;
    v14 = a2;
    v16 = *(_OWORD *)(0x10 * ((a3 + a2) >> 1) + a1);
    do
    {
      v15 = (__int128 *)(v5 + 0x10 * v14);
      if ( *(_BYTE *)a4(&v12, (int)v15, &v16) )
      {
        v6 = (int)v15;
        do
        {
          ++v14;
          v6 += 0x10;
        }
        while ( *(_BYTE *)a4(&v12, v6, &v16) );
        v5 = a1;
      }
      v15 = (__int128 *)(0x10 * v4 + v5);
      if ( *(_BYTE *)a4(&v13, (int)&v16, v15) )
      {
        v7 = v15;
        do
        {
          v7 += 0xFFFFFFFF;
          --v4;
        }
        while ( *(_BYTE *)a4(&v13, (int)&v16, v7) );
        v5 = a1;
      }
      v8 = v14;
      if ( v4 < v14 )
        break;
      if ( v4 != v14 )
      {
        v9 = *(_OWORD *)(0x10 * v4 + v5);
        v10 = (_OWORD *)(v5 + 0x10 * v14);
        *(_OWORD *)(0x10 * v4 + v5) = *v10;
        *v10 = v9;
      }
      --v4;
      v14 = ++v8;
    }
    while ( v8 <= v4 );
    result = a2;
    if ( a2 < v4 )
    {
      result = sub_92B640(v5, a2, v4, a4);
      v8 = v14;
    }
    if ( v8 >= a3 )
      break;
    a2 = v8;
  }
  return result;
}
