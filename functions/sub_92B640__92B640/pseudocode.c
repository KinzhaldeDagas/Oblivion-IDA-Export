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

  while ( 1 ) /*0x92b653*/
  {
    v4 = a3; /*0x92b653*/
    v5 = a1; /*0x92b656*/
    v14 = a2; /*0x92b659*/
    v16 = *(_OWORD *)(0x10 * ((a3 + a2) >> 1) + a1); /*0x92b668*/
    do /*0x92b72e*/
    {
      v15 = (__int128 *)(v5 + 0x10 * v14); /*0x92b684*/
      if ( *(_BYTE *)a4(&v12, (int)v15, &v16) ) /*0x92b68a*/
      {
        v6 = (int)v15; /*0x92b693*/
        do /*0x92b6b0*/
        {
          ++v14; /*0x92b6a1*/
          v6 += 0x10; /*0x92b6a5*/
        }
        while ( *(_BYTE *)a4(&v12, v6, &v16) ); /*0x92b6b0*/
        v5 = a1; /*0x92b6b9*/
      }
      v15 = (__int128 *)(0x10 * v4 + v5); /*0x92b6c5*/
      if ( *(_BYTE *)a4(&v13, (int)&v16, v15) ) /*0x92b6d5*/
      {
        v7 = v15; /*0x92b6de*/
        do /*0x92b6f3*/
        {
          v7 += 0xFFFFFFFF; /*0x92b6e2*/
          --v4; /*0x92b6f0*/
        }
        while ( *(_BYTE *)a4(&v13, (int)&v16, v7) ); /*0x92b6f3*/
        v5 = a1; /*0x92b6fc*/
      }
      v8 = v14; /*0x92b6ff*/
      if ( v4 < v14 ) /*0x92b705*/
        break; /*0x92b705*/
      if ( v4 != v14 ) /*0x92b707*/
      {
        v9 = *(_OWORD *)(0x10 * v4 + v5); /*0x92b70e*/
        v10 = (_OWORD *)(v5 + 0x10 * v14); /*0x92b71e*/
        *(_OWORD *)(0x10 * v4 + v5) = *v10; /*0x92b720*/
        *v10 = v9; /*0x92b723*/
      }
      --v4; /*0x92b726*/
      v14 = ++v8; /*0x92b72a*/
    }
    while ( v8 <= v4 ); /*0x92b72e*/
    result = a2; /*0x92b734*/
    if ( a2 < v4 ) /*0x92b739*/
    {
      result = sub_92B640(v5, a2, v4, a4); /*0x92b73f*/
      v8 = v14; /*0x92b744*/
    }
    if ( v8 >= a3 ) /*0x92b74e*/
      break; /*0x92b74e*/
    a2 = v8; /*0x92b750*/
  }
  return result; /*0x92b758*/
}
