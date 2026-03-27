int __userpurge sub_7A6020@<eax>(int *this@<ecx>, unsigned int a2@<edi>, unsigned int *a3)
{
  int *v3; // ebp
  int result; // eax
  int v5; // eax
  unsigned int v6; // edi
  _DWORD *v7; // ebp
  bool v8; // cc
  unsigned int v9; // ebp
  int v10; // ebp
  double v11; // st7
  int v12; // eax
  int v13; // edx
  unsigned int v14; // edi
  unsigned int v15; // ecx
  float *v16; // eax
  _DWORD *v17; // eax
  float *v18; // eax
  float *v19; // eax
  float *v20; // eax
  int v21; // eax
  unsigned int v22; // ecx
  unsigned int v23; // edx
  unsigned int v24; // ecx
  int v25[20]; // [esp-54h] [ebp-1F0h] BYREF
  rsize_t v26; // [esp-4h] [ebp-1A0h]
  int *v27; // [esp+14h] [ebp-188h]
  int *v28; // [esp+18h] [ebp-184h]
  signed int v29; // [esp+1Ch] [ebp-180h]
  signed int v30; // [esp+20h] [ebp-17Ch]
  int v31; // [esp+24h] [ebp-178h] BYREF
  unsigned int v32; // [esp+28h] [ebp-174h]
  int v33; // [esp+38h] [ebp-164h]
  unsigned int v34; // [esp+3Ch] [ebp-160h]
  int v35; // [esp+40h] [ebp-15Ch] BYREF
  unsigned int v36; // [esp+44h] [ebp-158h]
  int v37; // [esp+54h] [ebp-148h]
  unsigned int v38; // [esp+58h] [ebp-144h]
  char v39[4]; // [esp+5Ch] [ebp-140h] BYREF
  unsigned int v40; // [esp+60h] [ebp-13Ch]
  int v41; // [esp+70h] [ebp-12Ch]
  unsigned int v42; // [esp+74h] [ebp-128h]
  int v43; // [esp+78h] [ebp-124h] BYREF
  char v44; // [esp+7Ch] [ebp-120h]
  int v45; // [esp+8Ch] [ebp-110h]
  int v46; // [esp+90h] [ebp-10Ch]
  int v47; // [esp+B0h] [ebp-ECh] BYREF
  float v48[3]; // [esp+B8h] [ebp-E4h] BYREF
  float v49[3]; // [esp+C4h] [ebp-D8h] BYREF
  float v50[3]; // [esp+D0h] [ebp-CCh] BYREF
  float v51[13]; // [esp+DCh] [ebp-C0h] BYREF
  _BYTE v52[40]; // [esp+110h] [ebp-8Ch] BYREF
  bool v53[4]; // [esp+138h] [ebp-64h] BYREF
  float v54; // [esp+13Ch] [ebp-60h]
  float v55; // [esp+140h] [ebp-5Ch]
  float v56; // [esp+144h] [ebp-58h]
  float v57; // [esp+148h] [ebp-54h]
  char v58[4]; // [esp+14Ch] [ebp-50h] BYREF
  unsigned int v59; // [esp+150h] [ebp-4Ch]
  int v60; // [esp+160h] [ebp-3Ch]
  unsigned int v61; // [esp+164h] [ebp-38h]
  float v62; // [esp+168h] [ebp-34h]
  float v63; // [esp+16Ch] [ebp-30h]
  float v64; // [esp+170h] [ebp-2Ch]
  float v65; // [esp+174h] [ebp-28h]
  float v66; // [esp+178h] [ebp-24h]
  float v67; // [esp+17Ch] [ebp-20h]
  float v68; // [esp+180h] [ebp-1Ch]
  float v69; // [esp+184h] [ebp-18h]
  float v70; // [esp+188h] [ebp-14h]
  int v71; // [esp+198h] [ebp-4h]

  v3 = this;
  v28 = this;
  result = sub_78EB40(a3);
  do
  {
    if ( result > 0xBB8 )
    {
      switch ( result )
      {
        case 0xBB9:
          v3[0xB] = sub_78EB40(a3);
          goto LABEL_55;
        case 0xBBA:
          *((float *)v3 + 0xA) = sub_78EB10(a3);
          goto LABEL_55;
        case 0xBBB:
          v22 = (*a3)++;
          goto LABEL_43;
        case 0xBBC:
        case 0xBBD:
          sub_78EB10(a3);
          goto LABEL_55;
        case 0xBBE:
          v22 = (*a3)++;
LABEL_43:
          v23 = a3[2];
          if ( !v23 || v22 >= a3[3] - v23 )
            _invalid_parameter_noinfo();
          goto LABEL_55;
        case 0xBBF:
          *((float *)v3 + 8) = sub_78EB10(a3);
          goto LABEL_55;
        case 0xBC0:
          v3[3] = sub_78EB40(a3);
          goto LABEL_55;
        case 0xBC1:
          a2 = (*a3)++;
          v24 = a3[2];
          if ( !v24 || a2 >= a3[3] - v24 )
            _invalid_parameter_noinfo();
          *(_BYTE *)v3 = *(_BYTE *)(a2 + a3[2]) != 0;
          goto LABEL_55;
        case 0xBC2:
          *((float *)v3 + 1) = sub_78EB10(a3);
          goto LABEL_55;
        default:
          goto LABEL_57;
      }
    }
    if ( result == 0xBB8 )
    {
      *((float *)v3 + 9) = sub_78EB10(a3);
    }
    else
    {
      if ( result != 0x3F1 )
      {
LABEL_57:
        LODWORD(v26) = 0x22;
        v46 = 0xF;
        v45 = 0;
        v44 = 0;
        sub_414500(&v43, a2, "malformed general leaf information", v26);
        v71 = 5;
        sub_789190((std::exception *)v52, &v43, 0);
        ThrowException__((int)v52, &_TI3_AVIdvFileError__);
      }
      sub_78EB40(a3);
      v5 = sub_78EB40(a3);
      v6 = v3[6];
      v7 = v3 + 4;
      v8 = v7[1] <= v6;
      v30 = v5;
      if ( !v8 )
        _invalid_parameter_noinfo();
      v9 = v7[1];
      if ( v9 > v28[6] )
        _invalid_parameter_noinfo();
      LODWORD(v26) = v6;
      a2 = (unsigned int)v28;
      sub_7A4B80(v28 + 4, &v47, (int)(v28 + 4), v9, (int)(v28 + 4), v26);
      v27 = v25;
      sub_7A5910((float *)v25);
      v10 = v30;
      sub_7A5F00(
        (int *)(a2 + 0x10),
        v30,
        v25[0],
        v25[1],
        v25[2],
        v25[3],
        v25[4],
        v25[5],
        v25[6],
        v25[7],
        v25[8],
        v25[9],
        v25[0xA],
        v25[0xB],
        v25[0xC],
        v25[0xD],
        v25[0xE],
        v25[0xF],
        v25[0x10],
        v25[0x11],
        v25[0x12],
        v25[0x13],
        v26);
      v29 = 0;
      if ( v10 > 0 )
      {
        v27 = 0;
        do
        {
          v54 = flt_A524B0;
          v53[0] = 0;
          v55 = v54;
          v61 = 0xF;
          v56 = v54;
          v60 = 0;
          v11 = flt_A3D9A4;
          LOBYTE(v59) = 0;
          v57 = v11;
          v62 = flt_A3D65C;
          v63 = 1.0;
          v64 = 0.0;
          v65 = flt_A8C958;
          v66 = v65;
          v67 = 0.0;
          v68 = flt_A31C80;
          v69 = v68;
          v70 = 0.0;
          v71 = 0;
          sub_78EB40(a3);
          v12 = sub_78EB40(a3);
          do
          {
            switch ( v12 )
            {
              case 0xFA0:
                v14 = (*a3)++;
                v15 = a3[2];
                if ( !v15 || v14 >= a3[3] - v15 )
                  _invalid_parameter_noinfo();
                v53[0] = *(_BYTE *)(v14 + a3[2]) != 0;
                break;
              case 0xFA1:
                v16 = sub_78EBA0(a3, v51);
                v54 = *v16;
                v55 = v16[1];
                v56 = v16[2];
                break;
              case 0xFA2:
                v57 = sub_78EB10(a3);
                break;
              case 0xFA3:
                sub_78EC20(a3, v13, (int)&v35);
                LOBYTE(v71) = 1;
                v34 = 0xF;
                v33 = 0;
                LOBYTE(v32) = 0;
                sub_414420((int)&v31, &v35, 0, 0xFFFFFFFF);
                if ( v38 >= 0x10 )
                  FormHeapFree(v36);
                v38 = 0xF;
                v37 = 0;
                LOBYTE(v36) = 0;
                LOBYTE(v71) = 2;
                sub_414420((int)v58, &v31, 0, 0xFFFFFFFF);
                LOBYTE(v71) = 0;
                if ( v34 >= 0x10 )
                  FormHeapFree(v32);
                v34 = 0xF;
                v33 = 0;
                LOBYTE(v32) = 0;
                v17 = (_DWORD *)sub_789430(v58, (int)v39);
                LOBYTE(v71) = 3;
                sub_414420((int)v58, v17, 0, 0xFFFFFFFF);
                LOBYTE(v71) = 0;
                if ( v42 >= 0x10 )
                  FormHeapFree(v40);
                v42 = 0xF;
                v41 = 0;
                LOBYTE(v40) = 0;
                break;
              case 0xFA4:
                v18 = sub_78EBA0(a3, v50);
                v62 = *v18;
                v63 = v18[1];
                v64 = v18[2];
                break;
              case 0xFA5:
                v19 = sub_78EBA0(a3, v49);
                v65 = *v19;
                v66 = v19[1];
                v67 = v19[2];
                break;
              case 0xFA6:
                v20 = sub_78EBA0(a3, v48);
                v68 = *v20;
                v69 = v20[1];
                v70 = v20[2];
                break;
              case 0xFA7:
                sub_78EB10(a3);
                break;
              default:
                JUMPOUT(0x7A6575);
            }
            v12 = sub_78EB40(a3);
          }
          while ( v12 != 0x3F0 );
          v21 = v28[5];
          a2 = (unsigned int)(v28 + 4);
          if ( !v21 || v29 >= (unsigned int)((v28[6] - v21) / 0x54) )
            _invalid_parameter_noinfo();
          sub_7A3470((float *)((char *)v27 + *(_DWORD *)(a2 + 4)), (int)v53);
          v71 = 0xFFFFFFFF;
          if ( v61 >= 0x10 )
            FormHeapFree(v59);
          v27 += 0x15;
          ++v29;
        }
        while ( v29 < v30 );
      }
      sub_78EB40(a3);
      v3 = v28;
    }
LABEL_55:
    result = sub_78EB40(a3);
  }
  while ( result != 0x3ED );
  return result;
}
