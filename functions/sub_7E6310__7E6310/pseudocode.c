int __thiscall sub_7E6310(float *this, int a2, float *a3)
{
  int v4; // eax
  double v5; // st7
  double v6; // st7
  double v7; // st7
  double v8; // st7
  double v9; // st7
  double v10; // st7
  double v11; // st7
  double v12; // st7
  double v13; // st7
  double v14; // st7
  double v15; // st7
  double v16; // st7
  double v17; // st7
  double v18; // st7
  double v19; // st7
  int v20; // eax
  int v21; // esi
  void (__thiscall ***v22)(_DWORD, int); // edi
  float v23; // edx
  float v24; // eax
  float v25; // ecx
  double v26; // st7
  float v27; // edx
  double v28; // st7
  float v29; // eax
  int v30; // ecx
  float v31; // edx
  double v32; // st7
  float v33; // eax
  int v35; // [esp+24h] [ebp-134h]
  float v36; // [esp+24h] [ebp-134h]
  int v37; // [esp+24h] [ebp-134h]
  int v38; // [esp+28h] [ebp-130h]
  int v39; // [esp+28h] [ebp-130h]
  float v40; // [esp+28h] [ebp-130h]
  int v41; // [esp+28h] [ebp-130h]
  int v42; // [esp+2Ch] [ebp-12Ch]
  int v43; // [esp+2Ch] [ebp-12Ch]
  float v44; // [esp+2Ch] [ebp-12Ch]
  int v45; // [esp+2Ch] [ebp-12Ch]
  int v46; // [esp+30h] [ebp-128h]
  int v47; // [esp+30h] [ebp-128h]
  float v48; // [esp+30h] [ebp-128h]
  int v49; // [esp+30h] [ebp-128h]
  float v50; // [esp+34h] [ebp-124h]
  float v51; // [esp+38h] [ebp-120h]
  float v52; // [esp+38h] [ebp-120h]
  float v53; // [esp+3Ch] [ebp-11Ch]
  float v54; // [esp+3Ch] [ebp-11Ch]
  float v55[17]; // [esp+44h] [ebp-114h] BYREF
  float v56; // [esp+88h] [ebp-D0h]
  float v57; // [esp+8Ch] [ebp-CCh]
  int v58; // [esp+94h] [ebp-C4h] BYREF
  int v59[16]; // [esp+98h] [ebp-C0h] BYREF
  _BYTE v60[64]; // [esp+D8h] [ebp-80h] BYREF
  _BYTE v61[12]; // [esp+118h] [ebp-40h] BYREF
  _BYTE v62[52]; // [esp+124h] [ebp-34h] BYREF

  *(float *)&v59[0xE] = 0.0;
  *(float *)&v59[0xD] = 0.0;
  *(float *)&v59[0xC] = 0.0;
  *(float *)&v59[0xB] = 0.0;
  *(float *)&v59[9] = 0.0;
  *(float *)&v59[8] = 0.0;
  *(float *)&v59[7] = 0.0;
  *(float *)&v59[6] = 0.0;
  *(float *)&v59[4] = 0.0;
  *(float *)&v59[3] = 0.0;
  *(float *)&v59[2] = 0.0;
  *(float *)&v59[1] = 0.0;
  *(float *)&v59[0xF] = 1.0;
  *(float *)&v59[0xA] = 1.0;
  *(float *)&v59[5] = 1.0;
  *(float *)v59 = 1.0;
  v55[0xC] = 1.0;
  v55[7] = 1.0;
  v55[2] = 1.0;
  v55[0xB] = 0.0;
  v55[0xA] = 0.0;
  v55[9] = 0.0;
  v55[8] = 0.0;
  v55[6] = 0.0;
  v55[5] = 0.0;
  v55[4] = 0.0;
  v55[3] = 0.0;
  v55[1] = 0.0;
  v55[0] = 0.0;
  if ( a2 )
    qmemcpy(v59, *(const void **)(a2 + 0x28), sizeof(v59));
  else
    sub_761AE0((float *)v59, a3, a3 + 9, a3[0xC]);
  v4 = dword_B42EB8;
  *(float *)&v59[0xC] = CameraWorldTranslate + *(float *)&v59[0xC];
  *(float *)&v59[0xD] = flt_B3F930 + *(float *)&v59[0xD];
  *(float *)&v59[0xE] = flt_B3F934 + *(float *)&v59[0xE];
  qmemcpy(v60, (const void *)(**(_DWORD **)(v4 + 0xC) + 0x10), sizeof(v60));
  D3DXMatrixMultiply_0(v61, v59, v60);
  qmemcpy(v55, v62, 0x40u);
  D3DXMatrixTranspose_0(v55, v55);
  v5 = v55[1];
  dword_B46070 = LODWORD(v55[0]);
  *(float *)&v38 = v5;
  v6 = v55[2];
  dword_B46074 = v38;
  *(float *)&v42 = v6;
  v7 = v55[3];
  dword_B46078 = v42;
  *(float *)&v46 = v7;
  v8 = v55[4];
  dword_B4607C = v46;
  *(float *)&v35 = v8;
  v9 = v55[5];
  dword_B46080 = v35;
  *(float *)&v39 = v9;
  v10 = v55[6];
  dword_B46084 = v39;
  *(float *)&v43 = v10;
  v11 = v55[7];
  dword_B46088 = v43;
  *(float *)&v47 = v11;
  v12 = v55[8];
  dword_B4608C = v47;
  v36 = v12;
  v13 = v55[9];
  flt_B460A0 = v36;
  v40 = v13;
  v14 = v55[0xA];
  flt_B460A4 = v40;
  v44 = v14;
  v15 = v55[0xB];
  flt_B460A8 = v44;
  v48 = v15;
  v16 = v55[0xC];
  flt_B460AC = v48;
  *(float *)&v37 = v16;
  v17 = v55[0xD];
  dword_B460D0 = v37;
  *(float *)&v41 = v17;
  v18 = v55[0xE];
  dword_B460D4 = v41;
  *(float *)&v45 = v18;
  v19 = v55[0xF];
  dword_B460D8 = v45;
  v20 = dword_B42EB8;
  *(float *)&v49 = v19;
  dword_B460DC = v49;
  v21 = *sub_405AD0(**(_DWORD ***)(v20 + 0xC), &v58);
  if ( v58 )
  {
    v22 = (void (__thiscall ***)(_DWORD, int))v58;
    if ( !InterlockedDecrement((volatile LONG *)(v58 + 4)) )
      (**v22)(v22, 1);
  }
  v23 = *(float *)(v21 + 0xF0);
  v24 = *(float *)(v21 + 0xF4);
  v59[0] = *(_DWORD *)(v21 + 0xEC);
  v25 = *(float *)(v21 + 0x88);
  *(float *)&v59[1] = v23;
  v26 = v23;
  v27 = *(float *)(v21 + 0x8C);
  v51 = v26;
  *(float *)&v59[2] = v24;
  v28 = v24;
  v29 = *(float *)(v21 + 0x90);
  v53 = v28;
  v56 = v25;
  v30 = *(_DWORD *)(v21 + 0xF8);
  v57 = v27;
  v50 = v56;
  v31 = v51;
  v52 = v57;
  v32 = v29;
  *(this + 0x59) = *(float *)v59;
  *(this + 0x5A) = v31;
  v33 = v53;
  v54 = v32;
  *(this + 0x5B) = v33;
  *(this + 0x5D) = v50;
  *(this + 0x5C) = 1.0;
  *(this + 0x5E) = v52;
  *(this + 0x5F) = v54;
  *((_DWORD *)this + 0x60) = v30;
  return LODWORD(v52);
}
