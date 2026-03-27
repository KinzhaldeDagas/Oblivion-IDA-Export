void __cdecl sub_931240(int a1, int *a2, int a3, unsigned __int16 *a4, float *a5, float *a6, float **a7)
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

  v7 = *a2;
  v19 = *(float *)(a1 + 0xC);
  if ( (int)a7[1] > 1 )
  {
    v8 = *a7;
    if ( (*a7)[3] - (*a7)[1] < v19 )
    {
      v9 = 0x80000040;
      v20 = (int)&v23;
      v21 = 0;
      v22 = 0x80000040;
      v10 = v8[1];
      v11 = 0;
      v18 = v10;
      while ( 1 )
      {
        v12 = &(*a7)[2 * v11];
        if ( v12[1] - v18 > v19 )
          break;
        if ( v21 == (v9 & 0x3FFFFFFF) )
          sub_8A6EE0((const void **)&v20, 8);
        *(float *)(v20 + 8 * v21) = *v12;
        *(float *)(v20 + 8 * v21 + 4) = v12[1];
        v13 = a7[1];
        ++v11;
        ++v21;
        if ( v11 >= (int)v13 )
          break;
        v9 = v22;
      }
      sub_92EC70(v7, a1, v18, a3, a4, a5, a6, &v20);
      v14 = v20;
      v15 = *a7;
      *v15 = *(float *)v20;
      v15[1] = *(float *)(v14 + 4);
      (*a7)[1] = v18;
      if ( ((unsigned int)a7[2] & 0x3FFFFFFF) == 0 )
        sub_8A6E40((const void **)a7, 1, 8);
      v16 = v22;
      v17 = v22 < 0;
      a7[1] = (float *)1;
      if ( !v17 )
        sub_8A75D0(
          *(_DWORD *)(*((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + TlsIndex) + 0x19C),
          (_DWORD *)v20,
          8 * v16,
          0x14);
    }
  }
}
