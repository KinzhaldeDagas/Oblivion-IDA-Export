int __thiscall sub_6BFF30(float *this, float *a2, float *a3, float a4, float a5)
{
  double v5; // st6
  double v6; // st6
  double v7; // st5
  double v8; // st3
  double v9; // st4
  double v11; // st7
  float v12; // [esp+0h] [ebp-38h]
  float v13; // [esp+0h] [ebp-38h]
  float v14; // [esp+4h] [ebp-34h]
  float v15; // [esp+4h] [ebp-34h]
  float v16; // [esp+4h] [ebp-34h]
  float v17; // [esp+8h] [ebp-30h]
  float v18; // [esp+Ch] [ebp-2Ch]
  float v19; // [esp+10h] [ebp-28h]
  float v20; // [esp+14h] [ebp-24h]
  float v21; // [esp+14h] [ebp-24h]
  float v22; // [esp+14h] [ebp-24h]
  float v23; // [esp+18h] [ebp-20h]
  float v24; // [esp+18h] [ebp-20h]
  float v25; // [esp+18h] [ebp-20h]
  float v26; // [esp+1Ch] [ebp-1Ch]
  float v27; // [esp+1Ch] [ebp-1Ch]
  float v28; // [esp+1Ch] [ebp-1Ch]
  float v29; // [esp+20h] [ebp-18h]
  float v30; // [esp+20h] [ebp-18h]
  float v31; // [esp+24h] [ebp-14h]
  float v32; // [esp+24h] [ebp-14h]
  float v33; // [esp+28h] [ebp-10h]
  float v34; // [esp+28h] [ebp-10h]
  float v35; // [esp+2Ch] [ebp-Ch]
  float v36; // [esp+2Ch] [ebp-Ch]
  float v37; // [esp+30h] [ebp-8h]
  float v38; // [esp+30h] [ebp-8h]
  float v39; // [esp+34h] [ebp-4h]
  float v40; // [esp+34h] [ebp-4h]
  float v41; // [esp+3Ch] [ebp+4h]
  float v42; // [esp+3Ch] [ebp+4h]
  float v43; // [esp+3Ch] [ebp+4h]
  float v44; // [esp+3Ch] [ebp+4h]
  float v45; // [esp+3Ch] [ebp+4h]
  float v46; // [esp+3Ch] [ebp+4h]
  float v47; // [esp+3Ch] [ebp+4h]
  float v48; // [esp+3Ch] [ebp+4h]
  float v49; // [esp+40h] [ebp+8h]

  v17 = *(this + 1) - *a2;
  v18 = *(this + 2) - a2[1];
  v19 = *(this + 3) - a2[2];
  v20 = *a3 - *(this + 1);
  v23 = a3[1] - *(this + 2);
  v26 = a3[2] - *(this + 3);
  v49 = *(this + 6) + 1.0;
  v14 = 1.0 - *(this + 6);
  v12 = (1.0 - *(this + 4)) * dbl_A2FAA0;
  v41 = *(this + 5) + 1.0;
  v5 = v12;
  v13 = v41 * v12;
  v42 = 1.0 - *(this + 5);
  v43 = v5 * v42;
  v6 = v14;
  v15 = v13 * v14;
  v7 = v20;
  v29 = v20 * v15;
  v8 = v23;
  v31 = v23 * v15;
  v9 = v26;
  v33 = v15 * v26;
  v16 = v43 * v49;
  v21 = v16 * v17;
  v24 = v18 * v16;
  v27 = v16 * v19;
  v35 = v21 + v29;
  *(this + 7) = v35;
  v37 = v24 + v31;
  *(this + 8) = v37;
  v39 = v27 + v33;
  *(this + 9) = v39;
  v44 = v6 * v43;
  v30 = v7 * v44;
  v32 = v8 * v44;
  v34 = v44 * v9;
  v45 = v13 * v49;
  v36 = v17 * v45;
  v38 = v18 * v45;
  v40 = v19 * v45;
  v22 = v36 + v30;
  *(this + 0xA) = v22;
  v25 = v38 + v32;
  *(this + 0xB) = v25;
  v28 = v40 + v34;
  *(this + 0xC) = v28;
  v46 = dbl_A3D0C0 / (a4 + a5);
  v11 = v46;
  v47 = a4 * v46;
  *(this + 7) = *(this + 7) * v47;
  *(this + 8) = *(this + 8) * v47;
  *(this + 9) = v47 * *(this + 9);
  v48 = v11 * a5;
  *(this + 0xA) = *(this + 0xA) * v48;
  *(this + 0xB) = *(this + 0xB) * v48;
  *(this + 0xC) = v48 * *(this + 0xC);
  return LODWORD(v25);
}
