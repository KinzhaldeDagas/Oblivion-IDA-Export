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
  int *v18; // eax
  int v19; // ecx
  int v20; // edx
  float v21; // ebx
  int i; // edi
  float *v23; // eax
  double v24; // rt2
  double v25; // st7
  double v26; // st7
  int *v27; // eax
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

  v48 = *a4 - *a3;
  v57 = a4[1] - a3[1];
  v60 = a4[2] - a3[2];
  v54 = v48;
  v55 = v57;
  v56 = v60;
  *(double *)&v65.yRot = 0.0 * 0.0;
  v49 = *(double *)&v65.yRot + v48 * v48 + v57 * v57;
  v50 = sqrt(v49);
  v60 = v50;
  if ( flt_A56670 < (double)v50 )
  {
    sub_43F350(&v54);
    v7 = dbl_A4D910;
    v54 = v54 * v7;
    v55 = v55 * v7;
    v56 = v7 * v56;
    v51 = v55 * v55 + v54 * v54;
    v52 = sqrt(v51);
    if ( v52 > dbl_A492B0 )
    {
      v53 = flt_A56670;
      if ( a2 )
      {
        CharProxy = MobileObject_GetCharProxy(a2);
        if ( CharProxy )
          v53 = *((float *)CharProxy + 0x92) * dbl_A372E0;
      }
      v11 = *a3 + v54;
      v12 = *a3;
      v13 = a3[2];
      v67 = a3[1];
      v57 = v11;
      *(float *)&v71[0xBC] = v67;
      v66 = v12;
      v14 = v55 + a3[1];
      v68 = v13;
      *(float *)&v71[0xBB] = v12;
      *(float *)&v71[0xBD] = v13;
      v59 = v14;
      v58 = a3[2] + v56;
      v54 = v57;
      v72.x = v57;
      v55 = v59;
      v72.y = v59;
      v56 = v58;
      v72.z = v58;
      sub_68CB30(&v65);
      v74 = 0;
      if ( sub_686450(a2, &v72, &v65, 1, 0) )
      {
        v18 = (int *)sub_6899C0((char *)&v65);
        v19 = v18[1];
        v69 = *v18;
        v20 = v18[2];
        v70 = v19;
        v71[0] = v20;
        LODWORD(v21) = 2;
        for ( i = 0; ; i += 3 )
        {
          v59 = v21;
          if ( i >= 0xBA )
            break;
          v58 = *(float *)((char *)&v69 + i * 4) - *(float *)((char *)&v66 + i * 4);
          v57 = *(float *)&v71[i - 1] - *(float *)((char *)&v67 + i * 4);
          v37 = *(float *)&v71[i] - *(float *)((char *)&v68 + i * 4);
          v54 = v58;
          v55 = v57;
          v56 = v37;
          sub_43F350(&v54);
          v23 = (float *)&v73[i * 4];
          v24 = dbl_A4D910;
          v54 = v54 * v24;
          v55 = v55 * v24;
          v56 = v24 * v56;
          v38 = *(float *)((char *)&v69 + i * 4) + v54;
          v58 = *(float *)&v71[i - 1] + v55;
          v57 = *(float *)&v71[i] + v56;
          v62 = v38;
          v25 = v58;
          *v23 = v38;
          v63 = v25;
          v26 = v57;
          v23[1] = v63;
          v64 = v26;
          v23[2] = v64;
          if ( !sub_686450(a2, (NiPoint3 *)&v73[i * 4], &v65, 1, 0) )
            break;
          v27 = (int *)sub_6899C0((char *)&v65);
          v28 = *v27;
          v29 = v27[1];
          v30 = v27[2];
          v71[i + 1] = v28;
          v71[i + 2] = v29;
          v71[i + 3] = v30;
          v58 = *(float *)&v71[i + 1] - v66;
          v39 = *(float *)&v71[i + 2] - v67;
          v40 = v39 * v39 + v58 * v58 + *(double *)&v65.yRot;
          v41 = sqrt(v40);
          v57 = v41;
          if ( v60 < (double)v41 )
          {
            v33 = a4;
            goto LABEL_23;
          }
          v31 = 1;
          v61 = *(float *)&v71[i + 3] - v68;
          if ( SLODWORD(v21) > 1 )
          {
            v32 = (float *)&v69;
            while ( 1 )
            {
              v58 = *v32 - v66;
              v42 = v32[1] - v67;
              v43 = v42 * v42 + v58 * v58 + *(double *)&v65.yRot;
              v44 = sqrt(v43);
              v45 = v44 / v57 * v61 + v68;
              v46 = v45 - v32[2];
              v47 = fabs(v46);
              if ( v53 <= (double)v47 )
                break;
              ++v31;
              v32 += 3;
              if ( v31 >= SLODWORD(v59) )
              {
                v21 = v59;
                goto LABEL_19;
              }
            }
            v21 = v59;
            break;
          }
LABEL_19:
          ++LODWORD(v21);
        }
        v33 = &v65.xRot + 3 * LODWORD(v21);
LABEL_23:
        v15 = a1;
        v34 = *(_DWORD *)v33;
        v35 = *((_DWORD *)v33 + 1);
        v36 = *((_DWORD *)v33 + 2);
        *(_DWORD *)a1 = v34;
        *((_DWORD *)a1 + 1) = v35;
        *((_DWORD *)a1 + 2) = v36;
      }
      else
      {
        v15 = a1;
        y = v72.y;
        z = v72.z;
        *a1 = v72.x;
        a1[1] = y;
        a1[2] = z;
      }
      v74 = 0xFFFFFFFF;
      TESTexture::ClearComponentReferences(&v65);
      return v15;
    }
    else
    {
      v8 = *((_DWORD *)a4 + 1);
      *a1 = *a4;
      v9 = *((_DWORD *)a4 + 2);
      *((_DWORD *)a1 + 1) = v8;
      *((_DWORD *)a1 + 2) = v9;
      return a1;
    }
  }
  else
  {
    v5 = *((_DWORD *)a4 + 1);
    *a1 = *a4;
    v6 = *((_DWORD *)a4 + 2);
    *((_DWORD *)a1 + 1) = v5;
    *((_DWORD *)a1 + 2) = v6;
    return a1;
  }
}
