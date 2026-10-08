void __cdecl sub_931240(int a1, int *a2, int a3, unsigned __int16 *a4, __m128 *a5, float *a6, float **a7)
{
  int v7; // ebp
  float *v8; // edi
  unsigned int v9; // ecx
  float v10; // eax
  int v11; // edi
  float *v12; // ebx
  float *v13; // eax
  int v14; // eax
  float *v15; // edx
  int v16; // eax
  bool v17; // sf
  float v18; // [esp+8h] [ebp-214h]
  float v19; // [esp+Ch] [ebp-210h]
  int v20; // [esp+10h] [ebp-20Ch] BYREF
  int v21; // [esp+14h] [ebp-208h]
  int v22; // [esp+18h] [ebp-204h]
  char v23; // [esp+1Ch] [ebp-200h] BYREF

  v7 = *a2; /*0x931258*/
  v19 = *(float *)(a1 + 0xC); /*0x931262*/
  if ( (int)a7[1] > 1 ) /*0x93126c*/
  {
    v8 = *a7; /*0x931273*/
    if ( (*a7)[3] - (*a7)[1] < v19 ) /*0x931284*/
    {
      v9 = 0x80000040; /*0x93128e*/
      v20 = (int)&v23; /*0x931293*/
      v21 = 0; /*0x931297*/
      v22 = 0x80000040; /*0x93129f*/
      v10 = v8[1]; /*0x9312a3*/
      v11 = 0; /*0x9312a6*/
      v18 = v10; /*0x9312aa*/
      while ( 1 ) /*0x9312bd*/
      {
        v12 = &(*a7)[2 * v11]; /*0x9312bd*/
        if ( v12[1] - v18 > v19 ) /*0x9312cd*/
          break; /*0x9312cd*/
        if ( v21 == (v9 & 0x3FFFFFFF) ) /*0x9312db*/
          sub_8A6EE0((const void **)&v20, 8); /*0x9312e4*/
        *(float *)(v20 + 8 * v21) = *v12; /*0x9312f6*/
        *(float *)(v20 + 8 * v21 + 4) = v12[1]; /*0x931304*/
        v13 = a7[1]; /*0x93130c*/
        ++v11; /*0x931310*/
        ++v21; /*0x931313*/
        if ( v11 >= (int)v13 ) /*0x931317*/
          break; /*0x931317*/
        v9 = v22; /*0x9312b3*/
      }
      sub_92EC70(v7, a1, v18, a3, a4, a5, a6, &v20); /*0x93134d*/
      v14 = v20; /*0x931352*/
      v15 = *a7; /*0x931358*/
      *v15 = *(float *)v20; /*0x93135a*/
      v15[1] = *(float *)(v14 + 4); /*0x93135f*/
      (*a7)[1] = v18; /*0x931368*/
      if ( ((unsigned int)a7[2] & 0x3FFFFFFF) == 0 ) /*0x931379*/
        sub_8A6E40((const void **)a7, 1, 8); /*0x93138b*/
      v16 = v22; /*0x931393*/
      v17 = v22 < 0; /*0x931397*/
      a7[1] = (float *)1; /*0x931399*/
      if ( !v17 ) /*0x9313a0*/
        sub_8A75D0( /*0x9313c8*/
          *(_DWORD *)(*((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + MEMORY[0xBA9DE4]) + 0x19C),
          (_DWORD *)v20,
          8 * v16,
          0x14);
    }
  }
}
