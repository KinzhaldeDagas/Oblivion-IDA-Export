// HDR weather/global updater, not merely fog. While HDR is enabled it resolves first/second weather values, including fSunlightDimmer and fTreeDimmer, then writes direct or transitioned renderer globals.
void __thiscall OB_Sky_UpdateHDRWeatherAndTreeDimmerConstants_010201A0(Sky *this)
{                                               // Entire weather HDR-constant update is gated by rendererGlobal+0x1D7 (B43070 HDR enabled).
  float *firstWeather; // esi
  double v3; // st6
  int v4; // ecx
  double v5; // st6
  double v6; // st6
  double v7; // st6
  double v8; // st6
  double v9; // st6
  double v10; // st7
  double v11; // st6
  double v12; // st5
  double v13; // st4
  float *secondWeather; // esi
  double v15; // st3
  double v16; // st1
  double v17; // st1
  double v18; // st1
  double v19; // st1
  double v20; // st1
  double v21; // st1
  double v22; // st7
  double v23; // st2
  double v24; // rt2
  double v25; // st3
  double v26; // st7
  double v27; // st6
  double v28; // st3
  double v29; // rtt
  double v30; // rt0
  double v31; // st4
  double v32; // st6
  double v33; // st5
  double v34; // st4
  double v35; // rt1
  double v36; // st6
  double v37; // st5
  double v38; // rt2
  float v39; // [esp+4h] [ebp-60h]
  float v40; // [esp+4h] [ebp-60h]
  float v41; // [esp+4h] [ebp-60h]
  float v42; // [esp+4h] [ebp-60h]
  float v43; // [esp+4h] [ebp-60h]
  float v44; // [esp+4h] [ebp-60h]
  float v45; // [esp+4h] [ebp-60h]
  float v46; // [esp+4h] [ebp-60h]
  float v47; // [esp+4h] [ebp-60h]
  float v48; // [esp+4h] [ebp-60h]
  float v49; // [esp+4h] [ebp-60h]
  float v50; // [esp+4h] [ebp-60h]
  float v51; // [esp+4h] [ebp-60h]
  float v52; // [esp+4h] [ebp-60h]
  float v53; // [esp+4h] [ebp-60h]
  float v54; // [esp+4h] [ebp-60h]
  float v55; // [esp+4h] [ebp-60h]
  float v56; // [esp+4h] [ebp-60h]
  float v57; // [esp+4h] [ebp-60h]
  float v58; // [esp+4h] [ebp-60h]
  float v59; // [esp+4h] [ebp-60h]
  float v60; // [esp+4h] [ebp-60h]
  float v61; // [esp+8h] [ebp-5Ch]
  float v62; // [esp+Ch] [ebp-58h]
  float v63; // [esp+10h] [ebp-54h]
  float v64; // [esp+14h] [ebp-50h]
  float v65; // [esp+18h] [ebp-4Ch]
  float v66; // [esp+1Ch] [ebp-48h]
  float v67; // [esp+20h] [ebp-44h]
  float v68; // [esp+24h] [ebp-40h]
  float v69; // [esp+28h] [ebp-3Ch]
  float v70; // [esp+2Ch] [ebp-38h]
  float v71; // [esp+30h] [ebp-34h]
  float v72; // [esp+34h] [ebp-30h]
  float v73; // [esp+40h] [ebp-24h]
  float v74; // [esp+44h] [ebp-20h]
  float v75; // [esp+48h] [ebp-1Ch]
  float v76; // [esp+4Ch] [ebp-18h]
  float v77; // [esp+50h] [ebp-14h]
  float v78; // [esp+54h] [ebp-10h]
  float v79; // [esp+58h] [ebp-Ch]
  float v80; // [esp+5Ch] [ebp-8h]
  float v81; // [esp+60h] [ebp-4h]

  if ( OB_RendererGlobalState_010201A0[0x1D7] ) /*0x540853*/
  {
    firstWeather = (float *)this->firstWeather; // Fog transition-global decode: reads Sky::firstWeather as primary source for weather globals; not a direct fog shader writer. /*0x540866*/
    if ( firstWeather[0x4C] <= 0.0 )            // Fog transition-global decode: firstWeather float field [0x4C] uses fallback flt_A56E28 when nonpositive. /*0x540874*/
      v3 = flt_A56E28; /*0x54087e*/
    else
      v3 = firstWeather[0x4C]; /*0x540876*/
    v39 = v3; /*0x540884*/
    v61 = v39; /*0x54088c*/
    v4 = Double_To_SInt32(0.0); /*0x5408be*/
    if ( firstWeather[0x45] <= 0.0 ) /*0x5408c9*/
      v5 = flt_B06DFC; /*0x5408d3*/
    else
      v5 = firstWeather[0x45]; /*0x5408cb*/
    v40 = v5; /*0x5408d9*/
    v62 = v40; /*0x5408e1*/
    if ( firstWeather[0x4B] <= 0.0 )            // Fog transition-global decode: firstWeather field [0x4B] participates in transition/weather global setup and has fallback flt_B06E04. /*0x5408f0*/
      v6 = flt_B06E04; /*0x5408fa*/
    else
      v6 = firstWeather[0x4B]; /*0x5408f2*/
    v41 = v6; /*0x540900*/
    v63 = v41; /*0x540908*/
    if ( firstWeather[0x4A] <= 0.0 ) /*0x540917*/
      v7 = flt_B06E0C; /*0x540921*/
    else
      v7 = firstWeather[0x4A]; /*0x540919*/
    v42 = v7; /*0x540927*/
    v64 = v42; /*0x54092f*/
    if ( firstWeather[0x44] <= 0.0 ) /*0x54093e*/
      v8 = flt_B06E3C; /*0x540948*/
    else
      v8 = firstWeather[0x44]; /*0x540940*/
    v43 = v8; /*0x54094e*/
    v65 = v43; /*0x540956*/
    if ( firstWeather[0x47] <= 0.0 ) /*0x540965*/
      v9 = flt_B06E44; /*0x54096f*/
    else
      v9 = firstWeather[0x47]; /*0x540967*/
    v44 = v9; /*0x540975*/
    v66 = v44; /*0x54097d*/
    if ( firstWeather[0x49] <= 0.0 ) /*0x540992*/
      v45 = flt_B06E5C; /*0x5409a0*/
    else
      v45 = firstWeather[0x49]; /*0x54099a*/
    v67 = v45; /*0x5409a8*/
    v10 = flt_B06E5C; /*0x5409ac*/
    if ( firstWeather[0x48] <= 0.0 ) /*0x5409bf*/
      v46 = flt_B06E64; /*0x5409cd*/
    else
      v46 = firstWeather[0x48]; /*0x5409c7*/
    v68 = v46; /*0x5409d5*/
    v11 = flt_B06E64; /*0x5409d9*/
    if ( firstWeather[0x4F] <= 0.0 ) /*0x5409ec*/
      v47 = flt_B06E34; /*0x5409fa*/
    else
      v47 = firstWeather[0x4F]; /*0x5409f4*/
    v69 = v47; /*0x540a02*/
    v12 = flt_B06E34; /*0x540a06*/
    if ( firstWeather[0x51] <= 0.0 )            // Resolve first-weather fTreeDimmer at weather+0x144; nonpositive weather values use the fTreeDimmer:BlurShaderHDR fallback (default 1.2). /*0x540a19*/
      v48 = OB_INI_fTreeDimmer_BlurShaderHDR_010201A0; /*0x540a27*/
    else
      v48 = firstWeather[0x51]; /*0x540a21*/
    v70 = v48; /*0x540a2f*/
    v13 = OB_INI_fTreeDimmer_BlurShaderHDR_010201A0; /*0x540a33*/
    if ( firstWeather[0x50] <= 0.0 ) /*0x540a46*/
      v49 = flt_B06E54; /*0x540a54*/
    else
      v49 = firstWeather[0x50]; /*0x540a4e*/
    secondWeather = (float *)this->secondWeather;// Fog transition-global decode: reads Sky::secondWeather for transition blend of weather globals. /*0x540a5c*/
    v71 = v49; /*0x540a61*/
    if ( secondWeather && this->weatherPercent < 1.0 )// Fog transition-global decode: when secondWeather exists and weatherPercent < 1, globals are lerped between second and first weather. /*0x540a78*/
    {
      v15 = flt_B06E54; /*0x540a80*/
      if ( secondWeather[0x4C] <= 0.0 ) /*0x540a8d*/
        v16 = flt_A56E28; /*0x540a97*/
      else
        v16 = secondWeather[0x4C]; /*0x540a8f*/
      v50 = v16; /*0x540a9d*/
      v72 = v50; /*0x540aa5*/
      Double_To_SInt32(v10); /*0x540acc*/
      if ( secondWeather[0x45] <= 0.0 ) /*0x540ae0*/
        v17 = flt_B06DFC; /*0x540aea*/
      else
        v17 = secondWeather[0x45]; /*0x540ae2*/
      v51 = v17; /*0x540af0*/
      v73 = v51; /*0x540af8*/
      if ( secondWeather[0x4B] <= 0.0 ) /*0x540b07*/
        v18 = flt_B06E04; /*0x540b11*/
      else
        v18 = secondWeather[0x4B]; /*0x540b09*/
      v52 = v18; /*0x540b17*/
      v74 = v52; /*0x540b1f*/
      if ( secondWeather[0x4A] <= 0.0 ) /*0x540b2e*/
        v19 = flt_B06E0C; /*0x540b38*/
      else
        v19 = secondWeather[0x4A]; /*0x540b30*/
      v53 = v19; /*0x540b3e*/
      v75 = v53; /*0x540b46*/
      if ( secondWeather[0x44] <= 0.0 ) /*0x540b55*/
        v20 = flt_B06E3C; /*0x540b5f*/
      else
        v20 = secondWeather[0x44]; /*0x540b57*/
      v54 = v20; /*0x540b65*/
      v76 = v54; /*0x540b6d*/
      if ( secondWeather[0x47] <= 0.0 ) /*0x540b7c*/
        v21 = flt_B06E44; /*0x540b86*/
      else
        v21 = secondWeather[0x47]; /*0x540b7e*/
      v55 = v21; /*0x540b8c*/
      v77 = v55; /*0x540b94*/
      if ( secondWeather[0x49] <= 0.0 ) /*0x540ba3*/
      {
        v23 = v10; /*0x540baf*/
        v22 = 0.0; /*0x540baf*/
      }
      else
      {
        v22 = 0.0; /*0x540ba5*/
        v23 = secondWeather[0x49]; /*0x540ba7*/
      }
      v56 = v23; /*0x540bb1*/
      v78 = v56; /*0x540bb9*/
      v24 = v15; /*0x540bbd*/
      v25 = v22; /*0x540bbd*/
      v26 = v24; /*0x540bbd*/
      if ( v25 >= secondWeather[0x48] ) /*0x540bca*/
      {
        v29 = v25; /*0x540bd6*/
        v28 = v11; /*0x540bd6*/
        v27 = v29; /*0x540bd6*/
      }
      else
      {
        v27 = v25; /*0x540bcc*/
        v28 = secondWeather[0x48]; /*0x540bce*/
      }
      v57 = v28; /*0x540bd8*/
      v79 = v57; /*0x540be0*/
      v30 = v13; /*0x540be4*/
      v31 = v27; /*0x540be4*/
      v32 = v30; /*0x540be4*/
      if ( v31 >= secondWeather[0x4F] ) /*0x540bf1*/
      {
        v35 = v31; /*0x540bfd*/
        v34 = v12; /*0x540bfd*/
        v33 = v35; /*0x540bfd*/
      }
      else
      {
        v33 = v31; /*0x540bf3*/
        v34 = secondWeather[0x4F]; /*0x540bf5*/
      }
      v58 = v34; /*0x540bff*/
      v80 = v58; /*0x540c07*/
      if ( v33 >= secondWeather[0x51] )         // Resolve second-weather fTreeDimmer at weather+0x144 with the same nonpositive-value fallback before interpolation. /*0x540c16*/
      {
        v38 = v33; /*0x540c22*/
        v37 = v32; /*0x540c22*/
        v36 = v38; /*0x540c22*/
      }
      else
      {
        v36 = v33; /*0x540c18*/
        v37 = secondWeather[0x51]; /*0x540c1a*/
      }
      v59 = v37; /*0x540c24*/
      v81 = v59; /*0x540c2c*/
      if ( v36 < secondWeather[0x50] ) /*0x540c3b*/
        v26 = secondWeather[0x50]; /*0x540c3f*/
      v60 = v26; /*0x540c45*/
      flt_B2C73C = v72;                         // Fog transition-global decode: stores secondWeather/firstWeather paired global baseline for transition; upstream sky/weather state, not B333E4 payload. /*0x540c55*/
      flt_B2C740 = v61; /*0x540c5f*/
      unk_B43220 = Double_To_SInt32(1.0 - 0.0); /*0x540c9a*/
      unk_B431F8 = v73 + (v62 - v73) * ((this->weatherPercent - 0.0) / (1.0 - 0.0));// Fog transition-global decode: lerps a weather global from secondWeather to firstWeather by Sky::weatherPercent. /*0x540cbb*/
      unk_B431E8 = v74 + (v63 - v74) * ((this->weatherPercent - 0.0) / (1.0 - 0.0)); /*0x540cdd*/
      unk_B431F0 = v75 + (v64 - v75) * ((this->weatherPercent - 0.0) / (1.0 - 0.0)); /*0x540cff*/
      unk_B43200 = v76 + (v65 - v76) * ((this->weatherPercent - 0.0) / (1.0 - 0.0)); /*0x540d21*/
      unk_B43208 = v77 + (v66 - v77) * ((this->weatherPercent - 0.0) / (1.0 - 0.0)); /*0x540d43*/
      unk_B43210 = v78 + (v67 - v78) * ((this->weatherPercent - 0.0) / (1.0 - 0.0)); /*0x540d66*/
      unk_B43218 = v79 + (v68 - v79) * ((this->weatherPercent - 0.0) / (1.0 - 0.0)); /*0x540d88*/
      *(float *)&OB_RendererGlobalState_010201A0[0xB3] = v80 /*0x540daa*/
                                                       + (v69 - v80) * ((this->weatherPercent - 0.0) / (1.0 - 0.0));// Transition writer for rendererGlobal+0xB3 (B42F4C) fSunlightDimmer. This is distinct from leaf VS c10 TreeDimmer.
      *(float *)&OB_RendererGlobalState_010201A0[0xF] = v81 + (v70 - v81) * ((this->weatherPercent - 0.0) / (1.0 - 0.0));// Transition writer for rendererGlobal+0x0F (B42EA8) fTreeDimmer: lerp(second, first, Sky::weatherPercent). Positive/fallback endpoints remain positive. /*0x540dcc*/
      *(float *)&OB_RendererGlobalState_010201A0[0xAB] = v60 /*0x540dec*/
                                                       + (v71 - v60) * ((this->weatherPercent - 0.0) / (1.0 - 0.0));
    }
    else
    {
      unk_B43220 = v4;                          // Fog transition-global decode: no active secondWeather blend; writes firstWeather-derived globals directly. /*0x540df8*/
      flt_B2C73C = v61; /*0x540e0d*/
      flt_B2C740 = 1.0; /*0x540e13*/
      unk_B431F8 = v62; /*0x540e1d*/
      unk_B431E8 = v63; /*0x540e27*/
      unk_B431F0 = v64; /*0x540e31*/
      unk_B43200 = v65; /*0x540e3b*/
      unk_B43208 = v66; /*0x540e45*/
      unk_B43210 = v67; /*0x540e4f*/
      unk_B43218 = v68; /*0x540e59*/
      *(float *)&OB_RendererGlobalState_010201A0[0xB3] = v69;// No-transition writer for fSunlightDimmer (B42F4C). 0x7ED6C0 may multiply nonpoint diffuse by this HDR sunlight scalar. /*0x540e63*/
      *(float *)&OB_RendererGlobalState_010201A0[0xF] = v70;// No-transition writer for leaf TreeDimmer/SunDimmer c10 source (B42EA8), resolved from first weather or the INI fallback. /*0x540e6d*/
      *(float *)&OB_RendererGlobalState_010201A0[0xAB] = v49;// Fog transition-global decode: writes firstWeather-derived byte_B42E99[0xAB] global directly when no transition blend is active. /*0x540e77*/
    }
  }
}
