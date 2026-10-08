NiMatrix33 *__thiscall sub_7116A0(NiMatrix33 *this, float a2, float a3, float a4)
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

  v10 = cos(a2); /*0x7116b3*/
  v7 = sin(a2); /*0x7116b7*/
  v15.data[0][0] = 1.0; /*0x7116bd*/
  v15.data[0][1] = 0.0; /*0x7116c3*/
  v15.data[0][2] = 0.0; /*0x7116c7*/
  v15.data[1][0] = 0.0; /*0x7116cb*/
  v15.data[1][1] = v10; /*0x7116d3*/
  v15.data[1][2] = v7; /*0x7116db*/
  v15.data[2][0] = 0.0; /*0x7116e1*/
  v15.data[2][1] = -v7; /*0x7116e9*/
  v15.data[2][2] = v10; /*0x7116ed*/
  v8 = cos(a4); /*0x7116fa*/
  v11 = sin(a4); /*0x7116fe*/
  right.data[0][0] = v8; /*0x711706*/
  right.data[0][1] = 0.0; /*0x71170c*/
  right.data[0][2] = -v11; /*0x711718*/
  right.data[1][0] = 0.0; /*0x71171e*/
  right.data[1][1] = 1.0; /*0x711724*/
  right.data[1][2] = 0.0; /*0x711728*/
  right.data[2][1] = 0.0; /*0x71172c*/
  right.data[2][0] = v11; /*0x711730*/
  right.data[2][2] = v8; /*0x711734*/
  v9 = cos(a3); /*0x711741*/
  v12 = sin(a3); /*0x711745*/
  v13.data[0][0] = v9; /*0x711751*/
  v13.data[0][1] = v12; /*0x711761*/
  v13.data[0][2] = 0.0; /*0x71176c*/
  v13.data[1][0] = -v12; /*0x711774*/
  v13.data[1][1] = v9; /*0x71177a*/
  v13.data[1][2] = 0.0; /*0x71177e*/
  v13.data[2][0] = 0.0; /*0x711782*/
  v13.data[2][1] = 0.0; /*0x711786*/
  v13.data[2][2] = 1.0; /*0x71178c*/
  v5 = NiMAtrix33_Multiply(&v13, &out, &right); /*0x711790*/
  result = NiMAtrix33_Multiply(&v15, &v13, v5); /*0x71179f*/
  qmemcpy(this, result, sizeof(NiMatrix33)); /*0x7117ab*/
  return result; /*0x7117ad*/
}
