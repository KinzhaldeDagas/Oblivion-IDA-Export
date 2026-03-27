bool *__cdecl sub_9515C0(bool *a1, int a2, __int128 *a3, int a4, int *a5, __m128 **a6)
{
  unsigned int v6; // eax
  int v8; // ebx
  __int128 v9; // xmm0
  _OWORD *v10; // eax
  bool *v11; // eax
  bool v12; // bl
  int v13; // eax
  bool v14; // sf
  int v15; // esi
  _DWORD *ThreadLocalStoragePointer; // edi
  bool v18[5]; // [esp+13h] [ebp-7Dh] BYREF
  float v19; // [esp+18h] [ebp-78h]
  int v20; // [esp+1Ch] [ebp-74h] BYREF
  int v21; // [esp+20h] [ebp-70h]
  int v22; // [esp+24h] [ebp-6Ch]
  int v23[2]; // [esp+28h] [ebp-68h] BYREF
  int v24; // [esp+30h] [ebp-60h]
  int v25[2]; // [esp+34h] [ebp-5Ch] BYREF
  int v26; // [esp+3Ch] [ebp-54h]
  __m128 v27; // [esp+40h] [ebp-50h] BYREF
  float v28[4]; // [esp+50h] [ebp-40h] BYREF
  __m128 v29; // [esp+60h] [ebp-30h] BYREF
  float v30[4]; // [esp+70h] [ebp-20h] BYREF
  __m128 v31; // [esp+80h] [ebp-10h] BYREF

  v6 = 0x80000000;
  v19 = *(float *)(a2 + 0x14);
  v18[1] = 0;
  v25[0] = 0;
  v25[1] = 0;
  v26 = 0x80000000;
  v23[0] = 0;
  v23[1] = 0;
  v24 = 0x80000000;
  v20 = 0;
  v21 = 0;
  v22 = 0x80000000;
  if ( a4 > 0 )
  {
    v8 = a4;
    while ( 1 )
    {
      if ( v21 == (v6 & 0x3FFFFFFF) )
        sub_8A6EE0((const void **)&v20, 0x10);
      v9 = *a3;
      v10 = (_OWORD *)(v20 + 0x10 * v21);
      ++a3;
      --v8;
      ++v21;
      *v10 = v9;
      if ( !v8 )
        break;
      v6 = v22;
    }
  }
  if ( *(_BYTE *)(a2 + 1) )
  {
    sub_92E860(a6, v28, &v27);
    sub_92E860(&v20, v30, &v29);
  }
  sub_930040(v18, (float *)a2, a5, a6, &v31, &v18[1], (const void **)v23, (int)v25);
  if ( v18[1] )
    v11 = sub_9512F0(v18, &v20, (int)a5, a6, v23, v25, v19);
  else
    v11 = sub_9513F0(v18, &v20, (int)a5, a6, v23, v25, v19);
  v12 = *v11;
  if ( *(_BYTE *)(a2 + 1) )
  {
    sub_92EA40(a6, (int *)v28, &v27);
    sub_92EA40(&v20, (int *)v30, &v29);
  }
  v13 = v22;
  v14 = v22 < 0;
  v15 = TlsIndex;
  ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer;
  *a1 = v12;
  if ( !v14 )
    sub_8A75D0(*(_DWORD *)(ThreadLocalStoragePointer[v15] + 0x19C), (_DWORD *)v20, 0x10 * v13, 0x14);
  if ( v24 >= 0 )
    sub_8A75D0(*(_DWORD *)(ThreadLocalStoragePointer[v15] + 0x19C), (_DWORD *)v23[0], 0x10 * v24, 0x14);
  if ( v26 >= 0 )
    sub_8A75D0(*(_DWORD *)(ThreadLocalStoragePointer[v15] + 0x19C), (_DWORD *)v25[0], 0x20 * v26, 0x14);
  return a1;
}
