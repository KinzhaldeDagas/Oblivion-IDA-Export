float *__thiscall sub_7118E0(float *this, float a2, float a3, float a4)
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

  v10 = cos(a4); /*0x7118f3*/
  v7 = sin(a4); /*0x7118f7*/
  v14[0] = 1.0; /*0x7118fd*/
  v14[1] = 0.0; /*0x711903*/
  v14[2] = 0.0; /*0x711907*/
  v14[3] = 0.0; /*0x71190b*/
  v14[4] = v10; /*0x711913*/
  v14[5] = v7; /*0x71191b*/
  v14[6] = 0.0; /*0x711921*/
  v14[7] = -v7; /*0x711929*/
  v14[8] = v10; /*0x71192d*/
  v8 = cos(a3); /*0x71193a*/
  v11 = sin(a3); /*0x71193e*/
  v13[0] = v8; /*0x711946*/
  v13[1] = 0.0; /*0x71194c*/
  v13[2] = -v11; /*0x711958*/
  v13[3] = 0.0; /*0x71195e*/
  v13[4] = 1.0; /*0x711964*/
  v13[5] = 0.0; /*0x711968*/
  v13[7] = 0.0; /*0x71196c*/
  v13[6] = v11; /*0x711970*/
  v13[8] = v8; /*0x711974*/
  v9 = cos(a2); /*0x711981*/
  v12 = sin(a2); /*0x711985*/
  v15[0] = v9; /*0x711991*/
  v15[1] = v12; /*0x7119a1*/
  v15[2] = 0.0; /*0x7119ac*/
  v15[3] = -v12; /*0x7119b4*/
  v15[4] = v9; /*0x7119ba*/
  v15[5] = 0.0; /*0x7119be*/
  v15[6] = 0.0; /*0x7119c2*/
  v15[7] = 0.0; /*0x7119c6*/
  v15[8] = 1.0; /*0x7119cc*/
  v5 = NiMAtrix33_Multiply(v13, v16, v14); /*0x7119d3*/
  result = NiMAtrix33_Multiply(v15, v13, v5); /*0x7119e2*/
  qmemcpy(this, result, 0x24u); /*0x7119ee*/
  return result; /*0x7119f0*/
}
