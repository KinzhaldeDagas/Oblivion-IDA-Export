char __stdcall sub_7919D0(float *a1, float a2, int a3, float *a4, float *a5, float a6, int a7, int a8)
{
  unsigned int v8; // eax
  _BYTE *v9; // ecx
  unsigned int v10; // edi
  _BYTE *v11; // eax
  unsigned int v12; // esi
  double v13; // st7
  int v14; // ebx
  _BYTE *v15; // esi
  _BYTE *v16; // edi
  unsigned int v17; // ecx
  unsigned int v18; // ebx
  _BYTE *v19; // ecx
  unsigned int *v20; // ebp
  bool v21; // zf
  int v22; // ecx
  float *v23; // edi
  double v24; // st7
  char v25; // al
  float *v26; // esi
  unsigned int v27; // eax
  float *v28; // ecx
  float *v29; // edi
  float *v30; // eax
  unsigned int v31; // ecx
  unsigned int v32; // edx
  float v33; // eax
  double v34; // st7
  int v35; // eax
  double v36; // st5
  int v37; // ecx
  float v38; // edx
  double v39; // st6
  float v40; // edx
  float v41; // eax
  double v42; // st7
  int v44; // [esp+4h] [ebp-64h]
  float v45; // [esp+8h] [ebp-60h]
  float v46; // [esp+8h] [ebp-60h]
  int v47; // [esp+Ch] [ebp-5Ch]
  unsigned __int16 v48; // [esp+26h] [ebp-42h]
  __int64 v49; // [esp+2Ch] [ebp-3Ch] BYREF
  float v50; // [esp+34h] [ebp-34h]
  float v51; // [esp+38h] [ebp-30h] BYREF
  float v52; // [esp+3Ch] [ebp-2Ch]
  float v53; // [esp+40h] [ebp-28h]
  float v54[3]; // [esp+44h] [ebp-24h] BYREF
  float v55[3]; // [esp+50h] [ebp-18h] BYREF
  unsigned int v56; // [esp+64h] [ebp-4h]
  float v57; // [esp+70h] [ebp+8h]
  float v58; // [esp+70h] [ebp+8h]

  v8 = *(_DWORD *)(dword_B429B8 + 0x14);
  if ( v8 )
  {
    v8 = (int)(*(_DWORD *)(dword_B429B8 + 0x18) - v8) / 0x54;
    if ( v8 )
    {
      v8 = (unsigned int)dword_B429F0;
      if ( dword_B429F0 && (int)((int)dword_B429F4 - v8) >> 2 && (LOBYTE(v8) = sub_78F600(a3, a2), (_BYTE)v8) )
      {
        v9 = dword_B429F0;
        v10 = 0;
        if ( !dword_B429F0 )
          goto LABEL_11;
        v11 = dword_B429F4;
        v12 = ((_BYTE *)dword_B429F4 - v9) >> 2;
        if ( v12 > 1 )
        {
          v13 = sub_78EA00(0.0, flt_A3F3D8);
          LODWORD(v49) = v48 | 0xC00;
          v9 = dword_B429F0;
          v49 = (__int64)v13;
          v11 = dword_B429F4;
          v10 = (unsigned int)(__int64)v13 % v12;
        }
        if ( !v9 || v10 >= (v11 - v9) >> 2 )
        {
LABEL_11:
          _invalid_parameter_noinfo();
          v9 = dword_B429F0;
        }
        v14 = *(_DWORD *)&v9[4 * v10];
      }
      else
      {
        if ( !dword_B429D0 )
          return v8;
        v8 = ((_BYTE *)dword_B429D4 - (_BYTE *)dword_B429D0) >> 2;
        if ( v8 <= 1 )
        {
          if ( !v8 )
            return v8;
          v14 = *(_DWORD *)sub_54F7A0(&dword_B429CC, 0);
        }
        else
        {
          *(float *)&v49 = sub_78EA00(0.0, flt_A8C690);
          v15 = dword_B429D0;
          v16 = dword_B429D4;
          if ( dword_B429D0 )
            v17 = (v16 - v15) >> 2;
          else
            v17 = 0;
          v49 = (__int64)*(float *)&v49;
          v18 = (unsigned int)v49 % v17;
          if ( !v15 || v18 >= (v16 - v15) >> 2 )
          {
            _invalid_parameter_noinfo();
            v15 = dword_B429D0;
          }
          v14 = *(_DWORD *)&v15[4 * v18];
        }
      }
      v19 = (_BYTE *)dword_B429B8;
      v20 = (unsigned int *)a8;
      if ( *(_DWORD *)(dword_B429B8 + 0xC) == 1 )
      {
        LOBYTE(v8) = sub_78FD30(a1, v14 / 2, &dword_B429FC);
      }
      else
      {
        if ( *(_DWORD *)(dword_B429B8 + 0xC) != 2 )
        {
LABEL_30:
          v21 = *v19 == 0;
          *(float *)&a8 = 1.0;
          if ( !v21 )
          {
            *(float *)&a3 = sub_78FA00((float *)a3);
            *(float *)&a3 = *(float *)&a3 + (1.0 - *(float *)&a3) * a2;
            *(float *)&a3 = *(float *)&a3 * (*(float *)&a3 * *(float *)&a3);
            v57 = 1.0 - *(float *)(v22 + 4);
            *(float *)&a8 = (1.0 - *(float *)&a3) * v57 + *(float *)&a3;
          }
          *(float *)&v23 = COERCE_FLOAT(FormHeapAlloc(0x4Cu));
          a3 = (int)v23;
          v56 = 0;
          if ( *(float *)&v23 == 0.0 )
          {
            *(float *)&v26 = 0.0;
          }
          else
          {
            v47 = a7;
            v45 = a6;
            v24 = sub_78EA00(0.0, flt_A5A04C);
            v44 = Double_To_SInt32(v24) % *(_DWORD *)(dword_B429B8 + 0x38);
            v25 = Double_To_SInt32(*(float *)&a8 * dbl_A3DDD8);
            *(float *)&v26 = COERCE_FLOAT(sub_7A7D10(v23, (int)a1, v25, v44, v45, v47));
          }
          v56 = 0xFFFFFFFF;
          a3 = (int)v26;
          sub_791770(v20, &a3);
          if ( *(_DWORD *)(dword_B429B8 + 0xC) == 1 )
            sub_791770(&dword_B429FC, &a3);
          v27 = sub_78FA40((_DWORD *)(dword_B429B8 + 0x10), v14 / 2);
          v28 = a4;
          *((_BYTE *)v26 + 0x40) = v14;
          v29 = (float *)v27;
          *(float *)&a3 = v28[1] * v28[1] + *v28 * *v28 + v28[2] * v28[2];
          a3 = (a3 >> 1) + 0x1FC00000;
          if ( *(float *)&a3 >= dbl_A68618 )
            v30 = sub_78F250(v55, a5, v28, *(float *)(v27 + 0x10));
          else
            v30 = a5;
          v31 = *(_DWORD *)v30;
          v32 = *((_DWORD *)v30 + 1);
          v33 = v30[2];
          v49 = __PAIR64__(v32, v31);
          v50 = v33;
          sub_78ED70((float *)&v49);
          v34 = *((float *)&v49 + 1);
          v35 = v49;
          v36 = v50;
          v37 = HIDWORD(v49);
          v38 = v50;
          v39 = *((float *)&v49 + 1) * v50;
          *((_DWORD *)v26 + 7) = v49;
          *((_DWORD *)v26 + 8) = v37;
          v26[9] = v38;
          *((_DWORD *)v26 + 0xA) = v35;
          *((_DWORD *)v26 + 0xB) = v37;
          v26[0xC] = v38;
          v51 = v39 - v39;
          v52 = v36 * *(float *)&v49 - v36 * *(float *)&v49;
          v53 = v34 * *(float *)&v49 - v34 * *(float *)&v49;
          sub_78ED70(&v51);
          v40 = v52;
          v41 = v53;
          v26[0xD] = v51;
          v26[0xE] = v40;
          v26[0xF] = v41;
          v46 = -v29[4];
          *(float *)&a3 = sub_78EA00(v46, v29[4]);
          v42 = *(float *)&a3;
          *(float *)&a3 = v29[2] + *(float *)&a3;
          v58 = v29[3] + v42;
          v54[0] = v42 + v29[1];
          v54[1] = *(float *)&a3;
          v54[2] = v58;
          LOBYTE(v8) = sub_7A7F10((int)v26, v54, 1);
          return v8;
        }
        LOBYTE(v8) = sub_78FD30(a1, v14 / 2, (_DWORD *)a8);
      }
      if ( !(_BYTE)v8 )
        return v8;
      v19 = (_BYTE *)dword_B429B8;
      goto LABEL_30;
    }
  }
  return v8;
}
