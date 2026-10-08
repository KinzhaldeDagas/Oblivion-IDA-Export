NiMatrix33 *__thiscall sub_711580(NiMatrix33 *this, float a2, float a3, float a4)
{
  NiMatrix33 *v5; // eax
  NiMatrix33 *result; // eax
  float v7; // [esp+8h] [ebp-98h]
  float v8; // [esp+8h] [ebp-98h]
  float v9; // [esp+8h] [ebp-98h]
  float v10; // [esp+Ch] [ebp-94h]
  float v11; // [esp+Ch] [ebp-94h]
  float v12; // [esp+Ch] [ebp-94h]
  NiMatrix33 v13; // [esp+10h] [ebp-90h] BYREF
  NiMatrix33 right; // [esp+34h] [ebp-6Ch] BYREF
  NiMatrix33 v15; // [esp+58h] [ebp-48h] BYREF
  NiMatrix33 out; // [esp+7Ch] [ebp-24h] BYREF

  v10 = cos(a2); /*0x711593*/
  v7 = sin(a2); /*0x711597*/
  v15.data[0][0] = 1.0; /*0x71159d*/
  v15.data[0][1] = 0.0; /*0x7115a3*/
  v15.data[0][2] = 0.0; /*0x7115a7*/
  v15.data[1][0] = 0.0; /*0x7115ab*/
  v15.data[1][1] = v10; /*0x7115b3*/
  v15.data[1][2] = v7; /*0x7115bb*/
  v15.data[2][0] = 0.0; /*0x7115c1*/
  v15.data[2][1] = -v7; /*0x7115c9*/
  v15.data[2][2] = v10; /*0x7115cd*/
  v8 = cos(a3); /*0x7115da*/
  v11 = sin(a3); /*0x7115de*/
  v13.data[0][0] = v8; /*0x7115e6*/
  v13.data[0][1] = 0.0; /*0x7115ec*/
  v13.data[0][2] = -v11; /*0x7115f8*/
  v13.data[1][0] = 0.0; /*0x7115fe*/
  v13.data[1][1] = 1.0; /*0x711604*/
  v13.data[1][2] = 0.0; /*0x711608*/
  v13.data[2][1] = 0.0; /*0x71160c*/
  v13.data[2][0] = v11; /*0x711610*/
  v13.data[2][2] = v8; /*0x711614*/
  v9 = cos(a4); /*0x711621*/
  v12 = sin(a4); /*0x711625*/
  right.data[0][0] = v9; /*0x711631*/
  right.data[0][1] = v12; /*0x711641*/
  right.data[0][2] = 0.0; /*0x71164c*/
  right.data[1][0] = -v12; /*0x711654*/
  right.data[1][1] = v9; /*0x71165a*/
  right.data[1][2] = 0.0; /*0x71165e*/
  right.data[2][0] = 0.0; /*0x711662*/
  right.data[2][1] = 0.0; /*0x711666*/
  right.data[2][2] = 1.0; /*0x71166c*/
  v5 = NiMAtrix33_Multiply(&v13, &out, &right); /*0x711670*/
  result = NiMAtrix33_Multiply(&v15, &v13, v5); /*0x71167f*/
  qmemcpy(this, result, sizeof(NiMatrix33)); /*0x71168b*/
  return result; /*0x71168d*/
}
