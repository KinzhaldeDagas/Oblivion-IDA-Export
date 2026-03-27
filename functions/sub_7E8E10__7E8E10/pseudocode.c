int __thiscall sub_7E8E10(void *this, NiD3DTextureStage *arg0, int a3, int a4, int a5, int a6, int a7, int a8)
{
  int v9; // ebp
  int v10; // esi
  BOOL v11; // ebx
  int v12; // ebx
  double v13; // st7
  double v14; // st6
  int v15; // ecx
  int v16; // edx
  int v17; // eax
  int v18; // eax
  float *v19; // eax
  float v20; // ecx
  float v21; // edx
  double v22; // st5
  float v23; // eax
  double v24; // st5
  double v25; // st5
  double v26; // st5
  NiRenderedTexture *v27; // edx
  double v28; // st5
  int v29; // eax
  double v30; // st5
  int v31; // ecx
  int v32; // ecx
  int v33; // edx
  int v34; // eax
  int v35; // ecx
  int v36; // esi
  double v37; // st5
  double v38; // st4
  int v39; // eax
  unsigned __int16 v40; // bp
  bool v41; // cc
  NiD3DPassVtbl **v42; // esi
  int v43; // eax
  NiD3DVertexShader *v44; // eax
  NiRenderedTexture *InnerTexture; // eax
  NiD3DTextureStage *v46; // ebp
  int v47; // eax
  NiD3DTextureStage *Destroy; // eax
  NiD3DVertexShader *v49; // eax
  NiD3DPass *v50; // ecx
  NiD3DPixelShader *v51; // eax
  NiD3DVertexShader *v52; // eax
  NiD3DPixelShader *v53; // eax
  int v54; // eax
  NiD3DTextureStage *v55; // eax
  char v56; // bl
  NiD3DPass *v57; // ecx
  NiD3DVertexShader *v58; // eax
  NiD3DVertexShader *v59; // eax
  unsigned __int8 v60; // bl
  bool v61; // zf
  NiD3DTextureStage *sub_75FBA0; // [esp-4h] [ebp-60h]
  bool v64; // [esp+16h] [ebp-46h]
  bool v65; // [esp+17h] [ebp-45h]
  char v66; // [esp+18h] [ebp-44h]
  bool v67; // [esp+1Bh] [ebp-41h]
  NiD3DPassVtbl **v68; // [esp+1Ch] [ebp-40h] BYREF
  __int64 v69; // [esp+20h] [ebp-3Ch]
  float v70; // [esp+28h] [ebp-34h]
  float v71; // [esp+2Ch] [ebp-30h]
  NiRenderedTexture *a2; // [esp+30h] [ebp-2Ch]
  float v73; // [esp+34h] [ebp-28h]
  int v74; // [esp+38h] [ebp-24h]
  float v75; // [esp+3Ch] [ebp-20h]
  float v76; // [esp+40h] [ebp-1Ch]
  float v77; // [esp+44h] [ebp-18h]
  float v78; // [esp+48h] [ebp-14h]
  float v79; // [esp+4Ch] [ebp-10h]
  unsigned int v80; // [esp+58h] [ebp-4h]

  (*(void (__thiscall **)(void *))(*(_DWORD *)this + 0x80))(this);
  v9 = a5;
  v10 = *(_DWORD *)(a5 + 0x18);
  if ( v10 )
    v11 = (*(int (__thiscall **)(_DWORD))(*(_DWORD *)v10 + 0x54))(*(_DWORD *)(a5 + 0x18)) == 4;
  else
    v11 = 0;
  v12 = v11 ? v10 : 0;
  if ( v12 )
  {
    v13 = 1.0;
    if ( byte_B42E86 )
    {
      v76 = 1.0;
      v77 = 1.0;
      v78 = 1.0;
      v79 = 1.0;
      sub_7ECAE0(0, COERCE_INT(1.0), COERCE_INT(1.0), COERCE_INT(1.0), COERCE_INT(1.0));
      v13 = 1.0;
    }
    v14 = 0.0;
    v15 = LODWORD(flt_B43334);
    v16 = LODWORD(flt_B43338);
    dword_B460C0 = LODWORD(flt_B43330);
    v17 = LODWORD(flt_B4333C);
    dword_B460C4 = v15;
    dword_B460C8 = v16;
    dword_B460CC = v17;
    v18 = *(_DWORD *)(v9 + 8);
    if ( v18 )
    {
      *(float *)&a2 = (float)*(unsigned __int8 *)(v18 + 0x1A);
      v76 = *(float *)&a2 / dbl_A3DDD8;
      *((float *)this + 0x61) = v76;
      v77 = 0.0;
      v78 = 0.0;
      v79 = 0.0;
      *((float *)this + 0x62) = 0.0;
      *((float *)this + 0x63) = 0.0;
      *((float *)this + 0x64) = 0.0;
    }
    else
    {
      *((_DWORD *)this + 0x61) = dword_B25AD0;
      *((_DWORD *)this + 0x62) = dword_B25AD4;
      *((_DWORD *)this + 0x63) = dword_B25AD8;
      *((_DWORD *)this + 0x64) = dword_B25ADC;
    }
    v19 = *(float **)(v9 + 0xC);
    if ( v19 )
    {
      v20 = v19[8];
      v21 = v19[9];
      *(float *)&v69 = v19[0xB];
      v22 = v19[0xC];
      v23 = v19[0xA];
      *(float *)&a2 = v22;
      v76 = v20;
      v24 = *(float *)&a2;
      v77 = v21;
      v78 = v23;
      *(float *)&a2 = *(float *)&a2 - *(float *)&v69;
      *(float *)&v69 = v24;
      v25 = *(float *)&a2;
      dword_B46638 = v69;
      *((float *)&v69 + 1) = v25;
      dword_B4663C = HIDWORD(v69);
      v70 = 0.0;
      v71 = 0.0;
      v26 = v76;
      *(float *)&dword_B46640 = 0.0;
      *(float *)&a2 = v26;
      v27 = a2;
      v28 = v77;
      *(float *)&dword_B46644 = 0.0;
      v73 = v28;
      v29 = LODWORD(v73);
      v30 = v78;
      dword_B46648 = (int)v27;
      *(float *)&v74 = v30;
      v31 = v74;
      dword_B4664C = v29;
      v75 = 0.0;
      dword_B46650 = v31;
      *(float *)&dword_B46654 = 0.0;
    }
    else
    {
      v76 = flt_A8C690;
      *(float *)&dword_B46638 = v76;
      v77 = 0.0;
      v78 = 0.0;
      *(float *)&dword_B4663C = 0.0;
      v79 = 0.0;
      v32 = dword_B25AD0;
      *(float *)&dword_B46640 = 0.0;
      v33 = dword_B25AD4;
      *(float *)&dword_B46644 = 0.0;
      v34 = dword_B25AD8;
      dword_B46648 = v32;
      v35 = dword_B25ADC;
      dword_B4664C = v33;
      dword_B46650 = v34;
      dword_B46654 = v35;
    }
    v36 = *(_DWORD *)(v12 + 0x9C);
    if ( dword_B42D78 )
    {
      *(float *)&a2 = ((double (__cdecl *)(_DWORD, int))dword_B42D78)(0, 1);
      v14 = 0.0;
      v13 = 1.0;
    }
    else
    {
      *(float *)&a2 = 0.0;
    }
    v37 = dbl_A56E20;
    *(float *)&a2 = *(float *)&a2 / dbl_A2F938 * v37 * *(float *)(v36 + 0x30);
    v38 = *(float *)&a2;
    *((float *)this + 0x22) = *(float *)&a2;
    if ( v38 >= v37 )
    {
      *(float *)&a2 = v38;
      unknown_libname_14(v37, *(float *)&a2);
      *((float *)this + 0x22) = *(float *)&a2;
      v14 = 0.0;
      v13 = 1.0;
    }
    flt_B460BC = *((float *)this + 0x22);
    if ( (*(_DWORD *)(v12 + 0x1C) & 0x800) != 0 )
    {
      flt_B46090 = v13;
      flt_B46094 = v13;
    }
    else
    {
      flt_B46090 = v14;
      flt_B46094 = v14;
    }
    flt_B46098 = v13;
    v39 = *(_DWORD *)v12;
    a2 = *(NiRenderedTexture **)(v12 + 0xA4);
    (*(void (__thiscall **)(int))(v39 + 0x68))(v12);
    v67 = (*(_DWORD *)(v12 + 0x1C) & 0x400) != 0;
    v65 = (*(_DWORD *)(v12 + 0x1C) & 0x1000) != 0;
    v64 = (*(_DWORD *)(v12 + 0x1C) & 0x2000) != 0;
    if ( byte_B43074
      || !dword_B43108
      || (dword_B42F40 & 0x20) == 0
      || ShaderPackage < 2
      || (v69 = (__int64)flt_B44F04, v66 = 1, !(_DWORD)v69) )
    {
      v66 = 0;
    }
    sub_7E6A90((void **)this, (int)arg0, v12);
    if ( UseHDR )
      flt_B460E0 = flt_B42F44;
    v40 = 0;
    v41 = ShaderPackage < 2;
    LODWORD(v69) = 0;
    if ( !v41 )
    {
      v40 = 0x14;
      LODWORD(v69) = 2;
    }
    v42 = 0;
    v68 = 0;
    v80 = 0;
    arg0 = 0;
    v43 = *(_DWORD *)(dword_B42EB8 + 0xC);
    LOBYTE(v80) = 1;
    if ( v43 && *(_BYTE *)(*(_DWORD *)v43 + 0xF4) == 1 )
    {
      sub_76C890((NiD3DPass **)&v68, (int *)this + 0x21);
      v42 = v68;
      if ( v65 )
      {
        if ( v64 )
          v44 = *((NiD3DVertexShader **)this + 0x50);
        else
          v44 = *((NiD3DVertexShader **)this + 0x4E);
      }
      else if ( v64 )
      {
        v44 = *((NiD3DVertexShader **)this + 0x4F);
      }
      else
      {
        v44 = *((NiD3DVertexShader **)this + 0x4D);
      }
      sub_7AECB0((NiD3DPass *)v68, v44);
      sub_7AEC60(v42, *((NiD3DPixelShader **)this + dword_B430B0 + 0x53));
      if ( !v42[0xC] )
        v42[0xC] = (NiD3DPassVtbl *)sub_772DF0();
      sub_772CD0(v42[0xC], 0x98, 0x3F, 1u);
      sub_7AEC20(&arg0, (NiD3DTextureStage *)v42[9]->Destroy);
      sub_76C910(arg0, a2);
      sub_7AEC20(&arg0, (NiD3DTextureStage *)v42[9]->sub_75FBA0);
      InnerTexture = BSRenderedTexture::GetInnerTexture(*(BSRenderedTexture **)(**(_DWORD **)(dword_B42EB8 + 0xC) + 0x114));
      v46 = arg0;
      sub_76C910(arg0, InnerTexture);
LABEL_100:
      if ( LOWORD(dword_B42EAC) == 4 )
      {
        if ( !v42[0xC] )
          v42[0xC] = (NiD3DPassVtbl *)sub_772DF0();
        sub_772CD0(v42[0xC], 0x34, 1, 0);
        if ( !v42[0xC] )
          v42[0xC] = (NiD3DPassVtbl *)sub_772DF0();
        sub_772CD0(v42[0xC], 0x38, 8, 0);
        if ( !v42[0xC] )
          v42[0xC] = (NiD3DPassVtbl *)sub_772DF0();
        sub_772CD0(v42[0xC], 0x37, 7, 0);
        if ( !v42[0xC] )
          v42[0xC] = (NiD3DPassVtbl *)sub_772DF0();
        sub_772CD0(v42[0xC], 0x35, 1, 0);
        if ( !v42[0xC] )
          v42[0xC] = (NiD3DPassVtbl *)sub_772DF0();
        sub_772CD0(v42[0xC], 0x36, 1, 0);
      }
      else
      {
        if ( !v42[0xC] )
          v42[0xC] = (NiD3DPassVtbl *)sub_772DF0();
        sub_772CD0(v42[0xC], 0x34, 0, 0);
      }
      if ( ShaderPackage < 2 || !UseHDR )
      {
        v60 = *(_BYTE *)(*(_DWORD *)(a5 + 8) + 0x1A);
        if ( !v42[0xC] )
          v42[0xC] = (NiD3DPassVtbl *)sub_772DF0();
        sub_772CD0(v42[0xC], 0x18, v60, 0);
      }
      sub_76CE40((NiTArray_NiD3DPass *)this + 4, *((NiD3DPass **)this + 0xE), (NiD3DPass **)&v68);
      ++*((_DWORD *)this + 0xE);
      LOBYTE(v80) = 0;
      if ( v46 )
      {
        v61 = v46[7].Unk08-- == 1;
        if ( v61 )
          sub_772560(v46);
      }
      v61 = v42[0x18] == (NiD3DPassVtbl *)1;
      v42[0x18] = (NiD3DPassVtbl *)((char *)v42[0x18] + 0xFFFFFFFF);
      v80 = 0xFFFFFFFF;
      if ( v61 )
        sub_7604D0((NiD3DPass *)v42);
      return 0;
    }
    if ( !byte_B43344 || !(unsigned __int16)sub_7ED600((_DWORD *)v12) )
    {
      v47 = *((_DWORD *)this + 0x1F);
      if ( v47 )
      {
        v42 = *((NiD3DPassVtbl ***)this + 0x1F);
        ++*(_DWORD *)(v47 + 0x60);
        v68 = (NiD3DPassVtbl **)v47;
      }
      Destroy = (NiD3DTextureStage *)v42[9]->Destroy;
      if ( Destroy )
      {
        ++Destroy[7].Unk08;
        arg0 = Destroy;
      }
      sub_76C910(arg0, a2);
      if ( v66 )
      {
        sub_7AEC20(&arg0, (NiD3DTextureStage *)v42[9]->sub_75FBA0);
        sub_76C910(arg0, (NiRenderedTexture *)dword_B43108);
        sub_7AEC20(&arg0, (NiD3DTextureStage *)v42[9]->sub_75FD90);
        sub_76C910(arg0, CanopySadowMap);
      }
      if ( v67 )
      {
        if ( !v65 )
        {
          v50 = (NiD3DPass *)v42;
          if ( !v66 )
          {
            v49 = *((NiD3DVertexShader **)this + v40 + 0x26);
            goto LABEL_57;
          }
          v52 = *((NiD3DVertexShader **)this + v40 + 0x2E);
          goto LABEL_75;
        }
        if ( !v66 )
        {
          v49 = *((NiD3DVertexShader **)this + v40 + 0x28);
LABEL_56:
          v50 = (NiD3DPass *)v42;
LABEL_57:
          sub_7AECB0(v50, v49);
LABEL_58:
          v51 = *((NiD3DPixelShader **)this + (unsigned __int16)v69 + 0x4D);
LABEL_96:
          sub_7AEC60(v42, v51);
LABEL_97:
          if ( !v42[0xC] )
            v42[0xC] = (NiD3DPassVtbl *)sub_772DF0();
          sub_772CD0(v42[0xC], 0x98, 0, 0);
          v46 = arg0;
          goto LABEL_100;
        }
        v52 = *((NiD3DVertexShader **)this + v40 + 0x30);
      }
      else if ( v65 )
      {
        if ( !v64 )
        {
          v50 = (NiD3DPass *)v42;
          if ( !v66 )
          {
            v49 = *((NiD3DVertexShader **)this + v40 + 0x27);
            goto LABEL_57;
          }
          v52 = *((NiD3DVertexShader **)this + v40 + 0x2F);
          goto LABEL_75;
        }
        v52 = *((NiD3DVertexShader **)this + v40 + 0x36);
      }
      else if ( v64 )
      {
        v52 = *((NiD3DVertexShader **)this + v40 + 0x35);
      }
      else
      {
        if ( !v66 )
        {
          v49 = *((NiD3DVertexShader **)this + v40 + 0x25);
          goto LABEL_56;
        }
        v52 = *((NiD3DVertexShader **)this + v40 + 0x2D);
      }
      v50 = (NiD3DPass *)v42;
LABEL_75:
      sub_7AECB0(v50, v52);
      if ( !v66 || !(_WORD)v69 )
        goto LABEL_58;
      v53 = *((NiD3DPixelShader **)this + 0x51);
LABEL_128:
      sub_7AEC60(v42, v53);
      *(float *)&a2 = flt_B44EE8;
      v73 = flt_B44EEC;
      flt_B460F0 = *(float *)&a2;
      flt_B460F4 = v73;
      flt_B460F8 = flt_B2D860;
      flt_B460FC = flt_B44EF4;
      goto LABEL_97;
    }
    v54 = *((_DWORD *)this + 0x20);
    if ( v54 )
    {
      v42 = *((NiD3DPassVtbl ***)this + 0x20);
      ++*(_DWORD *)(v54 + 0x60);
      v68 = (NiD3DPassVtbl **)v54;
    }
    v55 = (NiD3DTextureStage *)v42[9]->Destroy;
    if ( v55 )
    {
      ++v55[7].Unk08;
      arg0 = v55;
    }
    sub_76C910(arg0, a2);
    sub_75FBA0 = (NiD3DTextureStage *)v42[9]->sub_75FBA0;
    if ( ShaderPackage < 2 )
    {
      sub_7AEC20(&arg0, sub_75FBA0);
      sub_76C910(arg0, (NiRenderedTexture *)dword_B43110);
      sub_7AEC20(&arg0, (NiD3DTextureStage *)v42[9]->sub_75FD90);
      sub_76C910(arg0, (NiRenderedTexture *)dword_B430D4);
      v56 = v66;
    }
    else
    {
      sub_7AEC20(&arg0, sub_75FBA0);
      sub_76C910(arg0, (NiRenderedTexture *)dword_B43110);
      v56 = v66;
      if ( v66 )
      {
        sub_7AEC20(&arg0, (NiD3DTextureStage *)v42[9]->sub_75FD90);
        sub_76C910(arg0, (NiRenderedTexture *)dword_B43108);
        sub_7AEC20(&arg0, (NiD3DTextureStage *)v42[9]->sub_75F9E0);
        sub_76C910(arg0, CanopySadowMap);
      }
    }
    if ( v67 )
    {
      if ( v65 )
      {
        v57 = (NiD3DPass *)v42;
        if ( !v56 )
        {
          v58 = *((NiD3DVertexShader **)this + v40 + 0x2C);
LABEL_94:
          sub_7AECB0(v57, v58);
          goto LABEL_95;
        }
        v59 = *((NiD3DVertexShader **)this + v40 + 0x34);
LABEL_125:
        sub_7AECB0(v57, v59);
        if ( v56 && (_WORD)v69 )
        {
          v53 = *((NiD3DPixelShader **)this + 0x52);
          goto LABEL_128;
        }
LABEL_95:
        v51 = *((NiD3DPixelShader **)this + (unsigned __int16)v69 + 0x4E);
        goto LABEL_96;
      }
      if ( !v56 )
      {
        v58 = *((NiD3DVertexShader **)this + v40 + 0x2A);
LABEL_93:
        v57 = (NiD3DPass *)v42;
        goto LABEL_94;
      }
      v59 = *((NiD3DVertexShader **)this + v40 + 0x32);
    }
    else if ( v65 )
    {
      if ( v64 )
      {
        v59 = *((NiD3DVertexShader **)this + v40 + 0x38);
      }
      else
      {
        if ( !v56 )
        {
          v58 = *((NiD3DVertexShader **)this + v40 + 0x2B);
          goto LABEL_93;
        }
        v59 = *((NiD3DVertexShader **)this + v40 + 0x33);
      }
    }
    else if ( v64 )
    {
      v59 = *((NiD3DVertexShader **)this + v40 + 0x37);
    }
    else
    {
      if ( !v56 )
      {
        v58 = *((NiD3DVertexShader **)this + v40 + 0x29);
        goto LABEL_93;
      }
      v59 = *((NiD3DVertexShader **)this + v40 + 0x31);
    }
    v57 = (NiD3DPass *)v42;
    goto LABEL_125;
  }
  return 0;
}
