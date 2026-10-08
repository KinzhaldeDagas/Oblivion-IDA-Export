int __cdecl sub_8B4540(char *a1, int a2, int a3, float a4, int a5)
{
  int v7; // ebx
  int v8; // ecx
  unsigned int v9; // esi
  char *v10; // eax
  int v11; // ebx
  char *v12; // eax
  int v13; // ebx
  char *v14; // eax
  int v15; // ecx
  int v16; // esi
  signed int v17; // eax
  _DWORD *ThreadLocalStoragePointer; // ebx
  bool v19; // zf
  int v20; // edi
  int v21; // ecx
  int v22; // ecx
  int v23; // [esp+0h] [ebp-40h]
  char *v24; // [esp+4h] [ebp-3Ch] BYREF
  int v25; // [esp+8h] [ebp-38h]
  unsigned int v26; // [esp+Ch] [ebp-34h]
  _DWORD *v27[2]; // [esp+10h] [ebp-30h] BYREF
  signed int v28; // [esp+18h] [ebp-28h]
  int v29[3]; // [esp+1Ch] [ebp-24h] BYREF
  int v30[6]; // [esp+28h] [ebp-18h] BYREF

  if ( a4 <= (double)*(float *)&SrcStr ) /*0x8b4552*/
    return 1; /*0x8b4554*/
  v24 = 0; /*0x8b456e*/
  v25 = 0; /*0x8b4572*/
  v26 = 0x80000000; /*0x8b4576*/
  if ( a3 > 0 )
    sub_8A6E40((const void **)&v24, a3 < 0 ? 0 : a3, 0x10);
  v7 = 0; /*0x8b459e*/
  v25 = a3; /*0x8b45a3*/
  if ( a3 >= 4 ) /*0x8b45a7*/
  {
    v8 = 0; /*0x8b45b3*/
    v9 = ((unsigned int)(a3 - 4) >> 2) + 1; /*0x8b45b5*/
    v23 = 4 * v9; /*0x8b45bd*/
    do /*0x8b4652*/
    {
      *(_DWORD *)&v24[v8] = *(_DWORD *)a1; /*0x8b45c7*/
      *(_DWORD *)&v24[v8 + 4] = *((_DWORD *)a1 + 1); /*0x8b45d1*/
      *(_DWORD *)&v24[v8 + 8] = *((_DWORD *)a1 + 2); /*0x8b45dc*/
      *(_DWORD *)&v24[v8 + 0x10] = *(_DWORD *)&a1[a2]; /*0x8b45e7*/
      *(_DWORD *)&v24[v8 + 0x14] = *(_DWORD *)&a1[a2 + 4]; /*0x8b45f3*/
      *(_DWORD *)&v24[v8 + 0x18] = *(_DWORD *)&a1[a2 + 8]; /*0x8b45ff*/
      v10 = &a1[a2]; /*0x8b4607*/
      *(_DWORD *)&v24[v8 + 0x20] = *(_DWORD *)&v10[a2]; /*0x8b460c*/
      v11 = *(_DWORD *)&v10[a2 + 4]; /*0x8b4610*/
      v12 = &v10[a2]; /*0x8b4618*/
      *(_DWORD *)&v24[v8 + 0x24] = v11; /*0x8b461a*/
      *(_DWORD *)&v24[v8 + 0x28] = *((_DWORD *)v12 + 2); /*0x8b4625*/
      v13 = *(_DWORD *)&v12[a2]; /*0x8b4629*/
      v14 = &v12[a2]; /*0x8b4630*/
      *(_DWORD *)&v24[v8 + 0x30] = v13; /*0x8b4632*/
      *(_DWORD *)&v24[v8 + 0x34] = *((_DWORD *)v14 + 1); /*0x8b463d*/
      *(_DWORD *)&v24[v8 + 0x38] = *((_DWORD *)v14 + 2); /*0x8b4648*/
      a1 = &v14[a2]; /*0x8b464c*/
      v8 += 0x40; /*0x8b464e*/
      --v9; /*0x8b4651*/
    }
    while ( v9 ); /*0x8b4652*/
    v7 = v23; /*0x8b4658*/
  }
  if ( v7 < a3 ) /*0x8b4665*/
  {
    v15 = 0x10 * v7; /*0x8b466b*/
    v16 = a3 - v7; /*0x8b466e*/
    do /*0x8b4695*/
    {
      *(_DWORD *)&v24[v15] = *(_DWORD *)a1; /*0x8b4676*/
      *(_DWORD *)&v24[v15 + 4] = *((_DWORD *)a1 + 1); /*0x8b4680*/
      *(_DWORD *)&v24[v15 + 8] = *((_DWORD *)a1 + 2); /*0x8b468b*/
      a1 += a2; /*0x8b468f*/
      v15 += 0x10; /*0x8b4691*/
      --v16; /*0x8b4694*/
    }
    while ( v16 ); /*0x8b4695*/
  }
  v29[0] = (int)v24; /*0x8b46ad*/
  v29[2] = 0x10; /*0x8b46b7*/
  v29[1] = a3; /*0x8b46bf*/
  v30[0] = 0; /*0x8b46c3*/
  v30[1] = 0; /*0x8b46c7*/
  v30[2] = 0x80000000; /*0x8b46cb*/
  v30[3] = 0; /*0x8b46cf*/
  v30[4] = 0; /*0x8b46d3*/
  v30[5] = 0x80000000; /*0x8b46d7*/
  v27[0] = 0; /*0x8b46db*/
  v27[1] = 0; /*0x8b46df*/
  v28 = 0x80000000; /*0x8b46e3*/
  sub_8F2010(v29, v30, (int)v27, 1); /*0x8b46e7*/
  sub_8B43E0((__m128 **)v30, a4, a5); /*0x8b46fb*/
  v17 = v28; /*0x8b4704*/
  ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer; /*0x8b4708*/
  v19 = v28 >= 0; /*0x8b4712*/
  *(float *)(a5 + 4) = a4; /*0x8b4714*/
  v20 = MEMORY[0xBA9DE4]; /*0x8b4717*/
  if ( v19 ) /*0x8b471d*/
  {
    v21 = *(_DWORD *)(ThreadLocalStoragePointer[v20] + 0x19C); /*0x8b4722*/
    if ( !v21 ) /*0x8b472a*/
      v21 = unk_BA7D9C; /*0x8b472c*/
    sub_8A75D0(v21, v27[0], 0x10 * v17, 0x14); /*0x8b4742*/
  }
  sub_8B44C0(v30); /*0x8b474b*/
  if ( (v26 & 0x80000000) == 0 ) /*0x8b4756*/
  {
    v22 = *(_DWORD *)(ThreadLocalStoragePointer[v20] + 0x19C); /*0x8b475b*/
    if ( !v22 ) /*0x8b4763*/
      v22 = unk_BA7D9C; /*0x8b4765*/
    sub_8A75D0(v22, v24, 0x10 * v26, 0x14); /*0x8b477b*/
  }
  return 0; /*0x8b455c*/
}
