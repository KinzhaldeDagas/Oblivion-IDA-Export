int __userpurge sub_7C0560@<eax>(int a1@<ecx>, double a2@<st0>, int a3, int a4, int a5, int a6, int a7, int a8, int a9)
{
  int v10; // eax
  int *v11; // eax
  void (__thiscall *Destroy)(NiD3DPass *, UInt8); // eax
  double v13; // st7
  int v14; // eax
  NiRenderedTexture *InnerTexture; // eax
  int v16; // ecx
  int v17; // eax
  double v18; // st7
  int v19; // ecx
  float *v20; // eax
  double v21; // st7
  double v22; // st6
  double v23; // st7
  int v24; // eax
  NiRenderedTexture *v25; // eax
  int v26; // ecx
  int v27; // eax
  double v28; // st7
  int v29; // ecx
  float *v30; // eax
  double v31; // st7
  double v32; // st6
  NiD3DPass *v33; // ebx
  NiRenderedTexture *v34; // eax
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
  NiD3DPassVtbl **v45; // ebx
  NiRenderedTexture *v46; // eax
  NiRenderedTexture *v47; // eax
  bool v48; // c0
  double v49; // st7
  double v50; // st7
  bool v51; // c0
  bool v52; // c3
  NiD3DPassVtbl **v53; // ebx
  NiRenderedTexture *v54; // eax
  _DWORD *v56; // [esp+14h] [ebp-1Ch] BYREF
  NiD3DPassVtbl **v57; // [esp+18h] [ebp-18h] BYREF
  int v58; // [esp+1Ch] [ebp-14h]
  int v59; // [esp+20h] [ebp-10h]
  int v60; // [esp+2Ch] [ebp-4h]

  (*(void (__usercall **)(int@<ecx>, double@<st0>))(*(_DWORD *)a1 + 0x80))(a1, a2);
  v57 = 0;
  v60 = 0;
  v56 = 0;
  v10 = *(_DWORD *)(a1 + 0xD0);
  LOBYTE(v60) = 1;
  switch ( v10 )
  {
    case 0:
      v11 = (int *)(a1 + 0xD4);
      goto LABEL_3;
    case 1:
      v13 = sub_5070E0();
      v14 = Double_To_SInt32(v13) - 1;
      if ( v14 > 6 )
      {
        v58 = 6;
      }
      else if ( v14 >= 0 )
      {
        v58 = v14;
      }
      else
      {
        v58 = 0;
      }
      sub_76C890((NiD3DPass **)&v57, (int *)(a1 + 0xD8));
      sub_7AEC20((NiD3DTextureStage **)&v56, (NiD3DTextureStage *)v57[9]->Destroy);
      InnerTexture = BSRenderedTexture::GetInnerTexture(*(BSRenderedTexture **)(a1 + 0x7C));
      sub_76C910(v56, InnerTexture);
      v16 = *(_DWORD *)(*(_DWORD *)(a1 + 0x7C) + 0x20);
      if ( v16 )
        v17 = (*(int (__thiscall **)(int))(*(_DWORD *)v16 + 0x4C))(v16);
      else
        v17 = 0;
      v59 = v17;
      v18 = (double)v17;
      if ( v17 < 0 )
        v18 = v18 + flt_A2FC78;
      qmemcpy(&unk_B43228, (char *)&unk_A8F918 + 0xF0 * v58, 0xF0u);
      v19 = v58;
      v20 = (float *)&unk_B43240;
      flt_B2C794 = 1.0 / v18;
      flt_B2C798 = 0.0;
      v21 = *(float *)(4 * v19 + 0xA8F8F8);
      do
      {
        v22 = v20[0xFFFFFFFC];
        v20 += 0x14;
        v20[0xFFFFFFE8] = v22 / v21;
        v20[0xFFFFFFEC] = v20[0xFFFFFFEC] / v21;
        v20[0xFFFFFFF0] = v20[0xFFFFFFF0] / v21;
        v20[0xFFFFFFF4] = v20[0xFFFFFFF4] / v21;
        v20[0xFFFFFFF8] = v20[0xFFFFFFF8] / v21;
      }
      while ( (int)v20 < (int)&flt_B43330 );
      goto LABEL_64;
    case 2:
      v23 = sub_5070E0();
      v24 = Double_To_SInt32(v23) - 1;
      if ( v24 > 6 )
      {
        v58 = 6;
      }
      else if ( v24 >= 0 )
      {
        v58 = v24;
      }
      else
      {
        v58 = 0;
      }
      sub_76C890((NiD3DPass **)&v57, (int *)(a1 + 0xDC));
      sub_7AEC20((NiD3DTextureStage **)&v56, (NiD3DTextureStage *)v57[9]->Destroy);
      v25 = BSRenderedTexture::GetInnerTexture(*(BSRenderedTexture **)(a1 + 0x7C));
      sub_76C910(v56, v25);
      flt_B2C794 = 0.0;
      v26 = *(_DWORD *)(*(_DWORD *)(a1 + 0x7C) + 0x20);
      if ( v26 )
        v27 = (*(int (__thiscall **)(int))(*(_DWORD *)v26 + 0x4C))(v26);
      else
        v27 = 0;
      v59 = v27;
      v28 = (double)v27;
      if ( v27 < 0 )
        v28 = v28 + flt_A2FC78;
      qmemcpy(&unk_B43228, (char *)&unk_A8F918 + 0xF0 * v58, 0xF0u);
      v29 = v58;
      v30 = (float *)&unk_B43240;
      flt_B2C798 = 1.0 / v28;
      v31 = *(float *)(4 * v29 + 0xA8F8F8);
      do
      {
        v32 = v30[0xFFFFFFFC];
        v30 += 0x14;
        v30[0xFFFFFFE8] = v32 / v31;
        v30[0xFFFFFFEC] = v30[0xFFFFFFEC] / v31;
        v30[0xFFFFFFF0] = v30[0xFFFFFFF0] / v31;
        v30[0xFFFFFFF4] = v30[0xFFFFFFF4] / v31;
        v30[0xFFFFFFF8] = v30[0xFFFFFFF8] / v31;
      }
      while ( (int)v30 < (int)&flt_B43330 );
      goto LABEL_64;
    case 3:
    case 4:
    case 5:
    case 6:
      sub_76C890((NiD3DPass **)&v57, (int *)(a1 + 0xE0));
      v33 = (NiD3DPass *)v57;
      sub_7AEC20((NiD3DTextureStage **)&v56, (NiD3DTextureStage *)v57[9]->Destroy);
      v34 = BSRenderedTexture::GetInnerTexture(*(BSRenderedTexture **)(a1 + 0x7C));
      sub_76C910(v56, v34);
      v35 = *(_DWORD *)(a1 + 0xD0);
      if ( v35 == 3 || v35 == 4 )
      {
        if ( byte_B43071 )
        {
          v37 = 0x10;
          v38 = &unk_B2C7A8;
        }
        else
        {
          v37 = 0x40;
          v38 = &unk_B2C7E8;
        }
        qmemcpy(&unk_B43228, v38, 4 * v37);
        sub_7AECB0(v33, *(NiD3DVertexShader **)(a1 + 0x90));
        v36 = *(NiD3DPixelShader **)(a1 + 0xB0);
      }
      else
      {
        if ( v35 != 6 )
          goto LABEL_41;
        qmemcpy(&unk_B43228, &unk_B2C8E8, 0x90u);
        sub_7AECB0(v33, *(NiD3DVertexShader **)(a1 + 0x94));
        v36 = *(NiD3DPixelShader **)(a1 + 0xB4);
      }
      sub_7AEC60(&v33->__vftable, v36);
LABEL_41:
      v39 = *(_DWORD *)(*(_DWORD *)(a1 + 0x7C) + 0x20);
      if ( v39 )
        v40 = (*(int (__thiscall **)(int))(*(_DWORD *)v39 + 0x4C))(v39);
      else
        v40 = 0;
      v59 = v40;
      v41 = (double)v40;
      if ( v40 < 0 )
        v41 = v41 + flt_A2FC78;
      flt_B2C794 = 1.0 / v41;
      v42 = *(_DWORD *)(*(_DWORD *)(a1 + 0x7C) + 0x20);
      if ( v42 )
        v43 = (*(int (__thiscall **)(int))(*(_DWORD *)v42 + 0x50))(v42);
      else
        v43 = 0;
      v59 = v43;
      v44 = (double)v43;
      if ( v43 < 0 )
        v44 = v44 + flt_A2FC78;
      flt_B2C798 = 1.0 / v44;
LABEL_64:
      sub_76CE40((NiTArray_NiD3DPass *)(a1 + 0x40), *(NiD3DPass **)(a1 + 0x38), (NiD3DPass **)&v57);
      ++*(_DWORD *)(a1 + 0x38);
      return def_7C05BA(v56, a3, a4, a5, a6, a7, a8, a9);
    case 7:
      sub_76C890((NiD3DPass **)&v57, (int *)(a1 + 0xF0));
      Destroy = v57[9]->Destroy;
      goto LABEL_62;
    case 8:
      v11 = (int *)(a1 + 0xF4);
      goto LABEL_3;
    case 9:
      *(float *)(a1 + 0x108) = sub_5071A0();
      sub_76C890((NiD3DPass **)&v57, (int *)(a1 + 0xF8));
      v45 = v57;
      sub_7AEC20((NiD3DTextureStage **)&v56, (NiD3DTextureStage *)v57[9]->Destroy);
      v46 = BSRenderedTexture::GetInnerTexture(*(BSRenderedTexture **)(a1 + 0x7C));
      sub_76C910(v56, v46);
      sub_7AEC20((NiD3DTextureStage **)&v56, (NiD3DTextureStage *)v45[9]->sub_75FBA0);
      sub_76C910(v56, *(NiRenderedTexture **)(a1 + 0x118));
      sub_7AEC20((NiD3DTextureStage **)&v56, (NiD3DTextureStage *)v45[9]->sub_75FD90);
      v47 = *(NiRenderedTexture **)(a1 + 0x11C);
      goto LABEL_63;
    case 0xA:
      *(float *)(a1 + 0x108) = sub_507060();
      *(float *)(a1 + 0x10C) = sub_5070A0();
      v11 = (int *)(a1 + 0xFC);
LABEL_3:
      sub_76C890((NiD3DPass **)&v57, v11);
      Destroy = v57[9]->Destroy;
      goto LABEL_62;
    case 0xB:
      if ( GetTimer(1, 1) * dbl_A492F0 < dbl_A2FC68 || (v48 = GetTimer(1, 1) * dbl_A492F0 > 1.0, v49 = 1.0, !v48) )
      {
        v50 = GetTimer(1, 1) * dbl_A492F0;
        v51 = v50 > 0.0;
        v52 = 0.0 == v50;
        v49 = 0.0;
        if ( v51 || v52 )
          v49 = GetTimer(1, 1) * dbl_A492F0;
      }
      *(float *)(a1 + 0x88) = v49;
      *(float *)(a1 + 0x110) = sub_507110();
      *(float *)(a1 + 0x114) = sub_507170();
      sub_76C890((NiD3DPass **)&v57, (int *)(a1 + 0x100));
      v53 = v57;
      sub_7AEC20((NiD3DTextureStage **)&v56, (NiD3DTextureStage *)v57[9]->Destroy);
      v54 = BSRenderedTexture::GetInnerTexture(*(BSRenderedTexture **)(a1 + 0x7C));
      sub_76C910(v56, v54);
      sub_7AEC20((NiD3DTextureStage **)&v56, (NiD3DTextureStage *)v53[9]->sub_75FBA0);
      v47 = *(NiRenderedTexture **)(a1 + 0x118);
      goto LABEL_63;
    case 0xC:
      *(float *)(a1 + 0x108) = sub_507170();
      sub_76C890((NiD3DPass **)&v57, (int *)(a1 + 0x104));
      Destroy = v57[9]->Destroy;
LABEL_62:
      sub_7AEC20((NiD3DTextureStage **)&v56, (NiD3DTextureStage *)Destroy);
      v47 = BSRenderedTexture::GetInnerTexture(*(BSRenderedTexture **)(a1 + 0x7C));
LABEL_63:
      sub_76C910(v56, v47);
      goto LABEL_64;
    default:
      JUMPOUT(0x7C0AFE);
  }
}
