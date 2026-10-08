char __thiscall sub_54B010(int this, int a2, int a3, int a4)
{
  bool v6; // zf
  NiMatrix33 *v7; // eax
  NiTransform *v8; // eax
  double v9; // st7
  __int16 v10; // fps
  double v11; // st7
  double v12; // st6
  double v13; // st7
  __int16 v14; // fps
  int v15; // eax
  int v16; // ecx
  int v17; // edx
  int v18; // edi
  int v19; // ebx
  NiMatrix33 *v20; // eax
  NiMatrix33 *v21; // eax
  NiMatrix33 *v22; // eax
  NiMatrix33 *v23; // eax
  NiMatrix33 *v24; // eax
  NiMatrix33 *v25; // eax
  double v26; // st7
  double v27; // st6
  double v28; // st7
  double v29; // st6
  double v30; // st7
  double v31; // st6
  long double v32; // st7
  double v33; // st6
  double v34; // rtt
  long double v35; // st6
  double v36; // st7
  double v37; // st5
  NiMatrix33 *v38; // [esp-10h] [ebp-164h]
  NiMatrix33 *v39; // [esp-8h] [ebp-15Ch]
  NiMatrix33 *v40; // [esp+0h] [ebp-154h]
  float v41; // [esp+1Ch] [ebp-138h] BYREF
  double v42; // [esp+20h] [ebp-134h] BYREF
  float v43; // [esp+28h] [ebp-12Ch]
  float v44; // [esp+2Ch] [ebp-128h] BYREF
  float v45; // [esp+30h] [ebp-124h] BYREF
  NiMatrix33 right; // [esp+34h] [ebp-120h] BYREF
  NiMatrix33 v47; // [esp+58h] [ebp-FCh] BYREF
  NiMatrix33 out; // [esp+7Ch] [ebp-D8h] BYREF
  NiMatrix33 v49; // [esp+A0h] [ebp-B4h] BYREF
  NiMatrix33 v50; // [esp+C4h] [ebp-90h] BYREF
  NiMatrix33 v51; // [esp+E8h] [ebp-6Ch] BYREF
  NiMatrix33 v52; // [esp+10Ch] [ebp-48h] BYREF
  NiMatrix33 v53; // [esp+130h] [ebp-24h] BYREF

  if ( *(_BYTE *)(this + 0x1DA) ) /*0x54b019*/
    return 0; /*0x54b022*/
  v6 = *(_BYTE *)(this + 0x1D5) == 0; /*0x54b02e*/
  v44 = 0.0; /*0x54b037*/
  v45 = 0.0; /*0x54b03c*/
  if ( v6 /*0x54b087*/
    || (v41 = *(float *)(this + 0x174) * *(float *)(this + 0x174)
            + *(float *)(this + 0x170) * *(float *)(this + 0x170)
            + *(float *)(this + 0x178) * *(float *)(this + 0x178),
        v41 = sqrt(v41),
        v41 <= 0.0) )
  {
    sub_711580((float *)&right, flt_A641F0, flt_A641F4, flt_A641F8); /*0x54b164*/
    v15 = *(_DWORD *)(a3 + 0x1C); /*0x54b170*/
    v16 = *(_DWORD *)(v15 + 0x1C); /*0x54b173*/
    v17 = *(_DWORD *)(v16 + 0x1C); /*0x54b176*/
    v18 = *(_DWORD *)(v17 + 0x1C); /*0x54b179*/
    v19 = *(_DWORD *)(v18 + 0x1C); /*0x54b17c*/
    v41 = *(float *)(v19 + 0x1C); /*0x54b182*/
    v40 = (NiMatrix33 *)(v16 + 0x30); /*0x54b199*/
    v39 = (NiMatrix33 *)(v15 + 0x30); /*0x54b1a5*/
    v38 = (NiMatrix33 *)(v17 + 0x30); /*0x54b1b1*/
    v20 = NiMAtrix33_Multiply((NiMatrix33 *)(LODWORD(v41) + 0x30), &v49, (NiMatrix33 *)(v19 + 0x30)); /*0x54b1d9*/
    v21 = NiMAtrix33_Multiply(v20, &v51, (NiMatrix33 *)(v18 + 0x30)); /*0x54b1e0*/
    v22 = NiMAtrix33_Multiply(v21, &v52, v38); /*0x54b1e7*/
    v23 = NiMAtrix33_Multiply(v22, &v50, v39); /*0x54b1ee*/
    v24 = NiMAtrix33_Multiply(v23, &v53, v40); /*0x54b1f5*/
    NiMAtrix33_Multiply(v24, &v47, (NiMatrix33 *)(a3 + 0x30)); /*0x54b1fc*/
    v25 = (NiMatrix33 *)sub_7103C0((float *)&right, (float *)&v49); /*0x54b20d*/
    NiMAtrix33_Multiply(&v47, &out, v25); /*0x54b21a*/
    sub_711440((float *)&out, &v44, (float *)&v42, &v45); /*0x54b232*/
  }
  else
  {
    sub_711580((float *)&right, 0.0, 0.0, flt_A641FC); /*0x54b0a5*/
    v7 = (NiMatrix33 *)sub_7103C0((float *)(a4 + 0x64), (float *)&v47); /*0x54b0c9*/
    v8 = (NiTransform *)NiMAtrix33_Multiply(v7, &out, &right); /*0x54b0d0*/
    sub_7101F0(v8, (NiTransform *)&v42, (NiPoint3 *)(this + 0x170)); /*0x54b0d7*/
    v9 = *(float *)&v42; /*0x54b0dc*/
    sub_98598A(*((float *)&v42 + 1), *(float *)&v42, v10); /*0x54b0e4*/
    v41 = v9; /*0x54b0e9*/
    v44 = v41; /*0x54b0f1*/
    v11 = *(float *)&v42; /*0x54b0f5*/
    v12 = *((float *)&v42 + 1); /*0x54b0f9*/
    v42 = v43; /*0x54b101*/
    v41 = v11 * v11 + v12 * v12; /*0x54b10d*/
    v41 = sqrt(v41); /*0x54b11a*/
    v13 = v43; /*0x54b11e*/
    sub_98598A(v41, v43, v14); /*0x54b126*/
    v41 = v13; /*0x54b12b*/
    v45 = v41; /*0x54b133*/
  }
  v26 = v44; /*0x54b239*/
  *(float *)(this + 0x19C) = v44; /*0x54b23e*/
  v27 = v45; /*0x54b244*/
  *(float *)(this + 0x1A0) = v45; /*0x54b248*/
  v41 = *(float *)(this + 0x184) - v26; /*0x54b258*/
  v41 = fabs(v41); /*0x54b262*/
  *(float *)&v42 = v41; /*0x54b26a*/
  v41 = *(float *)(this + 0x188) - v27; /*0x54b274*/
  v41 = fabs(v41); /*0x54b27e*/
  v28 = *(float *)&v42; /*0x54b28a*/
  v29 = v41; /*0x54b28e*/
  if ( v41 >= (double)*(float *)&v42 ) /*0x54b29f*/
  {
    *(float *)(this + 0x1A8) = MEMORY[0xB39AF0]; /*0x54b2c1*/
    *(float *)&v42 = v29 / *(float *)(this + 0x1A8); /*0x54b2cd*/
    *(float *)(this + 0x1A4) = v28 / *(float *)&v42; /*0x54b2d5*/
  }
  else
  {
    *(float *)(this + 0x1A4) = MEMORY[0xB39AF0]; /*0x54b2a1*/
    *(float *)&v42 = v28 / *(float *)(this + 0x1A4); /*0x54b2b1*/
    *(float *)(this + 0x1A8) = v29 / *(float *)&v42; /*0x54b2b9*/
  }
  sub_54A450(&v41, (float *)&v42); /*0x54b2e5*/
  v30 = *(float *)&v42; /*0x54b2ea*/
  v31 = *(float *)&v42; /*0x54b2ee*/
  v6 = *(_BYTE *)(this + 0x198) == 0; /*0x54b2f3*/
  *(float *)&v42 = fabs(*(float *)(this + 0x184)); /*0x54b302*/
  *(float *)&v42 = v31 - *(float *)&v42; /*0x54b30a*/
  *(float *)(this + 0x1AC) = ((1.0 - *(float *)&v42 / v30) * dbl_A56E18 + dbl_A432F0) * MEMORY[0xB39AF0]; /*0x54b328*/
  v32 = v44; /*0x54b32e*/
  if ( v6 || (*(float *)&v42 = fabs(v32), *(float *)&v42 <= dbl_A4D918) ) /*0x54b34b*/
  {
    v33 = 0.0; /*0x54b35f*/
    *(float *)(this + 0x1B0) = 0.0; /*0x54b361*/
  }
  else
  {
    *(float *)(this + 0x1B0) = dbl_A31C70 * v32; /*0x54b355*/
    v33 = 0.0; /*0x54b35b*/
  }
  v6 = *(_BYTE *)(this + 0x1D4) == 0; /*0x54b367*/
  *(float *)(this + 0x1B4) = v33; /*0x54b36e*/
  v34 = v33; /*0x54b374*/
  v35 = v32; /*0x54b374*/
  v36 = v34; /*0x54b374*/
  *(float *)(this + 0x1B8) = v35; /*0x54b376*/
  v37 = v45; /*0x54b37c*/
  *(float *)(this + 0x1BC) = v45; /*0x54b380*/
  if ( v6 ) /*0x54b386*/
    return 1; /*0x54b3cd*/
  *(_BYTE *)(this + 0x1D4) = 0; /*0x54b38a*/
  *(float *)(this + 0x184) = v35; /*0x54b391*/
  *(float *)(this + 0x188) = v37; /*0x54b39b*/
  *(float *)(this + 0x17C) = *(float *)(this + 0x1B0); /*0x54b3a7*/
  *(float *)(this + 0x180) = v36; /*0x54b3af*/
  *(float *)(this + 0x18C) = v35; /*0x54b3b5*/
  *(float *)(this + 0x190) = v37; /*0x54b3bb*/
  return 1; /*0x54b024*/
}
