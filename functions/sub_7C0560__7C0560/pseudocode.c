int __userpurge sub_7C0560@<eax>(int a1@<ecx>, double a2@<st0>, int a3, int a4, int a5, int a6, int a7, int a8, int a9)
{
  int v10; // eax
  NiD3DPass **v11; // eax
  NiD3DPass *v12; // ebx
  void (__thiscall *Destroy)(NiD3DPass *, UInt8); // eax
  double v14; // st7
  int v15; // eax
  NiTexture *InnerTexture; // eax
  int v17; // ecx
  int v18; // eax
  double v19; // st7
  int v20; // ecx
  float *v21; // eax
  double v22; // st7
  double v23; // st6
  double v24; // st7
  int v25; // eax
  NiTexture *v26; // eax
  int v27; // ecx
  int v28; // eax
  double v29; // st7
  int v30; // ecx
  float *v31; // eax
  double v32; // st7
  double v33; // st6
  NiTexture *v34; // eax
  int v35; // eax
  NiD3DPixelShader *v36; // eax
  int v37; // ecx
  const void *v38; // esi
  int v39; // ecx
  int v40; // eax
  double v41; // st7
  int v42; // ecx
  int v43; // eax
  double v44; // st7
  NiTexture *v45; // eax
  NiTexture *v46; // eax
  bool v47; // c0
  double v48; // st7
  double v49; // st7
  bool v50; // c0
  bool v51; // c3
  NiTexture *v52; // eax
  NiD3DTextureStage *v54; // [esp+14h] [ebp-1Ch] BYREF
  NiD3DPassVtbl **v55; // [esp+18h] [ebp-18h] BYREF
  int v56; // [esp+1Ch] [ebp-14h]
  int v57; // [esp+20h] [ebp-10h]
  int v58; // [esp+2Ch] [ebp-4h]

  (*(void (__usercall **)(int@<ecx>, double@<st0>))(*(_DWORD *)a1 + 0x80))(a1, a2); /*0x7c0592*/
  v55 = 0; /*0x7c0598*/
  v58 = 0; /*0x7c059e*/
  v54 = 0; /*0x7c05a2*/
  v10 = *(_DWORD *)(a1 + 0xD0); /*0x7c05a6*/
  LOBYTE(v58) = 1; /*0x7c05af*/
  switch ( v10 ) /*0x7c05ba*/
  {
    case 0: /*0x7c05ba*/
      v11 = (NiD3DPass **)(a1 + 0xD4); /*0x7c05c1*/
      goto LABEL_3; /*0x7c05c1*/
    case 1: /*0x7c05ba*/
      v14 = sub_5070E0(); /*0x7c05df*/
      v15 = Double_To_SInt32(v14) - 1; /*0x7c05e9*/
      if ( v15 > 6 ) /*0x7c05ef*/
      {
        v56 = 6; /*0x7c0600*/
      }
      else if ( v15 >= 0 ) /*0x7c05f3*/
      {
        v56 = v15; /*0x7c060a*/
      }
      else
      {
        v56 = 0; /*0x7c05f5*/
      }
      sub_76C890((NiD3DPass **)&v55, (NiD3DPass **)(a1 + 0xD8)); /*0x7c0619*/
      v12 = (NiD3DPass *)v55; /*0x7c061e*/
      sub_7AEC20(&v54, (NiD3DTextureStage *)v55[9]->Destroy); /*0x7c062c*/
      InnerTexture = (NiTexture *)BSRenderedTexture::GetInnerTexture(*(BSRenderedTexture **)(a1 + 0x7C)); /*0x7c0634*/
      NiD3DTextureStage_SetTexture(v54, InnerTexture); /*0x7c063e*/
      v17 = *(_DWORD *)(*(_DWORD *)(a1 + 0x7C) + 0x20); /*0x7c0646*/
      if ( v17 ) /*0x7c064b*/
        v18 = (*(int (__thiscall **)(int))(*(_DWORD *)v17 + 0x4C))(v17); /*0x7c0652*/
      else
        v18 = 0; /*0x7c0656*/
      v57 = v18; /*0x7c065a*/
      v19 = (double)v18; /*0x7c065e*/
      if ( v18 < 0 ) /*0x7c0662*/
        v19 = v19 + flt_A2FC78; /*0x7c0664*/
      qmemcpy(&unk_B43228, (char *)&unk_A8F918 + 0xF0 * v56, 0xF0u); /*0x7c0688*/
      v20 = v56; /*0x7c068a*/
      v21 = (float *)&unk_B43240; /*0x7c068e*/
      flt_B2C794 = 1.0 / v19; /*0x7c0693*/
      flt_B2C798 = 0.0; /*0x7c069b*/
      v22 = *(float *)(4 * v20 + 0xA8F8F8); /*0x7c06a1*/
      do /*0x7c06d8*/
      {
        v23 = v21[0xFFFFFFFC]; /*0x7c06a8*/
        v21 += 0x14; /*0x7c06ab*/
        v21[0xFFFFFFE8] = v23 / v22; /*0x7c06b5*/
        v21[0xFFFFFFEC] = v21[0xFFFFFFEC] / v22; /*0x7c06bd*/
        v21[0xFFFFFFF0] = v21[0xFFFFFFF0] / v22; /*0x7c06c5*/
        v21[0xFFFFFFF4] = v21[0xFFFFFFF4] / v22; /*0x7c06cd*/
        v21[0xFFFFFFF8] = v21[0xFFFFFFF8] / v22; /*0x7c06d5*/
      }
      while ( (int)v21 < (int)&unk_B43330 ); /*0x7c06d8*/
      goto LABEL_64; /*0x7c06d8*/
    case 2: /*0x7c05ba*/
      v24 = sub_5070E0(); /*0x7c06e1*/
      v25 = Double_To_SInt32(v24) - 1; /*0x7c06eb*/
      if ( v25 > 6 ) /*0x7c06f1*/
      {
        v56 = 6; /*0x7c0702*/
      }
      else if ( v25 >= 0 ) /*0x7c06f5*/
      {
        v56 = v25; /*0x7c070c*/
      }
      else
      {
        v56 = 0; /*0x7c06f7*/
      }
      sub_76C890((NiD3DPass **)&v55, (NiD3DPass **)(a1 + 0xDC)); /*0x7c071b*/
      v12 = (NiD3DPass *)v55; /*0x7c0720*/
      sub_7AEC20(&v54, (NiD3DTextureStage *)v55[9]->Destroy); /*0x7c072e*/
      v26 = (NiTexture *)BSRenderedTexture::GetInnerTexture(*(BSRenderedTexture **)(a1 + 0x7C)); /*0x7c0736*/
      NiD3DTextureStage_SetTexture(v54, v26); /*0x7c0740*/
      flt_B2C794 = 0.0; /*0x7c0747*/
      v27 = *(_DWORD *)(*(_DWORD *)(a1 + 0x7C) + 0x20); /*0x7c0750*/
      if ( v27 ) /*0x7c0755*/
        v28 = (*(int (__thiscall **)(int))(*(_DWORD *)v27 + 0x4C))(v27); /*0x7c075c*/
      else
        v28 = 0; /*0x7c0760*/
      v57 = v28; /*0x7c0764*/
      v29 = (double)v28; /*0x7c0768*/
      if ( v28 < 0 ) /*0x7c076c*/
        v29 = v29 + flt_A2FC78; /*0x7c076e*/
      qmemcpy(&unk_B43228, (char *)&unk_A8F918 + 0xF0 * v56, 0xF0u); /*0x7c0792*/
      v30 = v56; /*0x7c0794*/
      v31 = (float *)&unk_B43240; /*0x7c0798*/
      flt_B2C798 = 1.0 / v29; /*0x7c079d*/
      v32 = *(float *)(4 * v30 + 0xA8F8F8); /*0x7c07a3*/
      do /*0x7c07da*/
      {
        v33 = v31[0xFFFFFFFC]; /*0x7c07aa*/
        v31 += 0x14; /*0x7c07ad*/
        v31[0xFFFFFFE8] = v33 / v32; /*0x7c07b7*/
        v31[0xFFFFFFEC] = v31[0xFFFFFFEC] / v32; /*0x7c07bf*/
        v31[0xFFFFFFF0] = v31[0xFFFFFFF0] / v32; /*0x7c07c7*/
        v31[0xFFFFFFF4] = v31[0xFFFFFFF4] / v32; /*0x7c07cf*/
        v31[0xFFFFFFF8] = v31[0xFFFFFFF8] / v32; /*0x7c07d7*/
      }
      while ( (int)v31 < (int)&unk_B43330 ); /*0x7c07da*/
      goto LABEL_64; /*0x7c07da*/
    case 3: /*0x7c05ba*/
    case 4: /*0x7c05ba*/
    case 5: /*0x7c05ba*/
    case 6: /*0x7c05ba*/
      sub_76C890((NiD3DPass **)&v55, (NiD3DPass **)(a1 + 0xE0)); /*0x7c07ee*/
      v12 = (NiD3DPass *)v55; /*0x7c07f3*/
      sub_7AEC20(&v54, (NiD3DTextureStage *)v55[9]->Destroy); /*0x7c0801*/
      v34 = (NiTexture *)BSRenderedTexture::GetInnerTexture(*(BSRenderedTexture **)(a1 + 0x7C)); /*0x7c0809*/
      NiD3DTextureStage_SetTexture(v54, v34); /*0x7c0813*/
      v35 = *(_DWORD *)(a1 + 0xD0); /*0x7c0818*/
      if ( v35 == 3 || v35 == 4 ) /*0x7c0826*/
      {
        if ( OB_RendererGlobalState_010201A0.bFP16ARGBFiltering ) /*0x7c0854*/
        {
          v37 = 0x10; /*0x7c086e*/
          v38 = &unk_B2C7A8; /*0x7c0873*/
        }
        else
        {
          v37 = 0x40; /*0x7c085d*/
          v38 = &unk_B2C7E8; /*0x7c0862*/
        }
        qmemcpy(&unk_B43228, v38, 4 * v37); /*0x7c087d*/
        NiD3DPass_SetVertexShader(v12, *(NiD3DVertexShader **)(a1 + 0x90)); /*0x7c0888*/
        v36 = *(NiD3DPixelShader **)(a1 + 0xB0); /*0x7c088d*/
      }
      else
      {
        if ( v35 != 6 ) /*0x7c082b*/
          goto LABEL_41; /*0x7c082b*/
        qmemcpy(&unk_B43228, &unk_B2C8E8, 0x90u); /*0x7c083c*/
        NiD3DPass_SetVertexShader(v12, *(NiD3DVertexShader **)(a1 + 0x94)); /*0x7c0847*/
        v36 = *(NiD3DPixelShader **)(a1 + 0xB4); /*0x7c084c*/
      }
      NiD3DPass_SetPixelShader(v12, v36); /*0x7c0896*/
LABEL_41:
      v39 = *(_DWORD *)(*(_DWORD *)(a1 + 0x7C) + 0x20); /*0x7c089b*/
      if ( v39 ) /*0x7c08a3*/
        v40 = (*(int (__thiscall **)(int))(*(_DWORD *)v39 + 0x4C))(v39); /*0x7c08aa*/
      else
        v40 = 0; /*0x7c08ae*/
      v57 = v40; /*0x7c08b2*/
      v41 = (double)v40; /*0x7c08b6*/
      if ( v40 < 0 ) /*0x7c08ba*/
        v41 = v41 + flt_A2FC78; /*0x7c08bc*/
      flt_B2C794 = 1.0 / v41; /*0x7c08c6*/
      v42 = *(_DWORD *)(*(_DWORD *)(a1 + 0x7C) + 0x20); /*0x7c08cf*/
      if ( v42 ) /*0x7c08d4*/
        v43 = (*(int (__thiscall **)(int))(*(_DWORD *)v42 + 0x50))(v42); /*0x7c08db*/
      else
        v43 = 0; /*0x7c08df*/
      v57 = v43; /*0x7c08e3*/
      v44 = (double)v43; /*0x7c08e7*/
      if ( v43 < 0 ) /*0x7c08eb*/
        v44 = v44 + flt_A2FC78; /*0x7c08ed*/
      flt_B2C798 = 1.0 / v44; /*0x7c08f7*/
LABEL_64:
      NiTArray_NiD3DPass_SetAt((NiTArray_NiD3DPass *)(a1 + 0x40), *(_DWORD *)(a1 + 0x38), (NiD3DPass **)&v55); /*0x7c0ae3*/
      ++*(_DWORD *)(a1 + 0x38); /*0x7c0af4*/
      return def_7C05BA(v54, v12, 0, a3, a4, a5, a6, a7, a8, a9);
    case 7: /*0x7c05ba*/
      sub_76C890((NiD3DPass **)&v55, (NiD3DPass **)(a1 + 0xF0)); /*0x7c090d*/
      v12 = (NiD3DPass *)v55; /*0x7c0912*/
      Destroy = v55[9]->Destroy; /*0x7c0919*/
      goto LABEL_62; /*0x7c091b*/
    case 8: /*0x7c05ba*/
      v11 = (NiD3DPass **)(a1 + 0xF4); /*0x7c0920*/
      goto LABEL_3; /*0x7c0926*/
    case 9: /*0x7c05ba*/
      *(float *)(a1 + 0x108) = sub_5071A0(); /*0x7c0930*/
      sub_76C890((NiD3DPass **)&v55, (NiD3DPass **)(a1 + 0xF8)); /*0x7c0941*/
      v12 = (NiD3DPass *)v55; /*0x7c0946*/
      sub_7AEC20(&v54, (NiD3DTextureStage *)v55[9]->Destroy); /*0x7c0954*/
      v45 = (NiTexture *)BSRenderedTexture::GetInnerTexture(*(BSRenderedTexture **)(a1 + 0x7C)); /*0x7c095c*/
      NiD3DTextureStage_SetTexture(v54, v45); /*0x7c0966*/
      sub_7AEC20(&v54, (NiD3DTextureStage *)v12->Stages.data->Texture); /*0x7c0976*/
      NiD3DTextureStage_SetTexture(v54, *(NiTexture **)(a1 + 0x118)); /*0x7c0986*/
      sub_7AEC20(&v54, (NiD3DTextureStage *)v12->Stages.data->Unk08); /*0x7c0996*/
      v46 = *(NiTexture **)(a1 + 0x11C); /*0x7c099b*/
      goto LABEL_63; /*0x7c09a1*/
    case 0xA: /*0x7c05ba*/
      *(float *)(a1 + 0x108) = sub_507060(); /*0x7c09ab*/
      *(float *)(a1 + 0x10C) = sub_5070A0(); /*0x7c09b6*/
      v11 = (NiD3DPass **)(a1 + 0xFC); /*0x7c09bc*/
LABEL_3:
      sub_76C890((NiD3DPass **)&v55, v11); /*0x7c05c7*/
      v12 = (NiD3DPass *)v55; /*0x7c05d1*/
      Destroy = v55[9]->Destroy; /*0x7c05d8*/
      goto LABEL_62; /*0x7c05da*/
    case 0xB: /*0x7c05ba*/
      if ( GetTimer(1, 1) * dbl_A492F0 < dbl_A2FC68 || (v47 = GetTimer(1, 1) * dbl_A492F0 > 1.0, v48 = 1.0, !v47) ) /*0x7c0a03*/
      {
        v49 = GetTimer(1, 1) * dbl_A492F0; /*0x7c0a10*/
        v50 = v49 > 0.0; /*0x7c0a1b*/
        v51 = 0.0 == v49; /*0x7c0a1b*/
        v48 = 0.0; /*0x7c0a1f*/
        if ( v50 || v51 ) /*0x7c0a21*/
          v48 = GetTimer(1, 1) * dbl_A492F0; /*0x7c0a31*/
      }
      *(float *)(a1 + 0x88) = v48; /*0x7c0a3a*/
      *(float *)(a1 + 0x110) = sub_507110(); /*0x7c0a45*/
      *(float *)(a1 + 0x114) = sub_507170(); /*0x7c0a56*/
      sub_76C890((NiD3DPass **)&v55, (NiD3DPass **)(a1 + 0x100)); /*0x7c0a61*/
      v12 = (NiD3DPass *)v55; /*0x7c0a66*/
      sub_7AEC20(&v54, (NiD3DTextureStage *)v55[9]->Destroy); /*0x7c0a74*/
      v52 = (NiTexture *)BSRenderedTexture::GetInnerTexture(*(BSRenderedTexture **)(a1 + 0x7C)); /*0x7c0a7c*/
      NiD3DTextureStage_SetTexture(v54, v52); /*0x7c0a86*/
      sub_7AEC20(&v54, (NiD3DTextureStage *)v12->Stages.data->Texture); /*0x7c0a96*/
      v46 = *(NiTexture **)(a1 + 0x118); /*0x7c0a9b*/
      goto LABEL_63; /*0x7c0aa1*/
    case 0xC: /*0x7c05ba*/
      *(float *)(a1 + 0x108) = sub_507170(); /*0x7c0aa8*/
      sub_76C890((NiD3DPass **)&v55, (NiD3DPass **)(a1 + 0x104)); /*0x7c0ab9*/
      v12 = (NiD3DPass *)v55; /*0x7c0abe*/
      Destroy = v55[9]->Destroy; /*0x7c0ac5*/
LABEL_62:
      sub_7AEC20(&v54, (NiD3DTextureStage *)Destroy); /*0x7c0ac7*/
      v46 = (NiTexture *)BSRenderedTexture::GetInnerTexture(*(BSRenderedTexture **)(a1 + 0x7C)); /*0x7c0ad4*/
LABEL_63:
      NiD3DTextureStage_SetTexture(v54, v46); /*0x7c0ad9*/
      goto LABEL_64; /*0x7c0ade*/
    default:
      JUMPOUT(0x7C0AFE); /*0x7c0afe*/
  }
}
