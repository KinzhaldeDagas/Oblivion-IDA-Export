void __cdecl sub_93F800(int a1, __m128 **a2, int a3, int a4)
{
  _DWORD *ThreadLocalStoragePointer; // ebx
  int v5; // eax
  int v6; // esi
  _DWORD *v7; // ecx
  unsigned __int64 v8; // rax
  __m128 *v9; // esi
  int v10; // edi
  int v11; // eax
  int v12; // ecx
  _DWORD *v13; // ebx
  unsigned __int64 v14; // rax
  signed int v15; // [esp+1Ch] [ebp-1E4h]
  __m128 v16; // [esp+20h] [ebp-1E0h] BYREF
  __m128 v17[4]; // [esp+30h] [ebp-1D0h] BYREF
  __m128 v18; // [esp+70h] [ebp-190h] BYREF
  char v19; // [esp+80h] [ebp-180h]
  int v20; // [esp+84h] [ebp-17Ch]
  _BYTE v21[192]; // [esp+90h] [ebp-170h] BYREF
  char v22[160]; // [esp+150h] [ebp-B0h] BYREF
  char v23[8]; // [esp+1F0h] [ebp-10h] BYREF
  char v24; // [esp+1F8h] [ebp-8h]
  char v25; // [esp+1F9h] [ebp-7h]
  char v26; // [esp+1FAh] [ebp-6h]
  char v27; // [esp+1FBh] [ebp-5h]

  ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer; /*0x93f818*/
  v5 = ThreadLocalStoragePointer[MEMORY[0xBA9DE4]]; /*0x93f826*/
  if ( *(_DWORD *)(v5 + 0x1A4) < *(_DWORD *)(v5 + 0x1A8) ) /*0x93f837*/
  {
    v6 = ThreadLocalStoragePointer[MEMORY[0xBA9DE4]]; /*0x93f839*/
    v7 = *(_DWORD **)(v5 + 0x1A4); /*0x93f83b*/
    *v7 = "TtGsk"; /*0x93f841*/
    v8 = __rdtsc(); /*0x93f847*/
    v7[1] = v8; /*0x93f851*/
    *(_DWORD *)(v6 + 0x1A4) = v7 + 3; /*0x93f857*/
  }
  v9 = *a2; /*0x93f860*/
  v10 = *(_DWORD *)a1; /*0x93f86b*/
  sub_8B1FF0(v17, *(__m128 **)(a1 + 8), a2[2]); /*0x93f873*/
  if ( (*(int (__thiscall **)(__m128 *))(v9->m128_i32[0] + 8))(v9) == 6 ) /*0x93f882*/
    sub_93EF30(v23, v10, (int *)v10, v9, v17); /*0x93f892*/
  else
    sub_93EE40(v23, (int *)v10, (int *)v9, v17); /*0x93f8a7*/
  v18.m128_i32[1] = v25; /*0x93f8b9*/
  v18.m128_i32[3] = v27; /*0x93f8cb*/
  v18.m128_i32[0] = v24; /*0x93f8d7*/
  v19 = 1; /*0x93f8e3*/
  v18.m128_i32[2] = v26; /*0x93f8eb*/
  v20 = 0; /*0x93f8f2*/
  (*(void (__thiscall **)(int, char *, _DWORD, _BYTE *))(*(_DWORD *)v10 + 0x28))(v10, v23, v24, v21); /*0x93f902*/
  (*(void (__thiscall **)(__m128 *, char *, __int32, char *))(v9->m128_i32[0] + 0x28))( /*0x93f922*/
    v9,
    &v23[2 * v18.m128_i32[0]],
    v18.m128_i32[1],
    v22);
  v15 = sub_93C690(&v18, (int *)v10, (int *)v9, v17, &v16); /*0x93f943*/
  v11 = ThreadLocalStoragePointer[MEMORY[0xBA9DE4]]; /*0x93f947*/
  if ( *(_DWORD *)(v11 + 0x1A4) < *(_DWORD *)(v11 + 0x1A8) ) /*0x93f956*/
  {
    v12 = ThreadLocalStoragePointer[MEMORY[0xBA9DE4]]; /*0x93f958*/
    v13 = *(_DWORD **)(v11 + 0x1A4); /*0x93f95a*/
    *v13 = "Et"; /*0x93f960*/
    v14 = __rdtsc(); /*0x93f966*/
    v13[1] = v14; /*0x93f970*/
    *(_DWORD *)(v12 + 0x1A4) = v13 + 3; /*0x93f976*/
  }
  if ( v15 || v16.m128_f32[3] - *(float *)(v10 + 0xC) - v9->m128_f32[3] < *(float *)&SrcStr ) /*0x93f999*/
    (*(void (__thiscall **)(int, int, __m128 **))(*(_DWORD *)a4 + 4))(a4, a1, a2); /*0x93f9a8*/
}
