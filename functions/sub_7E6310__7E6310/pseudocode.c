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
  float v35; // [esp+24h] [ebp-134h]
  float v36; // [esp+24h] [ebp-134h]
  float v37; // [esp+24h] [ebp-134h]
  float v38; // [esp+28h] [ebp-130h]
  float v39; // [esp+28h] [ebp-130h]
  float v40; // [esp+28h] [ebp-130h]
  float v41; // [esp+28h] [ebp-130h]
  float v42; // [esp+2Ch] [ebp-12Ch]
  float v43; // [esp+2Ch] [ebp-12Ch]
  float v44; // [esp+2Ch] [ebp-12Ch]
  float v45; // [esp+2Ch] [ebp-12Ch]
  float v46; // [esp+30h] [ebp-128h]
  float v47; // [esp+30h] [ebp-128h]
  float v48; // [esp+30h] [ebp-128h]
  float v49; // [esp+30h] [ebp-128h]
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

  *(float *)&v59[0xE] = 0.0; /*0x7e6323*/
  *(float *)&v59[0xD] = 0.0; /*0x7e632a*/
  *(float *)&v59[0xC] = 0.0; /*0x7e6332*/
  *(float *)&v59[0xB] = 0.0; /*0x7e633a*/
  *(float *)&v59[9] = 0.0; /*0x7e6342*/
  *(float *)&v59[8] = 0.0; /*0x7e634b*/
  *(float *)&v59[7] = 0.0; /*0x7e6352*/
  *(float *)&v59[6] = 0.0; /*0x7e6359*/
  *(float *)&v59[4] = 0.0; /*0x7e6360*/
  *(float *)&v59[3] = 0.0; /*0x7e6367*/
  *(float *)&v59[2] = 0.0; /*0x7e636e*/
  *(float *)&v59[1] = 0.0; /*0x7e6375*/
  *(float *)&v59[0xF] = 1.0; /*0x7e637e*/
  *(float *)&v59[0xA] = 1.0; /*0x7e6385*/
  *(float *)&v59[5] = 1.0; /*0x7e638c*/
  *(float *)v59 = 1.0; /*0x7e6393*/
  v55[0xC] = 1.0; /*0x7e639a*/
  v55[7] = 1.0; /*0x7e639e*/
  v55[2] = 1.0; /*0x7e63a2*/
  v55[0xB] = 0.0; /*0x7e63aa*/
  v55[0xA] = 0.0; /*0x7e63ae*/
  v55[9] = 0.0; /*0x7e63b2*/
  v55[8] = 0.0; /*0x7e63b6*/
  v55[6] = 0.0; /*0x7e63ba*/
  v55[5] = 0.0; /*0x7e63be*/
  v55[4] = 0.0; /*0x7e63c2*/
  v55[3] = 0.0; /*0x7e63c6*/
  v55[1] = 0.0; /*0x7e63ca*/
  v55[0] = 0.0; /*0x7e63ce*/
  if ( a2 ) /*0x7e63da*/
    qmemcpy(v59, *(const void **)(a2 + 0x28), sizeof(v59)); /*0x7e63ed*/
  else
    sub_761AE0((float *)v59, a3, a3 + 9, a3[0xC]); /*0x7e6408*/
  v4 = *(_DWORD *)&OB_RendererGlobalState_010201A0[0x1F]; /*0x7e6416*/
  *(float *)&v59[0xC] = MEMORY[0xB3F92C] + *(float *)&v59[0xC]; /*0x7e6431*/
  *(float *)&v59[0xD] = unk_B3F930 + *(float *)&v59[0xD]; /*0x7e6445*/
  *(float *)&v59[0xE] = unk_B3F934 + *(float *)&v59[0xE]; /*0x7e6459*/
  qmemcpy(v60, (const void *)(**(_DWORD **)(v4 + 0xC) + 0x10), sizeof(v60)); /*0x7e6474*/
  D3DXMatrixMultiply_0((int)v61, (int)v59, (int)v60); /*0x7e647f*/
  qmemcpy(v55, v62, 0x40u); /*0x7e649c*/
  D3DXMatrixTranspose_0((int)v55, (int)v55); /*0x7e649e*/
  v5 = v55[1]; /*0x7e64af*/
  OB_ShaderConstantStorage_010201A0[0x97] = v55[0]; /*0x7e64b3*/
  v38 = v5; /*0x7e64b9*/
  v6 = v55[2]; /*0x7e64c1*/
  OB_ShaderConstantStorage_010201A0[0x98] = v38; /*0x7e64c5*/
  v42 = v6; /*0x7e64cb*/
  v7 = v55[3]; /*0x7e64d3*/
  OB_ShaderConstantStorage_010201A0[0x99] = v42; /*0x7e64d7*/
  v46 = v7; /*0x7e64dc*/
  v8 = v55[4]; /*0x7e64e4*/
  OB_ShaderConstantStorage_010201A0[0x9A] = v46; /*0x7e64e8*/
  v35 = v8; /*0x7e64ee*/
  v9 = v55[5]; /*0x7e64f6*/
  OB_ShaderConstantStorage_010201A0[0x9B] = v35; /*0x7e64fa*/
  v39 = v9; /*0x7e6500*/
  v10 = v55[6]; /*0x7e6508*/
  OB_ShaderConstantStorage_010201A0[0x9C] = v39; /*0x7e650c*/
  v43 = v10; /*0x7e6511*/
  v11 = v55[7]; /*0x7e6519*/
  OB_ShaderConstantStorage_010201A0[0x9D] = v43; /*0x7e651d*/
  v47 = v11; /*0x7e6523*/
  v12 = v55[8]; /*0x7e652b*/
  OB_ShaderConstantStorage_010201A0[0x9E] = v47; /*0x7e652f*/
  v36 = v12; /*0x7e6535*/
  v13 = v55[9]; /*0x7e653d*/
  OB_ShaderConstantStorage_010201A0[0xA3] = v36; /*0x7e6541*/
  v40 = v13; /*0x7e6546*/
  v14 = v55[0xA]; /*0x7e654e*/
  OB_ShaderConstantStorage_010201A0[0xA4] = v40; /*0x7e6552*/
  v44 = v14; /*0x7e6558*/
  v15 = v55[0xB]; /*0x7e6560*/
  OB_ShaderConstantStorage_010201A0[0xA5] = v44; /*0x7e6564*/
  v48 = v15; /*0x7e656a*/
  v16 = v55[0xC]; /*0x7e6572*/
  OB_ShaderConstantStorage_010201A0[0xA6] = v48; /*0x7e6576*/
  v37 = v16; /*0x7e657b*/
  v17 = v55[0xD]; /*0x7e6583*/
  OB_ShaderConstantStorage_010201A0[0xAF] = v37; /*0x7e6587*/
  v41 = v17; /*0x7e658d*/
  v18 = v55[0xE]; /*0x7e6595*/
  OB_ShaderConstantStorage_010201A0[0xB0] = v41; /*0x7e6599*/
  v45 = v18; /*0x7e659f*/
  v19 = v55[0xF]; /*0x7e65a7*/
  OB_ShaderConstantStorage_010201A0[0xB1] = v45; /*0x7e65ab*/
  v20 = *(_DWORD *)&OB_RendererGlobalState_010201A0[0x1F]; /*0x7e65b0*/
  v49 = v19; /*0x7e65b5*/
  OB_ShaderConstantStorage_010201A0[0xB2] = v49; /*0x7e65bd*/
  v21 = *ShadowSceneLight_GetLightRef(**(_DWORD ***)(v20 + 0xC), &v58); /*0x7e65d5*/
  if ( v58 ) /*0x7e65e0*/
  {
    v22 = (void (__thiscall ***)(_DWORD, int))v58; /*0x7e65e2*/
    if ( !InterlockedDecrement((volatile LONG *)(v58 + 4)) ) /*0x7e65e8*/
      (**v22)(v22, 1); /*0x7e65fe*/
  }
  v23 = *(float *)(v21 + 0xF0); /*0x7e6606*/
  v24 = *(float *)(v21 + 0xF4); /*0x7e660c*/
  v59[0] = *(_DWORD *)(v21 + 0xEC); /*0x7e6612*/
  v25 = *(float *)(v21 + 0x88); /*0x7e6620*/
  *(float *)&v59[1] = v23; /*0x7e662a*/
  v26 = v23; /*0x7e6631*/
  v27 = *(float *)(v21 + 0x8C); /*0x7e6638*/
  v51 = v26; /*0x7e663e*/
  *(float *)&v59[2] = v24; /*0x7e6642*/
  v28 = v24; /*0x7e6649*/
  v29 = *(float *)(v21 + 0x90); /*0x7e6650*/
  v53 = v28; /*0x7e6656*/
  v56 = v25; /*0x7e665c*/
  v30 = *(_DWORD *)(v21 + 0xF8); /*0x7e6660*/
  v57 = v27; /*0x7e666e*/
  v50 = v56; /*0x7e6680*/
  v31 = v51; /*0x7e6696*/
  v52 = v57; /*0x7e669a*/
  v32 = v29; /*0x7e669e*/
  *(this + 0x59) = *(float *)v59; /*0x7e66a2*/
  *(this + 0x5A) = v31; /*0x7e66ac*/
  v33 = v53; /*0x7e66ba*/
  v54 = v32; /*0x7e66be*/
  *(this + 0x5B) = v33; /*0x7e66c6*/
  *(this + 0x5D) = v50; /*0x7e66d4*/
  *(this + 0x5C) = 1.0; /*0x7e66de*/
  *(this + 0x5E) = v52; /*0x7e66e8*/
  *(this + 0x5F) = v54; /*0x7e66ef*/
  *((_DWORD *)this + 0x60) = v30; /*0x7e66f6*/
  return LODWORD(v52); /*0x7e66fd*/
}
