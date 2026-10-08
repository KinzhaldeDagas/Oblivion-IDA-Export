int __thiscall sub_88E310(__m128 *this)
{
  float v1; // xmm1_4
  __m128 v3; // xmm2
  __m128 v4; // xmm0
  __m128 v5; // xmm1
  int v6; // eax
  _DWORD *v7; // edi
  bhkRefObject *v8; // eax
  bhkRefObject *v9; // eax
  bhkRefObject *v10; // ebx
  int result; // eax
  int v12; // ecx
  bhkRefObject *v13; // [esp+1Ch] [ebp-144h]
  int v14; // [esp+24h] [ebp-13Ch]
  float v15; // [esp+30h] [ebp-130h] BYREF
  float v16; // [esp+34h] [ebp-12Ch]
  float v17; // [esp+38h] [ebp-128h]
  float v18; // [esp+3Ch] [ebp-124h]
  float v19[4]; // [esp+40h] [ebp-120h] BYREF
  __m128 v20; // [esp+50h] [ebp-110h] BYREF
  float v21[5]; // [esp+60h] [ebp-100h] BYREF
  int v22; // [esp+74h] [ebp-ECh]
  float v23; // [esp+110h] [ebp-50h]
  char v24; // [esp+130h] [ebp-30h]
  int v25; // [esp+15Ch] [ebp-4h]

  v1 = *(float *)&dword_A9631C; /*0x88e356*/
  *(float *)&v14 = flt_B2EFC4; /*0x88e35e*/
  v3 = *(this + 7); /*0x88e366*/
  v18 = 0.0; /*0x88e36a*/
  v4 = 0; /*0x88e36e*/
  v4.m128_f32[0] = v1; /*0x88e373*/
  v5 = *(this + 8); /*0x88e377*/
  v15 = 1.0; /*0x88e37e*/
  v16 = 1.0; /*0x88e386*/
  v17 = 1.0; /*0x88e38e*/
  v20 = _mm_mul_ps(_mm_sub_ps(v5, v3), _mm_shuffle_ps(v4, v4, 0)); /*0x88e39f*/
  sub_47DCD0(&v15, &v20); /*0x88e3a8*/
  v6 = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)unk_BA7D98 + 0x10))(unk_BA7D98, 0x20, 0x24); /*0x88e3bc*/
  *(_WORD *)(v6 + 4) = 0x20; /*0x88e3be*/
  v19[0] = v15; /*0x88e3cc*/
  v19[1] = v16; /*0x88e3d9*/
  v25 = 0; /*0x88e3dd*/
  v19[2] = v17; /*0x88e3e8*/
  v19[3] = v18; /*0x88e3f0*/
  v7 = sub_8CDFE0((_DWORD *)v6, v19, v14); /*0x88e407*/
  v25 = 0xFFFFFFFF; /*0x88e409*/
  sub_8A5790(v21); /*0x88e414*/
  v23 = 0.0; /*0x88e41e*/
  v25 = 1; /*0x88e427*/
  v24 = 6; /*0x88e432*/
  if ( this != (__m128 *)0xFFFFFFEC ) /*0x88e43a*/
    v21[0] = *((float *)this + 0xC); /*0x88e43f*/
  LODWORD(v21[1]) = v7; /*0x88e445*/
  v8 = (bhkRefObject *)FormHeapAlloc(0x1Cu); /*0x88e449*/
  LOBYTE(v25) = 2; /*0x88e457*/
  if ( v8 ) /*0x88e45f*/
  {
    v9 = sub_533290(v8, (int)v21); /*0x88e468*/
    v13 = v9; /*0x88e46d*/
  }
  else
  {
    v13 = 0; /*0x88e473*/
    v9 = 0; /*0x88e477*/
  }
  v10 = *((bhkRefObject **)this + 0x2C); /*0x88e479*/
  LOBYTE(v25) = 1; /*0x88e481*/
  if ( v10 != v9 ) /*0x88e489*/
  {
    if ( v10 ) /*0x88e48d*/
    {
      if ( !InterlockedDecrement((volatile LONG *)&v10->members) ) /*0x88e493*/
        v10->__vftable->super.Destructor((NiRefObject *)v10, 1); /*0x88e4a9*/
      v9 = v13; /*0x88e4ab*/
    }
    *((_DWORD *)this + 0x2C) = v9; /*0x88e4b1*/
    if ( v9 ) /*0x88e4b7*/
      InterlockedIncrement((volatile LONG *)&v9->members); /*0x88e4bd*/
  }
  if ( *((_WORD *)v7 + 2) ) /*0x88e4c3*/
  {
    if ( !--*((_WORD *)v7 + 3) ) /*0x88e4cf*/
      (*(void (__thiscall **)(_DWORD *, int))*v7)(v7, 1); /*0x88e4e0*/
  }
  result = v22; /*0x88e4e2*/
  v25 = 0xFFFFFFFF; /*0x88e4e8*/
  if ( v22 >= 0 ) /*0x88e4f3*/
  {
    v12 = *(_DWORD *)(*((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + MEMORY[0xBA9DE4]) + 0x19C); /*0x88e505*/
    if ( !v12 ) /*0x88e50d*/
      v12 = unk_BA7D9C; /*0x88e50f*/
    return sub_8A75D0(v12, (_DWORD *)LODWORD(v21[3]), 8 * v22, 0x14); /*0x88e528*/
  }
  return result; /*0x88e52d*/
}
