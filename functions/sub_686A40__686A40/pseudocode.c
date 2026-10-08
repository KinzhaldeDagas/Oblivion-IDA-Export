float *__cdecl sub_686A40(float *a1, MobileObject *a2, float *a3, float *a4)
{
  int v5; // edx
  int v6; // ecx
  double v7; // st6
  int v8; // ecx
  int v9; // edx
  bhkCharacterProxy *CharProxy; // eax
  double v11; // st7
  float v12; // eax
  float v13; // edx
  double v14; // st7
  float *v15; // esi
  float y; // eax
  float z; // ecx
  char *Head; // eax
  int v19; // ecx
  int v20; // edx
  float v21; // ebx
  int i; // edi
  float *v23; // eax
  double v24; // rt2
  double v25; // st7
  double v26; // st7
  char *v27; // eax
  int v28; // ecx
  int v29; // edx
  int v30; // eax
  int v31; // esi
  float *v32; // ebx
  float *v33; // eax
  int v34; // ecx
  int v35; // edx
  int v36; // eax
  float v37; // [esp+14h] [ebp-660h]
  float v38; // [esp+14h] [ebp-660h]
  float v39; // [esp+14h] [ebp-660h]
  float v40; // [esp+14h] [ebp-660h]
  float v41; // [esp+14h] [ebp-660h]
  float v42; // [esp+14h] [ebp-660h]
  float v43; // [esp+14h] [ebp-660h]
  float v44; // [esp+14h] [ebp-660h]
  float v45; // [esp+14h] [ebp-660h]
  float v46; // [esp+14h] [ebp-660h]
  float v47; // [esp+14h] [ebp-660h]
  float v48; // [esp+18h] [ebp-65Ch]
  float v49; // [esp+18h] [ebp-65Ch]
  float v50; // [esp+18h] [ebp-65Ch]
  float v51; // [esp+18h] [ebp-65Ch]
  float v52; // [esp+18h] [ebp-65Ch]
  float v53; // [esp+18h] [ebp-65Ch]
  float v54; // [esp+1Ch] [ebp-658h] BYREF
  float v55; // [esp+20h] [ebp-654h]
  float v56; // [esp+24h] [ebp-650h]
  float v57; // [esp+28h] [ebp-64Ch]
  float v58; // [esp+2Ch] [ebp-648h]
  float v59; // [esp+30h] [ebp-644h]
  float v60; // [esp+34h] [ebp-640h]
  float v61; // [esp+38h] [ebp-63Ch]
  float v62; // [esp+3Ch] [ebp-638h]
  float v63; // [esp+40h] [ebp-634h]
  float v64; // [esp+44h] [ebp-630h]
  TeleportData v65; // [esp+48h] [ebp-62Ch] BYREF
  float v66; // [esp+64h] [ebp-610h]
  float v67; // [esp+68h] [ebp-60Ch]
  float v68; // [esp+6Ch] [ebp-608h]
  int v69; // [esp+70h] [ebp-604h] BYREF
  int v70; // [esp+74h] [ebp-600h]
  _DWORD v71[190]; // [esp+78h] [ebp-5FCh]
  NiPoint3 v72; // [esp+370h] [ebp-304h] BYREF
  char v73[748]; // [esp+37Ch] [ebp-2F8h] BYREF
  unsigned int v74; // [esp+670h] [ebp-4h]

  v48 = *a4 - *a3; /*0x686a7c*/
  v57 = a4[1] - a3[1]; /*0x686a86*/
  v60 = a4[2] - a3[2]; /*0x686a90*/
  v54 = v48; /*0x686a98*/
  v55 = v57; /*0x686aa0*/
  v56 = v60; /*0x686aa8*/
  *(double *)&v65.yRot = 0.0 * 0.0; /*0x686ab8*/
  v49 = *(double *)&v65.yRot + v48 * v48 + v57 * v57; /*0x686aca*/
  v50 = sqrt(v49); /*0x686ad7*/
  v60 = v50; /*0x686adf*/
  if ( flt_A56670 < (double)v50 ) /*0x686af2*/
  {
    Vector3_NormalizeInPlace(&v54); /*0x686b21*/
    v7 = dbl_A4D910; /*0x686b2c*/
    v54 = v54 * v7; /*0x686b36*/
    v55 = v55 * v7; /*0x686b40*/
    v56 = v7 * v56; /*0x686b48*/
    v51 = v55 * v55 + v54 * v54; /*0x686b5c*/
    v52 = sqrt(v51); /*0x686b69*/
    if ( v52 > dbl_A492B0 ) /*0x686b7c*/
    {
      v53 = flt_A56670; /*0x686bb2*/
      if ( a2 ) /*0x686bb6*/
      {
        CharProxy = MobileObject_GetCharProxy(a2); /*0x686bba*/
        if ( CharProxy ) /*0x686bc1*/
          v53 = *((float *)CharProxy + 0x92) * dbl_A372E0; /*0x686bcf*/
      }
      v11 = *a3 + v54; /*0x686bd8*/
      v12 = *a3; /*0x686bdc*/
      v13 = a3[2]; /*0x686bde*/
      v67 = a3[1]; /*0x686be1*/
      v57 = v11; /*0x686be5*/
      *(float *)&v71[0xBC] = v67; /*0x686be9*/
      v66 = v12; /*0x686bf4*/
      v14 = v55 + a3[1]; /*0x686bf8*/
      v68 = v13; /*0x686bfb*/
      *(float *)&v71[0xBB] = v12; /*0x686bff*/
      *(float *)&v71[0xBD] = v13; /*0x686c06*/
      v59 = v14; /*0x686c0d*/
      v58 = a3[2] + v56; /*0x686c18*/
      v54 = v57; /*0x686c20*/
      v72.x = v57; /*0x686c2c*/
      v55 = v59; /*0x686c33*/
      v72.y = v59; /*0x686c3f*/
      v56 = v58; /*0x686c46*/
      v72.z = v58; /*0x686c52*/
      sub_68CB30(&v65); /*0x686c59*/
      v74 = 0; /*0x686c70*/
      if ( sub_686450(a2, &v72, &v65, 1, 0) ) /*0x686c7b*/
      {
        Head = EmbeddedList_GetHead((char *)&v65); /*0x686cb0*/
        v19 = *((_DWORD *)Head + 1); /*0x686cb7*/
        v69 = *(_DWORD *)Head; /*0x686cba*/
        v20 = *((_DWORD *)Head + 2); /*0x686cbe*/
        v70 = v19; /*0x686cc1*/
        v71[0] = v20; /*0x686cc5*/
        LODWORD(v21) = 2; /*0x686cc9*/
        for ( i = 0; ; i += 3 ) /*0x686cce*/
        {
          v59 = v21; /*0x686cd6*/
          if ( i >= 0xBA ) /*0x686cda*/
            break; /*0x686cda*/
          v58 = *(float *)((char *)&v69 + i * 4) - *(float *)((char *)&v66 + i * 4); /*0x686cec*/
          v57 = *(float *)&v71[i - 1] - *(float *)((char *)&v67 + i * 4); /*0x686cf8*/
          v37 = *(float *)&v71[i] - *(float *)((char *)&v68 + i * 4); /*0x686d04*/
          v54 = v58; /*0x686d0c*/
          v55 = v57; /*0x686d14*/
          v56 = v37; /*0x686d1c*/
          Vector3_NormalizeInPlace(&v54); /*0x686d20*/
          v23 = (float *)&v73[i * 4]; /*0x686d27*/
          v24 = dbl_A4D910; /*0x686d3e*/
          v54 = v54 * v24; /*0x686d40*/
          v55 = v55 * v24; /*0x686d4a*/
          v56 = v24 * v56; /*0x686d52*/
          v38 = *(float *)((char *)&v69 + i * 4) + v54; /*0x686d5e*/
          v58 = *(float *)&v71[i - 1] + v55; /*0x686d6a*/
          v57 = *(float *)&v71[i] + v56; /*0x686d79*/
          v62 = v38; /*0x686d81*/
          v25 = v58; /*0x686d89*/
          *v23 = v38; /*0x686d8d*/
          v63 = v25; /*0x686d8f*/
          v26 = v57; /*0x686d97*/
          v23[1] = v63; /*0x686d9b*/
          v64 = v26; /*0x686da2*/
          v23[2] = v64; /*0x686dac*/
          if ( !sub_686450(a2, (NiPoint3 *)&v73[i * 4], &v65, 1, 0) ) /*0x686db3*/
            break; /*0x686db3*/
          v27 = EmbeddedList_GetHead((char *)&v65); /*0x686dc7*/
          v28 = *(_DWORD *)v27; /*0x686dcc*/
          v29 = *((_DWORD *)v27 + 1); /*0x686dce*/
          v30 = *((_DWORD *)v27 + 2); /*0x686dd1*/
          v71[i + 1] = v28; /*0x686dd4*/
          v71[i + 2] = v29; /*0x686dd8*/
          v71[i + 3] = v30; /*0x686ddf*/
          v58 = *(float *)&v71[i + 1] - v66; /*0x686dee*/
          v39 = *(float *)&v71[i + 2] - v67; /*0x686dfd*/
          v40 = v39 * v39 + v58 * v58 + *(double *)&v65.yRot; /*0x686e15*/
          v41 = sqrt(v40); /*0x686e22*/
          v57 = v41; /*0x686e2a*/
          if ( v60 < (double)v41 ) /*0x686e3d*/
          {
            v33 = a4; /*0x686efe*/
            goto LABEL_23; /*0x686f01*/
          }
          v31 = 1; /*0x686e4a*/
          v61 = *(float *)&v71[i + 3] - v68; /*0x686e55*/
          if ( SLODWORD(v21) > 1 ) /*0x686e59*/
          {
            v32 = (float *)&v69; /*0x686e5f*/
            while ( 1 ) /*0x686e69*/
            {
              v58 = *v32 - v66; /*0x686e69*/
              v42 = v32[1] - v67; /*0x686e74*/
              v43 = v42 * v42 + v58 * v58 + *(double *)&v65.yRot; /*0x686e8c*/
              v44 = sqrt(v43); /*0x686e99*/
              v45 = v44 / v57 * v61 + v68; /*0x686eb5*/
              v46 = v45 - v32[2]; /*0x686ec0*/
              v47 = fabs(v46); /*0x686eca*/
              if ( v53 <= (double)v47 ) /*0x686edd*/
                break; /*0x686edd*/
              ++v31; /*0x686edf*/
              v32 += 3; /*0x686ee2*/
              if ( v31 >= SLODWORD(v59) ) /*0x686ee9*/
              {
                v21 = v59; /*0x686eef*/
                goto LABEL_19; /*0x686eef*/
              }
            }
            v21 = v59; /*0x686f03*/
            break; /*0x686f03*/
          }
LABEL_19:
          ++LODWORD(v21); /*0x686ef3*/
        }
        v33 = &v65.xRot + 3 * LODWORD(v21); /*0x686f07*/
LABEL_23:
        v15 = a1; /*0x686f0e*/
        v34 = *(_DWORD *)v33; /*0x686f11*/
        v35 = *((_DWORD *)v33 + 1); /*0x686f13*/
        v36 = *((_DWORD *)v33 + 2); /*0x686f16*/
        *(_DWORD *)a1 = v34; /*0x686f19*/
        *((_DWORD *)a1 + 1) = v35; /*0x686f1b*/
        *((_DWORD *)a1 + 2) = v36; /*0x686f1e*/
      }
      else
      {
        v15 = a1; /*0x686c87*/
        y = v72.y; /*0x686c91*/
        z = v72.z; /*0x686c98*/
        *a1 = v72.x; /*0x686c9f*/
        a1[1] = y; /*0x686ca1*/
        a1[2] = z; /*0x686ca4*/
      }
      v74 = 0xFFFFFFFF; /*0x686f25*/
      Shared_NoOpVirtual_60D0A0(&v65); /*0x686f30*/
      return v15; /*0x686f35*/
    }
    else
    {
      v8 = *((_DWORD *)a4 + 1); /*0x686b83*/
      *a1 = *a4; /*0x686b86*/
      v9 = *((_DWORD *)a4 + 2); /*0x686b88*/
      *((_DWORD *)a1 + 1) = v8; /*0x686b8b*/
      *((_DWORD *)a1 + 2) = v9; /*0x686b8e*/
      return a1; /*0x686b7e*/
    }
  }
  else
  {
    v5 = *((_DWORD *)a4 + 1); /*0x686af9*/
    *a1 = *a4; /*0x686afc*/
    v6 = *((_DWORD *)a4 + 2); /*0x686afe*/
    *((_DWORD *)a1 + 1) = v5; /*0x686b01*/
    *((_DWORD *)a1 + 2) = v6; /*0x686b04*/
    return a1; /*0x686af4*/
  }
}
