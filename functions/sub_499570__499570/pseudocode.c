// Fog water decode: water shader/global refresh also consumes 0x4994C0 source records, corroborating packed color and fog field layout.
void __thiscall sub_499570(void *this, _DWORD *a2, float a3, char a4)
{
  float *v5; // edi
  WaterShaderHeightMap *v7; // ebx
  float *v8; // edx
  char v9; // cl
  int v10; // eax
  int v11; // ebx
  double v12; // rt0
  double v13; // rt1
  double v14; // rt2
  int v15; // ebx
  double v16; // rtt
  double v17; // rt0
  double v18; // rt1
  int v19; // ebx
  double v20; // rtt
  double v21; // rt0
  double v22; // st7
  int v23; // eax
  double v24; // rt1
  int v25; // eax
  int v26; // eax
  float *v27; // eax
  float v28; // [esp+0h] [ebp-34h]
  float v29; // [esp+0h] [ebp-34h]
  float v30; // [esp+4h] [ebp-30h]
  float v31; // [esp+4h] [ebp-30h]
  float v32; // [esp+4h] [ebp-30h]
  float v33; // [esp+4h] [ebp-30h]
  float v34; // [esp+4h] [ebp-30h]
  float v35; // [esp+4h] [ebp-30h]
  float v36; // [esp+4h] [ebp-30h]
  float v37; // [esp+4h] [ebp-30h]
  float v38; // [esp+4h] [ebp-30h]
  float v39; // [esp+4h] [ebp-30h]
  float v40; // [esp+4h] [ebp-30h]
  float v41; // [esp+10h] [ebp-24h]
  float v42; // [esp+10h] [ebp-24h]
  int v43; // [esp+24h] [ebp-10h]
  int v44; // [esp+24h] [ebp-10h]
  int v45; // [esp+24h] [ebp-10h]
  int v46; // [esp+24h] [ebp-10h]
  int v47; // [esp+24h] [ebp-10h]
  int v48; // [esp+24h] [ebp-10h]
  int v49; // [esp+28h] [ebp-Ch]
  int v50; // [esp+28h] [ebp-Ch]
  int v51; // [esp+28h] [ebp-Ch]
  int v52; // [esp+28h] [ebp-Ch]
  int v53; // [esp+28h] [ebp-Ch]
  int v54; // [esp+28h] [ebp-Ch]
  int v55; // [esp+2Ch] [ebp-8h]
  int v56; // [esp+2Ch] [ebp-8h]
  int v57; // [esp+2Ch] [ebp-8h]
  int v58; // [esp+2Ch] [ebp-8h]
  int v59; // [esp+2Ch] [ebp-8h]
  int v60; // [esp+2Ch] [ebp-8h]
  float v61; // [esp+38h] [ebp+4h]
  float v62; // [esp+38h] [ebp+4h]
  float v63; // [esp+38h] [ebp+4h]
  float v64; // [esp+38h] [ebp+4h]
  float v65; // [esp+38h] [ebp+4h]
  float v66; // [esp+38h] [ebp+4h]
  float v67; // [esp+38h] [ebp+4h]
  float v68; // [esp+38h] [ebp+4h]
  float v69; // [esp+38h] [ebp+4h]
  float v70; // [esp+38h] [ebp+4h]
  float v71; // [esp+38h] [ebp+4h]
  float v72; // [esp+38h] [ebp+4h]
  int v73; // [esp+40h] [ebp+Ch]
  float v74; // [esp+40h] [ebp+Ch]
  float v75; // [esp+40h] [ebp+Ch]
  int v76; // [esp+40h] [ebp+Ch]
  float v77; // [esp+40h] [ebp+Ch]
  float v78; // [esp+40h] [ebp+Ch]
  int v79; // [esp+40h] [ebp+Ch]
  float v80; // [esp+40h] [ebp+Ch]
  float v81; // [esp+40h] [ebp+Ch]

  if ( byte_B07050 ) /*0x499573*/
  {
    if ( OB_RendererGlobalState_010201A0[0xA5] ) /*0x499583*/
    {
      v5 = (float *)sub_4994C0();               // Fog water decode: refresh path obtains same selected water source record used by Sky water fog branch. /*0x49959d*/
      unk_B45DC0 = !byte_B07060 || !sub_4ED650(*(_BYTE **)&MEMORY[0xB33E90][0x1390]); /*0x49959d*/
      if ( !MEMORY[0xB33E90][0x139B] && (a4 || a2 || *((float **)this + 8) != v5) ) /*0x4995df*/
      {
        if ( MEMORY[0xB33E90][0x139C] || !a2 && v5 != *((float **)this + 8) ) /*0x4995f5*/
        {
          *((_DWORD *)this + 8) = v5; /*0x4995f7*/
          MEMORY[0xB33E90][0x139C] = 0; /*0x4995fa*/
        }
        v7 = (WaterShaderHeightMap *)LODWORD(OB_ShaderConstantStorage_010201A0[0x73]); /*0x499602*/
        if ( !LODWORD(OB_ShaderConstantStorage_010201A0[0x73]) ) /*0x499602*/
        {
          GetShaderDefinition(0x13u); /*0x49960e*/
          v7 = (WaterShaderHeightMap *)LODWORD(OB_ShaderConstantStorage_010201A0[0x73]); /*0x499613*/
          if ( !LODWORD(OB_ShaderConstantStorage_010201A0[0x73]) ) /*0x49961e*/
            goto LABEL_27; /*0x49961e*/
        }
        v8 = *(float **)&MEMORY[0xB33E90][0x1390]; /*0x499624*/
        v9 = 0; /*0x499633*/
        if ( *(float *)(*(_DWORD *)&MEMORY[0xB33E90][0x1390] + 0x3C) != OB_ShaderConstantStorage_010201A0[0x6C] ) /*0x49963c*/
        {
          v9 = 1; /*0x499641*/
          OB_ShaderConstantStorage_010201A0[0x6C] = v8[0xF]; /*0x499643*/
        }
        if ( v8[0x10] != OB_ShaderConstantStorage_010201A0[0x6B] ) /*0x499659*/
        {
          v9 = 1; /*0x49965e*/
          OB_ShaderConstantStorage_010201A0[0x6B] = v8[0x10]; /*0x499660*/
        }
        if ( v8[0x11] != OB_ShaderConstantStorage_010201A0[0x71] ) /*0x499676*/
        {
          v9 = 1; /*0x49967b*/
          OB_ShaderConstantStorage_010201A0[0x71] = v8[0x11]; /*0x49967d*/
        }
        if ( v8[0x12] == OB_ShaderConstantStorage_010201A0[0x70] ) /*0x499693*/
        {
          if ( !v9 && LOBYTE(v7->Unk108) ) /*0x4996a4*/
            goto LABEL_27; /*0x4996aa*/
        }
        else
        {
          OB_ShaderConstantStorage_010201A0[0x70] = v8[0x12]; /*0x499698*/
        }
        sub_7E1710(v7); /*0x4996ae*/
LABEL_27:
        if ( a2 && !a4 && (v10 = *((_DWORD *)this + 8)) != 0 ) /*0x4996cb*/
        {
          v11 = *(_DWORD *)(v10 + 0x68); /*0x4996d1*/
          v73 = a2[0x1A]; /*0x4996fb*/
          v12 = dbl_A3DDD8; /*0x499707*/
          v61 = (double)(unsigned __int8)v73 / v12; /*0x499709*/
          v30 = v61; /*0x499711*/
          v62 = (double)(unsigned __int8)v11 / v12; /*0x49971f*/
          *(float *)&v43 = sub_410EB0(v62, v30, 0.0, 1.0, *((float *)this + 0xB)); /*0x49972f*/
          v13 = dbl_A3DDD8; /*0x49975e*/
          v63 = (double)BYTE1(v73) / v13; /*0x499760*/
          v31 = v63; /*0x499768*/
          v64 = (double)BYTE1(v11) / v13; /*0x499776*/
          *(float *)&v49 = sub_410EB0(v64, v31, 0.0, 1.0, *((float *)this + 0xB)); /*0x499786*/
          v14 = dbl_A3DDD8; /*0x4997bd*/
          v74 = (double)BYTE2(v73) / v14; /*0x4997bf*/
          v32 = v74; /*0x4997c7*/
          v75 = (double)BYTE2(v11) / v14; /*0x4997d5*/
          *(float *)&v55 = sub_410EB0(v75, v32, 0.0, 1.0, *((float *)this + 0xB)); /*0x4997e5*/
          OB_ShaderConstantStorage_010201A0[0] = *(float *)&v43; /*0x4997fb*/
          OB_ShaderConstantStorage_010201A0[2] = *(float *)&v55; /*0x499805*/
          OB_ShaderConstantStorage_010201A0[3] = 1.0; /*0x49980a*/
          OB_ShaderConstantStorage_010201A0[1] = *(float *)&v49; /*0x499810*/
          v76 = a2[0x1B]; /*0x499820*/
          v15 = *(_DWORD *)(*((_DWORD *)this + 8) + 0x6C); /*0x49983c*/
          v16 = dbl_A3DDD8; /*0x49984a*/
          v65 = (double)(unsigned __int8)v76 / v16; /*0x49984c*/
          v33 = v65; /*0x499854*/
          v66 = (double)(unsigned __int8)v15 / v16; /*0x499862*/
          *(float *)&v44 = sub_410EB0(v66, v33, 0.0, 1.0, *((float *)this + 0xB)); /*0x499872*/
          v17 = dbl_A3DDD8; /*0x4998a1*/
          v67 = (double)BYTE1(v76) / v17; /*0x4998a3*/
          v34 = v67; /*0x4998ab*/
          v68 = (double)BYTE1(v15) / v17; /*0x4998b9*/
          *(float *)&v50 = sub_410EB0(v68, v34, 0.0, 1.0, *((float *)this + 0xB)); /*0x4998c9*/
          v18 = dbl_A3DDD8; /*0x499900*/
          v77 = (double)BYTE2(v76) / v18; /*0x499902*/
          v35 = v77; /*0x49990a*/
          v78 = (double)BYTE2(v15) / v18; /*0x499918*/
          *(float *)&v56 = sub_410EB0(v78, v35, 0.0, 1.0, *((float *)this + 0xB)); /*0x49992c*/
          OB_ShaderConstantStorage_010201A0[4] = *(float *)&v44; /*0x49993e*/
          OB_ShaderConstantStorage_010201A0[6] = *(float *)&v56; /*0x499947*/
          OB_ShaderConstantStorage_010201A0[7] = 1.0; /*0x49994d*/
          OB_ShaderConstantStorage_010201A0[5] = *(float *)&v50; /*0x499952*/
          v19 = *(_DWORD *)(*((_DWORD *)this + 8) + 0x70); /*0x499976*/
          v79 = a2[0x1C]; /*0x49997d*/
          v69 = (double)(unsigned __int8)v79 / dbl_A3DDD8; /*0x49998e*/
          v36 = v69; /*0x499996*/
          v70 = (double)(unsigned __int8)v19 / dbl_A3DDD8; /*0x4999a4*/
          *(float *)&v45 = sub_410EB0(v70, v36, 0.0, 1.0, *((float *)this + 0xB)); /*0x4999b4*/
          v20 = dbl_A3DDD8; /*0x4999e3*/
          v71 = (double)BYTE1(v79) / v20; /*0x4999e5*/
          v37 = v71; /*0x4999ed*/
          v72 = (double)BYTE1(v19) / v20; /*0x4999fb*/
          *(float *)&v51 = sub_410EB0(v72, v37, 0.0, 1.0, *((float *)this + 0xB)); /*0x499a0b*/
          v21 = dbl_A3DDD8; /*0x499a3c*/
          v80 = (double)BYTE2(v79) / v21; /*0x499a3e*/
          v38 = v80; /*0x499a4c*/
          v81 = (double)BYTE2(v19) / v21; /*0x499a5a*/
          *(float *)&v57 = sub_410EB0(v81, v38, 0.0, 1.0, *((float *)this + 0xB)); /*0x499a6a*/
          OB_ShaderConstantStorage_010201A0[8] = *(float *)&v45; /*0x499a80*/
          OB_ShaderConstantStorage_010201A0[9] = *(float *)&v51; /*0x499a8a*/
          OB_ShaderConstantStorage_010201A0[0xA] = *(float *)&v57; /*0x499a8f*/
          OB_ShaderConstantStorage_010201A0[0xB] = 1.0; /*0x499a95*/
          OB_ShaderConstantStorage_010201A0[0xC] = sub_410EB0( /*0x499ac4*/
                                                     *(float *)(*((_DWORD *)this + 8) + 0x4C),
                                                     *(float *)(*((_DWORD *)this + 9) + 0x4C),
                                                     0.0,
                                                     1.0,
                                                     *((float *)this + 0xB));
          OB_ShaderConstantStorage_010201A0[0xD] = sub_410EB0( /*0x499af5*/
                                                     *(float *)(*((_DWORD *)this + 8) + 0x50),
                                                     *(float *)(*((_DWORD *)this + 9) + 0x50),
                                                     0.0,
                                                     1.0,
                                                     *((float *)this + 0xB));
          v41 = *((float *)this + 0xB); /*0x499b04*/
          v39 = sub_4ED660((unsigned __int8 *)*((_DWORD *)this + 9)); /*0x499b1c*/
          v28 = sub_4ED660((unsigned __int8 *)*((_DWORD *)this + 8)); /*0x499b25*/
          OB_ShaderConstantStorage_010201A0[0xE] = sub_410EB0(v28, v39, 0.0, 1.0, v41); /*0x499b2d*/
          v42 = *((float *)this + 0xB); /*0x499b3c*/
          v40 = sub_4ED680((unsigned __int8 *)*((_DWORD *)this + 9)); /*0x499b54*/
          v29 = sub_4ED680((unsigned __int8 *)*((_DWORD *)this + 8)); /*0x499b5d*/
          OB_ShaderConstantStorage_010201A0[0xF] = sub_410EB0(v29, v40, 0.0, 1.0, v42); /*0x499b65*/
          OB_ShaderConstantStorage_010201A0[0x10] = sub_410EB0( /*0x499b96*/
                                                      *(float *)(*((_DWORD *)this + 8) + 0x58),
                                                      *(float *)(*((_DWORD *)this + 9) + 0x58),
                                                      0.0,
                                                      1.0,
                                                      *((float *)this + 0xB));
          OB_ShaderConstantStorage_010201A0[0x11] = sub_410EB0( /*0x499bc7*/
                                                      *(float *)(*((_DWORD *)this + 8) + 0x5C),
                                                      *(float *)(*((_DWORD *)this + 9) + 0x5C),
                                                      0.0,
                                                      1.0,
                                                      *((float *)this + 0xB));
          v22 = sub_410EB0( /*0x499bf3*/
                  *(float *)(*((_DWORD *)this + 8) + 0x54),
                  *(float *)(*((_DWORD *)this + 9) + 0x54),
                  0.0,
                  1.0,
                  *((float *)this + 0xB));
        }
        else
        {
          v23 = *((_DWORD *)v5 + 0x1A); /*0x499c00*/
          v24 = dbl_A3DDD8; /*0x499c23*/
          *(float *)&v46 = (double)(unsigned __int8)v23 / v24; /*0x499c25*/
          OB_ShaderConstantStorage_010201A0[0] = *(float *)&v46; /*0x499c35*/
          *(float *)&v52 = (double)BYTE1(v23) / v24; /*0x499c3d*/
          OB_ShaderConstantStorage_010201A0[1] = *(float *)&v52; /*0x499c49*/
          *(float *)&v58 = (double)BYTE2(v23) / v24; /*0x499c51*/
          OB_ShaderConstantStorage_010201A0[2] = *(float *)&v58; /*0x499c5f*/
          OB_ShaderConstantStorage_010201A0[3] = 1.0; /*0x499c68*/
          v25 = *((_DWORD *)v5 + 0x1B); /*0x499c6e*/
          *(float *)&v47 = (double)(unsigned __int8)v25 / v24; /*0x499c8b*/
          OB_ShaderConstantStorage_010201A0[4] = *(float *)&v47; /*0x499c9b*/
          *(float *)&v53 = (double)BYTE1(v25) / v24; /*0x499ca2*/
          OB_ShaderConstantStorage_010201A0[5] = *(float *)&v53; /*0x499cae*/
          *(float *)&v59 = (double)BYTE2(v25) / v24; /*0x499cb6*/
          OB_ShaderConstantStorage_010201A0[6] = *(float *)&v59; /*0x499cbe*/
          OB_ShaderConstantStorage_010201A0[7] = 1.0; /*0x499ccc*/
          v26 = *((_DWORD *)v5 + 0x1C); /*0x499cd1*/
          *(float *)&v48 = (double)(unsigned __int8)v26 / v24; /*0x499cee*/
          OB_ShaderConstantStorage_010201A0[8] = *(float *)&v48; /*0x499cfe*/
          *(float *)&v54 = (double)BYTE1(v26) / v24; /*0x499d06*/
          OB_ShaderConstantStorage_010201A0[9] = *(float *)&v54; /*0x499d12*/
          *(float *)&v60 = (double)BYTE2(v26) / v24; /*0x499d1c*/
          OB_ShaderConstantStorage_010201A0[0xA] = *(float *)&v60; /*0x499d24*/
          OB_ShaderConstantStorage_010201A0[0xB] = 1.0; /*0x499d31*/
          OB_ShaderConstantStorage_010201A0[0xC] = v5[0x13]; /*0x499d3a*/
          OB_ShaderConstantStorage_010201A0[0xD] = v5[0x14]; /*0x499d45*/
          OB_ShaderConstantStorage_010201A0[0xE] = sub_4ED660((unsigned __int8 *)v5); /*0x499d52*/
          OB_ShaderConstantStorage_010201A0[0xF] = sub_4ED680((unsigned __int8 *)v5); /*0x499d5d*/
          OB_ShaderConstantStorage_010201A0[0x10] = v5[0x16]; /*0x499d66*/
          OB_ShaderConstantStorage_010201A0[0x11] = v5[0x17]; /*0x499d6f*/
          v22 = v5[0x15]; /*0x499d75*/
        }
        MEMORY[0xB45DC4] = v22; /*0x499d7a*/
        v27 = *(float **)&MEMORY[0xB33E90][0x1390]; /*0x499d80*/
        OB_ShaderConstantStorage_010201A0[0x51] = *(float *)(*(_DWORD *)&MEMORY[0xB33E90][0x1390] + 0x78); /*0x499d89*/
        OB_ShaderConstantStorage_010201A0[0x52] = v27[0x1F]; /*0x499d92*/
        OB_ShaderConstantStorage_010201A0[0x53] = v27[0x20]; /*0x499d9e*/
        OB_ShaderConstantStorage_010201A0[0x54] = v27[0x22]; /*0x499daa*/
        OB_ShaderConstantStorage_010201A0[0x55] = v27[0x23]; /*0x499db6*/
        OB_ShaderConstantStorage_010201A0[0x56] = v27[0x24]; /*0x499dc2*/
        OB_ShaderConstantStorage_010201A0[0x57] = v27[0x25]; /*0x499dce*/
        OB_ShaderConstantStorage_010201A0[0x58] = v27[0x27]; /*0x499dda*/
        if ( a2 ) /*0x499de0*/
        {
          if ( 1.0 == a3 ) /*0x499df2*/
          {
            *((_DWORD *)this + 8) = a2; /*0x499df6*/
            *((float *)this + 0xB) = 0.0; /*0x499df9*/
            *((_DWORD *)this + 9) = 0; /*0x499dfc*/
          }
        }
        else
        {
          *((_DWORD *)this + 8) = v5; /*0x499de2*/
        }
        if ( *((_BYTE *)this + 0x29) ) /*0x499e03*/
          *((_BYTE *)this + 0x29) = 0; /*0x499e09*/
      }
    }
  }
}
