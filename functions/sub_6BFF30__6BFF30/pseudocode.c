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

  v17 = *(this + 1) - *a2; /*0x6bff3c*/
  v18 = *(this + 2) - a2[1]; /*0x6bff46*/
  v19 = *(this + 3) - a2[2]; /*0x6bff54*/
  v20 = *a3 - *(this + 1); /*0x6bff5d*/
  v23 = a3[1] - *(this + 2); /*0x6bff67*/
  v26 = a3[2] - *(this + 3); /*0x6bff71*/
  v49 = *(this + 6) + 1.0; /*0x6bff7e*/
  v14 = 1.0 - *(this + 6); /*0x6bff87*/
  v12 = (1.0 - *(this + 4)) * dbl_A2FAA0; /*0x6bff96*/
  v41 = *(this + 5) + 1.0; /*0x6bff9e*/
  v5 = v12; /*0x6bffad*/
  v13 = v41 * v12; /*0x6bffaf*/
  v42 = 1.0 - *(this + 5); /*0x6bffb9*/
  v43 = v5 * v42; /*0x6bffc1*/
  v6 = v14; /*0x6bffd2*/
  v15 = v13 * v14; /*0x6bffd4*/
  v7 = v20; /*0x6bffd8*/
  v29 = v20 * v15; /*0x6bffe8*/
  v8 = v23; /*0x6bffec*/
  v31 = v23 * v15; /*0x6bfff4*/
  v9 = v26; /*0x6c0000*/
  v33 = v15 * v26; /*0x6c0002*/
  v16 = v43 * v49; /*0x6c000e*/
  v21 = v16 * v17; /*0x6c001c*/
  v24 = v18 * v16; /*0x6c0026*/
  v27 = v16 * v19; /*0x6c0034*/
  v35 = v21 + v29; /*0x6c0040*/
  *(this + 7) = v35; /*0x6c004c*/
  v37 = v24 + v31; /*0x6c0053*/
  *(this + 8) = v37; /*0x6c005f*/
  v39 = v27 + v33; /*0x6c0066*/
  *(this + 9) = v39; /*0x6c0072*/
  v44 = v6 * v43; /*0x6c0079*/
  v30 = v7 * v44; /*0x6c0087*/
  v32 = v8 * v44; /*0x6c008d*/
  v34 = v44 * v9; /*0x6c0093*/
  v45 = v13 * v49; /*0x6c009f*/
  v36 = v17 * v45; /*0x6c00b1*/
  v38 = v18 * v45; /*0x6c00bb*/
  v40 = v19 * v45; /*0x6c00c1*/
  v22 = v36 + v30; /*0x6c00cd*/
  *(this + 0xA) = v22; /*0x6c00d9*/
  v25 = v38 + v32; /*0x6c00e0*/
  *(this + 0xB) = v25; /*0x6c00ec*/
  v28 = v40 + v34; /*0x6c00f3*/
  *(this + 0xC) = v28; /*0x6c00ff*/
  v46 = dbl_A3D0C0 / (a4 + a5); /*0x6c0116*/
  v11 = v46; /*0x6c0122*/
  v47 = a4 * v46; /*0x6c0124*/
  *(this + 7) = *(this + 7) * v47; /*0x6c0135*/
  *(this + 8) = *(this + 8) * v47; /*0x6c013d*/
  *(this + 9) = v47 * *(this + 9); /*0x6c0143*/
  v48 = v11 * a5; /*0x6c0148*/
  *(this + 0xA) = *(this + 0xA) * v48; /*0x6c0159*/
  *(this + 0xB) = *(this + 0xB) * v48; /*0x6c0161*/
  *(this + 0xC) = v48 * *(this + 0xC); /*0x6c0167*/
  return LODWORD(v25); /*0x6c016a*/
}
