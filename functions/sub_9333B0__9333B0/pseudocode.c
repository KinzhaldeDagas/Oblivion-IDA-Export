int __cdecl sub_9333B0(__int128 *a1, int a2, int *a3, const void **a4, int a5)
{
  unsigned int v5; // eax
  __int128 *v6; // esi
  int v7; // edi
  __int128 v8; // xmm0
  __int128 *v9; // eax
  __int128 *v10; // ecx
  char v11; // al
  int result; // eax
  char v13; // [esp+17h] [ebp-89h] BYREF
  char v14[4]; // [esp+18h] [ebp-88h] BYREF
  int v15; // [esp+1Ch] [ebp-84h] BYREF
  int v16; // [esp+20h] [ebp-80h] BYREF
  int v17; // [esp+24h] [ebp-7Ch]
  int v18; // [esp+28h] [ebp-78h]
  _DWORD *v19; // [esp+2Ch] [ebp-74h] BYREF
  int v20; // [esp+30h] [ebp-70h]
  int v21; // [esp+34h] [ebp-6Ch]
  __m128 *v22[2]; // [esp+38h] [ebp-68h] BYREF
  int v23; // [esp+40h] [ebp-60h]
  _DWORD *v24[2]; // [esp+44h] [ebp-5Ch] BYREF
  int v25; // [esp+4Ch] [ebp-54h]
  __m128 v26; // [esp+50h] [ebp-50h] BYREF
  float v27; // [esp+6Ch] [ebp-34h] BYREF
  float v28; // [esp+70h] [ebp-30h]
  int v29; // [esp+74h] [ebp-2Ch]
  int v30; // [esp+78h] [ebp-28h]
  int v31; // [esp+7Ch] [ebp-24h]
  int v32; // [esp+80h] [ebp-20h]
  int v33; // [esp+84h] [ebp-1Ch]
  int v34; // [esp+88h] [ebp-18h]
  int v35; // [esp+8Ch] [ebp-14h]
  int v36; // [esp+90h] [ebp-10h]
  int v37; // [esp+94h] [ebp-Ch]
  int v38; // [esp+98h] [ebp-8h]
  int v39; // [esp+9Ch] [ebp-4h]

  BYTE2(v27) = a5 == 2;
  v5 = 0x80000000;
  v28 = 0.000019999999;
  v30 = 0x358637BD;
  v31 = 0x3727C5AC;
  v32 = 0x3D4CCCCD;
  v33 = 0x358637BD;
  v34 = 0x358637BD;
  v35 = 0x322BCC77;
  v36 = 0x358637BD;
  v37 = 0x38D1B717;
  v38 = 0x3727C5AC;
  v39 = 0x37A7C5AC;
  LOWORD(v27) = 0;
  v29 = 0x368637BD;
  v16 = 0;
  v17 = 0;
  v18 = 0x80000000;
  if ( a2 > 0 )
  {
    v6 = a1;
    v7 = a2;
    while ( 1 )
    {
      if ( v17 == (v5 & 0x3FFFFFFF) )
        sub_8A6EE0((const void **)&v16, 0x10);
      v8 = *v6;
      v9 = (__int128 *)(v16 + 0x10 * v17);
      ++v6;
      --v7;
      ++v17;
      *v9 = v8;
      if ( !v7 )
        break;
      v5 = v18;
    }
    if ( v17 > 1 )
      sub_92B640(v16, 0, v17 - 1, (int (__cdecl *)(char *, int, __int128 *))sub_92C9B0);
  }
  sub_92DCA0(v28, (int)&v16, &v15);
  v10 = (__int128 *)v16;
  v19 = 0;
  v20 = 0;
  a4[1] = 0;
  v21 = 0x80000000;
  sub_933240((int)&v27, v10, v17, a3, a4);
  v11 = *sub_9515C0(&v13, (int)&v27, (__int128 *)v16, v17, a3, (__m128 **)a4);
  LOBYTE(v15) = v11;
  if ( !v11 )
  {
    if ( !BYTE2(v27) )
      goto LABEL_22;
    v20 = 0;
    v14[0] = 0;
    v24[0] = 0;
    v24[1] = 0;
    v25 = 0x80000000;
    sub_930040(&v13, &v27, a3, (__m128 **)a4, &v26, v14, (const void **)&v19, (int)v24);
    if ( v14[0] )
    {
      a4[1] = 0;
      sub_92FBD0(&v16, 0.001);
      v22[0] = 0;
      v22[1] = 0;
      v23 = 0x80000000;
      sub_92F270(&v26, (__m128 *)v16, v17, a4, v22);
      LOBYTE(v15) = *sub_9515C0(&v13, (int)&v27, a1, a2, a3, (__m128 **)a4);
      if ( v23 >= 0 )
        sub_8A75D0(
          *(_DWORD *)(*((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + TlsIndex) + 0x19C),
          v22[0]->m128_i32,
          0x10 * v23,
          0x14);
    }
    if ( v25 >= 0 )
      sub_8A75D0(
        *(_DWORD *)(*((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + TlsIndex) + 0x19C),
        v24[0],
        0x20 * v25,
        0x14);
  }
  if ( !BYTE2(v27) )
  {
    v11 = v15;
LABEL_22:
    BYTE1(v27) = 1;
    if ( !v11 )
    {
      LOBYTE(v27) = 1;
      sub_933240((int)&v27, a1, a2, a3, a4);
      if ( !*sub_9515C0(&v13, (int)&v27, a1, a2, a3, (__m128 **)a4) )
      {
        v29 = 0x3456BF95;
        sub_933240((int)&v27, a1, a2, a3, a4);
        if ( !*sub_9515C0(&v13, (int)&v27, a1, a2, a3, (__m128 **)a4) )
        {
          v39 = 0x358637BD;
          sub_933240((int)&v27, a1, a2, a3, a4);
          sub_9515C0(&v13, (int)&v27, a1, a2, a3, (__m128 **)a4);
        }
      }
    }
    if ( v21 >= 0 )
      sub_8A75D0(
        *(_DWORD *)(*((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + TlsIndex) + 0x19C),
        v19,
        0x10 * v21,
        0x14);
    result = v18;
    if ( v18 >= 0 )
      return sub_8A75D0(
               *(_DWORD *)(*((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + TlsIndex) + 0x19C),
               (_DWORD *)v16,
               0x10 * v18,
               0x14);
    return result;
  }
  if ( v21 >= 0 )
    sub_8A75D0(
      *(_DWORD *)(*((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + TlsIndex) + 0x19C),
      v19,
      0x10 * v21,
      0x14);
  result = v18;
  if ( v18 >= 0 )
    return sub_8A75D0(
             *(_DWORD *)(*((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + TlsIndex) + 0x19C),
             (_DWORD *)v16,
             0x10 * v18,
             0x14);
  return result;
}
