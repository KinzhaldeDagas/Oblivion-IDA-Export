double __usercall sub_540850@<st0>(Sky *this@<ecx>, double a2@<st0>)
{
  float *firstWeather; // esi
  double v4; // st5
  int v5; // ecx
  double v6; // st5
  double v7; // st5
  double v8; // st5
  double v9; // st5
  double v10; // st5
  double v11; // st6
  double v12; // st5
  double v13; // st4
  double v14; // st3
  float *secondWeather; // esi
  double v16; // st2
  double v17; // st0
  double v18; // st0
  double v19; // st0
  double v20; // st0
  double v21; // st0
  double v22; // st0
  double v23; // st6
  double v24; // st1
  double v25; // rt2
  double v26; // st2
  double v27; // st6
  double v28; // st5
  double v29; // st2
  double v30; // rtt
  double v31; // rt0
  double v32; // st3
  double v33; // st5
  double v34; // st4
  double v35; // st3
  double v36; // rt1
  double v37; // st5
  double v38; // st4
  double v39; // rt2
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
  float v61; // [esp+4h] [ebp-60h]
  float v62; // [esp+8h] [ebp-5Ch]
  float v63; // [esp+Ch] [ebp-58h]
  float v64; // [esp+10h] [ebp-54h]
  float v65; // [esp+14h] [ebp-50h]
  float v66; // [esp+18h] [ebp-4Ch]
  float v67; // [esp+1Ch] [ebp-48h]
  float v68; // [esp+20h] [ebp-44h]
  float v69; // [esp+24h] [ebp-40h]
  float v70; // [esp+28h] [ebp-3Ch]
  float v71; // [esp+2Ch] [ebp-38h]
  float v72; // [esp+30h] [ebp-34h]
  float v73; // [esp+34h] [ebp-30h]
  float v74; // [esp+40h] [ebp-24h]
  float v75; // [esp+44h] [ebp-20h]
  float v76; // [esp+48h] [ebp-1Ch]
  float v77; // [esp+4Ch] [ebp-18h]
  float v78; // [esp+50h] [ebp-14h]
  float v79; // [esp+54h] [ebp-10h]
  float v80; // [esp+58h] [ebp-Ch]
  float v81; // [esp+5Ch] [ebp-8h]
  float v82; // [esp+60h] [ebp-4h]

  if ( UseHDR )
  {
    firstWeather = (float *)this->firstWeather;
    if ( firstWeather[0x4C] <= 0.0 )
      v4 = flt_A56E28;
    else
      v4 = firstWeather[0x4C];
    v40 = v4;
    v62 = v40;
    v5 = Double_To_SInt32(a2);
    if ( firstWeather[0x45] <= 0.0 )
      v6 = flt_B06DFC;
    else
      v6 = firstWeather[0x45];
    v41 = v6;
    v63 = v41;
    if ( firstWeather[0x4B] <= 0.0 )
      v7 = flt_B06E04;
    else
      v7 = firstWeather[0x4B];
    v42 = v7;
    v64 = v42;
    if ( firstWeather[0x4A] <= 0.0 )
      v8 = flt_B06E0C;
    else
      v8 = firstWeather[0x4A];
    v43 = v8;
    v65 = v43;
    if ( firstWeather[0x44] <= 0.0 )
      v9 = flt_B06E3C;
    else
      v9 = firstWeather[0x44];
    v44 = v9;
    v66 = v44;
    if ( firstWeather[0x47] <= 0.0 )
      v10 = flt_B06E44;
    else
      v10 = firstWeather[0x47];
    v45 = v10;
    v67 = v45;
    if ( firstWeather[0x49] <= 0.0 )
      v46 = flt_B06E5C;
    else
      v46 = firstWeather[0x49];
    v68 = v46;
    v11 = flt_B06E5C;
    if ( firstWeather[0x48] <= 0.0 )
      v47 = flt_B06E64;
    else
      v47 = firstWeather[0x48];
    v69 = v47;
    v12 = flt_B06E64;
    if ( firstWeather[0x4F] <= 0.0 )
      v48 = flt_B06E34;
    else
      v48 = firstWeather[0x4F];
    v70 = v48;
    v13 = flt_B06E34;
    if ( firstWeather[0x51] <= 0.0 )
      v49 = flt_B06E4C;
    else
      v49 = firstWeather[0x51];
    v71 = v49;
    v14 = flt_B06E4C;
    if ( firstWeather[0x50] <= 0.0 )
      v50 = flt_B06E54;
    else
      v50 = firstWeather[0x50];
    secondWeather = (float *)this->secondWeather;
    v72 = v50;
    if ( secondWeather && this->weatherPercent < 1.0 )
    {
      v16 = flt_B06E54;
      if ( secondWeather[0x4C] <= 0.0 )
        v17 = flt_A56E28;
      else
        v17 = secondWeather[0x4C];
      v51 = v17;
      v73 = v51;
      Double_To_SInt32(a2);
      if ( secondWeather[0x45] <= 0.0 )
        v18 = flt_B06DFC;
      else
        v18 = secondWeather[0x45];
      v52 = v18;
      v74 = v52;
      if ( secondWeather[0x4B] <= 0.0 )
        v19 = flt_B06E04;
      else
        v19 = secondWeather[0x4B];
      v53 = v19;
      v75 = v53;
      if ( secondWeather[0x4A] <= 0.0 )
        v20 = flt_B06E0C;
      else
        v20 = secondWeather[0x4A];
      v54 = v20;
      v76 = v54;
      if ( secondWeather[0x44] <= 0.0 )
        v21 = flt_B06E3C;
      else
        v21 = secondWeather[0x44];
      v55 = v21;
      v77 = v55;
      if ( secondWeather[0x47] <= 0.0 )
        v22 = flt_B06E44;
      else
        v22 = secondWeather[0x47];
      v56 = v22;
      v78 = v56;
      if ( secondWeather[0x49] <= 0.0 )
      {
        v24 = v11;
        v23 = 0.0;
      }
      else
      {
        v23 = 0.0;
        v24 = secondWeather[0x49];
      }
      v57 = v24;
      v79 = v57;
      v25 = v16;
      v26 = v23;
      v27 = v25;
      if ( v26 >= secondWeather[0x48] )
      {
        v30 = v26;
        v29 = v12;
        v28 = v30;
      }
      else
      {
        v28 = v26;
        v29 = secondWeather[0x48];
      }
      v58 = v29;
      v80 = v58;
      v31 = v14;
      v32 = v28;
      v33 = v31;
      if ( v32 >= secondWeather[0x4F] )
      {
        v36 = v32;
        v35 = v13;
        v34 = v36;
      }
      else
      {
        v34 = v32;
        v35 = secondWeather[0x4F];
      }
      v59 = v35;
      v81 = v59;
      if ( v34 >= secondWeather[0x51] )
      {
        v39 = v34;
        v38 = v33;
        v37 = v39;
      }
      else
      {
        v37 = v34;
        v38 = secondWeather[0x51];
      }
      v60 = v38;
      v82 = v60;
      if ( v37 < secondWeather[0x50] )
        v27 = secondWeather[0x50];
      v61 = v27;
      flt_B2C73C = v73;
      flt_B2C740 = v62;
      dword_B43220 = Double_To_SInt32(a2);
      flt_B431F8 = v74 + (v63 - v74) * ((this->weatherPercent - 0.0) / (1.0 - 0.0));
      flt_B431E8 = v75 + (v64 - v75) * ((this->weatherPercent - 0.0) / (1.0 - 0.0));
      flt_B431F0 = v76 + (v65 - v76) * ((this->weatherPercent - 0.0) / (1.0 - 0.0));
      flt_B43200 = v77 + (v66 - v77) * ((this->weatherPercent - 0.0) / (1.0 - 0.0));
      flt_B43208 = v78 + (v67 - v78) * ((this->weatherPercent - 0.0) / (1.0 - 0.0));
      flt_B43210 = v79 + (v68 - v79) * ((this->weatherPercent - 0.0) / (1.0 - 0.0));
      flt_B43218 = v80 + (v69 - v80) * ((this->weatherPercent - 0.0) / (1.0 - 0.0));
      flt_B42F4C = v81 + (v70 - v81) * ((this->weatherPercent - 0.0) / (1.0 - 0.0));
      flt_B42EA8 = v82 + (v71 - v82) * ((this->weatherPercent - 0.0) / (1.0 - 0.0));
      flt_B42F44 = v61 + (v72 - v61) * ((this->weatherPercent - 0.0) / (1.0 - 0.0));
    }
    else
    {
      dword_B43220 = v5;
      flt_B2C73C = v62;
      flt_B2C740 = 1.0;
      flt_B431F8 = v63;
      flt_B431E8 = v64;
      flt_B431F0 = v65;
      flt_B43200 = v66;
      flt_B43208 = v67;
      flt_B43210 = v68;
      flt_B43218 = v69;
      flt_B42F4C = v70;
      flt_B42EA8 = v71;
      flt_B42F44 = v50;
    }
  }
  return a2;
}
