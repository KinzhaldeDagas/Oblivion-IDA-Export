double __userpurge sub_943540@<st0>(
        int a1@<ecx>,
        double result@<st0>,
        __m128 *a3,
        _DWORD *a4,
        int a5,
        float *a6,
        float *a7)
{
  int v9; // eax
  int *v10; // esi
  double v11; // st6
  int v12; // eax
  double v13; // st6
  float v14[7]; // [esp+14h] [ebp-21Ch] BYREF
  _BYTE v15[512]; // [esp+30h] [ebp-200h] BYREF

  *a6 = 3.4028235e38; /*0x943550*/
  *a7 = -3.4028235e38; /*0x943562*/
  if ( a5 > 0 ) /*0x943568*/
  {
    LODWORD(v14[2]) = a5; /*0x943571*/
    do /*0x943603*/
    {
      v9 = (*(int (__thiscall **)(_DWORD, _DWORD, _BYTE *))(**(_DWORD **)(a1 + 8) + 0x28))( /*0x943582*/
             *(_DWORD *)(a1 + 8),
             *a4,
             v15);
      v10 = (int *)v9; /*0x943585*/
      if ( v9 ) /*0x943589*/
      {
        v11 = ((double (__thiscall *)(int, __m128 *))*(_DWORD *)(*(_DWORD *)v9 + 0x10))(v9, a3); /*0x943593*/
        v14[1] = result; /*0x943596*/
        v12 = *v10; /*0x9435a7*/
        *(__m128 *)&v14[3] = _mm_xor_ps(*a3, (__m128)xmmword_A965C0); /*0x9435b3*/
        (*(void (__thiscall **)(int *, float *))(v12 + 0x10))(v10, &v14[3]); /*0x9435b8*/
        v13 = -v11; /*0x9435bb*/
      }
      else
      {
        v13 = *(float *)&SrcStr; /*0x9435bf*/
        v14[1] = 0.0; /*0x9435c5*/
      }
      if ( v13 < *a6 ) /*0x9435d9*/
        *a6 = v13; /*0x9435db*/
      if ( v14[1] > (double)*a7 ) /*0x9435ef*/
        *a7 = v14[1]; /*0x9435f5*/
      a4 += 4; /*0x9435fb*/
      --LODWORD(v14[2]); /*0x9435ff*/
    }
    while ( LODWORD(v14[2]) ); /*0x943603*/
  }
  return result; /*0x943609*/
}
