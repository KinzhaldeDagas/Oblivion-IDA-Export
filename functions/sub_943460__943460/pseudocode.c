double __userpurge sub_943460@<st0>(
        int a1@<ecx>,
        double result@<st0>,
        __m128 *a3,
        int a4,
        int a5,
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

  *a6 = 3.4028235e38; /*0x943470*/
  *a7 = -3.4028235e38; /*0x943482*/
  if ( a5 > 0 ) /*0x943488*/
  {
    v8 = (float *)(a4 + 0xC); /*0x943491*/
    LODWORD(v14[2]) = a5; /*0x943494*/
    do /*0x943530*/
    {
      v9 = (*(int (__thiscall **)(_DWORD, _DWORD, _BYTE *))(**(_DWORD **)(a1 + 8) + 0x28))( /*0x9434a6*/
             *(_DWORD *)(a1 + 8),
             *((_DWORD *)v8 + 0xFFFFFFFD),
             v15);
      v10 = (int *)v9; /*0x9434a9*/
      if ( v9 ) /*0x9434ad*/
      {
        v11 = ((double (__thiscall *)(int, __m128 *))*(_DWORD *)(*(_DWORD *)v9 + 0x10))(v9, a3); /*0x9434b7*/
        v14[1] = result; /*0x9434ba*/
        v12 = *v10; /*0x9434cb*/
        *(__m128 *)&v14[3] = _mm_xor_ps(*a3, (__m128)xmmword_A965C0); /*0x9434d7*/
        (*(void (__thiscall **)(int *, float *))(v12 + 0x10))(v10, &v14[3]); /*0x9434dc*/
        v13 = -v11; /*0x9434df*/
      }
      else
      {
        v13 = *(float *)&SrcStr; /*0x9434e3*/
        v14[1] = 0.0; /*0x9434e9*/
      }
      v8[0xFFFFFFFF] = v13; /*0x9434f5*/
      *v8 = v14[1]; /*0x9434fd*/
      if ( v13 < *a6 ) /*0x943506*/
        *a6 = v13; /*0x943508*/
      if ( v14[1] > (double)*a7 ) /*0x94351c*/
        *a7 = v14[1]; /*0x943522*/
      v8 += 4; /*0x943528*/
      --LODWORD(v14[2]); /*0x94352c*/
    }
    while ( LODWORD(v14[2]) ); /*0x943530*/
  }
  return result; /*0x943536*/
}
