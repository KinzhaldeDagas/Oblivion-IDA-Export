float *__thiscall sub_711580(float *this, float a2, float a3, float a4)
{
  float *v5; // eax
  float *result; // eax
  float v7; // [esp+8h] [ebp-98h]
  float v8; // [esp+8h] [ebp-98h]
  float v9; // [esp+8h] [ebp-98h]
  float v10; // [esp+Ch] [ebp-94h]
  float v11; // [esp+Ch] [ebp-94h]
  float v12; // [esp+Ch] [ebp-94h]
  float v13[9]; // [esp+10h] [ebp-90h] BYREF
  float v14[9]; // [esp+34h] [ebp-6Ch] BYREF
  float v15[9]; // [esp+58h] [ebp-48h] BYREF
  float v16[9]; // [esp+7Ch] [ebp-24h] BYREF

  v10 = cos(a2);
  v7 = sin(a2);
  v15[0] = 1.0;
  v15[1] = 0.0;
  v15[2] = 0.0;
  v15[3] = 0.0;
  v15[4] = v10;
  v15[5] = v7;
  v15[6] = 0.0;
  v15[7] = -v7;
  v15[8] = v10;
  v8 = cos(a3);
  v11 = sin(a3);
  v13[0] = v8;
  v13[1] = 0.0;
  v13[2] = -v11;
  v13[3] = 0.0;
  v13[4] = 1.0;
  v13[5] = 0.0;
  v13[7] = 0.0;
  v13[6] = v11;
  v13[8] = v8;
  v9 = cos(a4);
  v12 = sin(a4);
  v14[0] = v9;
  v14[1] = v12;
  v14[2] = 0.0;
  v14[3] = -v12;
  v14[4] = v9;
  v14[5] = 0.0;
  v14[6] = 0.0;
  v14[7] = 0.0;
  v14[8] = 1.0;
  v5 = NiMAtrix33_Multiply(v13, v16, v14);
  result = NiMAtrix33_Multiply(v15, v13, v5);
  qmemcpy(this, result, 0x24u);
  return result;
}
