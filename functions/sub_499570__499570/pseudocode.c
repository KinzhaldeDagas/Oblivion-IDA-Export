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

  if ( byte_B07050 )
  {
    if ( ImageSpaceEffectEnabled )
    {
      v5 = (float *)sub_4994C0();
      byte_B45DC0 = !byte_B07060 || !sub_4ED650((_BYTE *)dword_B35220);
      if ( !byte_B3522B && (a4 || a2 || *((float **)this + 8) != v5) )
      {
        if ( byte_B3522C || !a2 && v5 != *((float **)this + 8) )
        {
          *((_DWORD *)this + 8) = v5;
          byte_B3522C = 0;
        }
        v7 = dword_B45FE0;
        if ( !dword_B45FE0 )
        {
          GetShaderDefinition(0x13u);
          v7 = dword_B45FE0;
          if ( !dword_B45FE0 )
            goto LABEL_27;
        }
        v8 = (float *)dword_B35220;
        v9 = 0;
        if ( *(float *)(dword_B35220 + 0x3C) != WaterShader_Velocity )
        {
          v9 = 1;
          WaterShader_Velocity = v8[0xF];
        }
        if ( v8[0x10] != WaterShader_Direction )
        {
          v9 = 1;
          WaterShader_Direction = v8[0x10];
        }
        if ( v8[0x11] != WaterShader_Amplitude )
        {
          v9 = 1;
          WaterShader_Amplitude = v8[0x11];
        }
        if ( v8[0x12] == WaterShader_Frequency )
        {
          if ( !v9 && LOBYTE(v7->Unk108) )
            goto LABEL_27;
        }
        else
        {
          WaterShader_Frequency = v8[0x12];
        }
        sub_7E1710(v7);
LABEL_27:
        if ( a2 && !a4 && (v10 = *((_DWORD *)this + 8)) != 0 )
        {
          v11 = *(_DWORD *)(v10 + 0x68);
          v73 = a2[0x1A];
          v12 = dbl_A3DDD8;
          v61 = (double)(unsigned __int8)v73 / v12;
          v30 = v61;
          v62 = (double)(unsigned __int8)v11 / v12;
          *(float *)&v43 = sub_410EB0(v62, v30, 0.0, 1.0, *((float *)this + 0xB));
          v13 = dbl_A3DDD8;
          v63 = (double)BYTE1(v73) / v13;
          v31 = v63;
          v64 = (double)BYTE1(v11) / v13;
          *(float *)&v49 = sub_410EB0(v64, v31, 0.0, 1.0, *((float *)this + 0xB));
          v14 = dbl_A3DDD8;
          v74 = (double)BYTE2(v73) / v14;
          v32 = v74;
          v75 = (double)BYTE2(v11) / v14;
          *(float *)&v55 = sub_410EB0(v75, v32, 0.0, 1.0, *((float *)this + 0xB));
          dword_B45E14 = v43;
          dword_B45E1C = v55;
          *(float *)&dword_B45E20 = 1.0;
          dword_B45E18 = v49;
          v76 = a2[0x1B];
          v15 = *(_DWORD *)(*((_DWORD *)this + 8) + 0x6C);
          v16 = dbl_A3DDD8;
          v65 = (double)(unsigned __int8)v76 / v16;
          v33 = v65;
          v66 = (double)(unsigned __int8)v15 / v16;
          *(float *)&v44 = sub_410EB0(v66, v33, 0.0, 1.0, *((float *)this + 0xB));
          v17 = dbl_A3DDD8;
          v67 = (double)BYTE1(v76) / v17;
          v34 = v67;
          v68 = (double)BYTE1(v15) / v17;
          *(float *)&v50 = sub_410EB0(v68, v34, 0.0, 1.0, *((float *)this + 0xB));
          v18 = dbl_A3DDD8;
          v77 = (double)BYTE2(v76) / v18;
          v35 = v77;
          v78 = (double)BYTE2(v15) / v18;
          *(float *)&v56 = sub_410EB0(v78, v35, 0.0, 1.0, *((float *)this + 0xB));
          dword_B45E24 = v44;
          dword_B45E2C = v56;
          *(float *)&dword_B45E30 = 1.0;
          dword_B45E28 = v50;
          v19 = *(_DWORD *)(*((_DWORD *)this + 8) + 0x70);
          v79 = a2[0x1C];
          v69 = (double)(unsigned __int8)v79 / dbl_A3DDD8;
          v36 = v69;
          v70 = (double)(unsigned __int8)v19 / dbl_A3DDD8;
          *(float *)&v45 = sub_410EB0(v70, v36, 0.0, 1.0, *((float *)this + 0xB));
          v20 = dbl_A3DDD8;
          v71 = (double)BYTE1(v79) / v20;
          v37 = v71;
          v72 = (double)BYTE1(v19) / v20;
          *(float *)&v51 = sub_410EB0(v72, v37, 0.0, 1.0, *((float *)this + 0xB));
          v21 = dbl_A3DDD8;
          v80 = (double)BYTE2(v79) / v21;
          v38 = v80;
          v81 = (double)BYTE2(v19) / v21;
          *(float *)&v57 = sub_410EB0(v81, v38, 0.0, 1.0, *((float *)this + 0xB));
          dword_B45E34 = v45;
          dword_B45E38 = v51;
          dword_B45E3C = v57;
          *(float *)&dword_B45E40 = 1.0;
          flt_B45E44 = sub_410EB0(
                         *(float *)(*((_DWORD *)this + 8) + 0x4C),
                         *(float *)(*((_DWORD *)this + 9) + 0x4C),
                         0.0,
                         1.0,
                         *((float *)this + 0xB));
          WaterShader_Reflectivity = sub_410EB0(
                                       *(float *)(*((_DWORD *)this + 8) + 0x50),
                                       *(float *)(*((_DWORD *)this + 9) + 0x50),
                                       0.0,
                                       1.0,
                                       *((float *)this + 0xB));
          v41 = *((float *)this + 0xB);
          v39 = sub_4ED660((unsigned __int8 *)*((_DWORD *)this + 9));
          v28 = sub_4ED660((unsigned __int8 *)*((_DWORD *)this + 8));
          WaterShader_Opacity = sub_410EB0(v28, v39, 0.0, 1.0, v41);
          v42 = *((float *)this + 0xB);
          v40 = sub_4ED680((unsigned __int8 *)*((_DWORD *)this + 9));
          v29 = sub_4ED680((unsigned __int8 *)*((_DWORD *)this + 8));
          WaterShader_Blend = sub_410EB0(v29, v40, 0.0, 1.0, v42);
          WaterShader_ScrollX = sub_410EB0(
                                  *(float *)(*((_DWORD *)this + 8) + 0x58),
                                  *(float *)(*((_DWORD *)this + 9) + 0x58),
                                  0.0,
                                  1.0,
                                  *((float *)this + 0xB));
          WaterShader_ScrollY = sub_410EB0(
                                  *(float *)(*((_DWORD *)this + 8) + 0x5C),
                                  *(float *)(*((_DWORD *)this + 9) + 0x5C),
                                  0.0,
                                  1.0,
                                  *((float *)this + 0xB));
          v22 = sub_410EB0(
                  *(float *)(*((_DWORD *)this + 8) + 0x54),
                  *(float *)(*((_DWORD *)this + 9) + 0x54),
                  0.0,
                  1.0,
                  *((float *)this + 0xB));
        }
        else
        {
          v23 = *((_DWORD *)v5 + 0x1A);
          v24 = dbl_A3DDD8;
          *(float *)&v46 = (double)(unsigned __int8)v23 / v24;
          dword_B45E14 = v46;
          *(float *)&v52 = (double)BYTE1(v23) / v24;
          dword_B45E18 = v52;
          *(float *)&v58 = (double)BYTE2(v23) / v24;
          dword_B45E1C = v58;
          *(float *)&dword_B45E20 = 1.0;
          v25 = *((_DWORD *)v5 + 0x1B);
          *(float *)&v47 = (double)(unsigned __int8)v25 / v24;
          dword_B45E24 = v47;
          *(float *)&v53 = (double)BYTE1(v25) / v24;
          dword_B45E28 = v53;
          *(float *)&v59 = (double)BYTE2(v25) / v24;
          dword_B45E2C = v59;
          *(float *)&dword_B45E30 = 1.0;
          v26 = *((_DWORD *)v5 + 0x1C);
          *(float *)&v48 = (double)(unsigned __int8)v26 / v24;
          dword_B45E34 = v48;
          *(float *)&v54 = (double)BYTE1(v26) / v24;
          dword_B45E38 = v54;
          *(float *)&v60 = (double)BYTE2(v26) / v24;
          dword_B45E3C = v60;
          *(float *)&dword_B45E40 = 1.0;
          flt_B45E44 = v5[0x13];
          WaterShader_Reflectivity = v5[0x14];
          WaterShader_Opacity = sub_4ED660((unsigned __int8 *)v5);
          WaterShader_Blend = sub_4ED680((unsigned __int8 *)v5);
          WaterShader_ScrollX = v5[0x16];
          WaterShader_ScrollY = v5[0x17];
          v22 = v5[0x15];
        }
        WaterShader_Fresnel = v22;
        v27 = (float *)dword_B35220;
        WaterShader_Rainforce = *(float *)(dword_B35220 + 0x78);
        WaterShader_RainVelocity = v27[0x1F];
        WaterShader_RainFalloff = v27[0x20];
        WaterShader_RainSize = v27[0x22];
        WaterShader_DisplaceForce = v27[0x23];
        WaterShader_DisplayVelocity = v27[0x24];
        WaterShader_DisplaceFallOff = v27[0x25];
        flt_B45F74 = v27[0x27];
        if ( a2 )
        {
          if ( 1.0 == a3 )
          {
            *((_DWORD *)this + 8) = a2;
            *((float *)this + 0xB) = 0.0;
            *((_DWORD *)this + 9) = 0;
          }
        }
        else
        {
          *((_DWORD *)this + 8) = v5;
        }
        if ( *((_BYTE *)this + 0x29) )
          *((_BYTE *)this + 0x29) = 0;
      }
    }
  }
}
