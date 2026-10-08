void __cdecl sub_957460(int a1, int a2, int a3, int a4)
{
  int v4; // ebx
  int v5; // edi
  int v6; // edx
  int v7; // esi
  float *i; // ecx
  float *j; // ecx
  int *v10; // eax
  int *v11; // ecx
  int v12; // [esp+10h] [ebp-20h]
  int v13; // [esp+14h] [ebp-1Ch]
  int v14; // [esp+18h] [ebp-18h]
  int v15; // [esp+1Ch] [ebp-14h]
  float v16; // [esp+28h] [ebp-8h]

  v4 = a2; /*0x95746a*/
  v5 = a1; /*0x95746f*/
  while ( 1 ) /*0x957472*/
  {
    v6 = a3; /*0x957472*/
    v7 = v4; /*0x957492*/
    v16 = *(float *)(v5 + 0x10 * ((v4 + a3) >> 1) + 8); /*0x957494*/
    do /*0x957552*/
    {
      for ( i = (float *)(0x10 * v7 + v5 + 8); *i < (double)v16; i += 4 ) /*0x9574a5*/
        ++v7; /*0x9574bd*/
      for ( j = (float *)(0x10 * v6 + v5 + 8); v16 < (double)*j; j += 0xFFFFFFFC ) /*0x9574c8*/
        --v6; /*0x9574dd*/
      if ( v6 < v7 ) /*0x9574e5*/
        break; /*0x9574e5*/
      if ( v6 != v7 ) /*0x9574e7*/
      {
        v10 = (int *)(0x10 * v6 + v5); /*0x9574ee*/
        v12 = *v10; /*0x9574f5*/
        v13 = v10[1]; /*0x9574fc*/
        v15 = v10[3]; /*0x957506*/
        v14 = v10[2]; /*0x957511*/
        v11 = (int *)(v5 + 0x10 * v7); /*0x95750f*/
        *v10 = *v11; /*0x957519*/
        v10[1] = v11[1]; /*0x95751e*/
        v10[2] = v11[2]; /*0x957524*/
        v4 = a2; /*0x95752a*/
        v10[3] = v11[3]; /*0x95752d*/
        v5 = a1; /*0x957534*/
        *v11 = v12; /*0x957537*/
        v11[1] = v13; /*0x95753d*/
        v11[2] = v14; /*0x957544*/
        v11[3] = v15; /*0x95754b*/
      }
      --v6; /*0x95754e*/
      ++v7; /*0x95754f*/
    }
    while ( v7 <= v6 ); /*0x957552*/
    if ( v4 < v6 ) /*0x95755a*/
      sub_957460(v5, v4, v6, a4); /*0x957563*/
    if ( v7 >= a3 ) /*0x95756e*/
      break; /*0x95756e*/
    v4 = v7; /*0x957570*/
    a2 = v7; /*0x957572*/
  }
}
