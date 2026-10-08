// ParallaxShader SetupRenderPass override. Its local selector cases handle parallax-specific passes; default delegates to ShadowLightShader_SetupRenderPass. Therefore inherited selector records 0x177..0x179 remain concrete and drawable through the base ShadowLight consumer.
int __thiscall sub_8067F0(NiTArray_NiD3DPass *this, float *a2, int a3, int a4, NiD3DPass *a5, int a6, int a7, int a8)
{
  float *StageCount; // esi
  BOOL v11; // eax
  NiD3DPass *v12; // edi
  BOOL v13; // edi
  int result; // eax
  int v15; // eax
  float v16; // eax
  float v17; // ecx
  unsigned __int16 v18; // ax
  int *v19; // eax
  unsigned __int16 v20; // ax
  unsigned __int16 v21; // si
  int v22; // edi
  _DWORD **v23; // esi
  int v24; // edi
  int v25; // edi
  int v26; // edi
  int v27; // edi
  _DWORD *v28; // ecx
  char v29; // [esp+1Bh] [ebp-39h]
  unsigned int v30; // [esp+1Ch] [ebp-38h]
  float v31; // [esp+20h] [ebp-34h]
  float *v32; // [esp+64h] [ebp+10h]

  (*((void (__thiscall **)(NiTArray_NiD3DPass *))this->_vtbl + 0x20))(this); /*0x806822*/
  v30 = LODWORD(unk_B42E90); /*0x80682b*/
  StageCount = (float *)a5->StageCount; /*0x806837*/
  v29 = 0; /*0x806840*/
  v11 = StageCount /*0x806863*/
     && (*(int (__thiscall **)(float *))(*(_DWORD *)StageCount + 0x54))(StageCount) >= 1
     && (*(int (__thiscall **)(float *))(*(_DWORD *)StageCount + 0x54))(StageCount) <= 0xA;
  v32 = v11 ? StageCount : 0;
  v12 = 0; /*0x806876*/
  if ( v32 )
  {
    v13 = StageCount /*0x80689d*/
       && (*(int (__thiscall **)(float *))(*(_DWORD *)StageCount + 0x54))(StageCount) >= 5
       && (*(int (__thiscall **)(float *))(*(_DWORD *)StageCount + 0x54))(StageCount) <= 0xA;
    v12 = v13 ? (NiD3DPass *)StageCount : 0;
  }
  if ( !StageCount ) /*0x8068ae*/
  {
    if ( unk_B42E8C ) /*0x8068b0*/
      unk_B42E8C("Attempting to render geometry with a shader, but no shader property", 0); /*0x8068bf*/
    return 0; /*0x8068c6*/
  }
  v15 = *(_DWORD *)&a5->Name[4]; /*0x8068cb*/
  if ( v15 && (*(_BYTE *)(v15 + 0x18) & 1) != 0 && StageCount[8] < 1.0 ) /*0x8068f2*/
  {
    v31 = StageCount[8]; /*0x80690a*/
    v16 = OB_ShaderConstantStorage_010201A0[0x1A2]; /*0x806938*/
    v17 = OB_ShaderConstantStorage_010201A0[0x1A3]; /*0x806948*/
    OB_ShaderConstantStorage_010201A0[0x1A1] = OB_ShaderConstantStorage_010201A0[0x1A1]; /*0x806950*/
    OB_ShaderConstantStorage_010201A0[0x1A2] = v16; /*0x80695a*/
    OB_ShaderConstantStorage_010201A0[0x1A3] = v17; /*0x80695f*/
    OB_ShaderConstantStorage_010201A0[0x1A4] = v31; /*0x806965*/
    v29 = 1; /*0x80696b*/
  }
  else
  {
    sub_7E2430((int)StageCount, 1.0); /*0x806978*/
  }
  if ( v32 ) /*0x806986*/
  {
    if ( *(_WORD *)&OB_RendererGlobalState_010201A0[0x13] == 1 ) /*0x806996*/
    {
      v20 = OB_BSShaderProperty_CountPassListEntriesWithMarker_010201A0(v32); /*0x8069cc*/
      if ( v20 > 0xAu ) /*0x8069d8*/
        v20 = 0xA; /*0x8069da*/
      v19 = (int *)((char *)&unk_B2DD50 + 0x10 * v20); /*0x8069e5*/
    }
    else
    {
      if ( *(_WORD *)&OB_RendererGlobalState_010201A0[0x13] != 2 ) /*0x80699b*/
        goto LABEL_32; /*0x80699b*/
      v18 = (*(int (__thiscall **)(float *, float *))(*(_DWORD *)v32 + 0x60))(v32, a2); /*0x8069ab*/
      if ( v18 > 0x10u ) /*0x8069b4*/
        v18 = 0x10; /*0x8069b6*/
      v19 = (int *)((char *)&unk_B2DE00 + 0x10 * v18); /*0x8069c1*/
    }
    OB_BSShader_SetSharedFloat4Constant_010201A0(0, *v19, v19[1], v19[2], v19[3]); /*0x806a07*/
    OB_BSShader_SetSharedFloat4Constant_010201A0(0x19u, dword_B25AD0, dword_B25AD4, dword_B25AD8, dword_B25ADC); /*0x806a36*/
  }
LABEL_32:
  switch ( v30 ) /*0x806a57*/
  {
    case 0x4Cu: /*0x806a57*/
      sub_8736F0(this, (int)a2, a3, (int)a5, v12); /*0x806a68*/
      v21 = 0; /*0x806a6d*/
      goto LABEL_93; /*0x806a6f*/
    case 0x4Du: /*0x806a57*/
      sub_8738A0(this, (int)a2, a3, (int)a5, (int *)v12); /*0x806a7e*/
      v21 = 1; /*0x806a83*/
      goto LABEL_93; /*0x806a88*/
    case 0x50u: /*0x806a57*/
      sub_873AA0(this, (int)a2, a3, (int)a5, v12); /*0x806a97*/
      v21 = 2; /*0x806a9c*/
      goto LABEL_93; /*0x806aa1*/
    case 0x52u: /*0x806a57*/
      sub_873C50(this, (int)a2, a3, (int)a5, (int *)v12); /*0x806ab0*/
      v21 = 3; /*0x806ab5*/
      goto LABEL_93; /*0x806aba*/
    case 0x57u: /*0x806a57*/
      sub_873E50(this, (int)a2, a3, (int)a5, (int)v12); /*0x806ac9*/
      v21 = 4; /*0x806ace*/
      goto LABEL_93; /*0x806ad3*/
    case 0x58u: /*0x806a57*/
      sub_874090(this, (int)a2, a3, (int)a5, v12); /*0x806ae2*/
      v21 = 5; /*0x806ae7*/
      goto LABEL_93; /*0x806aec*/
    case 0x5Bu: /*0x806a57*/
      sub_874310(this, (int)a2, a3, (int)a5, (NiRenderedTexture *)v12); /*0x806afb*/
      v21 = 6; /*0x806b00*/
      goto LABEL_93; /*0x806b05*/
    case 0x5Du: /*0x806a57*/
      sub_874550(this, (int)a2, a3, a5, v12); /*0x806b14*/
      v21 = 7; /*0x806b19*/
      goto LABEL_93; /*0x806b1e*/
    case 0x62u: /*0x806a57*/
      sub_8747D0(this, (int)a2, a3, (int)a5, v12); /*0x806b2d*/
      v21 = 8; /*0x806b32*/
      goto LABEL_93; /*0x806b37*/
    case 0x63u: /*0x806a57*/
      sub_874980(this, (int)a2, a3, (int)a5, (int *)v12); /*0x806b46*/
      v21 = 9; /*0x806b4b*/
      goto LABEL_93; /*0x806b50*/
    case 0x66u: /*0x806a57*/
      sub_874B80(this, (int)a2, a3, (int)a5, v12); /*0x806b5f*/
      v21 = 0xA; /*0x806b64*/
      goto LABEL_93; /*0x806b69*/
    case 0x68u: /*0x806a57*/
      sub_874D30(this, (int)a2, a3, (int)a5, (int *)v12); /*0x806b78*/
      v21 = 0xB; /*0x806b7d*/
      goto LABEL_93; /*0x806b82*/
    case 0x6Du: /*0x806a57*/
      sub_874F30(this, (int)a2, a3, (int)a5, (NiRenderedTexture *)v12); /*0x806b91*/
      v21 = 0xC; /*0x806b96*/
      goto LABEL_93; /*0x806b9b*/
    case 0x6Eu: /*0x806a57*/
      sub_875170(this, (int)a2, a3, (int)a5, v12); /*0x806baa*/
      v21 = 0xD; /*0x806baf*/
      goto LABEL_93; /*0x806bb4*/
    case 0x71u: /*0x806a57*/
      sub_8753F0(this, (int)a2, a3, (int)a5, (NiRenderedTexture *)v12); /*0x806bc3*/
      v21 = 0xE; /*0x806bc8*/
      goto LABEL_93; /*0x806bcd*/
    case 0x73u: /*0x806a57*/
      sub_875630(this, (int)a2, a3, (int)a5, v12); /*0x806bdc*/
      v21 = 0xF; /*0x806be1*/
      goto LABEL_93; /*0x806be6*/
    case 0x7Au: /*0x806a57*/
      sub_8758B0(this, (int)a2, a3, (int)a5, v12); /*0x806bf5*/
      v21 = 0x10; /*0x806bfa*/
      goto LABEL_93; /*0x806bff*/
    case 0x7Bu: /*0x806a57*/
      sub_875A10(this, (int)a2, a3, (int)a5, (int *)v12); /*0x806c0e*/
      v21 = 0x11; /*0x806c13*/
      goto LABEL_93; /*0x806c18*/
    case 0x80u: /*0x806a57*/
      sub_875BD0(this, (int)a2, a3, (int)a5, v12); /*0x806c27*/
      v21 = 0x12; /*0x806c2c*/
      goto LABEL_93; /*0x806c31*/
    case 0x81u: /*0x806a57*/
      sub_875D30(this, (int)a2, a3, (int)a5, (int *)v12); /*0x806c40*/
      v21 = 0x13; /*0x806c45*/
      goto LABEL_93; /*0x806c4a*/
    case 0x88u: /*0x806a57*/
      sub_875EF0(this, (int)a2, a3, (int)a5, *(float *)&v12); /*0x806c59*/
      v21 = 0x14; /*0x806c5e*/
      goto LABEL_93; /*0x806c63*/
    case 0x89u: /*0x806a57*/
      sub_8760F0(this, (int)a2, a3, (NiRenderedTexture *)a5, (int *)v12); /*0x806c72*/
      v21 = 0x15; /*0x806c77*/
      goto LABEL_93; /*0x806c7c*/
    case 0x8Eu: /*0x806a57*/
      sub_876340(this, (int)a2, a3, (int)a5, (NiRenderedTexture *)v12); /*0x806c8b*/
      v21 = 0x16; /*0x806c90*/
      goto LABEL_93; /*0x806c95*/
    case 0x8Fu: /*0x806a57*/
      sub_876540(this, (int)a2, a3, (NiRenderedTexture *)a5, (int *)v12); /*0x806ca4*/
      v21 = 0x17; /*0x806ca9*/
      goto LABEL_93; /*0x806cae*/
    case 0x95u: /*0x806a57*/
      sub_876790(this, (int)a2, a3, (int)a5, v12); /*0x806cbd*/
      v21 = 0x18; /*0x806cc2*/
      goto LABEL_93; /*0x806cc7*/
    case 0x96u: /*0x806a57*/
      sub_876940(this, (int)a2, a3, (int)a5, (int *)v12); /*0x806cd6*/
      v21 = 0x19; /*0x806cdb*/
      goto LABEL_93; /*0x806ce0*/
    case 0x9Bu: /*0x806a57*/
      sub_876B40(this, (int)a2, a3, (int)a5, v12); /*0x806cef*/
      v21 = 0x1A; /*0x806cf4*/
      goto LABEL_93; /*0x806cf9*/
    case 0x9Cu: /*0x806a57*/
      sub_876CF0(this, (int)a2, a3, (int)a5, (int *)v12); /*0x806d08*/
      v21 = 0x1B; /*0x806d0d*/
      goto LABEL_93; /*0x806d12*/
    case 0xA2u: /*0x806a57*/
      sub_876EF0(this, (int)a2, a3, (int)a5, (NiRenderedTexture *)v12); /*0x806d21*/
      v21 = 0x1C; /*0x806d26*/
      goto LABEL_93; /*0x806d2b*/
    case 0xA3u: /*0x806a57*/
      sub_877130(this, (int)a2, a3, (int)a5, v12); /*0x806d3a*/
      v21 = 0x1D; /*0x806d3f*/
      goto LABEL_93; /*0x806d44*/
    case 0xA8u: /*0x806a57*/
      sub_8773B0(this, (int)a2, a3, (int)a5, (NiRenderedTexture *)v12); /*0x806d53*/
      v21 = 0x1E; /*0x806d58*/
      goto LABEL_93; /*0x806d5d*/
    case 0xA9u: /*0x806a57*/
      sub_8775F0(this, (int)a2, a3, (int)a5, v12); /*0x806d6c*/
      v21 = 0x1F; /*0x806d71*/
      goto LABEL_93; /*0x806d76*/
    case 0xB0u: /*0x806a57*/
      sub_877870(this, (int)a2, a3, (int)a5, v12); /*0x806d85*/
      v21 = 0x20; /*0x806d8a*/
      goto LABEL_93; /*0x806d8f*/
    case 0xB1u: /*0x806a57*/
      sub_877A20(this, (int)a2, a3, (int)a5, (int *)v12); /*0x806d9e*/
      v21 = 0x21; /*0x806da3*/
      goto LABEL_93; /*0x806da8*/
    case 0xB6u: /*0x806a57*/
      sub_877C30(this, (int)a2, a3, (int)a5, v12); /*0x806db7*/
      v21 = 0x22; /*0x806dbc*/
      goto LABEL_93; /*0x806dc1*/
    case 0xB7u: /*0x806a57*/
      sub_877DE0(this, (int)a2, a3, (int)a5, (int *)v12); /*0x806dd0*/
      v21 = 0x23; /*0x806dd5*/
      goto LABEL_93; /*0x806dda*/
    case 0xBDu: /*0x806a57*/
      sub_877FF0(this, (int)a2, a3, (int)a5, *(float *)&v12); /*0x806de9*/
      v21 = 0x24; /*0x806dee*/
      goto LABEL_93; /*0x806df3*/
    case 0xBEu: /*0x806a57*/
      sub_878240(this, (int)a2, a3, (int)a5, v12); /*0x806e02*/
      v21 = 0x25; /*0x806e07*/
      goto LABEL_93; /*0x806e0c*/
    case 0xC3u: /*0x806a57*/
      sub_8784C0(this, (int)a2, a3, (int)a5, (NiRenderedTexture *)v12); /*0x806e1b*/
      v21 = 0x26; /*0x806e20*/
      goto LABEL_93; /*0x806e25*/
    case 0xC4u: /*0x806a57*/
      sub_878710(this, (int)a2, a3, (int)a5, v12); /*0x806e34*/
      v21 = 0x27; /*0x806e39*/
      goto LABEL_93; /*0x806e3e*/
    case 0xCAu: /*0x806a57*/
      sub_878990(this, (int)a2, a3, (int)a5, v12); /*0x806e4d*/
      v21 = 0x28; /*0x806e52*/
      goto LABEL_93; /*0x806e57*/
    case 0xCBu: /*0x806a57*/
      sub_878B40(this, (int)a2, a3, (int)a5, (int *)v12); /*0x806e66*/
      v21 = 0x29; /*0x806e6b*/
      goto LABEL_93; /*0x806e70*/
    case 0xD0u: /*0x806a57*/
      sub_878D50(this, (int)a2, a3, (int)a5, v12); /*0x806e7f*/
      v21 = 0x2A; /*0x806e84*/
      goto LABEL_93; /*0x806e89*/
    case 0xD1u: /*0x806a57*/
      sub_878F00(this, (int)a2, a3, (int)a5, (int *)v12); /*0x806e98*/
      v21 = 0x2B; /*0x806e9d*/
      goto LABEL_93; /*0x806ea2*/
    case 0xD7u: /*0x806a57*/
      sub_879110(this, (int)a2, a3, (int)a5, (NiRenderedTexture *)v12); /*0x806eb1*/
      v21 = 0x2C; /*0x806eb6*/
      goto LABEL_93; /*0x806ebb*/
    case 0xD8u: /*0x806a57*/
      sub_879360(this, (int)a2, a3, (int)a5, v12); /*0x806eca*/
      v21 = 0x2D; /*0x806ecf*/
      goto LABEL_93; /*0x806ed4*/
    case 0xDDu: /*0x806a57*/
      sub_8795E0(this, (int)a2, a3, (int)a5, (NiRenderedTexture *)v12); /*0x806ee3*/
      v21 = 0x2E; /*0x806ee8*/
      goto LABEL_93; /*0x806eed*/
    case 0xDEu: /*0x806a57*/
      sub_879830(this, (int)a2, a3, (int)a5, v12); /*0x806efc*/
      v21 = 0x2F; /*0x806f01*/
      goto LABEL_93; /*0x806f06*/
    case 0xEAu: /*0x806a57*/
      sub_879AB0(this, (int)a2, a3, (int)a5, v12); /*0x806f15*/
      v21 = 0x30; /*0x806f1a*/
      goto LABEL_93; /*0x806f1f*/
    case 0xEDu: /*0x806a57*/
      sub_879C40(this, (int)a2, a3, (int)a5, v12); /*0x806f2e*/
      v21 = 0x31; /*0x806f33*/
      goto LABEL_93; /*0x806f38*/
    case 0xF8u: /*0x806a57*/
      sub_879DD0(this, (int)a2, a3, (int)a5, v12); /*0x806f47*/
      v21 = 0x32; /*0x806f4c*/
      goto LABEL_93; /*0x806f51*/
    case 0xFBu: /*0x806a57*/
      sub_879F60(this, (int)a2, a3, (int)a5, v12); /*0x806f60*/
      v21 = 0x33; /*0x806f65*/
      goto LABEL_93; /*0x806f6a*/
    case 0x10Du: /*0x806a57*/
      sub_87A0F0(this, (int)a2, a3, (int)a5, (int)v12); /*0x806f79*/
      v21 = 0x34; /*0x806f7e*/
      goto LABEL_93; /*0x806f83*/
    case 0x10Eu: /*0x806a57*/
      sub_87A1E0(this, (int)a2, a3, (int)a5, (int)v12); /*0x806f92*/
      v21 = 0x35; /*0x806f97*/
      goto LABEL_93; /*0x806f9c*/
    case 0x117u: /*0x806a57*/
      sub_87A2D0(this, (int)a2, a3, (int)a5, v12); /*0x806fab*/
      v21 = 0x36; /*0x806fb0*/
      goto LABEL_93; /*0x806fb5*/
    case 0x11Au: /*0x806a57*/
      sub_87A420(this, (int)a2, a3, (int)a5, v12); /*0x806fc1*/
      v21 = 0x37; /*0x806fc6*/
      goto LABEL_93; /*0x806fcb*/
    case 0x11Eu: /*0x806a57*/
      sub_87A570(this, (int)a2, a3, (int)a5, *(float *)&v12); /*0x806fd7*/
      v21 = 0x38; /*0x806fdc*/
      goto LABEL_93; /*0x806fe1*/
    case 0x121u: /*0x806a57*/
      sub_87A750(this, (int)a2, a3, (int)a5, (NiRenderedTexture *)v12); /*0x806fed*/
      v21 = 0x39; /*0x806ff2*/
      goto LABEL_93; /*0x806ff7*/
    case 0x125u: /*0x806a57*/
      sub_87A930(this, (int)a2, a3, (int)a5, v12); /*0x807003*/
      v21 = 0x3A; /*0x807008*/
      goto LABEL_93; /*0x80700d*/
    case 0x128u: /*0x806a57*/
      sub_87AAC0(this, (int)a2, a3, (int)a5, v12); /*0x807019*/
      v21 = 0x3B; /*0x80701e*/
LABEL_93:
      if ( v30 <= 0x1A2 ) /*0x807029*/
      {
        NiD3DPass_SetRenderState(*(_DWORD **)(4 * v21 + 0xB47620), 0x1C, 0, 0);// Fog decode: shader-family pass builder disables fixed-function fog; fog is handled by shader constants. /*0x807046*/
        if ( v30 - 0x10F > 0x1A ) /*0x807058*/
        {
          if ( v30 == 0x19E || v30 == 0x19F || v30 == 0xA || v30 == 0xB ) /*0x80707a*/
          {
            NiD3DPass_SetRenderState(*(_DWORD **)(4 * v21 + 0xB47620), 0xA8, 8, 0); /*0x8070b0*/
          }
          else if ( v30 ) /*0x807080*/
          {
            if ( v30 == 1 ) /*0x80708e*/
              NiD3DPass_SetRenderState((_DWORD *)LODWORD(OB_ShaderConstantStorage_010201A0[0x615]), 0xA8, 0, 0); /*0x807098*/
            else
              NiD3DPass_SetRenderState(*(_DWORD **)(4 * v21 + 0xB47620), 0xA8, 7, 0); /*0x80709c*/
          }
          else
          {
            NiD3DPass_SetRenderState((_DWORD *)LODWORD(OB_ShaderConstantStorage_010201A0[0x613]), 0xA8, 0, 0); /*0x807089*/
          }
        }
        else
        {
          NiD3DPass_SetRenderState(*(_DWORD **)(4 * v21 + 0xB47620), 0xA8, 0xF, 0); /*0x80705e*/
        }
      }
      v22 = *(_DWORD *)(4 * v21 + 0xB47620); /*0x8070c0*/
      v23 = (_DWORD **)(4 * v21 + 0xB47620); /*0x8070c7*/
      if ( *(_WORD *)&OB_RendererGlobalState_010201A0[0x13] == 4 ) /*0x8070ce*/
      {
        if ( !*(_DWORD *)(v22 + 0x30) ) /*0x8070d4*/
          *(_DWORD *)(v22 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x8070df*/
        NiD3DRenderStateGroup_SetRenderState(*(_DWORD **)(v22 + 0x30), 0x34, 1, 0); /*0x8070eb*/
        v24 = (int)*v23; /*0x8070f0*/
        if ( !(*v23)[0xC] ) /*0x8070f2*/
          *(_DWORD *)(v24 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x8070fd*/
        NiD3DRenderStateGroup_SetRenderState(*(_DWORD **)(v24 + 0x30), 0x38, 8, 0); /*0x807109*/
        v25 = (int)*v23; /*0x80710e*/
        if ( !(*v23)[0xC] ) /*0x807110*/
          *(_DWORD *)(v25 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x80711b*/
        NiD3DRenderStateGroup_SetRenderState(*(_DWORD **)(v25 + 0x30), 0x37, 7, 0); /*0x807127*/
        v26 = (int)*v23; /*0x80712c*/
        if ( !(*v23)[0xC] ) /*0x80712e*/
          *(_DWORD *)(v26 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x807139*/
        NiD3DRenderStateGroup_SetRenderState(*(_DWORD **)(v26 + 0x30), 0x35, 1, 0); /*0x807145*/
        v27 = (int)*v23; /*0x80714a*/
        if ( !(*v23)[0xC] ) /*0x80714c*/
          *(_DWORD *)(v27 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x807157*/
        NiD3DRenderStateGroup_SetRenderState(*(_DWORD **)(v27 + 0x30), 0x36, 1, 0); /*0x807160*/
      }
      else
      {
        if ( !*(_DWORD *)(v22 + 0x30) ) /*0x807162*/
          *(_DWORD *)(v22 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x80716d*/
        NiD3DRenderStateGroup_SetRenderState(*(_DWORD **)(v22 + 0x30), 0x34, 0, 0); /*0x807179*/
      }
      if ( v30 - 0x33 > 0x15F ) /*0x80718b*/
      {
        if ( v30 - 2 <= 0xDC ) /*0x80720b*/
          NiD3DPass_SetRenderState(*v23, 0x1B, v29 != 0, 0); /*0x807222*/
      }
      else if ( *(_DWORD *)&OB_RendererGlobalState_010201A0[0x1F] /*0x807196*/
             && *(_BYTE *)(*(_DWORD *)&OB_RendererGlobalState_010201A0[0x1F] + 6) )
      {
        v28 = *v23; /*0x8071a1*/
        if ( v29 ) /*0x8071a5*/
        {
          NiD3DPass_SetRenderState(v28, 0x1B, 1, 0); /*0x8071b6*/
          (*(void (__thiscall **)(_DWORD, _DWORD))(**((_DWORD **)this + 6) + 8))( /*0x8071ca*/
            *((_DWORD *)this + 6),
            *(_DWORD *)&a5->Name[4]);
        }
        else
        {
          NiD3DPass_SetRenderState(v28, 0x1B, 0, 0); /*0x8071ab*/
        }
        NiD3DPass_SetRenderState(*v23, 0x17, 4, 0); /*0x8071d4*/
        NiD3DPass_SetRenderState(*v23, 0xE, 1, 0); /*0x8071df*/
      }
      else
      {
        NiD3DPass_SetRenderState(*v23, 0x1B, 1, 0); /*0x8071e9*/
        NiD3DPass_SetRenderState(*v23, 0x17, 3, 0); /*0x8071f6*/
        NiD3DPass_SetRenderState(*v23, 0xE, 0, 0); /*0x807201*/
      }
      if ( *(_DWORD *)&OB_RendererGlobalState_010201A0[0x1F] ) /*0x807227*/
      {
        if ( !*(_BYTE *)(*(_DWORD *)&OB_RendererGlobalState_010201A0[0x1F] + 7) ) /*0x807230*/
          OB_ShaderConstantStorage_010201A0[0x21E] = 0.0; /*0x807238*/
      }
      result = 0; /*0x80723e*/
      break; /*0x807240*/
    default:
      result = ShadowLightShader__SetupRenderPass((Ni2DBuffer **)this, a2, a3, a4, a5, a6, a7, a8); /*0x80725f*/
      break; /*0x80725f*/
  }
  return result; /*0x807264*/
}
