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

  v4 = this + 1;
  v19 = this + 1;
  v5 = sub_714D80((float *)v35, a2 + 1);
  v6 = sub_714CF0(v5, (float *)v34, v19);
  sub_714DB0((float *)v37, v6);
  v7 = sub_714D80((float *)v34, v4);
  v8 = sub_714CF0(v7, (float *)v35, a3 + 1);
  sub_714DB0((float *)v36, v8);
  v33 = 1.0 / (*a3 - *a2);
  v32 = 1.0 - *(this + 5);
  v30 = 1.0 - *(this + 6);
  v31 = *(this + 6) + 1.0;
  v26 = 1.0 - *(this + 7);
  v28 = *(this + 7) + 1.0;
  v22 = (*this - *a2) * v33;
  v34[0] = v22 * v32;
  v23 = v34[0] * v31 * v28;
  v20 = (float *)sub_72F990((int)v35, v23, (int)v37);
  v24 = v30 * v34[0] * v26;
  v9 = (float *)sub_72F990((int)v38, v24, (int)v36);
  sub_714C60(v9, v41, v20);
  v10 = sub_714C90(v41, (float *)v38, (float *)v36);
  v11 = (float *)sub_72F990((int)v35, flt_A3D65C, (int)v10);
  v12 = sub_72F9F0((float *)v34, v11);
  v13 = sub_714CF0(v4, (float *)v39, v12);
  *(this + 8) = *v13;
  *(this + 9) = v13[1];
  *(this + 0xA) = v13[2];
  *(this + 0xB) = v13[3];
  v25 = (*a3 - *this) * v33;
  v34[0] = v25 * v32;
  v29 = v34[0] * v30 * v28;
  v21 = (float *)sub_72F990((int)v39, v29, (int)v37);
  v27 = v31 * v34[0] * v26;
  v14 = (float *)sub_72F990((int)v38, v27, (int)v36);
  sub_714C60(v14, v40, v21);
  v15 = sub_714C90((float *)v37, (float *)v39, v40);
  v16 = (float *)sub_72F990((int)v38, flt_A3D65C, (int)v15);
  v17 = sub_72F9F0((float *)v35, v16);
  result = sub_714CF0(v4, (float *)v34, v17);
  *(this + 0xC) = *result;
  *(this + 0xD) = result[1];
  *(this + 0xE) = result[2];
  *(this + 0xF) = result[3];
  return result;
}
