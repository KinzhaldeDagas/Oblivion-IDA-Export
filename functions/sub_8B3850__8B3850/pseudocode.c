int __thiscall sub_8B3850(float *this, int a2)
{
  int v2; // edx
  int v4; // edi
  int result; // eax
  float *v6; // ebx
  float *v7; // edi
  double v8; // st7
  double v9; // st6
  int v10; // edx
  double v11; // st5
  double v12; // st2
  double v13; // st1
  double v14; // st1
  double v15; // st1
  double v16; // st6
  bool v17; // zf
  double v18; // st7
  float v19; // [esp+10h] [ebp-4Ch]
  float v20; // [esp+14h] [ebp-48h]
  float v21; // [esp+18h] [ebp-44h]
  float v22; // [esp+1Ch] [ebp-40h]
  float v23; // [esp+20h] [ebp-3Ch]
  float v24; // [esp+24h] [ebp-38h]
  float v25; // [esp+24h] [ebp-38h]
  float v26; // [esp+28h] [ebp-34h]
  float v27; // [esp+28h] [ebp-34h]
  float v28; // [esp+2Ch] [ebp-30h]
  float v29; // [esp+2Ch] [ebp-30h]
  float v30; // [esp+30h] [ebp-2Ch]
  float v31; // [esp+30h] [ebp-2Ch]
  float v32; // [esp+34h] [ebp-28h]
  float v33; // [esp+38h] [ebp-24h]
  float v34; // [esp+38h] [ebp-24h]
  float v35; // [esp+3Ch] [ebp-20h]
  float v36; // [esp+3Ch] [ebp-20h]
  float v37; // [esp+40h] [ebp-1Ch]
  int v38; // [esp+44h] [ebp-18h]
  int v39; // [esp+48h] [ebp-14h]
  float v40; // [esp+4Ch] [ebp-10h]
  float v41; // [esp+50h] [ebp-Ch]
  float v42; // [esp+54h] [ebp-8h]
  float v43; // [esp+58h] [ebp-4h]
  float v44; // [esp+60h] [ebp+4h]

  v2 = *(_DWORD *)this;
  v4 = *((_DWORD *)this + 1);
  *(this + 0xC) = 0.0;
  *(this + 0xB) = 0.0;
  *(this + 0xA) = 0.0;
  *(this + 9) = 0.0;
  *(this + 8) = 0.0;
  *(this + 7) = 0.0;
  *(this + 6) = 0.0;
  *(this + 5) = 0.0;
  *(this + 4) = 0.0;
  *(this + 3) = 0.0;
  result = 1;
  v6 = (float *)(a2 + 4 * v4);
  v38 = 1;
  v7 = (float *)(a2 + 4 * v2);
  v39 = 3;
  do
  {
    v8 = *v7;
    v9 = *v6;
    v10 = 4 * (result % 3);
    v44 = *(float *)(a2 + 4 * (v10 + *(_DWORD *)this));
    v11 = *(float *)(a2 + 4 * (*((_DWORD *)this + 1) + v10));
    v20 = v44 - v8;
    v22 = v8 * v8 * v8;
    v23 = v9 * v9;
    v19 = v9 * v9 * v9;
    v21 = v44 * v44;
    v35 = v11 * v11;
    v37 = v11 * v11 * v11;
    v12 = v44 + v8;
    v13 = v44 * v12 + v8 * v8;
    v24 = v13;
    v26 = v13 * v44 + v22;
    v14 = (v11 + v9) * v11 + v23;
    v28 = v14;
    v30 = v14 * v11 + v19;
    v15 = v44 * v8 + v44 * v8;
    v32 = v21 * *(float *)&dword_A46C30 + v15 + v8 * v8;
    v33 = v8 * v8 * *(float *)&dword_A46C30 + v15 + v21;
    v40 = v12 * (v11 - v9) + *(this + 3);
    *(this + 3) = v40;
    v25 = v24 * (v11 - v9) + *(this + 4);
    *(this + 4) = v25;
    v41 = v26 * (v11 - v9) + *(this + 6);
    *(this + 6) = v41;
    v27 = (v22 * v8 + v26 * v44) * (v11 - v9) + *(this + 9);
    *(this + 9) = v27;
    v29 = v28 * v20 + *(this + 5);
    *(this + 5) = v29;
    v42 = v30 * v20 + *(this + 8);
    *(this + 8) = v42;
    v31 = (v19 * v9 + v30 * v11) * v20 + *(this + 0xC);
    *(this + 0xC) = v31;
    v43 = (v32 * v11 + v33 * v9) * (v11 - v9) + *(this + 7);
    *(this + 7) = v43;
    v34 = (v11 - v9) * ((v21 * v44 * flt_A46B10 + v32 * v8) * v11 + (v33 * v44 + v22 * flt_A46B10) * v9) + *(this + 0xA);
    *(this + 0xA) = v34;
    v36 = v35 * v9;
    v16 = v23 * v11;
    v7 += 4;
    v6 += 4;
    result = v38 + 1;
    v17 = v39 == 1;
    ++v38;
    --v39;
    v18 = (v8 * (*(float *)&dword_A46C30 * v16 + v36 + v36 + v19 * flt_A46B10 + v37)
         + (v16 + v16 + v36 * *(float *)&dword_A46C30 + v37 * flt_A46B10 + v19) * v44)
        * v20
        + *(this + 0xB);
    *(this + 0xB) = v18;
  }
  while ( !v17 );
  *(this + 3) = v40 * flt_A3D65C;
  *(this + 4) = v25 * flt_A97F44;
  *(this + 6) = v41 * flt_A8C5F8;
  *(this + 9) = v27 * flt_A43328;
  *(this + 5) = v29 * flt_A97F40;
  *(this + 8) = v42 * flt_A97F3C;
  *(this + 0xC) = v31 * flt_A641BC;
  *(this + 7) = v43 * flt_A97F38;
  *(this + 0xA) = v34 * flt_A97F34;
  *(this + 0xB) = v18 * flt_A97F30;
  return result;
}
