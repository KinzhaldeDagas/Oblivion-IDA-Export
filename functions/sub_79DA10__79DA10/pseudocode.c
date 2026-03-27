unsigned int __thiscall sub_79DA10(_DWORD *this, int a2, unsigned int *a3, unsigned int *a4)
{
  _DWORD *v5; // ebp
  double v6; // st7
  int v7; // eax
  int v9; // edi
  double v10; // st7
  double v11; // st6
  double v12; // st5
  float *v13; // ecx
  int v14; // edi
  int v15; // ebx
  unsigned int v16; // eax
  unsigned int v17; // eax
  float v18; // edx
  float v19; // ecx
  float v20; // eax
  double v21; // st7
  unsigned int v22; // edi
  unsigned int result; // eax
  double v24; // st7
  unsigned int v25; // eax
  unsigned int v26; // eax
  unsigned int v27; // eax
  unsigned int v28; // ebx
  int v29; // ecx
  double v30; // st7
  bool v31; // zf
  unsigned int v32; // eax
  unsigned int v33; // eax
  unsigned int v34; // ebx
  unsigned int v35; // eax
  unsigned int v36; // eax
  float *v37; // ecx
  unsigned int v38; // ebx
  unsigned int v39; // eax
  unsigned int v40; // eax
  unsigned int v41; // eax
  unsigned int v42; // ebx
  unsigned int v43; // eax
  unsigned int v44; // ebx
  unsigned int v45; // eax
  unsigned int v46; // ebp
  float *v47; // ecx
  float v49; // [esp+18h] [ebp-20h]
  void *v50; // [esp+18h] [ebp-20h]
  float v51; // [esp+20h] [ebp-18h]
  float v52; // [esp+2Ch] [ebp-Ch] BYREF
  float v53; // [esp+30h] [ebp-8h]
  float v54; // [esp+34h] [ebp-4h]
  float v55; // [esp+3Ch] [ebp+4h]
  float v56; // [esp+3Ch] [ebp+4h]
  unsigned int v57; // [esp+3Ch] [ebp+4h]
  float v58; // [esp+3Ch] [ebp+4h]
  unsigned int v59; // [esp+3Ch] [ebp+4h]
  float v60; // [esp+3Ch] [ebp+4h]
  float v61; // [esp+3Ch] [ebp+4h]
  float v62; // [esp+3Ch] [ebp+4h]
  float v63; // [esp+3Ch] [ebp+4h]
  float v64; // [esp+3Ch] [ebp+4h]
  float v65; // [esp+3Ch] [ebp+4h]
  float v66; // [esp+3Ch] [ebp+4h]
  float v67; // [esp+40h] [ebp+8h]

  v5 = this;
  v6 = sub_784210((float *)*(this + 0xC), 0.0);
  v7 = v5[0xD];
  v9 = 0;
  v49 = v6 * *(float *)(a2 + 0x14);
  v10 = 1.0;
  if ( v7 )
  {
    v52 = 0.0;
    while ( 1 )
    {
      v11 = (double)v9;
      if ( v9 < 0 )
        v11 = v11 + flt_A2FC78;
      v12 = (double)v7;
      if ( v7 < 0 )
        v12 = v12 + flt_A2FC78;
      v13 = (float *)v5[0xC];
      v55 = v10 - v11 / (v12 - v10);
      v53 = -v55 * *(float *)(a2 + 0x14);
      v54 = sub_784210(v13, v55) * *(float *)(a2 + 0x14) - v49;
      sub_791630(a3, (int *)&v52);
      v7 = v5[0xD];
      if ( ++v9 >= (unsigned int)v7 )
        break;
      v10 = 1.0;
    }
  }
  v14 = v5[0xD] - 2;
  if ( v14 >= 0 )
  {
    v15 = 0xC * v14;
    do
    {
      v16 = a3[1];
      if ( !v16 || v14 >= (unsigned int)((int)(a3[2] - v16) / 0xC) )
        _invalid_parameter_noinfo();
      v17 = a3[1];
      v18 = *(float *)(v17 + v15 + 4);
      v19 = *(float *)(v17 + v15);
      v20 = *(float *)(v15 + v17 + 8);
      v53 = v18;
      v21 = v18 * dbl_A3D360;
      v52 = v19;
      v53 = v21;
      v54 = v20;
      sub_791630(a3, (int *)&v52);
      --v14;
      v15 -= 0xC;
    }
    while ( v14 >= 0 );
  }
  v22 = 0;
  result = sub_6F1080(a3);
  if ( result )
  {
    do
    {
      if ( v22 == v5[0xD] - 1 )
      {
        v24 = flt_B2BA00;
      }
      else
      {
        if ( v22 )
        {
          v31 = v22 == sub_6F1080(a3) - 1;
          v32 = a3[1];
          if ( v31 )
          {
            if ( !v32 || v22 >= (int)(a3[2] - v32) / 0xC )
              _invalid_parameter_noinfo();
            v33 = a3[1];
            v34 = v22 - 1;
            if ( !v33 || v34 >= (int)(a3[2] - v33) / 0xC )
              _invalid_parameter_noinfo();
            v35 = a3[1];
            if ( !v35 || v22 >= (int)(a3[2] - v35) / 0xC )
              _invalid_parameter_noinfo();
            v36 = a3[1];
            v57 = v36;
            if ( !v36 || v34 >= (int)(a3[2] - v36) / 0xC )
              _invalid_parameter_noinfo();
            v37 = (float *)a3[1];
            v58 = *(float *)(v57 + 0xC * v22 + 8) - v37[3 * v34 + 2];
            sub_98598A(v37);
            v30 = v58;
          }
          else
          {
            v38 = v22 + 1;
            if ( !v32 || v38 >= (int)(a3[2] - v32) / 0xC )
              _invalid_parameter_noinfo();
            v39 = a3[1];
            if ( !v39 || v22 >= (int)(a3[2] - v39) / 0xC )
              _invalid_parameter_noinfo();
            v40 = a3[1];
            v50 = (void *)(v40 + 0xC * v22);
            if ( !v40 || v38 >= (int)(a3[2] - v40) / 0xC )
              _invalid_parameter_noinfo();
            v41 = a3[1];
            v59 = v41 + 0xC * v38;
            if ( !v41 || v22 >= (int)(a3[2] - v41) / 0xC )
              _invalid_parameter_noinfo();
            v42 = a3[1];
            v60 = *(float *)(v59 + 8) - *(float *)(v42 + 0xC * v22 + 8);
            sub_98598A(v50);
            v51 = v60;
            if ( !v42 || v22 >= (int)(a3[2] - v42) / 0xC )
              _invalid_parameter_noinfo();
            v43 = a3[1];
            v44 = v22 - 1;
            if ( !v43 || v44 >= (int)(a3[2] - v43) / 0xC )
              _invalid_parameter_noinfo();
            v45 = a3[1];
            if ( !v45 || v22 >= (int)(a3[2] - v45) / 0xC )
              _invalid_parameter_noinfo();
            v46 = a3[1];
            if ( !v46 || v44 >= (int)(a3[2] - v46) / 0xC )
              _invalid_parameter_noinfo();
            v47 = (float *)a3[1];
            v61 = *(float *)(0xC * v22 + v46 + 8) - v47[3 * v44 + 2];
            sub_98598A(v47);
            v30 = (v61 + v51) * dbl_A2FAA0;
          }
        }
        else
        {
          v25 = a3[1];
          if ( !v25 || (unsigned int)((int)(a3[2] - v25) / 0xC) <= 1 )
            _invalid_parameter_noinfo();
          v26 = a3[1];
          if ( !v26 || !((int)(a3[2] - v26) / 0xC) )
            _invalid_parameter_noinfo();
          v27 = a3[1];
          if ( !v27 || (unsigned int)((int)(a3[2] - v27) / 0xC) <= 1 )
            _invalid_parameter_noinfo();
          v28 = a3[1];
          if ( !v28 || (v29 = (int)(a3[2] - v28) / 0xC) == 0 )
            _invalid_parameter_noinfo();
          v56 = *(float *)(v28 + 0x14) - *(float *)(a3[1] + 8);
          sub_98598A((void *)v29);
          v30 = v56;
        }
        v24 = v30 + flt_B2BA00;
        v5 = this;
      }
      v62 = v24;
      v67 = cos(v62);
      v53 = v67;
      v63 = sin(v62);
      v54 = v63;
      v64 = v63 * v63 + v67 * v67 + 0.0 * 0.0;
      v65 = sqrt(v64);
      v66 = 1.0 / v65;
      v52 = dbl_A2FC68 * v66;
      v53 = v67 * v66;
      v54 = v66 * v54;
      sub_791630(a4, (int *)&v52);
      ++v22;
      result = sub_6F1080(a3);
    }
    while ( v22 < result );
  }
  return result;
}
