double __userpurge sub_943460@<st0>(
        int a1@<ecx>,
        double result@<st0>,
        __m128 *a3,
        int a4,
        float a5,
        float *a6,
        float *a7)
{
  float *v8; // edi
  int v9; // eax
  int *v10; // esi
  double v11; // st6
  int v12; // eax
  double v13; // st6
  float v14[7]; // [esp+14h] [ebp-21Ch] BYREF
  _BYTE v15[512]; // [esp+30h] [ebp-200h] BYREF

  *a6 = 3.4028235e38;
  *a7 = -3.4028235e38;
  if ( SLODWORD(a5) > 0 )
  {
    v8 = (float *)(a4 + 0xC);
    v14[2] = a5;
    do
    {
      v9 = (*(int (__thiscall **)(_DWORD, _DWORD, _BYTE *))(**(_DWORD **)(a1 + 8) + 0x28))(
             *(_DWORD *)(a1 + 8),
             *((_DWORD *)v8 + 0xFFFFFFFD),
             v15);
      v10 = (int *)v9;
      if ( v9 )
      {
        v11 = ((double (__thiscall *)(int, __m128 *))*(_DWORD *)(*(_DWORD *)v9 + 0x10))(v9, a3);
        v14[1] = result;
        v12 = *v10;
        *(__m128 *)&v14[3] = _mm_xor_ps(*a3, (__m128)xmmword_A965C0);
        (*(void (__thiscall **)(int *, float *))(v12 + 0x10))(v10, &v14[3]);
        v13 = -v11;
      }
      else
      {
        v13 = *(float *)&SrcStr;
        v14[1] = 0.0;
      }
      v8[0xFFFFFFFF] = v13;
      *v8 = v14[1];
      if ( v13 < *a6 )
        *a6 = v13;
      if ( v14[1] > (double)*a7 )
        *a7 = v14[1];
      v8 += 4;
      --LODWORD(v14[2]);
    }
    while ( LODWORD(v14[2]) );
  }
  return result;
}
