int __thiscall sub_80D110(Ni2DBuffer **this, _DWORD *a2, int a3, int a4, NiRenderedTexture *a5, int a6, int a7, int a8)
{
  int v9; // eax
  unsigned int **pixelLayout; // edi
  unsigned int *v12; // eax
  int ShadowSceneNode; // eax
  _DWORD *v14; // eax
  void (__thiscall ***v15)(_DWORD, int); // esi
  float v16; // ecx
  float v17; // edx
  float v18; // eax
  double v19; // st7
  int v20; // ecx
  double v21; // st7
  int v22; // eax
  int v23; // ecx
  int v24; // edx
  int v25; // ebx
  NiD3DPass **v26; // esi
  NiD3DPass *v27; // ebx
  NiD3DPass *v28; // ebx
  NiD3DPass *v29; // ebx
  NiD3DPass *v30; // ebx
  int v31; // ebx
  Ni2DBuffer *v32; // eax
  NiRenderedTexture *Stage; // ebp
  int (__thiscall *v34)(unsigned int **, _DWORD); // eax
  NiRenderedTexture *v35; // eax
  NiRenderedTexture *v36; // eax
  NiD3DTextureStage *v37; // ebp
  NiD3DPixelShader *v38; // eax
  Ni2DBuffer **v39; // esi
  NiRenderedTexture *v40; // ebp
  int (__thiscall *v41)(unsigned int **, _DWORD); // eax
  NiRenderedTexture *v42; // eax
  NiRenderedTexture *v43; // eax
  NiD3DPixelShader *v44; // eax
  NiD3DVertexShader *v45; // eax
  NiD3DPass **v47; // [esp-4h] [ebp-54h]
  NiD3DPass **v48; // [esp-4h] [ebp-54h]
  unsigned int *v49; // [esp+14h] [ebp-3Ch]
  unsigned int *v50; // [esp+18h] [ebp-38h] BYREF
  Ni2DBuffer **v51; // [esp+1Ch] [ebp-34h]
  int v52; // [esp+20h] [ebp-30h]
  int v53; // [esp+24h] [ebp-2Ch]
  float v54; // [esp+28h] [ebp-28h]
  int v55; // [esp+2Ch] [ebp-24h]
  unsigned int *v56; // [esp+30h] [ebp-20h]
  float v57; // [esp+34h] [ebp-1Ch]
  float v58; // [esp+38h] [ebp-18h]
  float v59; // [esp+3Ch] [ebp-14h]
  int v60; // [esp+40h] [ebp-10h]
  int v61; // [esp+4Ch] [ebp-4h]
  bool v62; // [esp+5Ch] [ebp+Ch]

  v51 = this;
  ((void (__thiscall *)(Ni2DBuffer **))(*this)[6].members.width)(this);
  v9 = dword_B42E90;
  v52 = dword_B42E90;
  if ( v52 >= 0x160 && v9 <= 0x162 || v9 >= 6 && v9 <= 9 || v9 == 0x165 )
  {
    GetShaderDefinition(1u);
    return sub_7C9F30(this, a2, a3, a4, a5, a6, a7, a8);
  }
  pixelLayout = (unsigned int **)a5->member.super.formatPrefs.pixelLayout;
  LOBYTE(a6) = 0;
  v62 = 0;
  LOBYTE(a7) = 0;
  LOBYTE(a8) = 1;
  if ( pixelLayout )
  {
    v12 = pixelLayout[7];
    LOBYTE(a6) = ((unsigned __int16)v12 & 0x400) != 0;
    v62 = ((unsigned __int16)v12 & 0x800) != 0;
    LOBYTE(a7) = ((unsigned __int16)v12 & 0x1000) != 0;
    ShadowSceneNode = GetShadowSceneNode((unsigned int)v12 >> 0x1C);
    v14 = sub_405AD0(*(_DWORD **)(ShadowSceneNode + 0x118), &v50);
    LOBYTE(a8) = sub_8AA390((float *)(*v14 + 0xF8), (float *)&dword_B3FA90);
    if ( *(float *)&v50 != 0.0 )
    {
      v15 = (void (__thiscall ***)(_DWORD, int))v50;
      if ( !InterlockedDecrement((volatile LONG *)v50 + 1) )
        (**v15)(v15, 1);
    }
    v16 = *(float *)&dword_B46498;
    v17 = *(float *)&dword_B4649C;
    v50 = pixelLayout[8];
    v18 = *(float *)&dword_B464A0;
    v57 = v16;
    v19 = v16;
    v20 = dword_B464A4;
    *(float *)&v53 = v19;
    v58 = v17;
    v54 = v17;
    v59 = v18;
    v21 = v18;
    v22 = LODWORD(v17);
    *(float *)&v55 = v21;
    v60 = v20;
    v23 = v55;
    v56 = v50;
    dword_B46498 = v53;
    v24 = (int)v56;
    dword_B4649C = v22;
    dword_B464A0 = v23;
    dword_B464A4 = v24;
  }
  v25 = (int)*(this + 0x27);
  v26 = (NiD3DPass **)(this + 0x27);
  if ( LOWORD(dword_B42EAC) == 4 )
  {
    if ( !*(_DWORD *)(v25 + 0x30) )
      *(_DWORD *)(v25 + 0x30) = sub_772DF0();
    sub_772CD0(*(_DWORD **)(v25 + 0x30), 0x34, 1, 0);
    v27 = *v26;
    if ( !(*v26)->RenderStateGroup )
      v27->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
    sub_772CD0((_DWORD *)v27->RenderStateGroup, 0x38, 8, 0);
    v28 = *v26;
    if ( !(*v26)->RenderStateGroup )
      v28->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
    sub_772CD0((_DWORD *)v28->RenderStateGroup, 0x37, 7, 0);
    v29 = *v26;
    if ( !(*v26)->RenderStateGroup )
      v29->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
    sub_772CD0((_DWORD *)v29->RenderStateGroup, 0x35, 1, 0);
    v30 = *v26;
    if ( !(*v26)->RenderStateGroup )
      v30->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
    sub_772CD0((_DWORD *)v30->RenderStateGroup, 0x36, 1, 0);
  }
  else
  {
    if ( !*(_DWORD *)(v25 + 0x30) )
      *(_DWORD *)(v25 + 0x30) = sub_772DF0();
    sub_772CD0(*(_DWORD **)(v25 + 0x30), 0x34, 0, 0);
  }
  v31 = ShaderPackage;
  if ( byte_B42F32 )
  {
    if ( v31 != 1 )
    {
      dword_B4616C = (int)pixelLayout[0x56];
      v49 = (unsigned int *)(this + 0x33);
      dword_B46170 = (int)pixelLayout[0x57];
      v50 = (unsigned int *)(this + 0x3A);
      dword_B46174 = (int)pixelLayout[0x58];
      dword_B46178 = (int)pixelLayout[0x59];
      goto LABEL_32;
    }
  }
  else
  {
    v31 = 1;
  }
  LODWORD(flt_B46688) = pixelLayout[0x56];
  v49 = (unsigned int *)(this + 0x29);
  LODWORD(flt_B4668C) = pixelLayout[0x57];
  v50 = (unsigned int *)(this + 0x30);
  dword_B46690 = (int)pixelLayout[0x58];
  dword_B46694 = (int)pixelLayout[0x59];
LABEL_32:
  if ( a3 )
    v32 = *(this + 0x3E);
  else
    v32 = *(this + 0x3D);
  NiSmartPointer_Set__(this + 9, v32);
  switch ( v52 )
  {
    case 0xE0:
      Stage = (NiRenderedTexture *)(*v26)->Stages.data->Stage;
      a5 = Stage;
      if ( Stage )
        ++Stage[1].member.super.formatPrefs.alphaFormat;
      v34 = (int (__thiscall *)(unsigned int **, _DWORD))(*pixelLayout)[0x22];
      v61 = 0;
      v35 = (NiRenderedTexture *)v34(pixelLayout, 0);
      sub_76C910(Stage, v35);
      sub_7AEC20((NiD3DTextureStage **)&a5, (NiD3DTextureStage *)(*v26)->Stages.data->Texture);
      v36 = (NiRenderedTexture *)((int (__thiscall *)(unsigned int **, _DWORD))(*pixelLayout)[0x23])(pixelLayout, 0);
      sub_76C910(a5, v36);
      sub_7AEC20((NiD3DTextureStage **)&a5, (NiD3DTextureStage *)(*v26)->Stages.data->Unk08);
      sub_76C910(a5, (NiRenderedTexture *)pixelLayout[0x5A]);
      sub_7AEC20((NiD3DTextureStage **)&a5, (NiD3DTextureStage *)(*v26)->Stages.data[1].Stage);
      v37 = (NiD3DTextureStage *)a5;
      sub_76C910(a5, (NiRenderedTexture *)dword_B430F8);
      if ( v31 >= 2 )
      {
        sub_7AEC20((NiD3DTextureStage **)&a5, (NiD3DTextureStage *)(*v26)->Stages.data[1].Unk08);
        v37 = (NiD3DTextureStage *)a5;
        sub_76C910(a5, (NiRenderedTexture *)pixelLayout[0x5B]);
      }
      sub_76C730(*v26, 0x1C, 0, 0);
      sub_76C730(*v26, 0xA8, 7, 0);
      sub_76C730(*v26, 0x1B, 1, 0);
      sub_76C730(*v26, 0x13, 5, 0);
      sub_76C730(*v26, 0x14, 6, 0);
      sub_76C730(*v26, 7, 1, 0);
      sub_76C730(*v26, 0x17, 4, 0);
      sub_76C730(*v26, 0xE, 1, 0);
      sub_7AECB0(*v26, (NiD3DVertexShader *)*v49);
      if ( (_BYTE)a8 )
        v38 = (NiD3DPixelShader *)*v50;
      else
        v38 = (NiD3DPixelShader *)v50[2];
      sub_7AEC60(&(*v26)->__vftable, v38);
      v47 = v26;
      v39 = v51;
      sub_76CE40((NiTArray_NiD3DPass *)v51 + 4, (NiD3DPass *)v51[0xE], v47);
      goto LABEL_70;
    case 0xE1:
      v40 = (NiRenderedTexture *)(*v26)->Stages.data->Stage;
      a5 = v40;
      if ( v40 )
        ++v40[1].member.super.formatPrefs.alphaFormat;
      v41 = (int (__thiscall *)(unsigned int **, _DWORD))(*pixelLayout)[0x22];
      v61 = 1;
      v42 = (NiRenderedTexture *)v41(pixelLayout, 0);
      sub_76C910(v40, v42);
      sub_7AEC20((NiD3DTextureStage **)&a5, (NiD3DTextureStage *)(*v26)->Stages.data->Texture);
      v43 = (NiRenderedTexture *)((int (__thiscall *)(unsigned int **, _DWORD))(*pixelLayout)[0x23])(pixelLayout, 0);
      sub_76C910(a5, v43);
      sub_7AEC20((NiD3DTextureStage **)&a5, (NiD3DTextureStage *)(*v26)->Stages.data->Unk08);
      sub_76C910(a5, (NiRenderedTexture *)pixelLayout[0x5A]);
      sub_7AEC20((NiD3DTextureStage **)&a5, (NiD3DTextureStage *)(*v26)->Stages.data[1].Stage);
      v37 = (NiD3DTextureStage *)a5;
      sub_76C910(a5, (NiRenderedTexture *)dword_B430F8);
      if ( v31 >= 2 )
      {
        sub_7AEC20((NiD3DTextureStage **)&a5, (NiD3DTextureStage *)(*v26)->Stages.data[1].Unk08);
        v37 = (NiD3DTextureStage *)a5;
        sub_76C910(a5, (NiRenderedTexture *)pixelLayout[0x5B]);
      }
      sub_76C730(*v26, 0x1C, 0, 0);
      sub_76C730(*v26, 0xA8, 7, 0);
      sub_76C730(*v26, 0x1B, 1, 0);
      sub_76C730(*v26, 0x13, 5, 0);
      sub_76C730(*v26, 0x14, 6, 0);
      sub_76C730(*v26, 7, 1, 0);
      sub_76C730(*v26, 0x17, 4, 0);
      sub_76C730(*v26, 0xE, 1, 0);
      if ( (_BYTE)a6 || (_BYTE)a8 )
      {
        sub_7AEC60(&(*v26)->__vftable, (NiD3DPixelShader *)v50[1]);
        if ( (_BYTE)a7 )
          v45 = (NiD3DVertexShader *)v49[4];
        else
          v45 = (NiD3DVertexShader *)v49[2];
      }
      else
      {
        if ( ShaderPackage < 2 )
          v44 = (NiD3DPixelShader *)*v50;
        else
          v44 = (NiD3DPixelShader *)v50[1];
        sub_7AEC60(&(*v26)->__vftable, v44);
        if ( v62 )
        {
          if ( (_BYTE)a7 )
          {
            if ( ShaderPackage < 2 )
              v45 = (NiD3DVertexShader *)v49[3];
            else
              v45 = (NiD3DVertexShader *)v49[6];
          }
          else if ( ShaderPackage < 2 )
          {
            v45 = (NiD3DVertexShader *)v49[1];
          }
          else
          {
            v45 = (NiD3DVertexShader *)v49[5];
          }
        }
        else
        {
          v45 = (NiD3DVertexShader *)*v49;
        }
      }
      sub_7AECB0(*v26, v45);
      v48 = v26;
      v39 = v51;
      sub_76CE40((NiTArray_NiD3DPass *)v51 + 4, (NiD3DPass *)v51[0xE], v48);
LABEL_70:
      v39[0xE] = (Ni2DBuffer *)((char *)v39[0xE] + 1);
      v61 = 0xFFFFFFFF;
      if ( v37 )
      {
        if ( v37[7].Unk08-- == 1 )
          sub_772560(v37);
      }
      break;
    case 0x18C:
      sub_851CA0(this, a2, a3, (int)a5, pixelLayout);
      break;
    case 0x18D:
      sub_851E70(this, a2, a3, (int)a5, pixelLayout);
      break;
    case 0x18E:
      sub_848950(this, a2, a3, (int)a5, pixelLayout);
      break;
    case 0x18F:
      sub_848AD0(this, a2, a3, (int)a5, pixelLayout);
      break;
    default:
      return 0;
  }
  return 0;
}
