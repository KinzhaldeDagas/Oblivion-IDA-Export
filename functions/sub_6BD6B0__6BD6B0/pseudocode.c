void __cdecl sub_6BD6B0(float *a1, unsigned int a2, unsigned __int8 a3)
{
  unsigned int v3; // ebx
  float *v4; // esi
  float *v5; // eax
  float *v6; // eax
  bool v7; // zf
  float *v8; // esi
  float *v9; // eax
  int v10; // [esp+4h] [ebp-14h]
  float v11[4]; // [esp+8h] [ebp-10h] BYREF

  v3 = a2;
  if ( a2 >= 2 )
  {
    sub_6BD310((int)a1, a2, a3);
    v4 = a1 + 0xA;
    v5 = sub_714E70(v11, a1 + 1, a1 + 1, a1 + 0xA);
    a1[5] = *v5;
    a1[6] = v5[1];
    a1[7] = v5[2];
    a1[8] = v5[3];
    if ( a2 - 1 > 1 )
    {
      v10 = a2 - 2;
      do
      {
        v6 = sub_714E70(v11, v4 + 0xFFFFFFF7, v4, v4 + 9);
        v4[4] = *v6;
        v4[5] = v6[1];
        v4[6] = v6[2];
        v7 = v10-- == 1;
        v4[7] = v6[3];
        v4 += 9;
      }
      while ( !v7 );
      v3 = a2;
    }
    v8 = &a1[9 * a2 - 9];
    v9 = sub_714E70(v11, &a1[9 * v3 - 0x11], v8 + 1, v8 + 1);
    v8[5] = *v9;
    v8[6] = v9[1];
    v8[7] = v9[2];
    v8[8] = v9[3];
  }
}
