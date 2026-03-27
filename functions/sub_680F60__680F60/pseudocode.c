void __cdecl sub_680F60(MobileObject *a1, float *a2)
{
  bhkCharacterProxy *CharProxy; // eax
  int v3; // eax
  __m128 *v4; // eax
  __m128 *v5; // ebx
  double v6; // st7
  double v7; // st7
  double v8; // st7
  double v9; // st7
  double v10; // rt0
  float v11; // [esp+4h] [ebp-Ch]
  float v12; // [esp+4h] [ebp-Ch]
  float v13; // [esp+8h] [ebp-8h]
  float v14; // [esp+8h] [ebp-8h]
  float v15; // [esp+Ch] [ebp-4h]
  float v16; // [esp+Ch] [ebp-4h]

  _memset(a2, 0, 0x30);
  if ( a1 )
  {
    CharProxy = MobileObject_GetCharProxy(a1);
    if ( CharProxy )
    {
      v3 = *((_DWORD *)CharProxy + 0xDA);
      if ( v3 )
      {
        v4 = *(__m128 **)(v3 + 8);
        if ( v4 )
        {
          v5 = v4 + 7;
          sub_43F3E0(a2, v4 + 7);
          sub_43F3E0(a2 + 3, v5 + 1);
          v11 = a2[3] - *a2;
          v13 = a2[4] - a2[1];
          v6 = a2[5];
          a2[6] = v11;
          v7 = v6 - a2[2];
          a2[7] = v13;
          v15 = v7;
          a2[8] = v15;
          v12 = a2[3] + *a2;
          v14 = a2[4] + a2[1];
          v8 = a2[5];
          a2[9] = v12;
          v9 = v8 + a2[2];
          a2[0xA] = v14;
          v16 = v9;
          a2[0xB] = v16;
          v10 = dbl_A2FAA0;
          a2[9] = a2[9] * v10;
          a2[0xA] = a2[0xA] * v10;
          a2[0xB] = v10 * a2[0xB];
        }
      }
    }
  }
}
