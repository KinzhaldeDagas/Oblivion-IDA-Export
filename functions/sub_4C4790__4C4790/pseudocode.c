char __thiscall sub_4C4790(TESObjectCELL **this, float *a2, _DWORD *a3)
{
  char result; // al
  double v5; // st7
  double v6; // st7
  int *v7; // ecx
  int *v8; // edx
  int *v9; // eax
  double v10; // st7
  float *v11; // eax
  float *v12; // eax
  float *v13; // eax
  float *v14; // eax
  bool v15; // zf
  float *v16; // eax
  float *v17; // eax
  float *v18; // eax
  float *v19; // eax
  float *v20; // eax
  float *v21; // eax
  float *v22; // eax
  float *v23; // eax
  float v24; // [esp+4h] [ebp-114h]
  float *v25; // [esp+Ch] [ebp-10Ch]
  float *v26; // [esp+Ch] [ebp-10Ch]
  float *v27; // [esp+10h] [ebp-108h]
  float *v28; // [esp+10h] [ebp-108h]
  int *v29; // [esp+14h] [ebp-104h]
  float v30; // [esp+14h] [ebp-104h]
  float v31; // [esp+18h] [ebp-100h]
  int *v32; // [esp+1Ch] [ebp-FCh]
  float *v33; // [esp+1Ch] [ebp-FCh]
  float *v34; // [esp+20h] [ebp-F8h]
  float *v35; // [esp+20h] [ebp-F8h]
  float v36; // [esp+2Ch] [ebp-ECh]
  float v37; // [esp+2Ch] [ebp-ECh]
  float v38; // [esp+2Ch] [ebp-ECh]
  float v39; // [esp+30h] [ebp-E8h]
  float v40; // [esp+30h] [ebp-E8h]
  float v41; // [esp+30h] [ebp-E8h]
  float v42; // [esp+34h] [ebp-E4h]
  float v43; // [esp+34h] [ebp-E4h]
  float v44; // [esp+34h] [ebp-E4h]
  float v45; // [esp+34h] [ebp-E4h]
  float v46; // [esp+34h] [ebp-E4h]
  float v47; // [esp+34h] [ebp-E4h]
  int v48[4]; // [esp+38h] [ebp-E0h] BYREF
  int v49[4]; // [esp+48h] [ebp-D0h] BYREF
  int v50[4]; // [esp+58h] [ebp-C0h] BYREF
  int v51[4]; // [esp+68h] [ebp-B0h] BYREF
  int v52[4]; // [esp+78h] [ebp-A0h] BYREF
  int v53[4]; // [esp+88h] [ebp-90h] BYREF
  int v54[4]; // [esp+98h] [ebp-80h] BYREF
  int v55[4]; // [esp+A8h] [ebp-70h] BYREF
  float v56[4]; // [esp+B8h] [ebp-60h] BYREF
  _BYTE v57[24]; // [esp+C8h] [ebp-50h] BYREF
  int v58; // [esp+E0h] [ebp-38h]
  int v59; // [esp+108h] [ebp-10h]
  int v60; // [esp+10Ch] [ebp-Ch]
  int v61; // [esp+110h] [ebp-8h]
  char v62; // [esp+114h] [ebp-4h]
  char v63; // [esp+115h] [ebp-3h]

  result = sub_4C3030(this, (int)v57, a2, 0);
  if ( result )
  {
    *(float *)v50 = 0.0;
    *(float *)&v50[1] = 0.0;
    *(float *)&v50[2] = 0.0;
    *(float *)&v50[3] = 0.0;
    *(float *)v49 = 0.0;
    *(float *)&v49[1] = 0.0;
    *(float *)&v49[2] = 0.0;
    *(float *)&v49[3] = 0.0;
    *(float *)v48 = 0.0;
    *(float *)&v48[1] = 0.0;
    *(float *)&v48[2] = 0.0;
    *(float *)&v48[3] = 0.0;
    v5 = *a2;
    unknown_libname_14(dbl_A3F428, v5);
    v39 = v5;
    v40 = v39 * dbl_A46050;
    v6 = a2[1];
    unknown_libname_14(dbl_A3F428, v6);
    v36 = v6;
    v37 = v36 * dbl_A46050;
    sub_4C2000(this, v58, v59, (int)v50);
    sub_4C2000(this, v58, v60, (int)v49);
    sub_4C2000(this, v58, v61, (int)v48);
    if ( v62 )
    {
      v15 = v63 == 0;
      if ( !v63 )
      {
        v33 = sub_4BFBD0((float *)v54, v37, (float *)v48);
        v44 = 1.0 - v37;
        v30 = v44;
        v26 = sub_4BFBD0((float *)v51, v40, (float *)v49);
        v45 = 1.0 - v40;
        v16 = sub_4BFBD0((float *)v55, v45, (float *)v50);
        v17 = sub_4BFB30(v16, v56, v26);
        v18 = sub_4BFB80(v17, (float *)v52, v30);
        v19 = sub_4BFB30(v18, (float *)v53, v33);
        *a3 = *(_DWORD *)v19;
        a3[1] = *((_DWORD *)v19 + 1);
        a3[2] = *((_DWORD *)v19 + 2);
        a3[3] = *((_DWORD *)v19 + 3);
        v15 = 1;
      }
      if ( !v15 )
      {
        v46 = 1.0 - v37;
        v35 = sub_4BFBD0((float *)v55, v46, (float *)v49);
        v28 = sub_4BFBD0((float *)v53, v40, (float *)v50);
        v47 = 1.0 - v40;
        v20 = sub_4BFBD0((float *)v51, v47, (float *)v48);
        v21 = sub_4BFB30(v20, (float *)v52, v28);
        v22 = sub_4BFB80(v21, (float *)v54, v37);
        v23 = sub_4BFB30(v22, v56, v35);
        *a3 = *(_DWORD *)v23;
        a3[1] = *((_DWORD *)v23 + 1);
        a3[2] = *((_DWORD *)v23 + 2);
        a3[3] = *((_DWORD *)v23 + 3);
      }
      return 1;
    }
    else
    {
      if ( v63 )
      {
        v42 = 1.0 - v37;
        v34 = sub_4BFBD0((float *)v53, v42, (float *)v49);
        v32 = v52;
        v31 = v37;
        v29 = v51;
        v27 = sub_4BFBD0((float *)v49, v40, (float *)v48);
        v7 = v48;
        v8 = v50;
        v9 = v54;
        v43 = 1.0 - v40;
        v10 = v43;
      }
      else
      {
        v34 = sub_4BFBD0((float *)v51, v37, (float *)v48);
        v32 = v48;
        v38 = 1.0 - v37;
        v31 = v38;
        v29 = v50;
        v27 = sub_4BFBD0((float *)v52, v40, (float *)v50);
        v7 = v49;
        v8 = v49;
        v9 = v53;
        v41 = 1.0 - v40;
        v10 = v41;
      }
      v25 = (float *)v7;
      v24 = v10;
      v11 = sub_4BFBD0((float *)v9, v24, (float *)v8);
      v12 = sub_4BFB30(v11, v25, v27);
      v13 = sub_4BFB80(v12, (float *)v29, v31);
      v14 = sub_4BFB30(v13, (float *)v32, v34);
      *a3 = *(_DWORD *)v14;
      a3[1] = *((_DWORD *)v14 + 1);
      a3[2] = *((_DWORD *)v14 + 2);
      a3[3] = *((_DWORD *)v14 + 3);
      return 1;
    }
  }
  return result;
}
