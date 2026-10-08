// Oblivion Lighting30 per-geometry pass setup. It begins through vtable +0x80 by clearing all queued passes, CurrentPass, PassCount, and CurrentPassIndex. For SimpleShadow selectors 0x14E..0x151 it binds the admitted ShadowSceneLight R32F texture and constructs the receiver pass. It then resolves the selector to a NiD3DPass; a null result exits without inserting a pass or incrementing PassCount. Therefore stock 0x177..0x17A selectors cannot reuse stale pass state and produce a zero-pass geometry submission. Valid receivers use ZENABLE TRUE, LESSEQUAL, ZWRITE FALSE and DESTCOLOR/ZERO.
int __userpurge Lighting30Shader_SetupRenderPass@<eax>(
        NiTArray_NiD3DPass *this@<ecx>,
        double a2@<st0>,
        float value,
        int a4,
        int a5,
        float a6,
        int a7,
        int a8,
        int a9)
{
  int v10; // edi
  int v11; // esi
  BOOL v12; // eax
  int v13; // ebp
  int v14; // eax
  int v16; // esi
  float v17; // ecx
  float v18; // edx
  double v19; // st7
  double v20; // st6
  float v21; // edi
  bool v22; // zf
  float v23; // edx
  float v24; // eax
  float v25; // ecx
  double v26; // st7
  double v27; // st6
  float v28; // eax
  float v29; // edx
  double v30; // rt0
  int v31; // eax
  bool v32; // cl
  double y; // st6
  double z; // st6
  float v35; // edx
  float v36; // eax
  float v37; // ecx
  int v38; // eax
  unsigned __int16 v39; // ax
  int v40; // ecx
  int i; // eax
  int j; // ecx
  float v43; // ecx
  float v44; // edx
  float v45; // eax
  float v46; // edx
  float v47; // eax
  float v48; // ecx
  int v49; // ecx
  int v50; // eax
  bool v51; // cc
  int v52; // eax
  double v53; // rtt
  double v54; // st6
  double v55; // st7
  float v56; // eax
  NiD3DPass *v57; // eax
  NiD3DPass *v58; // esi
  int v59; // edi
  int v60; // ebp
  float *v61; // ecx
  double v62; // st7
  double v63; // st6
  double v64; // st5
  float v65; // eax
  double v66; // st6
  double v67; // st7
  float v68; // ecx
  float v69; // edx
  float v70; // eax
  float v71; // edx
  float v72; // eax
  float v73; // ecx
  float v74; // eax
  double v75; // st6
  float v76; // edx
  float v77; // eax
  float v78; // ecx
  float v79; // edx
  double v80; // rt0
  float v81; // edx
  float v82; // ecx
  float v83; // eax
  double v84; // rt1
  double v85; // st6
  double v86; // st7
  double v87; // rt2
  UInt32 Stage; // ebx
  int v89; // eax
  int v90; // edi
  int v91; // ebp
  NiTexture *Texture; // ebx
  int v93; // ebp
  UInt32 m_uiRefCount; // edi
  float v95; // edx
  float v96; // eax
  int v97; // edi
  int v98; // ebp
  char v99; // al
  NiD3DTextureStage *Unk08; // edi
  NiRenderedTexture *InnerTexture; // eax
  char v102; // al
  float v103; // eax
  unsigned int v104; // [esp-4h] [ebp-5Ch]
  BSShaderProperty *property; // [esp+18h] [ebp-40h]
  float v106; // [esp+1Ch] [ebp-3Ch]
  unsigned int variant; // [esp+20h] [ebp-38h]
  int v108; // [esp+24h] [ebp-34h]
  float v109; // [esp+28h] [ebp-30h]
  float v110; // [esp+28h] [ebp-30h]
  NiPoint3 v112; // [esp+30h] [ebp-28h] BYREF
  float x; // [esp+3Ch] [ebp-1Ch]
  float v114; // [esp+40h] [ebp-18h]
  float v115; // [esp+44h] [ebp-14h]
  float v116; // [esp+48h] [ebp-10h]
  unsigned int v117; // [esp+54h] [ebp-4h]

  (*((void (__usercall **)(NiTArray_NiD3DPass *@<ecx>, double@<st0>))this->_vtbl + 0x20))(this, a2);// Lighting30 vtable +0x80 = NiD3DShader_ResetPassQueue. Releases prior Passes and CurrentPass, then zeros PassCount/CurrentPassIndex before resolving this geometry's selector. /*0x7ff4d5*/
  v10 = LODWORD(a6); /*0x7ff4d7*/
  v11 = *(_DWORD *)(LODWORD(a6) + 0x18); /*0x7ff4db*/
  if ( v11 ) /*0x7ff4e0*/
    v12 = (*(int (__thiscall **)(_DWORD))(*(_DWORD *)v11 + 0x54))(*(_DWORD *)(LODWORD(a6) + 0x18)) == 0xA; /*0x7ff4f7*/
  else
    v12 = 0; /*0x7ff4e2*/
  v13 = LODWORD(unk_B42E90); /*0x7ff4f9*/
  v14 = v12 ? v11 : 0;
  property = (BSShaderProperty *)v14; /*0x7ff50d*/
  v106 = unk_B42E90; /*0x7ff511*/
  if ( *(_WORD *)&OB_RendererGlobalState_010201A0[0x13] == 5 ) /*0x7ff515*/
    return Lighting30Shader_BuildMode5ShadowPass(this, a2, *(float *)&v14, *(float *)&v13, v10); /*0x7ff523*/
  v16 = *(_DWORD *)(v10 + 0x10); /*0x7ff528*/
  v17 = *(float *)(v16 + 0x44); /*0x7ff52e*/
  v18 = *(float *)(v16 + 0x48); /*0x7ff531*/
  v112.x = *(float *)(v16 + 0x40); /*0x7ff535*/
  v112.y = v17; /*0x7ff53e*/
  v108 = v16; /*0x7ff545*/
  v112.z = v18; /*0x7ff549*/
  Lighting30Shader_UpdateSpecialTimeEmission(v14, v16, v13); /*0x7ff54d*/
  v19 = 0.0; /*0x7ff560*/
  v20 = 1.0; /*0x7ff564*/
  if ( NiPoint3__NotEqual(&v112, &stru_B3FA90) ) /*0x7ff55b*/
  {
    if ( OB_RendererGlobalState_010201A0[0x1D7] ) /*0x7ff56c*/
    {
      *(float *)&variant = sub_507140(); /*0x7ff57e*/
      v112.x = *(float *)&variant * v112.x; /*0x7ff58c*/
      v112.y = *(float *)&variant * v112.y; /*0x7ff596*/
      v112.z = *(float *)&variant * v112.z; /*0x7ff59e*/
    }
    v21 = *(float *)&property; /*0x7ff5a2*/
    if ( (*((int (__thiscall **)(BSShaderProperty *, _DWORD))property->vtbl + 0x24))(property, 0) ) /*0x7ff5b2*/
    {
      v26 = 1.0; /*0x7ff687*/
      if ( !OB_RendererGlobalState_010201A0[0x1D7] ) /*0x7ff680*/
      {
        if ( v112.x >= 1.0 ) /*0x7ff694*/
          v112.x = 1.0; /*0x7ff696*/
        if ( v112.y >= 1.0 ) /*0x7ff6a3*/
          v112.y = 1.0; /*0x7ff6a5*/
        if ( v112.z >= 1.0 ) /*0x7ff6b2*/
          v112.z = 1.0; /*0x7ff6b4*/
      }
      x = v112.x; /*0x7ff6bc*/
      y = v112.y; /*0x7ff6c4*/
      OB_ShaderConstantStorage_010201A0[0x469] = v112.x; /*0x7ff6c8*/
      v114 = y; /*0x7ff6cd*/
      z = v112.z; /*0x7ff6d5*/
      OB_ShaderConstantStorage_010201A0[0x46A] = v114; /*0x7ff6d9*/
      v115 = z; /*0x7ff6df*/
      v27 = 0.0; /*0x7ff6e7*/
      OB_ShaderConstantStorage_010201A0[0x46B] = v115; /*0x7ff6e9*/
      v116 = 0.0; /*0x7ff6ef*/
      OB_ShaderConstantStorage_010201A0[0x46C] = 0.0; /*0x7ff6f7*/
    }
    else
    {
      v22 = OB_RendererGlobalState_010201A0[0x1D7] == 0; /*0x7ff5bc*/
      v23 = OB_ShaderConstantStorage_010201A0[0x45A]; /*0x7ff5cd*/
      v24 = OB_ShaderConstantStorage_010201A0[0x45B]; /*0x7ff5d3*/
      x = OB_ShaderConstantStorage_010201A0[0x459]; /*0x7ff5d8*/
      v25 = OB_ShaderConstantStorage_010201A0[0x45C]; /*0x7ff5e0*/
      x = v112.x + x; /*0x7ff5ea*/
      v114 = v112.y + v23; /*0x7ff5fa*/
      v115 = v112.z + v24; /*0x7ff606*/
      v26 = 1.0; /*0x7ff60a*/
      if ( v22 ) /*0x7ff60c*/
      {
        if ( x >= 1.0 ) /*0x7ff617*/
          x = 1.0; /*0x7ff619*/
        if ( v114 >= 1.0 ) /*0x7ff626*/
          v114 = 1.0; /*0x7ff628*/
        if ( v115 >= 1.0 ) /*0x7ff635*/
          v115 = 1.0; /*0x7ff637*/
      }
      v27 = 0.0; /*0x7ff63f*/
      v28 = v114; /*0x7ff641*/
      OB_ShaderConstantStorage_010201A0[0x459] = x; /*0x7ff645*/
      v29 = v115; /*0x7ff64b*/
      OB_ShaderConstantStorage_010201A0[0x45A] = v28; /*0x7ff64f*/
      OB_ShaderConstantStorage_010201A0[0x45B] = v29; /*0x7ff654*/
      OB_ShaderConstantStorage_010201A0[0x45C] = v25; /*0x7ff65a*/
    }
    v30 = v27; /*0x7ff660*/
    v20 = v26; /*0x7ff660*/
    v19 = v30; /*0x7ff660*/
  }
  else
  {
    v21 = *(float *)&property; /*0x7ff701*/
  }
  v31 = *(_DWORD *)&OB_RendererGlobalState_010201A0[0xA7]; /*0x7ff662*/
  v32 = (*(_DWORD *)&OB_RendererGlobalState_010201A0[0xA7] & 8) != 0 && (*(_BYTE *)(LODWORD(v21) + 0x1C) & 1) != 0; /*0x7ff679*/
  LOBYTE(variant) = v32; /*0x7ff70e*/
  if ( (v31 & 1) != 0 ) /*0x7ff712*/
    OB_ShaderConstantStorage_010201A0[0x46D] = v20; /*0x7ff714*/
  else
    OB_ShaderConstantStorage_010201A0[0x46D] = v19; /*0x7ff71e*/
  if ( (v31 & 2) != 0 ) /*0x7ff728*/
    OB_ShaderConstantStorage_010201A0[0x46E] = v20; /*0x7ff72a*/
  else
    OB_ShaderConstantStorage_010201A0[0x46E] = v19; /*0x7ff734*/
  if ( (v31 & 4) != 0 ) /*0x7ff73e*/
    OB_ShaderConstantStorage_010201A0[0x46F] = v20; /*0x7ff740*/
  else
    OB_ShaderConstantStorage_010201A0[0x46F] = v19; /*0x7ff74a*/
  if ( v32 ) /*0x7ff754*/
    OB_ShaderConstantStorage_010201A0[0x470] = v20; /*0x7ff756*/
  else
    OB_ShaderConstantStorage_010201A0[0x470] = v19; /*0x7ff760*/
  if ( v13 == 0x14E || v13 == 0x14F ) /*0x7ff776*/
  {
    if ( (*(_DWORD *)(LODWORD(v21) + 0x1C) & 0x800) != 0 ) /*0x7ff77f*/
      OB_ShaderConstantStorage_010201A0[0x470] = v19; /*0x7ff783*/
    else
      OB_ShaderConstantStorage_010201A0[0x470] = v20; /*0x7ff7e9*/
  }
  v35 = *(float *)&dword_B25AD4; /*0x7ff797*/
  v36 = *(float *)&dword_B25AD8; /*0x7ff79d*/
  LODWORD(OB_ShaderConstantStorage_010201A0[0x3F5]) = dword_B25AD0; /*0x7ff7a2*/
  v37 = *(float *)&dword_B25ADC; /*0x7ff7a8*/
  OB_ShaderConstantStorage_010201A0[0x3F6] = v35; /*0x7ff7ae*/
  OB_ShaderConstantStorage_010201A0[0x3F7] = v36; /*0x7ff7b4*/
  OB_ShaderConstantStorage_010201A0[0x3F8] = v37; /*0x7ff7b9*/
  if ( v13 >= 0x147 ) /*0x7ff7bf*/
  {
    if ( (unsigned int)(v13 - 0x152) > 1 ) /*0x7ff8b9*/
    {
      if ( v13 == 0x14D ) /*0x7ff8fa*/
      {
        if ( !(unsigned __int16)OB_BSShaderProperty_CountPassListEntriesWithMarker_010201A0((void *)LODWORD(v21)) ) /*0x7ff906*/
        {
          if ( unk_B42CE3 ) /*0x7ff910*/
          {
            x = kHeadBodyNormalMatchRadius; /*0x7ff91e*/
            v114 = x; /*0x7ff926*/
            v43 = x; /*0x7ff92a*/
            v115 = x; /*0x7ff92e*/
            v44 = x; /*0x7ff932*/
            OB_ShaderConstantStorage_010201A0[0x47D] = x; /*0x7ff938*/
            v116 = 1.0; /*0x7ff93d*/
            OB_ShaderConstantStorage_010201A0[0x47E] = v43; /*0x7ff941*/
            v45 = v116; /*0x7ff947*/
            OB_ShaderConstantStorage_010201A0[0x47F] = v44; /*0x7ff94b*/
            OB_ShaderConstantStorage_010201A0[0x480] = v45; /*0x7ff951*/
          }
          else
          {
            v46 = OB_ShaderConstantStorage_010201A0[0x45A]; /*0x7ff95e*/
            v47 = OB_ShaderConstantStorage_010201A0[0x45B]; /*0x7ff964*/
            OB_ShaderConstantStorage_010201A0[0x47D] = OB_ShaderConstantStorage_010201A0[0x459]; /*0x7ff969*/
            v48 = OB_ShaderConstantStorage_010201A0[0x45C]; /*0x7ff96f*/
            OB_ShaderConstantStorage_010201A0[0x47E] = v46; /*0x7ff975*/
            OB_ShaderConstantStorage_010201A0[0x47F] = v47; /*0x7ff97b*/
            OB_ShaderConstantStorage_010201A0[0x480] = v48; /*0x7ff980*/
          }
        }
        *(_DWORD *)(*((_DWORD *)this + 0x27) + 0x20) = 0xA; /*0x7ff98c*/
        v49 = dword_B2DCFC; /*0x7ff993*/
        v50 = 1; /*0x7ff999*/
        v51 = dword_B2DCFC <= 1; /*0x7ff99e*/
        BYTE1(OB_ShaderConstantStorage_010201A0[0x2C9]) = 1; /*0x7ff9a0*/
        BYTE2(OB_ShaderConstantStorage_010201A0[0x2C9]) = 0; /*0x7ff9a7*/
        if ( !v51 ) /*0x7ff9ae*/
        {
          do /*0x7ff9c5*/
          {
            *(_BYTE *)(2 * v50 + 0xB4693A) = 0; /*0x7ff9b0*/
            *(_BYTE *)(2 * v50++ + 0xB46939) = 0; /*0x7ff9b8*/
          }
          while ( v50 < v49 ); /*0x7ff9c5*/
        }
        *(_BYTE *)(LODWORD(OB_ShaderConstantStorage_010201A0[0x381]) + 8) = 0; /*0x7ff9cd*/
      }
      else
      {
        v52 = *((_DWORD *)this + 0x27); /*0x7ff9dc*/
        if ( (unsigned int)(v13 - 0x14E) > 3 ) /*0x7ff9e2*/
        {
          *(_DWORD *)(v52 + 0x20) = 9; /*0x7ff9f5*/
          _memset((int)&OB_ShaderConstantStorage_010201A0[0x2C9] + 1, 0, 2 * dword_B2DCFC); /*0x7ffa11*/
          v55 = 0.0; /*0x7ffa16*/
          OB_ShaderConstantStorage_010201A0[0x471] = 0.0; /*0x7ffa18*/
        }
        else
        {
          v53 = v20; /*0x7ff9e4*/
          v54 = v19; /*0x7ff9e4*/
          v55 = v53; /*0x7ff9e4*/
          *(_DWORD *)(v52 + 0x20) = 0xB; /*0x7ff9e6*/
          OB_ShaderConstantStorage_010201A0[0x471] = v54; /*0x7ff9ed*/
        }
        v56 = OB_ShaderConstantStorage_010201A0[0x381]; /*0x7ffa21*/
        OB_ShaderConstantStorage_010201A0[0x472] = v55; /*0x7ffa26*/
        *(_BYTE *)(LODWORD(v56) + 8) = 0; /*0x7ffa2c*/
      }
    }
    else
    {
      *(_BYTE *)(LODWORD(OB_ShaderConstantStorage_010201A0[0x381]) + 8) = 1; /*0x7ff8c3*/
      *(_BYTE *)(LODWORD(OB_ShaderConstantStorage_010201A0[0x380]) + 8) = 1; /*0x7ff8cf*/
      *(float *)((char *)&OB_ShaderConstantStorage_010201A0[0x2C9] + 1) = 2.3694278e-38; /*0x7ff8d8*/
      *(float *)((char *)&OB_ShaderConstantStorage_010201A0[0x2CA] + 1) = 2.3694278e-38; /*0x7ff8dd*/
      *(_DWORD *)(*((_DWORD *)this + 0x27) + 0x20) = 0x11; /*0x7ff8e8*/
    }
  }
  else
  {
    LOBYTE(v38) = *(_BYTE *)(*(_DWORD *)&OB_RendererGlobalState_010201A0[0x1F] + 8); /*0x7ff7cb*/
    if ( (_BYTE)v38 ) /*0x7ff7d0*/
    {
      LOWORD(v38) = (unsigned __int8)v38; /*0x7ff7d8*/
      if ( dword_B2DCFC < (unsigned __int8)v38 ) /*0x7ff7dd*/
        v38 = dword_B2DCFC; /*0x7ff7df*/
      v39 = v38 - 1; /*0x7ff7e4*/
    }
    else
    {
      v39 = 0; /*0x7ff7f1*/
    }
    OB_ShaderConstantStorage_010201A0[0x471] = v20; /*0x7ff7f6*/
    OB_ShaderConstantStorage_010201A0[0x472] = (float)v39; /*0x7ff808*/
    OB_ShaderConstantStorage_010201A0[0x473] = *(float *)(v16 + 0x4C); /*0x7ff811*/
    *(_DWORD *)(*((_DWORD *)this + 0x27) + 0x20) = 2 * v39 + 0xB; /*0x7ff81d*/
    if ( *(_DWORD *)(*(_DWORD *)(LODWORD(value) + 0xB4) + 0x24) ) /*0x7ff82a*/
      v19 = v20; /*0x7ff835*/
    v40 = v39 + 1; /*0x7ff83b*/
    OB_ShaderConstantStorage_010201A0[0x474] = v19; /*0x7ff83e*/
    for ( i = 0; i < v40; ++i ) /*0x7ff848*/
    {
      *(_BYTE *)(2 * i + 0xB4693A) = 1; /*0x7ff850*/
      *(_BYTE *)(2 * i + 0xB46939) = 1; /*0x7ff858*/
    }
    for ( j = dword_B2DCFC; i < j; ++i ) /*0x7ff86f*/
    {
      *(_BYTE *)(2 * i + 0xB4693A) = 0; /*0x7ff880*/
      *(_BYTE *)(2 * i + 0xB46939) = 0; /*0x7ff888*/
    }
    *(_BYTE *)(LODWORD(OB_ShaderConstantStorage_010201A0[0x381]) + 8) = 0; /*0x7ff89d*/
    *(_BYTE *)(LODWORD(OB_ShaderConstantStorage_010201A0[0x380]) + 8) = 0; /*0x7ff8a7*/
  }
  (*(void (__thiscall **)(_DWORD))(**((_DWORD **)this + 0xC) + 0x48))(*((_DWORD *)this + 0xC)); /*0x7ffa38*/
  (*(void (__thiscall **)(_DWORD))(**((_DWORD **)this + 0xB) + 0x48))(*((_DWORD *)this + 0xB)); /*0x7ffa42*/
  v57 = Lighting30Shader_ResolveSelectorStages((NiD3DShader *)this, v13, (BSShaderProperty *)LODWORD(v21), variant);// Resolve selector to a concrete pooled NiD3DPass. Only selectors through 0x15F are accepted; 0x177..0x17A return null. /*0x7ffa4d*/
  v58 = v57; /*0x7ffa52*/
  if ( v57 )                                    // Null resolved pass branches directly to the setup exit. No pass-array insertion and no PassCount increment occur. /*0x7ffa56*/
  {
    if ( (unsigned int)(v13 - 0x15E) <= 1 ) /*0x7ffa65*/
      sub_7FEE40((NiGeometry *)LODWORD(value), v21, (int)v57); /*0x7ffa70*/
    v22 = (*(_BYTE *)(LODWORD(v21) + 0x1C) & 2) == 0; /*0x7ffa75*/
    v59 = *((_DWORD *)this + 9); /*0x7ffa7e*/
    if ( v22 ) /*0x7ffa81*/
      v60 = *((_DWORD *)this + 0x23); /*0x7ffa8b*/
    else
      v60 = *((_DWORD *)this + 0x24); /*0x7ffa83*/
    if ( v59 != v60 ) /*0x7ffa93*/
    {
      if ( v59 ) /*0x7ffa97*/
      {
        if ( !InterlockedDecrement((volatile LONG *)(v59 + 4)) ) /*0x7ffa9d*/
          (**(void (__thiscall ***)(int, int))v59)(v59, 1); /*0x7ffaaf*/
      }
      *((_DWORD *)this + 9) = v60; /*0x7ffab3*/
      if ( v60 ) /*0x7ffab6*/
        InterlockedIncrement((volatile LONG *)(v60 + 4)); /*0x7ffabc*/
    }
    if ( HIBYTE(OB_ShaderConstantStorage_010201A0[0x2D7]) ) /*0x7ffac2*/
    {
      v61 = *(float **)(LODWORD(a6) + 0xC); /*0x7ffad3*/
      if ( !v61 ) /*0x7ffad8*/
      {
        x = flt_A93350; /*0x7ffc31*/
        OB_ShaderConstantStorage_010201A0[0x3E9] = x; /*0x7ffc3b*/
        v114 = 0.0; /*0x7ffc41*/
        v115 = 1.0; /*0x7ffc4b*/
        OB_ShaderConstantStorage_010201A0[0x3EA] = 0.0; /*0x7ffc4f*/
        v76 = *(float *)&dword_B25AD0; /*0x7ffc55*/
        v66 = 0.0; /*0x7ffc5b*/
        v67 = 1.0; /*0x7ffc5b*/
        v116 = 0.0; /*0x7ffc61*/
        OB_ShaderConstantStorage_010201A0[0x3EB] = v115; /*0x7ffc65*/
        v77 = *(float *)&dword_B25AD4; /*0x7ffc6e*/
        OB_ShaderConstantStorage_010201A0[0x3EC] = v116; /*0x7ffc73*/
        v78 = *(float *)&dword_B25AD8; /*0x7ffc79*/
        OB_ShaderConstantStorage_010201A0[0x3ED] = v76; /*0x7ffc7f*/
        v79 = *(float *)&dword_B25ADC; /*0x7ffc85*/
        OB_ShaderConstantStorage_010201A0[0x3EE] = v77; /*0x7ffc8b*/
        OB_ShaderConstantStorage_010201A0[0x3EF] = v78; /*0x7ffc90*/
        OB_ShaderConstantStorage_010201A0[0x3F0] = v79; /*0x7ffc96*/
        goto LABEL_97; /*0x7ffc9c*/
      }
      v109 = v61[0xB]; /*0x7ffae1*/
      a6 = v61[0xC]; /*0x7ffae8*/
      v62 = 0.0; /*0x7ffaec*/
      v63 = a6; /*0x7ffaf8*/
      v64 = v109; /*0x7ffafd*/
      if ( a6 == 0.0 && 0.0 == v64 ) /*0x7ffb10*/
      {
        x = flt_A93350; /*0x7ffb1c*/
        OB_ShaderConstantStorage_010201A0[0x3E9] = x; /*0x7ffb24*/
        v114 = 0.0; /*0x7ffb2a*/
        OB_ShaderConstantStorage_010201A0[0x3EA] = 0.0; /*0x7ffb34*/
        v65 = *(float *)&dword_B25AD0; /*0x7ffb39*/
        v115 = 1.0; /*0x7ffb3e*/
        v66 = 0.0; /*0x7ffb46*/
        v67 = 1.0; /*0x7ffb46*/
        v116 = 0.0; /*0x7ffb48*/
        OB_ShaderConstantStorage_010201A0[0x3EB] = 1.0; /*0x7ffb4c*/
        v68 = *(float *)&dword_B25AD4; /*0x7ffb56*/
        OB_ShaderConstantStorage_010201A0[0x3EC] = v116; /*0x7ffb5c*/
        v69 = *(float *)&dword_B25AD8; /*0x7ffb62*/
        OB_ShaderConstantStorage_010201A0[0x3ED] = v65; /*0x7ffb68*/
        v70 = *(float *)&dword_B25ADC; /*0x7ffb6d*/
        OB_ShaderConstantStorage_010201A0[0x3EE] = v68; /*0x7ffb72*/
        OB_ShaderConstantStorage_010201A0[0x3EF] = v69; /*0x7ffb78*/
        OB_ShaderConstantStorage_010201A0[0x3F0] = v70; /*0x7ffb7e*/
        goto LABEL_97; /*0x7ffb83*/
      }
      v71 = v61[8]; /*0x7ffb88*/
      v72 = v61[9]; /*0x7ffb8d*/
      v73 = v61[0xA]; /*0x7ffb90*/
      a6 = v63 - v64; /*0x7ffb93*/
      v112.x = v71; /*0x7ffb97*/
      v112.y = v72; /*0x7ffb9b*/
      x = v63; /*0x7ffb9f*/
      v112.z = v73; /*0x7ffbab*/
      v74 = a6; /*0x7ffbb3*/
      OB_ShaderConstantStorage_010201A0[0x3E9] = x; /*0x7ffbb9*/
      v115 = 1.0; /*0x7ffbbf*/
      OB_ShaderConstantStorage_010201A0[0x3EA] = v74; /*0x7ffbc3*/
      v116 = 0.0; /*0x7ffbce*/
      OB_ShaderConstantStorage_010201A0[0x3EB] = v115; /*0x7ffbd2*/
      x = v112.x; /*0x7ffbe0*/
      OB_ShaderConstantStorage_010201A0[0x3EC] = v116; /*0x7ffbe4*/
      v114 = v112.y; /*0x7ffbf2*/
      OB_ShaderConstantStorage_010201A0[0x3ED] = x; /*0x7ffbf6*/
      v115 = v112.z; /*0x7ffc03*/
      OB_ShaderConstantStorage_010201A0[0x3EE] = v114; /*0x7ffc07*/
      v75 = 1.0; /*0x7ffc11*/
      v116 = 1.0; /*0x7ffc13*/
      OB_ShaderConstantStorage_010201A0[0x3EF] = v115; /*0x7ffc17*/
      OB_ShaderConstantStorage_010201A0[0x3F0] = v116; /*0x7ffc21*/
    }
    else
    {
      v62 = 0.0; /*0x7ffc9e*/
      v75 = 1.0; /*0x7ffca0*/
    }
    v80 = v75; /*0x7ffca2*/
    v66 = v62; /*0x7ffca2*/
    v67 = v80; /*0x7ffca2*/
LABEL_97:
    v22 = unk_B42CE3 == 0; /*0x7ffca4*/
    v81 = *(float *)&dword_B25AE8; /*0x7ffcb0*/
    v82 = *(float *)&dword_B25AE4; /*0x7ffcb6*/
    LODWORD(OB_ShaderConstantStorage_010201A0[0x465]) = dword_B25AE0; /*0x7ffcbc*/
    v83 = *(float *)&dword_B25AEC; /*0x7ffcc1*/
    OB_ShaderConstantStorage_010201A0[0x467] = v81; /*0x7ffcc6*/
    OB_ShaderConstantStorage_010201A0[0x466] = v82; /*0x7ffcd0*/
    OB_ShaderConstantStorage_010201A0[0x468] = v83; /*0x7ffcd6*/
    if ( v22 && (unsigned int)(LODWORD(v106) - 0x147) <= 6 ) /*0x7ffce6*/
    {
      a6 = *(float *)(v108 + 0x50); /*0x7ffcef*/
      v84 = v66; /*0x7ffcf3*/
      v85 = v67; /*0x7ffcf3*/
      v86 = v84; /*0x7ffcf3*/
      if ( v85 <= a6 ) /*0x7ffcfe*/
      {
        OB_ShaderConstantStorage_010201A0[0x465] = *(float *)&property[1].member.unk38.vtlb; /*0x7ffd27*/
      }
      else
      {
        a6 = *(float *)(v108 + 0x50); /*0x7ffd07*/
        OB_ShaderConstantStorage_010201A0[0x465] = *(float *)&property[1].member.unk38.vtlb * a6; /*0x7ffd15*/
      }
    }
    else
    {
      a6 = *(float *)(v108 + 0x50); /*0x7ffd36*/
      v87 = v66; /*0x7ffd3a*/
      v85 = v67; /*0x7ffd3a*/
      v86 = v87; /*0x7ffd3a*/
      if ( v85 <= a6 ) /*0x7ffd45*/
        OB_ShaderConstantStorage_010201A0[0x465] = v85; /*0x7ffd52*/
      else
        OB_ShaderConstantStorage_010201A0[0x465] = *(float *)(v108 + 0x50); /*0x7ffd4a*/
    }
    if ( (unsigned int)(LODWORD(v106) - 0x147) > 0x18 || (unsigned int)(LODWORD(v106) - 0x14E) <= 3 ) /*0x7ffd6c*/
    {
      Stage = v58->Stages.data->Stage; /*0x7ffd77*/
      v89 = (*((int (__thiscall **)(BSShaderProperty *, _DWORD))property->vtbl + 0x22))(property, 0); /*0x7ffd89*/
      v90 = *(_DWORD *)(Stage + 4); /*0x7ffd8b*/
      v91 = v89; /*0x7ffd8e*/
      if ( v90 != v89 ) /*0x7ffd92*/
      {
        if ( v90 ) /*0x7ffd96*/
        {
          if ( !InterlockedDecrement((volatile LONG *)(v90 + 4)) ) /*0x7ffd9c*/
            (**(void (__thiscall ***)(int, int))v90)(v90, 1); /*0x7ffdb2*/
        }
        *(_DWORD *)(Stage + 4) = v91; /*0x7ffdb6*/
        if ( v91 ) /*0x7ffdb9*/
          InterlockedIncrement((volatile LONG *)(v91 + 4)); /*0x7ffdbf*/
      }
      Texture = v58->Stages.data->Texture; /*0x7ffdce*/
      if ( (*((int (__thiscall **)(BSShaderProperty *, _DWORD))property->vtbl + 0x23))(property, 0) ) /*0x7ffddb*/
        v93 = (*((int (__thiscall **)(BSShaderProperty *, _DWORD))property->vtbl + 0x23))(property, 0); /*0x7ffdef*/
      else
        v93 = LODWORD(flt_B430DC[0]); /*0x7ffdf3*/
      m_uiRefCount = Texture->members.super.super.m_uiRefCount; /*0x7ffdf9*/
      if ( m_uiRefCount != v93 ) /*0x7ffdfe*/
      {
        if ( m_uiRefCount ) /*0x7ffe02*/
        {
          if ( !InterlockedDecrement((volatile LONG *)(m_uiRefCount + 4)) ) /*0x7ffe08*/
            (**(void (__thiscall ***)(UInt32, int))m_uiRefCount)(m_uiRefCount, 1); /*0x7ffe1e*/
        }
        Texture->members.super.super.m_uiRefCount = v93; /*0x7ffe22*/
        if ( v93 ) /*0x7ffe25*/
          InterlockedIncrement((volatile LONG *)(v93 + 4)); /*0x7ffe2b*/
      }
      v95 = *(float *)&dword_B25AD4; /*0x7ffe37*/
      v96 = *(float *)&dword_B25AD8; /*0x7ffe3d*/
      LODWORD(OB_ShaderConstantStorage_010201A0[0x475]) = dword_B25AD0; /*0x7ffe42*/
      LODWORD(OB_ShaderConstantStorage_010201A0[0x478]) = dword_B25ADC; /*0x7ffe4e*/
      OB_ShaderConstantStorage_010201A0[0x476] = v95; /*0x7ffe58*/
      OB_ShaderConstantStorage_010201A0[0x477] = v96; /*0x7ffe5e*/
      if ( BSShaderProperty_GetShadowLightCount(property) /*0x7ffeb1*/
        && (unsigned int)(LODWORD(unk_B42E90) - 0x14E) <= 3
        && ((v97 = *(_DWORD *)&OB_RendererGlobalState_010201A0[0x1F],
             v98 = **(_DWORD **)(*(_DWORD *)&OB_RendererGlobalState_010201A0[0x1F] + 0xC),
             (v99 = *(_BYTE *)(v98 + 0xF4)) != 0)
         && *(_DWORD *)(v98 + 0x114)
         || *(_BYTE *)(v98 + 0x120))
        && *(_BYTE *)(v97 + 8) )
      {
        if ( v99 ) /*0x7ffebd*/
        {
          if ( BSShaderManager_IsShadowMappingReady() ) /*0x7ffebf*/
          {
            OB_ShaderConstantStorage_010201A0[0x476] = 1.0; /*0x7ffeca*/
            Unk08 = (NiD3DTextureStage *)v58->Stages.data->Unk08; /*0x7ffed3*/
            InnerTexture = BSRenderedTexture::GetInnerTexture(*(BSRenderedTexture **)(v98 + 0x114)); /*0x7ffedc*/
            NiD3DTextureStage_SetTexture(Unk08, InnerTexture); /*0x7ffee4*/
            NiD3DTextureStage_ApplyFilterPreset(Unk08, 1u); /*0x7ffeed*/
            NiD3DTextureStage_ApplyAddressModePreset(Unk08, 0); /*0x7ffef6*/
            v97 = *(_DWORD *)&OB_RendererGlobalState_010201A0[0x1F]; /*0x7ffefb*/
          }
        }
        v102 = *(_BYTE *)(v98 + 0x120); /*0x7fff06*/
        a6 = *(float *)(**(_DWORD **)(v97 + 0xC) + 0x128); /*0x7fff14*/
        if ( v102 ) /*0x7fff18*/
        {
          v86 = 0.0; /*0x7fff1a*/
          OB_ShaderConstantStorage_010201A0[0x478] = 0.0; /*0x7fff1c*/
          v85 = 1.0; /*0x7fff22*/
        }
        else
        {
          OB_ShaderConstantStorage_010201A0[0x478] = 1.0; /*0x7fff32*/
          v85 = 1.0; /*0x7fff3a*/
          v86 = 0.0; /*0x7fff3a*/
        }
        OB_ShaderConstantStorage_010201A0[0x477] = a6; /*0x7fff28*/
      }
      else
      {
        v86 = 0.0; /*0x7fff48*/
        v85 = 1.0; /*0x7fff4a*/
      }
    }
    if ( LODWORD(v106) == 0x14D ) /*0x7fff56*/
    {
      v103 = value; /*0x7fff58*/
      value = *(float *)(LODWORD(value) + 0x20) - MEMORY[0xB3F92C]; /*0x7fff65*/
      a6 = *(float *)(LODWORD(v103) + 0x24) - unk_B3F930; /*0x7fff72*/
      v110 = *(float *)(LODWORD(v103) + 0x28) - unk_B3F934; /*0x7fff7f*/
      OB_ShaderConstantStorage_010201A0[0x3FD] = value; /*0x7fff87*/
      OB_ShaderConstantStorage_010201A0[0x3FE] = a6; /*0x7fff91*/
      OB_ShaderConstantStorage_010201A0[0x3FF] = v110; /*0x7fff9b*/
    }
    if ( (property->member.passInfo & 0x80000) != 0 ) /*0x7fffac*/
    {
      v22 = v58->RenderStateGroup == 0; /*0x7fffae*/
      value = v85; /*0x7fffb4*/
      if ( v22 ) /*0x7fffb8*/
        v58->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x7fffbf*/
      NiD3DRenderStateGroup_SetRenderState((_DWORD *)v58->RenderStateGroup, 0xAF, SLODWORD(value), 0); /*0x7fffd1*/
      v22 = v58->RenderStateGroup == 0; /*0x7fffdc*/
      value = Lighting30CasterDepthBias_Positive0005; /*0x7fffe0*/
      if ( v22 ) /*0x7fffe4*/
        v58->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x7fffeb*/
    }
    else
    {
      value = v86; /*0x800005*/
      if ( (unsigned int)(LODWORD(v106) - 0x14E) > 3 ) /*0x800009*/
      {
        if ( !v58->RenderStateGroup ) /*0x80004e*/
          v58->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x800059*/
        NiD3DRenderStateGroup_SetRenderState((_DWORD *)v58->RenderStateGroup, 0xAF, SLODWORD(value), 0); /*0x80006b*/
        v22 = v58->RenderStateGroup == 0; /*0x800072*/
        value = 0.0; /*0x800076*/
        if ( v22 ) /*0x80007a*/
          v58->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x800081*/
      }
      else
      {
        if ( !v58->RenderStateGroup ) /*0x80000b*/
          v58->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x800016*/
        NiD3DRenderStateGroup_SetRenderState((_DWORD *)v58->RenderStateGroup, 0xAF, SLODWORD(value), 0); /*0x800028*/
        v22 = v58->RenderStateGroup == 0; /*0x800033*/
        value = flt_A906F4; /*0x800037*/
        if ( v22 ) /*0x80003b*/
          v58->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x800042*/
      }
    }
    NiD3DRenderStateGroup_SetRenderState((_DWORD *)v58->RenderStateGroup, 0xC3, SLODWORD(value), 0); /*0x800093*/
    ++v58->RefCount; /*0x80009d*/
    value = *(float *)&v58; /*0x8000a0*/
    v104 = *((_DWORD *)this + 0xE); /*0x8000b0*/
    v117 = 0; /*0x8000b4*/
    NiTArray_NiD3DPass_SetAt(this + 4, v104, (NiD3DPass **)&value);// Valid selector only: insert the resolved NiD3DPass into the shader pass array. /*0x8000bc*/
    v22 = v58->RefCount-- == 1; /*0x8000c4*/
    v117 = 0xFFFFFFFF; /*0x8000c7*/
    if ( v22 ) /*0x8000cb*/
      NiD3DPass_ReleaseToPool(v58); /*0x8000cf*/
    ++*((_DWORD *)this + 0xE);                  // Null-selector exit returns with the queue cleared and PassCount zero; renderer BeginPassLoop will suppress drawing. /*0x8000d4*/
  }
  return 0; /*0x8000d9*/
}
