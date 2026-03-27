void __fastcall sub_793E10(int a1, int a2, int a3, int a4, int a5)
{
  bool v5; // zf
  unsigned __int8 ***v6; // edi
  unsigned __int8 **v7; // ebp
  unsigned __int8 **v8; // esi
  unsigned __int8 ***v9; // ebx
  bool v10; // cf
  float *v11; // edi
  double v12; // st7
  int v13; // ebx
  float *v14; // esi
  double v15; // st6
  float *v16; // eax
  float v17; // edx
  float v18; // ecx
  double v19; // st6
  double v20; // st1
  double v21; // st3
  double v22; // st1
  double v23; // st2
  double v24; // st3
  double v25; // st4
  double v26; // st7
  double v27; // rt2
  double v28; // st6
  double v29; // st7
  double v30; // rtt
  int v31; // esi
  float v32; // [esp+14h] [ebp-B4h]
  float v33; // [esp+14h] [ebp-B4h]
  float v34; // [esp+14h] [ebp-B4h]
  float v35; // [esp+14h] [ebp-B4h]
  float v36; // [esp+18h] [ebp-B0h] BYREF
  float v37; // [esp+1Ch] [ebp-ACh]
  float v38; // [esp+20h] [ebp-A8h]
  unsigned __int8 ***v39; // [esp+24h] [ebp-A4h]
  float v40; // [esp+28h] [ebp-A0h]
  float v41; // [esp+2Ch] [ebp-9Ch]
  float v42; // [esp+30h] [ebp-98h]
  float v43; // [esp+34h] [ebp-94h]
  int v44; // [esp+38h] [ebp-90h] BYREF
  float v45; // [esp+3Ch] [ebp-8Ch]
  float v46; // [esp+40h] [ebp-88h]
  int v47; // [esp+44h] [ebp-84h]
  float v48; // [esp+48h] [ebp-80h]
  int v49; // [esp+4Ch] [ebp-7Ch]
  int v50; // [esp+50h] [ebp-78h]
  int v51; // [esp+54h] [ebp-74h] BYREF
  float v52; // [esp+58h] [ebp-70h]
  float v53; // [esp+5Ch] [ebp-6Ch]
  float v54; // [esp+60h] [ebp-68h]
  float v55; // [esp+64h] [ebp-64h]
  float v56; // [esp+68h] [ebp-60h]
  float v57; // [esp+6Ch] [ebp-5Ch]
  float v58; // [esp+70h] [ebp-58h]
  float v59; // [esp+74h] [ebp-54h]
  float v60; // [esp+78h] [ebp-50h]
  float v61; // [esp+7Ch] [ebp-4Ch]
  float v62; // [esp+80h] [ebp-48h]
  float v63; // [esp+84h] [ebp-44h]
  float v64; // [esp+88h] [ebp-40h]
  float v65; // [esp+8Ch] [ebp-3Ch]
  float v66; // [esp+90h] [ebp-38h]
  float v67; // [esp+94h] [ebp-34h]
  float v68; // [esp+98h] [ebp-30h]
  float v69; // [esp+9Ch] [ebp-2Ch]
  float v70; // [esp+A0h] [ebp-28h]
  float v71; // [esp+A4h] [ebp-24h]
  float v72; // [esp+A8h] [ebp-20h]
  float *v73; // [esp+ACh] [ebp-1Ch]
  float v74[3]; // [esp+B0h] [ebp-18h] BYREF
  float v75[3]; // [esp+BCh] [ebp-Ch] BYREF

  v5 = *(_DWORD *)(a1 + 0x38) == 1;
  v49 = a1;
  if ( v5 )
  {
    if ( *(_DWORD *)(a1 + 0x74) )
    {
      if ( a5 > 0 )
      {
        v6 = (unsigned __int8 ***)(a4 + 4);
        v39 = (unsigned __int8 ***)(a4 + 4);
        v50 = a5;
        do
        {
          v7 = *v6;
          if ( *v6 > v6[1] )
            _invalid_parameter_noinfo();
          while ( 1 )
          {
            v8 = v6[1];
            if ( *v6 > v8 )
              _invalid_parameter_noinfo();
            v9 = v6 + 0xFFFFFFFF;
            if ( v7 == v8 )
              break;
            if ( v7 >= v9[2] )
              _invalid_parameter_noinfo();
            v10 = v7 < v9[2];
            v73 = (float *)(*v7 + 0x1C);
            if ( !v10 )
              _invalid_parameter_noinfo();
            v11 = (float *)(*v7 + 4);
            if ( v7 >= v9[2] )
              _invalid_parameter_noinfo();
            sub_7A7EC0(*v7, v75);
            v12 = 0.0;
            v53 = 0.0;
            v13 = 0;
            v52 = 0.0;
            v14 = (float *)&unk_B2B7D4;
            *(float *)&v51 = 0.0;
            v48 = flt_A30634;
            v38 = 0.0;
            v37 = 0.0;
            v36 = 0.0;
            v15 = 1.0;
            do
            {
              if ( byte_B42A18[v13] )
              {
                v44 = *((int *)v14 + 0xFFFFFFFF);
                v45 = *v14;
                v46 = v14[1];
                if ( v12 == v14[0xB] )
                {
                  v16 = (float *)&v44;
                }
                else
                {
                  v16 = v74;
                  v74[0] = *(float *)&v44 - *v11;
                  v74[1] = v45 - v11[1];
                  v74[2] = v46 - v11[2];
                }
                v17 = v16[1];
                v18 = *v16;
                v43 = v16[2];
                v32 = v17 * v17 + v18 * v18 + v43 * v43;
                v33 = sqrt(v32);
                v34 = 1.0 / v33;
                v41 = v18 * v34;
                v42 = v17 * v34;
                v43 = v34 * v43;
                v40 = v73[1] * v42 + v41 * *v73 + v73[2] * v43;
                v19 = v40;
                if ( v48 <= (double)v40 )
                {
                  v48 = v40;
                  v51 = v44;
                  v52 = v45;
                  v53 = v46;
                }
                if ( v19 < 0.0 )
                {
                  v40 = 0.0;
                  v19 = (float)0.0;
                }
                v5 = (*(_BYTE *)(v49 + 0x74) & 1) == 0;
                v40 = v19 * (1.0 - *(float *)(v49 + 0x70)) + *(float *)(v49 + 0x70);
                if ( v5 )
                {
                  v12 = 0.0;
                  v15 = 1.0;
                }
                else
                {
                  v61 = *(float *)(v49 + 0x60);
                  v62 = *(float *)(v49 + 0x64);
                  v63 = *(float *)(v49 + 0x68);
                  v64 = v14[5] * *(float *)(v49 + 0x48);
                  v65 = v14[6] * *(float *)(v49 + 0x4C);
                  v66 = v14[7] * *(float *)(v49 + 0x50);
                  v35 = 1.0;
                  if ( 0.0 == v14[0xB] )
                    goto LABEL_29;
                  v20 = *(float *)&v44 - *v11;
                  v21 = v20 * v20;
                  v22 = v45 - v11[1];
                  v23 = v21;
                  v24 = v46 - v11[2];
                  *(float *)&v47 = v22 * v22 + v23 + v24 * v24;
                  v25 = v14[0xD];
                  LODWORD(v60) = (v47 >> 1) + 0x1FC00000;
                  *(float *)&v47 = v25 * v60 + v14[0xC] + v60 * (v14[0xE] * v60);
                  if ( *(float *)&v47 == 0.0 )
                  {
LABEL_29:
                    v26 = 1.0;
                  }
                  else
                  {
                    v26 = 1.0;
                    v35 = 1.0 / *(float *)&v47;
                  }
                  v70 = v14[2] * v40 * v75[0];
                  v71 = v14[3] * v40 * v75[1];
                  v72 = v40 * v14[4] * v75[2];
                  v54 = v70 + v64;
                  v55 = v71 + v65;
                  v56 = v72 + v66;
                  v57 = v54 * v35;
                  v58 = v55 * v35;
                  v59 = v35 * v56;
                  v67 = v57 + v61;
                  v68 = v58 + v62;
                  v69 = v59 + v63;
                  v36 = v67 + v36;
                  v37 = v68 + v37;
                  v38 = v69 + v38;
                  v15 = v26;
                  v12 = 0.0;
                }
              }
              v14 += 0x10;
              ++v13;
            }
            while ( (int)v14 < (int)flt_B2B9D4 );
            if ( v36 >= v12 )
            {
              if ( v36 > v15 )
                v36 = v15;
              v30 = v15;
              v28 = v12;
              v29 = v30;
            }
            else
            {
              v27 = v15;
              v28 = v12;
              v29 = v27;
              v36 = v28;
            }
            if ( v37 >= v28 )
            {
              if ( v37 > v29 )
                v37 = v29;
            }
            else
            {
              v37 = v28;
            }
            if ( v38 >= v28 )
            {
              if ( v38 > v29 )
                v38 = v29;
            }
            else
            {
              v38 = v28;
            }
            v31 = v49;
            if ( (*(_BYTE *)(v49 + 0x74) & 1) != 0 )
            {
              if ( v7 >= v39[1] )
                _invalid_parameter_noinfo();
              sub_7A7F10((int)*v7, &v36, 0);
            }
            if ( (*(_BYTE *)(v31 + 0x74) & 2) != 0 )
            {
              if ( v7 >= v39[1] )
                _invalid_parameter_noinfo();
              sub_7A8090((float *)*v7, a3, (int)&v51, *(float *)(v31 + 0x70));
            }
            if ( v7 >= v39[1] )
              _invalid_parameter_noinfo();
            v6 = v39;
            ++v7;
          }
          v6 += 4;
          v5 = v50-- == 1;
          v39 = v6;
        }
        while ( !v5 );
      }
    }
  }
}
