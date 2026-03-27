void __thiscall sub_7F2C00(float *this, int a2, signed int a3, int a4, int a5)
{
  int v6; // eax
  int v7; // edi
  int v8; // ecx
  int v9; // eax
  float v10; // ebx
  int v11; // eax
  float v12; // ebx
  int v13; // eax
  float v14; // edx
  int v15; // eax
  float v16; // ecx
  int v17; // edx
  float v18; // ecx
  float v19; // edx
  int v20; // edi
  float *v21; // eax
  double v22; // st7
  double v23; // st6
  double v24; // st5
  double v25; // st7
  int v26; // ecx
  float v27; // [esp+Ch] [ebp-2Ch] BYREF
  float v28; // [esp+10h] [ebp-28h]
  float v29; // [esp+14h] [ebp-24h]
  float v30; // [esp+18h] [ebp-20h]
  float v31; // [esp+1Ch] [ebp-1Ch]
  float v32; // [esp+20h] [ebp-18h]
  int v33; // [esp+24h] [ebp-14h]
  float v34; // [esp+28h] [ebp-10h]
  float v35; // [esp+2Ch] [ebp-Ch]
  float v36; // [esp+30h] [ebp-8h]
  int v37; // [esp+34h] [ebp-4h]
  float v38; // [esp+3Ch] [ebp+4h]
  float v39; // [esp+3Ch] [ebp+4h]
  float v40; // [esp+40h] [ebp+8h]
  float v41; // [esp+40h] [ebp+8h]
  float v42; // [esp+40h] [ebp+8h]
  float v43; // [esp+40h] [ebp+8h]
  float v44; // [esp+40h] [ebp+8h]
  float v45; // [esp+40h] [ebp+8h]
  float v46; // [esp+40h] [ebp+8h]
  float v47; // [esp+40h] [ebp+8h]
  float v48; // [esp+40h] [ebp+8h]
  float v49; // [esp+40h] [ebp+8h]
  float v50; // [esp+40h] [ebp+8h]
  int v51; // [esp+44h] [ebp+Ch]

  v6 = a2 * *((_DWORD *)this + 0x53);
  v7 = v6 + a3;
  v8 = *((_DWORD *)this + 0x1B);
  v9 = 0x10 * (a4 + v6);
  v10 = *(float *)(v9 + v8);
  v11 = v8 + v9;
  v30 = v10;
  v31 = *(float *)(v11 + 4);
  v12 = *(float *)(v11 + 8);
  v33 = *(_DWORD *)(v11 + 0xC);
  v51 = *((_DWORD *)this + 0x53);
  v32 = v12;
  v13 = 0x10 * (a5 + a2 * v51);
  v14 = *(float *)(v13 + v8 + 4);
  v15 = v8 + v13;
  v34 = *(float *)v15;
  v16 = *(float *)(v15 + 8);
  v35 = v14;
  v17 = *(_DWORD *)(v15 + 0xC);
  v36 = v16;
  v27 = v30 - v34;
  v37 = v17;
  v28 = v31 - v35;
  v29 = v12 - v16;
  if ( v28 < 0.0 )
  {
    v18 = *(&Vector3_InitValue_ + 1);
    v19 = dword_B3F9B0;
    v27 = Vector3_InitValue_;
    v28 = v18;
    v29 = v19;
  }
  v28 = v28 + dbl_A2F928;
  sub_43F350(&v27);
  v38 = *(this + 0x54);
  v27 = v38 * v27;
  v28 = v38 * v28;
  v29 = v38 * v29;
  v39 = (double)a3 / (double)v51;
  v20 = 0x10 * v7;
  v40 = (double)rand() / dbl_A3D5A8;
  v41 = *(this + 0x55) * v40 + v27 + v30 - *(this + 0x55) * dbl_A2FAA0;
  *(float *)(v20 + *((_DWORD *)this + 0x1B)) = v41;
  v42 = v28 + v31;
  *(float *)(*((_DWORD *)this + 0x1B) + v20 + 4) = v42;
  v43 = (double)rand() / dbl_A3D5A8;
  v44 = *(this + 0x55) * v43 + v29 + v32 - *(this + 0x55) * dbl_A2FAA0;
  *(float *)(*((_DWORD *)this + 0x1B) + v20 + 8) = v44;
  v21 = (float *)(v20 + *((_DWORD *)this + 0x1B));
  v27 = *(this + 0x1C) * v39 - *v21;
  v28 = v39 * *(this + 0x1E) - v21[2];
  v45 = v28 * v28 + v27 * v27;
  v46 = sqrt(v45);
  v22 = v46;
  if ( *(this + 0x4F) < (double)v46 )
  {
    v23 = v22 - *(this + 0x4F);
    v47 = *(this + 0x50) * v23 / v22;
    v24 = v47;
    v48 = v47 * v22;
    v49 = fabs(v48);
    if ( *(this + 0x4F) >= (double)v49 )
    {
      v25 = v24;
    }
    else
    {
      v50 = v23 / v22;
      v25 = v50;
    }
    v26 = *((_DWORD *)this + 0x1B);
    v27 = v27 * v25;
    v28 = v25 * v28;
    *(float *)(v26 + v20) = *(float *)(v26 + v20) + v27;
    *(float *)(*((_DWORD *)this + 0x1B) + v20 + 8) = *(float *)(*((_DWORD *)this + 0x1B) + v20 + 8) + v28;
  }
}
