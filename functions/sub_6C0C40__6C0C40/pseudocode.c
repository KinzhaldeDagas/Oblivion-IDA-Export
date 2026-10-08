float *__thiscall sub_6C0C40(float *this, float *a2, float *a3)
{
  float *v4; // edi
  float *v5; // eax
  float *v6; // eax
  float *v7; // eax
  float *v8; // eax
  float *v9; // eax
  float *v10; // eax
  float *v11; // eax
  float *v12; // eax
  float *v13; // eax
  float *v14; // eax
  float *v15; // eax
  float *v16; // eax
  float *v17; // eax
  float *result; // eax
  float *v19; // [esp+Ch] [ebp-B0h]
  float *v20; // [esp+Ch] [ebp-B0h]
  float *v21; // [esp+Ch] [ebp-B0h]
  float v22; // [esp+20h] [ebp-9Ch]
  float v23; // [esp+20h] [ebp-9Ch]
  float v24; // [esp+20h] [ebp-9Ch]
  float v25; // [esp+20h] [ebp-9Ch]
  float v26; // [esp+24h] [ebp-98h]
  float v27; // [esp+24h] [ebp-98h]
  float v28; // [esp+28h] [ebp-94h]
  float v29; // [esp+28h] [ebp-94h]
  float v30; // [esp+2Ch] [ebp-90h]
  float v31; // [esp+30h] [ebp-8Ch]
  float v32; // [esp+34h] [ebp-88h]
  float v33; // [esp+38h] [ebp-84h]
  double v34[2]; // [esp+3Ch] [ebp-80h] BYREF
  int v35[4]; // [esp+4Ch] [ebp-70h] BYREF
  int v36[4]; // [esp+5Ch] [ebp-60h] BYREF
  int v37[4]; // [esp+6Ch] [ebp-50h] BYREF
  int v38[4]; // [esp+7Ch] [ebp-40h] BYREF
  int v39[4]; // [esp+8Ch] [ebp-30h] BYREF
  float v40[4]; // [esp+9Ch] [ebp-20h] BYREF
  float v41[4]; // [esp+ACh] [ebp-10h] BYREF

  v4 = this + 1; /*0x6c0c53*/
  v19 = this + 1; /*0x6c0c56*/
  v5 = sub_714D80((float *)v35, a2 + 1); /*0x6c0c65*/
  v6 = sub_714CF0(v5, (float *)v34, v19); /*0x6c0c6f*/
  sub_714DB0((float *)v37, v6); /*0x6c0c7a*/
  v7 = sub_714D80((float *)v34, v4); /*0x6c0c98*/
  v8 = sub_714CF0(v7, (float *)v35, a3 + 1); /*0x6c0ca2*/
  sub_714DB0((float *)v36, v8); /*0x6c0cad*/
  v33 = 1.0 / (*a3 - *a2); /*0x6c0ccc*/
  v32 = 1.0 - *(this + 5); /*0x6c0cd5*/
  v30 = 1.0 - *(this + 6); /*0x6c0cde*/
  v31 = *(this + 6) + 1.0; /*0x6c0ce7*/
  v26 = 1.0 - *(this + 7); /*0x6c0cf0*/
  v28 = *(this + 7) + 1.0; /*0x6c0cf7*/
  v22 = (*this - *a2) * v33; /*0x6c0d03*/
  v34[0] = v22 * v32; /*0x6c0d0f*/
  v23 = v34[0] * v31 * v28; /*0x6c0d1b*/
  v20 = sub_72F990((float *)v35, v23, (float *)v37); /*0x6c0d2f*/
  v24 = v30 * v34[0] * v26; /*0x6c0d4e*/
  v9 = sub_72F990((float *)v38, v24, (float *)v36); /*0x6c0d5a*/
  sub_714C60(v9, v41, v20); /*0x6c0d64*/
  v10 = sub_714C90(v41, (float *)v38, (float *)v36); /*0x6c0d7a*/
  v11 = sub_72F990((float *)v35, kHeadBodyNormalMatchRadius, v10); /*0x6c0d8f*/
  v12 = sub_72F9F0((float *)v34, v11); /*0x6c0d9a*/
  v13 = sub_714CF0(v4, (float *)v39, v12); /*0x6c0dad*/
  *(this + 8) = *v13; /*0x6c0db4*/
  *(this + 9) = v13[1]; /*0x6c0dba*/
  *(this + 0xA) = v13[2]; /*0x6c0dc0*/
  *(this + 0xB) = v13[3]; /*0x6c0dc6*/
  v25 = (*a3 - *this) * v33; /*0x6c0ddf*/
  v34[0] = v25 * v32; /*0x6c0deb*/
  v29 = v34[0] * v30 * v28; /*0x6c0df7*/
  v21 = sub_72F990((float *)v39, v29, (float *)v37); /*0x6c0e13*/
  v27 = v31 * v34[0] * v26; /*0x6c0e25*/
  v14 = sub_72F990((float *)v38, v27, (float *)v36); /*0x6c0e36*/
  sub_714C60(v14, v40, v21); /*0x6c0e40*/
  v15 = sub_714C90((float *)v37, (float *)v39, v40); /*0x6c0e59*/
  v16 = sub_72F990((float *)v38, kHeadBodyNormalMatchRadius, v15); /*0x6c0e6e*/
  v17 = sub_72F9F0((float *)v35, v16); /*0x6c0e79*/
  result = sub_714CF0(v4, (float *)v34, v17); /*0x6c0e89*/
  *(this + 0xC) = *result; /*0x6c0e90*/
  *(this + 0xD) = result[1]; /*0x6c0e96*/
  *(this + 0xE) = result[2]; /*0x6c0e9c*/
  *(this + 0xF) = result[3]; /*0x6c0ea3*/
  return result; /*0x6c0ea2*/
}
