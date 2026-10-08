int __cdecl sub_902590(int *a1, int *a2, __m128 *a3, int a4, int a5)
{
  int v5; // ebx
  _DWORD *ThreadLocalStoragePointer; // edi
  int v7; // eax
  int v8; // esi
  _DWORD *v9; // ecx
  unsigned __int64 v10; // rax
  float v11; // ecx
  int v12; // eax
  double v13; // st7
  int v14; // edx
  int v15; // eax
  int v16; // eax
  _DWORD *v17; // ecx
  unsigned __int64 v18; // rax
  unsigned __int64 v19; // rax
  int v20; // edi
  _DWORD *v21; // ecx
  _DWORD v23[4]; // [esp+18h] [ebp-58h] BYREF
  int (__stdcall **v24)(char); // [esp+28h] [ebp-48h] BYREF
  __int16 v25; // [esp+2Eh] [ebp-42h]
  int v26; // [esp+30h] [ebp-40h]
  float v27; // [esp+34h] [ebp-3Ch]
  int v28; // [esp+38h] [ebp-38h]
  int v29; // [esp+3Ch] [ebp-34h]
  float v30[2]; // [esp+40h] [ebp-30h] BYREF
  char v31; // [esp+48h] [ebp-28h]
  int v32; // [esp+6Ch] [ebp-4h]

  v5 = MEMORY[0xBA9DE4]; /*0x90259a*/
  ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer; /*0x9025a2*/
  v7 = ThreadLocalStoragePointer[MEMORY[0xBA9DE4]]; /*0x9025a9*/
  if ( *(_DWORD *)(v7 + 0x1A4) < *(_DWORD *)(v7 + 0x1A8) ) /*0x9025b8*/
  {
    v8 = ThreadLocalStoragePointer[MEMORY[0xBA9DE4]]; /*0x9025ba*/
    v9 = *(_DWORD **)(v7 + 0x1A4); /*0x9025bc*/
    *v9 = "LtCvsListAgent"; /*0x9025c2*/
    v9[3] = "checkHull"; /*0x9025c8*/
    v10 = __rdtsc(); /*0x9025cf*/
    v9[1] = v10; /*0x9025d9*/
    *(_DWORD *)(v8 + 0x1A4) = v9 + 4; /*0x9025df*/
  }
  v11 = flt_B2FFE4; /*0x9025eb*/
  v23[2] = a2[2]; /*0x9025f1*/
  v12 = *a2; /*0x9025f5*/
  v27 = v11; /*0x9025f7*/
  v23[3] = a2; /*0x9025fb*/
  v25 = 1; /*0x9025ff*/
  v26 = 0; /*0x902606*/
  v24 = &off_A9BB94; /*0x90260e*/
  v13 = *(float *)(**(_DWORD **)(v12 + 0x10) + 0xC); /*0x90261b*/
  v14 = a2[1]; /*0x90261e*/
  v28 = *(_DWORD *)(v12 + 0x10); /*0x902621*/
  v15 = *(_DWORD *)(v12 + 0x14); /*0x902625*/
  v27 = v13; /*0x902628*/
  v29 = v15; /*0x90262c*/
  v23[0] = &v24; /*0x902639*/
  v23[1] = v14; /*0x902643*/
  LODWORD(v30[0]) = &off_A9BB8C; /*0x902651*/
  v31 = 0; /*0x902659*/
  v32 = 0x7F7FFFFF; /*0x90265e*/
  v30[1] = 3.4028235e38; /*0x902669*/
  sub_935CC0(a1, v23, a3, v30, (int)v30); /*0x902671*/
  if ( v31 ) /*0x90267f*/
  {
    v16 = ThreadLocalStoragePointer[v5]; /*0x902681*/
    if ( *(_DWORD *)(v16 + 0x1A4) < *(_DWORD *)(v16 + 0x1A8) ) /*0x902690*/
    {
      v17 = *(_DWORD **)(v16 + 0x1A4); /*0x902692*/
      *v17 = "Stchild"; /*0x902698*/
      v18 = __rdtsc(); /*0x90269e*/
      v17[1] = v18; /*0x9026a8*/
      *(_DWORD *)(ThreadLocalStoragePointer[v5] + 0x1A4) = v17 + 3; /*0x9026b1*/
    }
    sub_901E40(a1, a2, a3, a4, a5); /*0x9026c8*/
  }
  LODWORD(v19) = ThreadLocalStoragePointer[v5]; /*0x9026d0*/
  if ( *(_DWORD *)(v19 + 0x1A4) < *(_DWORD *)(v19 + 0x1A8) ) /*0x9026df*/
  {
    v20 = ThreadLocalStoragePointer[v5]; /*0x9026e1*/
    v21 = *(_DWORD **)(v19 + 0x1A4); /*0x9026e3*/
    *v21 = "lt"; /*0x9026e9*/
    v19 = __rdtsc(); /*0x9026ef*/
    v21[1] = v19; /*0x9026f9*/
    *(_DWORD *)(v20 + 0x1A4) = v21 + 3; /*0x9026ff*/
  }
  return v19; /*0x902705*/
}
