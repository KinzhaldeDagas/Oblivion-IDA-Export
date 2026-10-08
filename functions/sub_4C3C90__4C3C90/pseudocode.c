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

  result = (Data *)*(this + 9); /*0x4c3c96*/
  if ( !*(_BYTE *)(a3 + *((_DWORD *)result->bsFile + a2)) && a5 ) /*0x4c3cba*/
  {
    v75 = sub_4BF060(this) + dbl_A30F70; /*0x4c3ccf*/
    v9 = sub_4BF0A0(this); /*0x4c3cd3*/
    v10 = (int)*(this + 9); /*0x4c3cde*/
    v11 = *(_DWORD *)(*(_DWORD *)(v10 + 4) + 4 * a2); /*0x4c3ce4*/
    v12 = *(_DWORD *)(v10 + 8); /*0x4c3ce7*/
    v76 = v9 + dbl_A30F70; /*0x4c3cea*/
    v13 = *(float *)(v11 + 0xC * a3); /*0x4c3cf5*/
    v14 = 0xC * a3 + v11; /*0x4c3cf8*/
    v63 = 0; /*0x4c3cfe*/
    v64 = 0; /*0x4c3d03*/
    v78 = 0; /*0x4c3d08*/
    v74[0] = v13 + v75; /*0x4c3d0d*/
    v79 = 0; /*0x4c3d11*/
    v65 = 0; /*0x4c3d19*/
    v66 = 0; /*0x4c3d22*/
    v74[1] = *(float *)(v14 + 4) + v76; /*0x4c3d27*/
    v15 = *(float *)(v14 + 8); /*0x4c3d2b*/
    v16 = *(_DWORD *)(v12 + 4 * a2); /*0x4c3d2e*/
    v17 = *(float *)(v16 + 0xC * a3 + 4); /*0x4c3d37*/
    v18 = (float *)(0xC * a3 + v16); /*0x4c3d3b*/
    v19 = *v18; /*0x4c3d40*/
    v74[2] = v15 + dbl_A2FC68; /*0x4c3d42*/
    v20 = v18[2]; /*0x4c3d48*/
    v67 = 1.0; /*0x4c3d4b*/
    v71 = v19; /*0x4c3d4f*/
    v72 = v17; /*0x4c3d53*/
    v73 = v20; /*0x4c3d57*/
    if ( a2 >= 2 ) /*0x4c3d5b*/
    {
      if ( a3 >= 0x110 ) /*0x4c3e09*/
      {
        v24 = a5[1]; /*0x4c3e0f*/
        v79 = 1; /*0x4c3e14*/
        if ( !v24 || !sub_4C3C00(v24, v74, (int)&v68, &v75) ) /*0x4c3e2c*/
        {
          v75 = 0.0; /*0x4c3e37*/
          v76 = 0.0; /*0x4c3e3f*/
          v77 = 1.0; /*0x4c3e49*/
          v68 = 0.0; /*0x4c3e4d*/
          v69 = 0.0; /*0x4c3e51*/
          v70 = 1.0; /*0x4c3e59*/
        }
        if ( v24 && sub_4C3C50(v24, v74) ) /*0x4c3e68*/
          goto LABEL_32; /*0x4c3e6f*/
        goto LABEL_17; /*0x4c3e6f*/
      }
    }
    else if ( a3 < 0x11 ) /*0x4c3d64*/
    {
      v21 = a5[6]; /*0x4c3d6a*/
      v78 = 1; /*0x4c3d6f*/
      if ( !v21 || !sub_4C3C00(v21, v74, (int)&v68, &v75) ) /*0x4c3d87*/
      {
        v75 = 0.0; /*0x4c3d92*/
        v76 = 0.0; /*0x4c3d9a*/
        v77 = 1.0; /*0x4c3da4*/
        v68 = 0.0; /*0x4c3da8*/
        v69 = 0.0; /*0x4c3dac*/
        v70 = 1.0; /*0x4c3db4*/
      }
      if ( v21 && sub_4C3C50(v21, v74) ) /*0x4c3dc7*/
        goto LABEL_10; /*0x4c3dce*/
LABEL_17:
      v71 = v71 + v68; /*0x4c3e75*/
      v72 = v69 + v72; /*0x4c3e89*/
      v73 = v70 + v73; /*0x4c3e95*/
      v67 = fConstant_2; /*0x4c3e9f*/
    }
    v25 = 1.0; /*0x4c3eb2*/
    if ( a2 % 2 || a3 % 0x11 ) /*0x4c3ed4*/
    {
      if ( (a2 + 1) % 2 || (a3 + 1) % 0x11 ) /*0x4c4025*/
        goto LABEL_47; /*0x4c4029*/
      v31 = a5[4]; /*0x4c4035*/
      v66 = 1; /*0x4c403a*/
      if ( !v31 || !sub_4C3C00(v31, v74, (int)&v68, &v75) ) /*0x4c4052*/
      {
        v75 = 0.0; /*0x4c405d*/
        v76 = 0.0; /*0x4c4065*/
        v77 = 1.0; /*0x4c406f*/
        v68 = 0.0; /*0x4c4073*/
        v69 = 0.0; /*0x4c4077*/
        v70 = 1.0; /*0x4c407f*/
      }
      if ( v31 && sub_4C3C50(v31, v74) ) /*0x4c408e*/
        goto LABEL_32; /*0x4c4095*/
      v71 = v71 + v68; /*0x4c40a8*/
      v72 = v69 + v72; /*0x4c40b4*/
      v73 = v70 + v73; /*0x4c40c0*/
      v25 = 1.0; /*0x4c40cc*/
      v67 = v67 + 1.0; /*0x4c40ce*/
      if ( v78 ) /*0x4c40d2*/
      {
        v27 = a5[7]; /*0x4c40d8*/
      }
      else
      {
        if ( !v79 ) /*0x4c40f7*/
          goto LABEL_47; /*0x4c40f7*/
        v27 = a5[2]; /*0x4c40fd*/
      }
    }
    else
    {
      v26 = a5[3]; /*0x4c3ee2*/
      v65 = 1; /*0x4c3ee7*/
      if ( !v26 || !sub_4C3C00(v26, v74, (int)&v68, &v75) ) /*0x4c3eff*/
      {
        v75 = 0.0; /*0x4c3f0a*/
        v76 = 0.0; /*0x4c3f12*/
        v77 = 1.0; /*0x4c3f1c*/
        v68 = 0.0; /*0x4c3f20*/
        v69 = 0.0; /*0x4c3f24*/
        v70 = 1.0; /*0x4c3f2c*/
      }
      if ( v26 && sub_4C3C50(v26, v74) ) /*0x4c3f3b*/
      {
LABEL_10:
        v22 = v69; /*0x4c3dd4*/
        *a4 = v68; /*0x4c3de0*/
        v23 = v70; /*0x4c3de2*/
        a4[1] = v22; /*0x4c3de6*/
        a4[2] = v23; /*0x4c3de9*/
        result = (Data *)*(this + 9); /*0x4c3dec*/
        *(_BYTE *)(a3 + *((_DWORD *)result->bsFile + a2)) = 1; /*0x4c3df6*/
        return result; /*0x4c3e00*/
      }
      v71 = v71 + v68; /*0x4c3f55*/
      v72 = v69 + v72; /*0x4c3f61*/
      v73 = v70 + v73; /*0x4c3f6d*/
      v25 = 1.0; /*0x4c3f79*/
      v67 = v67 + 1.0; /*0x4c3f7b*/
      if ( v78 ) /*0x4c3f7f*/
      {
        v27 = a5[5]; /*0x4c3f89*/
      }
      else
      {
        if ( !v79 ) /*0x4c40e5*/
          goto LABEL_47; /*0x4c40e5*/
        v27 = *a5; /*0x4c40eb*/
      }
    }
    if ( !v27 || !sub_4C3C00(v27, v74, (int)&v68, &v75) ) /*0x4c3fa3*/
    {
      v75 = 0.0; /*0x4c3fae*/
      v76 = 0.0; /*0x4c3fb6*/
      v77 = 1.0; /*0x4c3fc0*/
      v68 = 0.0; /*0x4c3fc4*/
      v69 = 0.0; /*0x4c3fc8*/
      v70 = 1.0; /*0x4c3fd0*/
    }
    if ( v27 && sub_4C3C50(v27, v74) ) /*0x4c3fe3*/
    {
LABEL_32:
      v28 = a4; /*0x4c3ff0*/
      v29 = v69; /*0x4c3ff8*/
      *a4 = v68; /*0x4c3ffc*/
      v30 = v70; /*0x4c3ffe*/
LABEL_76:
      v28[1] = v29; /*0x4c4496*/
      v28[2] = v30; /*0x4c4499*/
      goto LABEL_77; /*0x4c4499*/
    }
    v71 = v71 + v68; /*0x4c410d*/
    v72 = v69 + v72; /*0x4c4119*/
    v73 = v70 + v73; /*0x4c4125*/
    v25 = 1.0; /*0x4c4131*/
    v67 = v67 + 1.0; /*0x4c4133*/
LABEL_47:
    if ( a3 >= 0x11 || v78 ) /*0x4c4141*/
    {
      if ( a3 < 0x110 || v79 ) /*0x4c41a2*/
        goto LABEL_56; /*0x4c41a2*/
      v40 = (int)*(this + 9); /*0x4c41a4*/
      v33 = *(_DWORD *)(*(_DWORD *)(v40 + 8) + 4 * a2 + 8); /*0x4c41b1*/
      v34 = *(_BYTE *)(*(_DWORD *)(*(_DWORD *)(v40 + 0x10) + 4 * a2 + 8) + a3 - 0x110) == 0; /*0x4c41b5*/
      v64 = 1; /*0x4c41bd*/
      v35 = 3 * a3 - 0x330; /*0x4c41c2*/
    }
    else
    {
      v32 = (int)*(this + 9); /*0x4c4143*/
      v33 = *(_DWORD *)(*(_DWORD *)(v32 + 8) + 4 * a2 - 8); /*0x4c4150*/
      v34 = *(_BYTE *)(*(_DWORD *)(*(_DWORD *)(v32 + 0x10) + 4 * a2 - 8) + a3 + 0x110) == 0; /*0x4c4154*/
      v63 = 1; /*0x4c415c*/
      v35 = 3 * a3 + 0x330; /*0x4c4161*/
    }
    v36 = *(float *)(v33 + 4 * v35 + 4); /*0x4c4168*/
    v37 = (float *)(v33 + 4 * v35); /*0x4c416c*/
    v38 = *v37; /*0x4c416f*/
    v39 = v37[2]; /*0x4c4171*/
    v70 = v39; /*0x4c4174*/
    v69 = v36; /*0x4c4178*/
    v68 = v38; /*0x4c417c*/
    if ( !v34 ) /*0x4c4180*/
    {
      *a4 = v38; /*0x4c4188*/
      a4[1] = v36; /*0x4c418a*/
      a4[2] = v39; /*0x4c418d*/
LABEL_77:
      result = (*(this + 9))->members.super.modlist.data; /*0x4c449c*/
      *(_BYTE *)(a3 + *(&result->errorState + a2)) = 1; /*0x4c44a5*/
      return result; /*0x4c44a5*/
    }
    v71 = v71 + v68; /*0x4c41d3*/
    v72 = v69 + v72; /*0x4c41df*/
    v73 = v70 + v73; /*0x4c41eb*/
    v67 = v67 + v25; /*0x4c41f5*/
LABEL_56:
    if ( a3 % 0x11 || v65 ) /*0x4c4220*/
    {
      if ( (a3 + 1) % 0x11 || v66 ) /*0x4c4304*/
        goto LABEL_75; /*0x4c4304*/
      v52 = (int)*(this + 9); /*0x4c430a*/
      v53 = *(_DWORD *)(v52 + 8); /*0x4c430d*/
      v54 = *(_DWORD *)(v52 + 0x10); /*0x4c4314*/
      v55 = *(_DWORD *)(v53 + 4 * a2 + 4) + 4 * (3 * a3 - 0x30); /*0x4c431b*/
      v68 = *(float *)v55; /*0x4c4320*/
      v45 = *(float *)(v55 + 4); /*0x4c4324*/
      v70 = *(float *)(v55 + 8); /*0x4c432a*/
      v34 = *(_BYTE *)(*(_DWORD *)(v54 + 4 * a2 + 4) + a3 - 0x10) == 0; /*0x4c4332*/
      v69 = v45; /*0x4c4337*/
      if ( v34 ) /*0x4c433b*/
      {
        v71 = v71 + v68; /*0x4c4377*/
        v72 = v69 + v72; /*0x4c4383*/
        v73 = v70 + v73; /*0x4c438f*/
        v67 = v67 + v25; /*0x4c4399*/
        if ( v63 ) /*0x4c439d*/
        {
          v46 = (float *)(*(_DWORD *)(v53 + 4 * a2 - 4) + 0xCC0); /*0x4c43a7*/
          v47 = *(_BYTE *)(*(_DWORD *)(v54 + 4 * a2 - 4) + 0x110) == 0; /*0x4c43ac*/
          goto LABEL_61; /*0x4c43b3*/
        }
        if ( v64 ) /*0x4c43de*/
        {
          v57 = *(float **)(v53 + 4 * a2 + 0xC); /*0x4c43e0*/
          v58 = *v57; /*0x4c43e4*/
          v59 = v57[1]; /*0x4c43e6*/
          v34 = **(_BYTE **)(v54 + 4 * a2 + 0xC) == 0; /*0x4c43ed*/
          v60 = v57[2]; /*0x4c43f0*/
          v68 = v58; /*0x4c43f3*/
          v69 = v59; /*0x4c43f7*/
          v70 = v60; /*0x4c43fb*/
          if ( !v34 ) /*0x4c43ff*/
          {
            v61 = v69; /*0x4c4407*/
            *a4 = v58; /*0x4c440b*/
            a4[1] = v61; /*0x4c440d*/
            a4[2] = v60; /*0x4c4410*/
            result = (Data *)*(this + 9); /*0x4c4413*/
            *(_BYTE *)(a3 + *((_DWORD *)result->bsFile + a2)) = 1; /*0x4c441d*/
            return result; /*0x4c4427*/
          }
          goto LABEL_74; /*0x4c43ff*/
        }
LABEL_75:
        v28 = a4; /*0x4c4458*/
        v80 = v25 / v67; /*0x4c4460*/
        v75 = v71 * v80; /*0x4c4472*/
        v62 = v72; /*0x4c447a*/
        *a4 = v75; /*0x4c447e*/
        v76 = v62 * v80; /*0x4c4482*/
        v29 = v76; /*0x4c4486*/
        v77 = v80 * v73; /*0x4c448e*/
        v30 = v77; /*0x4c4492*/
        goto LABEL_76; /*0x4c4492*/
      }
    }
    else
    {
      v41 = (int)*(this + 9); /*0x4c4226*/
      v42 = *(_DWORD *)(v41 + 8); /*0x4c4229*/
      v43 = *(_DWORD *)(v41 + 0x10); /*0x4c4230*/
      v44 = *(_DWORD *)(v42 + 4 * a2 - 4) + 4 * (3 * a3 + 0x30); /*0x4c4237*/
      v68 = *(float *)v44; /*0x4c423c*/
      v45 = *(float *)(v44 + 4); /*0x4c4240*/
      v70 = *(float *)(v44 + 8); /*0x4c4246*/
      v34 = *(_BYTE *)(*(_DWORD *)(v43 + 4 * a2 - 4) + a3 + 0x10) == 0; /*0x4c424e*/
      v69 = v45; /*0x4c4253*/
      if ( v34 ) /*0x4c4257*/
      {
        v71 = v71 + v68; /*0x4c426a*/
        v72 = v69 + v72; /*0x4c4276*/
        v73 = v70 + v73; /*0x4c4282*/
        v67 = v67 + v25; /*0x4c428c*/
        if ( v63 ) /*0x4c4290*/
        {
          v46 = (float *)(*(_DWORD *)(v42 + 4 * a2 - 0xC) + 0xD80); /*0x4c429e*/
          v47 = *(_BYTE *)(*(_DWORD *)(v43 + 4 * a2 - 0xC) + 0x120) == 0; /*0x4c42a3*/
          goto LABEL_61; /*0x4c42a3*/
        }
        if ( v64 ) /*0x4c43bd*/
        {
          v46 = (float *)(*(_DWORD *)(v42 + 4 * a2 + 4) + 0xC0); /*0x4c43cb*/
          v47 = *(_BYTE *)(*(_DWORD *)(v43 + 4 * a2 + 4) + 0x10) == 0; /*0x4c43d0*/
LABEL_61:
          v48 = *v46; /*0x4c42aa*/
          v49 = v46[1]; /*0x4c42ac*/
          v50 = v46[2]; /*0x4c42af*/
          v68 = v48; /*0x4c42b2*/
          v69 = v49; /*0x4c42b6*/
          v70 = v50; /*0x4c42ba*/
          if ( !v47 ) /*0x4c42be*/
          {
            v51 = v69; /*0x4c42ca*/
            *a4 = v48; /*0x4c42ce*/
            a4[1] = v51; /*0x4c42d0*/
            a4[2] = v50; /*0x4c42d3*/
            result = (Data *)*(this + 9); /*0x4c42d6*/
            *(_BYTE *)(a3 + *((_DWORD *)result->bsFile + a2)) = 1; /*0x4c42e0*/
            return result; /*0x4c42ea*/
          }
LABEL_74:
          v71 = v71 + v68; /*0x4c442a*/
          v72 = v69 + v72; /*0x4c443e*/
          v73 = v70 + v73; /*0x4c444a*/
          v67 = v67 + v25; /*0x4c4454*/
          goto LABEL_75; /*0x4c4454*/
        }
        goto LABEL_75; /*0x4c43bd*/
      }
    }
    v56 = v70; /*0x4c4347*/
    *a4 = v68; /*0x4c434b*/
    a4[1] = v45; /*0x4c434d*/
    a4[2] = v56; /*0x4c4350*/
    result = (Data *)*(&(*(this + 9))->members.super.modlist.data->errorState + a2); /*0x4c4359*/
    *((_BYTE *)&result->errorState + a3) = 1; /*0x4c435d*/
  }
  return result; /*0x4c3dfa*/
}
