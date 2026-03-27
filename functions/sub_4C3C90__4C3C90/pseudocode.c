Data *__thiscall sub_4C3C90(TESObjectCELL **this, signed int a2, signed int a3, float *a4, TESObjectCELL ***a5)
{
  Data *result; // eax
  double v9; // st7
  int v10; // edx
  int v11; // eax
  int v12; // edx
  double v13; // st7
  int v14; // eax
  double v15; // st7
  int v16; // eax
  float v17; // edx
  float *v18; // eax
  float v19; // ecx
  float v20; // eax
  TESObjectCELL **v21; // ebx
  float v22; // ecx
  float v23; // edx
  TESObjectCELL **v24; // ebx
  double v25; // st7
  TESObjectCELL **v26; // ebx
  TESObjectCELL **v27; // ebx
  float *v28; // eax
  float v29; // edx
  float v30; // ecx
  TESObjectCELL **v31; // ebx
  int v32; // ecx
  int v33; // edx
  bool v34; // zf
  int v35; // eax
  float v36; // ebx
  float *v37; // eax
  float v38; // edx
  float v39; // eax
  int v40; // ecx
  int v41; // edx
  int v42; // ecx
  int v43; // edx
  int v44; // eax
  float v45; // ebx
  float *v46; // eax
  bool v47; // zf
  float v48; // ebx
  float v49; // ecx
  float v50; // eax
  float v51; // edx
  int v52; // edx
  int v53; // ecx
  int v54; // edx
  int v55; // eax
  float v56; // eax
  float *v57; // ecx
  float v58; // ebx
  float v59; // eax
  float v60; // ecx
  float v61; // edx
  double v62; // st6
  char v63; // [esp+Ch] [ebp-38h]
  char v64; // [esp+Dh] [ebp-37h]
  char v65; // [esp+Eh] [ebp-36h]
  char v66; // [esp+Fh] [ebp-35h]
  float v67; // [esp+10h] [ebp-34h]
  float v68; // [esp+14h] [ebp-30h] BYREF
  float v69; // [esp+18h] [ebp-2Ch]
  float v70; // [esp+1Ch] [ebp-28h]
  float v71; // [esp+20h] [ebp-24h]
  float v72; // [esp+24h] [ebp-20h]
  float v73; // [esp+28h] [ebp-1Ch]
  float v74[3]; // [esp+2Ch] [ebp-18h] BYREF
  float v75; // [esp+38h] [ebp-Ch] BYREF
  float v76; // [esp+3Ch] [ebp-8h]
  float v77; // [esp+40h] [ebp-4h]
  char v78; // [esp+48h] [ebp+4h]
  char v79; // [esp+4Ch] [ebp+8h]
  float v80; // [esp+54h] [ebp+10h]

  result = (Data *)*(this + 9);
  if ( !*(_BYTE *)(a3 + *((_DWORD *)result->bsFile + a2)) && a5 )
  {
    v75 = sub_4BF060(this) + dbl_A30F70;
    v9 = sub_4BF0A0(this);
    v10 = (int)*(this + 9);
    v11 = *(_DWORD *)(*(_DWORD *)(v10 + 4) + 4 * a2);
    v12 = *(_DWORD *)(v10 + 8);
    v76 = v9 + dbl_A30F70;
    v13 = *(float *)(v11 + 0xC * a3);
    v14 = 0xC * a3 + v11;
    v63 = 0;
    v64 = 0;
    v78 = 0;
    v74[0] = v13 + v75;
    v79 = 0;
    v65 = 0;
    v66 = 0;
    v74[1] = *(float *)(v14 + 4) + v76;
    v15 = *(float *)(v14 + 8);
    v16 = *(_DWORD *)(v12 + 4 * a2);
    v17 = *(float *)(v16 + 0xC * a3 + 4);
    v18 = (float *)(0xC * a3 + v16);
    v19 = *v18;
    v74[2] = v15 + dbl_A2FC68;
    v20 = v18[2];
    v67 = 1.0;
    v71 = v19;
    v72 = v17;
    v73 = v20;
    if ( a2 >= 2 )
    {
      if ( a3 >= 0x110 )
      {
        v24 = a5[1];
        v79 = 1;
        if ( !v24 || !sub_4C3C00(v24, v74, (int)&v68, &v75) )
        {
          v75 = 0.0;
          v76 = 0.0;
          v77 = 1.0;
          v68 = 0.0;
          v69 = 0.0;
          v70 = 1.0;
        }
        if ( v24 && sub_4C3C50(v24, v74) )
          goto LABEL_32;
        goto LABEL_17;
      }
    }
    else if ( a3 < 0x11 )
    {
      v21 = a5[6];
      v78 = 1;
      if ( !v21 || !sub_4C3C00(v21, v74, (int)&v68, &v75) )
      {
        v75 = 0.0;
        v76 = 0.0;
        v77 = 1.0;
        v68 = 0.0;
        v69 = 0.0;
        v70 = 1.0;
      }
      if ( v21 && sub_4C3C50(v21, v74) )
        goto LABEL_10;
LABEL_17:
      v71 = v71 + v68;
      v72 = v69 + v72;
      v73 = v70 + v73;
      v67 = fConstant_2;
    }
    v25 = 1.0;
    if ( a2 % 2 || a3 % 0x11 )
    {
      if ( (a2 + 1) % 2 || (a3 + 1) % 0x11 )
        goto LABEL_47;
      v31 = a5[4];
      v66 = 1;
      if ( !v31 || !sub_4C3C00(v31, v74, (int)&v68, &v75) )
      {
        v75 = 0.0;
        v76 = 0.0;
        v77 = 1.0;
        v68 = 0.0;
        v69 = 0.0;
        v70 = 1.0;
      }
      if ( v31 && sub_4C3C50(v31, v74) )
        goto LABEL_32;
      v71 = v71 + v68;
      v72 = v69 + v72;
      v73 = v70 + v73;
      v25 = 1.0;
      v67 = v67 + 1.0;
      if ( v78 )
      {
        v27 = a5[7];
      }
      else
      {
        if ( !v79 )
          goto LABEL_47;
        v27 = a5[2];
      }
    }
    else
    {
      v26 = a5[3];
      v65 = 1;
      if ( !v26 || !sub_4C3C00(v26, v74, (int)&v68, &v75) )
      {
        v75 = 0.0;
        v76 = 0.0;
        v77 = 1.0;
        v68 = 0.0;
        v69 = 0.0;
        v70 = 1.0;
      }
      if ( v26 && sub_4C3C50(v26, v74) )
      {
LABEL_10:
        v22 = v69;
        *a4 = v68;
        v23 = v70;
        a4[1] = v22;
        a4[2] = v23;
        result = (Data *)*(this + 9);
        *(_BYTE *)(a3 + *((_DWORD *)result->bsFile + a2)) = 1;
        return result;
      }
      v71 = v71 + v68;
      v72 = v69 + v72;
      v73 = v70 + v73;
      v25 = 1.0;
      v67 = v67 + 1.0;
      if ( v78 )
      {
        v27 = a5[5];
      }
      else
      {
        if ( !v79 )
          goto LABEL_47;
        v27 = *a5;
      }
    }
    if ( !v27 || !sub_4C3C00(v27, v74, (int)&v68, &v75) )
    {
      v75 = 0.0;
      v76 = 0.0;
      v77 = 1.0;
      v68 = 0.0;
      v69 = 0.0;
      v70 = 1.0;
    }
    if ( v27 && sub_4C3C50(v27, v74) )
    {
LABEL_32:
      v28 = a4;
      v29 = v69;
      *a4 = v68;
      v30 = v70;
LABEL_76:
      v28[1] = v29;
      v28[2] = v30;
      goto LABEL_77;
    }
    v71 = v71 + v68;
    v72 = v69 + v72;
    v73 = v70 + v73;
    v25 = 1.0;
    v67 = v67 + 1.0;
LABEL_47:
    if ( a3 >= 0x11 || v78 )
    {
      if ( a3 < 0x110 || v79 )
        goto LABEL_56;
      v40 = (int)*(this + 9);
      v33 = *(_DWORD *)(*(_DWORD *)(v40 + 8) + 4 * a2 + 8);
      v34 = *(_BYTE *)(*(_DWORD *)(*(_DWORD *)(v40 + 0x10) + 4 * a2 + 8) + a3 - 0x110) == 0;
      v64 = 1;
      v35 = 3 * a3 - 0x330;
    }
    else
    {
      v32 = (int)*(this + 9);
      v33 = *(_DWORD *)(*(_DWORD *)(v32 + 8) + 4 * a2 - 8);
      v34 = *(_BYTE *)(*(_DWORD *)(*(_DWORD *)(v32 + 0x10) + 4 * a2 - 8) + a3 + 0x110) == 0;
      v63 = 1;
      v35 = 3 * a3 + 0x330;
    }
    v36 = *(float *)(v33 + 4 * v35 + 4);
    v37 = (float *)(v33 + 4 * v35);
    v38 = *v37;
    v39 = v37[2];
    v70 = v39;
    v69 = v36;
    v68 = v38;
    if ( !v34 )
    {
      *a4 = v38;
      a4[1] = v36;
      a4[2] = v39;
LABEL_77:
      result = (*(this + 9))->members.super.modlist.data;
      *(_BYTE *)(a3 + *(&result->errorState + a2)) = 1;
      return result;
    }
    v71 = v71 + v68;
    v72 = v69 + v72;
    v73 = v70 + v73;
    v67 = v67 + v25;
LABEL_56:
    if ( a3 % 0x11 || v65 )
    {
      if ( (a3 + 1) % 0x11 || v66 )
        goto LABEL_75;
      v52 = (int)*(this + 9);
      v53 = *(_DWORD *)(v52 + 8);
      v54 = *(_DWORD *)(v52 + 0x10);
      v55 = *(_DWORD *)(v53 + 4 * a2 + 4) + 4 * (3 * a3 - 0x30);
      v68 = *(float *)v55;
      v45 = *(float *)(v55 + 4);
      v70 = *(float *)(v55 + 8);
      v34 = *(_BYTE *)(*(_DWORD *)(v54 + 4 * a2 + 4) + a3 - 0x10) == 0;
      v69 = v45;
      if ( v34 )
      {
        v71 = v71 + v68;
        v72 = v69 + v72;
        v73 = v70 + v73;
        v67 = v67 + v25;
        if ( v63 )
        {
          v46 = (float *)(*(_DWORD *)(v53 + 4 * a2 - 4) + 0xCC0);
          v47 = *(_BYTE *)(*(_DWORD *)(v54 + 4 * a2 - 4) + 0x110) == 0;
          goto LABEL_61;
        }
        if ( v64 )
        {
          v57 = *(float **)(v53 + 4 * a2 + 0xC);
          v58 = *v57;
          v59 = v57[1];
          v34 = **(_BYTE **)(v54 + 4 * a2 + 0xC) == 0;
          v60 = v57[2];
          v68 = v58;
          v69 = v59;
          v70 = v60;
          if ( !v34 )
          {
            v61 = v69;
            *a4 = v58;
            a4[1] = v61;
            a4[2] = v60;
            result = (Data *)*(this + 9);
            *(_BYTE *)(a3 + *((_DWORD *)result->bsFile + a2)) = 1;
            return result;
          }
          goto LABEL_74;
        }
LABEL_75:
        v28 = a4;
        v80 = v25 / v67;
        v75 = v71 * v80;
        v62 = v72;
        *a4 = v75;
        v76 = v62 * v80;
        v29 = v76;
        v77 = v80 * v73;
        v30 = v77;
        goto LABEL_76;
      }
    }
    else
    {
      v41 = (int)*(this + 9);
      v42 = *(_DWORD *)(v41 + 8);
      v43 = *(_DWORD *)(v41 + 0x10);
      v44 = *(_DWORD *)(v42 + 4 * a2 - 4) + 4 * (3 * a3 + 0x30);
      v68 = *(float *)v44;
      v45 = *(float *)(v44 + 4);
      v70 = *(float *)(v44 + 8);
      v34 = *(_BYTE *)(*(_DWORD *)(v43 + 4 * a2 - 4) + a3 + 0x10) == 0;
      v69 = v45;
      if ( v34 )
      {
        v71 = v71 + v68;
        v72 = v69 + v72;
        v73 = v70 + v73;
        v67 = v67 + v25;
        if ( v63 )
        {
          v46 = (float *)(*(_DWORD *)(v42 + 4 * a2 - 0xC) + 0xD80);
          v47 = *(_BYTE *)(*(_DWORD *)(v43 + 4 * a2 - 0xC) + 0x120) == 0;
          goto LABEL_61;
        }
        if ( v64 )
        {
          v46 = (float *)(*(_DWORD *)(v42 + 4 * a2 + 4) + 0xC0);
          v47 = *(_BYTE *)(*(_DWORD *)(v43 + 4 * a2 + 4) + 0x10) == 0;
LABEL_61:
          v48 = *v46;
          v49 = v46[1];
          v50 = v46[2];
          v68 = v48;
          v69 = v49;
          v70 = v50;
          if ( !v47 )
          {
            v51 = v69;
            *a4 = v48;
            a4[1] = v51;
            a4[2] = v50;
            result = (Data *)*(this + 9);
            *(_BYTE *)(a3 + *((_DWORD *)result->bsFile + a2)) = 1;
            return result;
          }
LABEL_74:
          v71 = v71 + v68;
          v72 = v69 + v72;
          v73 = v70 + v73;
          v67 = v67 + v25;
          goto LABEL_75;
        }
        goto LABEL_75;
      }
    }
    v56 = v70;
    *a4 = v68;
    a4[1] = v45;
    a4[2] = v56;
    result = (Data *)*(&(*(this + 9))->members.super.modlist.data->errorState + a2);
    *((_BYTE *)&result->errorState + a3) = 1;
  }
  return result;
}
