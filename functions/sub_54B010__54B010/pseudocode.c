char __thiscall sub_54B010(int this, int a2, int a3, int a4)
{
  bool v6; // zf
  float *v7; // eax
  NiTransform *v8; // eax
  double v9; // st7
  void *v10; // ecx
  double v11; // st7
  void *v12; // ecx
  int v13; // eax
  int v14; // ecx
  int v15; // edx
  int v16; // edi
  int v17; // ebx
  float *v18; // eax
  float *v19; // eax
  float *v20; // eax
  float *v21; // eax
  float *v22; // eax
  float *v23; // eax
  double v24; // st7
  double v25; // st6
  double v26; // st7
  double v27; // st6
  double v28; // st7
  double v29; // st6
  long double v30; // st7
  double v31; // st6
  double v32; // rtt
  long double v33; // st6
  double v34; // st7
  double v35; // st5
  float *v36; // [esp-10h] [ebp-164h]
  float *v37; // [esp-8h] [ebp-15Ch]
  float *v38; // [esp+0h] [ebp-154h]
  float v39; // [esp+1Ch] [ebp-138h] BYREF
  NiTransform v40; // [esp+20h] [ebp-134h] BYREF
  float v41[9]; // [esp+58h] [ebp-FCh] BYREF
  float v42[9]; // [esp+7Ch] [ebp-D8h] BYREF
  float v43[9]; // [esp+A0h] [ebp-B4h] BYREF
  float v44[9]; // [esp+C4h] [ebp-90h] BYREF
  float v45[9]; // [esp+E8h] [ebp-6Ch] BYREF
  float v46[9]; // [esp+10Ch] [ebp-48h] BYREF
  float v47[9]; // [esp+130h] [ebp-24h] BYREF

  if ( *(_BYTE *)(this + 0x1DA) )
    return 0;
  v6 = *(_BYTE *)(this + 0x1D5) == 0;
  v40.rot.data[1][0] = 0.0;
  v40.rot.data[1][1] = 0.0;
  if ( v6
    || (v39 = *(float *)(this + 0x174) * *(float *)(this + 0x174)
            + *(float *)(this + 0x170) * *(float *)(this + 0x170)
            + *(float *)(this + 0x178) * *(float *)(this + 0x178),
        v39 = sqrt(v39),
        v39 <= 0.0) )
  {
    sub_711580(&v40.rot.data[1][2], flt_A641F0, flt_A641F4, flt_A641F8);
    v13 = *(_DWORD *)(a3 + 0x1C);
    v14 = *(_DWORD *)(v13 + 0x1C);
    v15 = *(_DWORD *)(v14 + 0x1C);
    v16 = *(_DWORD *)(v15 + 0x1C);
    v17 = *(_DWORD *)(v16 + 0x1C);
    v39 = *(float *)(v17 + 0x1C);
    v38 = (float *)(v14 + 0x30);
    v37 = (float *)(v13 + 0x30);
    v36 = (float *)(v15 + 0x30);
    v18 = NiMAtrix33_Multiply((float *)(LODWORD(v39) + 0x30), v43, (float *)(v17 + 0x30));
    v19 = NiMAtrix33_Multiply(v18, v45, (float *)(v16 + 0x30));
    v20 = NiMAtrix33_Multiply(v19, v46, v36);
    v21 = NiMAtrix33_Multiply(v20, v44, v37);
    v22 = NiMAtrix33_Multiply(v21, v47, v38);
    NiMAtrix33_Multiply(v22, v41, (float *)(a3 + 0x30));
    v23 = sub_7103C0(&v40.rot.data[1][2], v43);
    NiMAtrix33_Multiply(v41, v42, v23);
    sub_711440(v42, v40.rot.data[1], (float *)&v40, &v40.rot.data[1][1]);
  }
  else
  {
    sub_711580(&v40.rot.data[1][2], 0.0, 0.0, flt_A641FC);
    v7 = sub_7103C0((float *)(a4 + 0x64), v41);
    v8 = (NiTransform *)NiMAtrix33_Multiply(v7, v42, &v40.rot.data[1][2]);
    sub_7101F0(v8, &v40, (NiPoint3 *)(this + 0x170));
    v9 = v40.rot.data[0][0];
    sub_98598A(v10);
    v39 = v9;
    v40.rot.data[1][0] = v39;
    *(double *)&v40.rot.data[0][0] = v40.rot.data[0][2];
    v11 = v40.rot.data[0][2];
    sub_98598A(v12);
    v39 = v11;
    v40.rot.data[1][1] = v39;
  }
  v24 = v40.rot.data[1][0];
  *(float *)(this + 0x19C) = v40.rot.data[1][0];
  v25 = v40.rot.data[1][1];
  *(float *)(this + 0x1A0) = v40.rot.data[1][1];
  v39 = *(float *)(this + 0x184) - v24;
  v39 = fabs(v39);
  v40.rot.data[0][0] = v39;
  v39 = *(float *)(this + 0x188) - v25;
  v39 = fabs(v39);
  v26 = v40.rot.data[0][0];
  v27 = v39;
  if ( v39 >= (double)v40.rot.data[0][0] )
  {
    *(float *)(this + 0x1A8) = fTrackSpeed;
    v40.rot.data[0][0] = v27 / *(float *)(this + 0x1A8);
    *(float *)(this + 0x1A4) = v26 / v40.rot.data[0][0];
  }
  else
  {
    *(float *)(this + 0x1A4) = fTrackSpeed;
    v40.rot.data[0][0] = v26 / *(float *)(this + 0x1A4);
    *(float *)(this + 0x1A8) = v27 / v40.rot.data[0][0];
  }
  sub_54A450(&v39, (float *)&v40);
  v28 = v40.rot.data[0][0];
  v29 = v40.rot.data[0][0];
  v6 = *(_BYTE *)(this + 0x198) == 0;
  v40.rot.data[0][0] = fabs(*(float *)(this + 0x184));
  v40.rot.data[0][0] = v29 - v40.rot.data[0][0];
  *(float *)(this + 0x1AC) = ((1.0 - v40.rot.data[0][0] / v28) * dbl_A56E18 + dbl_A432F0) * fTrackSpeed;
  v30 = v40.rot.data[1][0];
  if ( v6 || (v40.rot.data[0][0] = fabs(v30), v40.rot.data[0][0] <= dbl_A4D918) )
  {
    v31 = 0.0;
    *(float *)(this + 0x1B0) = 0.0;
  }
  else
  {
    *(float *)(this + 0x1B0) = dbl_A31C70 * v30;
    v31 = 0.0;
  }
  v6 = *(_BYTE *)(this + 0x1D4) == 0;
  *(float *)(this + 0x1B4) = v31;
  v32 = v31;
  v33 = v30;
  v34 = v32;
  *(float *)(this + 0x1B8) = v33;
  v35 = v40.rot.data[1][1];
  *(float *)(this + 0x1BC) = v40.rot.data[1][1];
  if ( v6 )
    return 1;
  *(_BYTE *)(this + 0x1D4) = 0;
  *(float *)(this + 0x184) = v33;
  *(float *)(this + 0x188) = v35;
  *(float *)(this + 0x17C) = *(float *)(this + 0x1B0);
  *(float *)(this + 0x180) = v34;
  *(float *)(this + 0x18C) = v33;
  *(float *)(this + 0x190) = v35;
  return 1;
}
