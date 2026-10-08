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

  _memset((int)a2, 0, 0x30u); /*0x680f6d*/
  if ( a1 ) /*0x680f7b*/
  {
    CharProxy = MobileObject_GetCharProxy(a1); /*0x680f81*/
    if ( CharProxy ) /*0x680f88*/
    {
      v3 = *((_DWORD *)CharProxy + 0xDA); /*0x680f8e*/
      if ( v3 ) /*0x680f96*/
      {
        v4 = *(__m128 **)(v3 + 8); /*0x680f9c*/
        if ( v4 ) /*0x680fa1*/
        {
          v5 = v4 + 7; /*0x680fa9*/
          HavokVector_ToWorldVector(a2, v4 + 7); /*0x680fae*/
          HavokVector_ToWorldVector(a2 + 3, v5 + 1); /*0x680fbb*/
          v11 = a2[3] - *a2; /*0x680fc7*/
          v13 = a2[4] - a2[1]; /*0x680fd5*/
          v6 = a2[5]; /*0x680fdd*/
          a2[6] = v11; /*0x680fe0*/
          v7 = v6 - a2[2]; /*0x680fe3*/
          a2[7] = v13; /*0x680fe6*/
          v15 = v7; /*0x680fe9*/
          a2[8] = v15; /*0x680ff1*/
          v12 = a2[3] + *a2; /*0x680ff8*/
          v14 = a2[4] + a2[1]; /*0x681006*/
          v8 = a2[5]; /*0x68100e*/
          a2[9] = v12; /*0x681011*/
          v9 = v8 + a2[2]; /*0x681014*/
          a2[0xA] = v14; /*0x681017*/
          v16 = v9; /*0x68101c*/
          a2[0xB] = v16; /*0x681024*/
          v10 = dbl_A2FAA0; /*0x681032*/
          a2[9] = a2[9] * v10; /*0x681034*/
          a2[0xA] = a2[0xA] * v10; /*0x68103c*/
          a2[0xB] = v10 * a2[0xB]; /*0x681042*/
        }
      }
    }
  }
}
