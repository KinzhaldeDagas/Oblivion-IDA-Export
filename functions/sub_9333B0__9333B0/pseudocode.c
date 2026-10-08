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
  bool v13; // [esp+17h] [ebp-89h] BYREF
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

  BYTE2(v27) = a5 == 2; /*0x9333cc*/
  v5 = 0x80000000; /*0x9333d0*/
  v28 = 0.000019999999; /*0x9333d6*/
  v30 = 0x358637BD; /*0x9333de*/
  v31 = 0x3727C5AC; /*0x9333e6*/
  v32 = 0x3D4CCCCD; /*0x9333ee*/
  v33 = 0x358637BD; /*0x9333f9*/
  v34 = 0x358637BD; /*0x933404*/
  v35 = 0x322BCC77; /*0x93340f*/
  v36 = 0x358637BD; /*0x93341a*/
  v37 = 0x38D1B717; /*0x933425*/
  v38 = 0x3727C5AC; /*0x933430*/
  v39 = 0x37A7C5AC; /*0x93343b*/
  LOWORD(v27) = 0; /*0x933446*/
  v29 = 0x368637BD; /*0x93344b*/
  v16 = 0; /*0x933458*/
  v17 = 0; /*0x93345c*/
  v18 = 0x80000000; /*0x933460*/
  if ( a2 > 0 ) /*0x933464*/
  {
    v6 = a1; /*0x933466*/
    v7 = a2; /*0x933469*/
    while ( 1 ) /*0x933471*/
    {
      if ( v17 == (v5 & 0x3FFFFFFF) ) /*0x93347c*/
        sub_8A6EE0((const void **)&v16, 0x10); /*0x933485*/
      v8 = *v6; /*0x933495*/
      v9 = (__int128 *)(v16 + 0x10 * v17); /*0x93349d*/
      ++v6; /*0x9334a0*/
      --v7; /*0x9334a3*/
      ++v17; /*0x9334a4*/
      *v9 = v8; /*0x9334a8*/
      if ( !v7 ) /*0x9334ab*/
        break; /*0x9334ab*/
      v5 = v18; /*0x93346d*/
    }
    if ( v17 > 1 ) /*0x9334b4*/
      sub_92B640(v16, 0, v17 - 1, (int (__cdecl *)(char *, int, __int128 *))sub_92C9B0); /*0x9334c4*/
  }
  sub_92DCA0(v28, (int)&v16, &v15); /*0x9334db*/
  v10 = (__int128 *)v16; /*0x9334e6*/
  v19 = 0; /*0x9334ed*/
  v20 = 0; /*0x9334f1*/
  a4[1] = 0; /*0x9334f5*/
  v21 = 0x80000000; /*0x933507*/
  sub_933240((int)&v27, v10, v17, a3, a4); /*0x93350f*/
  v11 = *sub_9515C0(&v13, (int)&v27, (__int128 *)v16, v17, a3, (__m128 **)a4); /*0x933532*/
  LOBYTE(v15) = v11; /*0x933539*/
  if ( !v11 ) /*0x93353d*/
  {
    if ( !BYTE2(v27) ) /*0x933549*/
      goto LABEL_22; /*0x933549*/
    v20 = 0; /*0x933556*/
    v14[0] = 0; /*0x93355a*/
    v24[0] = 0; /*0x93355e*/
    v24[1] = 0; /*0x933562*/
    v25 = 0x80000000; /*0x933584*/
    sub_930040(&v13, &v27, a3, (__m128 **)a4, &v26, v14, (const void **)&v19, (int)v24); /*0x93358c*/
    if ( v14[0] ) /*0x93359a*/
    {
      a4[1] = 0; /*0x9335aa*/
      sub_92FBD0(&v16, 0.001); /*0x9335b1*/
      v22[0] = 0; /*0x9335c1*/
      v22[1] = 0; /*0x9335c5*/
      v23 = 0x80000000; /*0x9335d5*/
      sub_92F270(&v26, (__m128 *)v16, v17, a4, v22); /*0x9335dd*/
      LOBYTE(v15) = *sub_9515C0(&v13, (int)&v27, a1, a2, a3, (__m128 **)a4); /*0x9335fd*/
      if ( v23 >= 0 ) /*0x93360a*/
        sub_8A75D0( /*0x933631*/
          *(_DWORD *)(*((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + MEMORY[0xBA9DE4]) + 0x19C),
          v22[0]->m128_i32,
          0x10 * v23,
          0x14);
    }
    if ( v25 >= 0 ) /*0x93363c*/
      sub_8A75D0( /*0x933663*/
        *(_DWORD *)(*((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + MEMORY[0xBA9DE4]) + 0x19C),
        v24[0],
        0x20 * v25,
        0x14);
  }
  if ( !BYTE2(v27) ) /*0x93366e*/
  {
    v11 = v15; /*0x9336e0*/
LABEL_22:
    BYTE1(v27) = 1; /*0x9336e4*/
    if ( !v11 ) /*0x9336eb*/
    {
      LOBYTE(v27) = 1; /*0x9336fd*/
      sub_933240((int)&v27, a1, a2, a3, a4); /*0x933705*/
      if ( !*sub_9515C0(&v13, (int)&v27, a1, a2, a3, (__m128 **)a4) ) /*0x933723*/
      {
        v29 = 0x3456BF95; /*0x933738*/
        sub_933240((int)&v27, a1, a2, a3, a4); /*0x933743*/
        if ( !*sub_9515C0(&v13, (int)&v27, a1, a2, a3, (__m128 **)a4) ) /*0x933761*/
        {
          v39 = 0x358637BD; /*0x933776*/
          sub_933240((int)&v27, a1, a2, a3, a4); /*0x933781*/
          sub_9515C0(&v13, (int)&v27, a1, a2, a3, (__m128 **)a4); /*0x93379a*/
        }
      }
    }
    if ( v21 >= 0 ) /*0x9337a8*/
      sub_8A75D0( /*0x9337cf*/
        *(_DWORD *)(*((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + MEMORY[0xBA9DE4]) + 0x19C),
        v19,
        0x10 * v21,
        0x14);
    result = v18; /*0x9337d4*/
    if ( v18 >= 0 ) /*0x9337da*/
      return sub_8A75D0( /*0x9337da*/
               *(_DWORD *)(*((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + MEMORY[0xBA9DE4]) + 0x19C),
               (_DWORD *)v16,
               0x10 * v18,
               0x14);
    return result; /*0x9337da*/
  }
  if ( v21 >= 0 ) /*0x933676*/
    sub_8A75D0( /*0x93369e*/
      *(_DWORD *)(*((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + MEMORY[0xBA9DE4]) + 0x19C),
      v19,
      0x10 * v21,
      0x14);
  result = v18; /*0x9336a3*/
  if ( v18 >= 0 ) /*0x9336a9*/
    return sub_8A75D0( /*0x9337dc*/
             *(_DWORD *)(*((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + MEMORY[0xBA9DE4]) + 0x19C),
             (_DWORD *)v16,
             0x10 * v18,
             0x14);
  return result; /*0x9336d9*/
}
