// Writes a NiMatrix33 from Euler angles in Z*(X*Y) order: yawZ, pitchX, rollY. All observed callers use the written matrix and ignore incidental EAX.
void __thiscall NiMatrix33_SetEulerZXY(NiMatrix33 *this, float yawZ, float pitchX, float rollY)
{
  NiMatrix33 *v5; // eax
  float v6; // [esp+8h] [ebp-98h]
  float v7; // [esp+8h] [ebp-98h]
  float v8; // [esp+8h] [ebp-98h]
  float v9; // [esp+Ch] [ebp-94h]
  float v10; // [esp+Ch] [ebp-94h]
  float v11; // [esp+Ch] [ebp-94h]
  NiMatrix33 v12; // [esp+10h] [ebp-90h] BYREF
  NiMatrix33 right; // [esp+34h] [ebp-6Ch] BYREF
  NiMatrix33 v14; // [esp+58h] [ebp-48h] BYREF
  NiMatrix33 out; // [esp+7Ch] [ebp-24h] BYREF

  v9 = cos(pitchX); /*0x7117d3*/
  v6 = sin(pitchX); /*0x7117d7*/
  v12.data[0][0] = 1.0; /*0x7117dd*/
  v12.data[0][1] = 0.0; /*0x7117e3*/
  v12.data[0][2] = 0.0; /*0x7117e7*/
  v12.data[1][0] = 0.0; /*0x7117eb*/
  v12.data[1][1] = v9; /*0x7117f3*/
  v12.data[1][2] = v6; /*0x7117fb*/
  v12.data[2][0] = 0.0; /*0x711801*/
  v12.data[2][1] = -v6; /*0x711809*/
  v12.data[2][2] = v9; /*0x71180d*/
  v7 = cos(rollY); /*0x71181a*/
  v10 = sin(rollY); /*0x71181e*/
  right.data[0][0] = v7; /*0x711826*/
  right.data[0][1] = 0.0; /*0x71182c*/
  right.data[0][2] = -v10; /*0x711838*/
  right.data[1][0] = 0.0; /*0x71183e*/
  right.data[1][1] = 1.0; /*0x711844*/
  right.data[1][2] = 0.0; /*0x711848*/
  right.data[2][1] = 0.0; /*0x71184c*/
  right.data[2][0] = v10; /*0x711850*/
  right.data[2][2] = v7; /*0x711854*/
  v8 = cos(yawZ); /*0x711861*/
  v11 = sin(yawZ); /*0x711865*/
  v14.data[0][0] = v8; /*0x711871*/
  v14.data[0][1] = v11; /*0x711881*/
  v14.data[0][2] = 0.0; /*0x71188c*/
  v14.data[1][0] = -v11; /*0x711894*/
  v14.data[1][1] = v8; /*0x71189a*/
  v14.data[1][2] = 0.0; /*0x71189e*/
  v14.data[2][0] = 0.0; /*0x7118a2*/
  v14.data[2][1] = 0.0; /*0x7118a6*/
  v14.data[2][2] = 1.0; /*0x7118ac*/
  v5 = NiMAtrix33_Multiply(&v12, &out, &right); /*0x7118b3*/
  qmemcpy(this, NiMAtrix33_Multiply(&v14, &v12, v5), sizeof(NiMatrix33)); /*0x7118ce*/
}
