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

  v4 = a2;
  v5 = a1;
  while ( 1 )
  {
    v6 = a3;
    v7 = v4;
    v16 = *(float *)(v5 + 0x10 * ((v4 + a3) >> 1) + 8);
    do
    {
      for ( i = (float *)(0x10 * v7 + v5 + 8); *i < (double)v16; i += 4 )
        ++v7;
      for ( j = (float *)(0x10 * v6 + v5 + 8); v16 < (double)*j; j += 0xFFFFFFFC )
        --v6;
      if ( v6 < v7 )
        break;
      if ( v6 != v7 )
      {
        v10 = (int *)(0x10 * v6 + v5);
        v12 = *v10;
        v13 = v10[1];
        v15 = v10[3];
        v14 = v10[2];
        v11 = (int *)(v5 + 0x10 * v7);
        *v10 = *v11;
        v10[1] = v11[1];
        v10[2] = v11[2];
        v4 = a2;
        v10[3] = v11[3];
        v5 = a1;
        *v11 = v12;
        v11[1] = v13;
        v11[2] = v14;
        v11[3] = v15;
      }
      --v6;
      ++v7;
    }
    while ( v7 <= v6 );
    if ( v4 < v6 )
      sub_957460(v5, v4, v6, a4);
    if ( v7 >= a3 )
      break;
    v4 = v7;
    a2 = v7;
  }
}
