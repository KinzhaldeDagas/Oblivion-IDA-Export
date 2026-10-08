void __cdecl sub_9313E0(int a1, int a2, int a3, __int16 a4, int a5, __m128 *a6, float *a7, float **a8, float **a9)
{
  int v10; // eax
  unsigned __int16 *v11; // edi
  float *v12; // edx
  float *v13; // ecx
  float *v14; // eax
  int v15; // [esp+4h] [ebp-1Ch] BYREF
  int v16; // [esp+8h] [ebp-18h]
  int v17; // [esp+Ch] [ebp-14h]
  _DWORD v18[4]; // [esp+10h] [ebp-10h] BYREF
  float v19; // [esp+40h] [ebp+20h]

  if ( a8[1] == (float *)1 && a9[1] == (float *)1 ) /*0x931400*/
  {
    v10 = *(_DWORD *)(a5 + 8); /*0x93140a*/
    v11 = *(unsigned __int16 **)a5; /*0x931410*/
    if ( v10 ) /*0x931412*/
    {
      if ( a4 != (__int16)0xFFFF && **(_WORD **)(v10 + 4) == a4 ) /*0x931426*/
        v11 = *(unsigned __int16 **)(a5 + 4); /*0x931428*/
    }
    v12 = *a8; /*0x93142b*/
    v13 = *a9; /*0x93142d*/
    if ( fabs((*a8)[1] - (*a9)[1]) < *(float *)(a1 + 0xC) ) /*0x931445*/
    {
      v16 = 0; /*0x93144b*/
      v17 = 0x80000002; /*0x931453*/
      v15 = (int)v18; /*0x93145f*/
      v19 = v13[1]; /*0x931466*/
      *(float *)v18 = *v12; /*0x93146c*/
      *(float *)&v18[1] = v12[1]; /*0x931473*/
      v16 = 1; /*0x931477*/
      *(float *)&v18[2] = *v13; /*0x931481*/
      *(float *)&v18[3] = v13[1]; /*0x93149a*/
      v16 = 2; /*0x9314ac*/
      sub_92EC70(a2, a1, v19, a3, v11, a6, a7, &v15); /*0x9314b4*/
      v14 = *a8; /*0x9314bd*/
      if ( *(_DWORD *)v15 != *(_DWORD *)*a8 ) /*0x9314c8*/
        v14 = *a9; /*0x9314ca*/
      v14[1] = v14[1] * kHeadBodyNormalMatchRadius; /*0x9314d6*/
      if ( v17 >= 0 ) /*0x9314df*/
        sub_8A75D0( /*0x931506*/
          *(_DWORD *)(*((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + MEMORY[0xBA9DE4]) + 0x19C),
          (_DWORD *)v15,
          8 * v17,
          0x14);
    }
  }
}
