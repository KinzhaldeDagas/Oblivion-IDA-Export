int __thiscall sub_721B70(float *this, int a2)
{
  int v3; // eax
  NiTransform *v4; // esi
  char v5; // al
  int v6; // eax
  double v7; // st7
  double v8; // st7
  double v9; // st7
  double v10; // st7
  float *v11; // eax
  float *v12; // eax
  float *v13; // eax
  double v14; // st7
  float *v16; // eax
  double v17; // st7
  double v18; // st7
  double v19; // st7
  double v20; // st7
  double v21; // st7
  float *v22; // eax
  float *v23; // eax
  float *v24; // eax
  float v25; // eax
  float *v26; // eax
  float v27; // [esp+0h] [ebp-144h]
  float v28; // [esp+0h] [ebp-144h]
  int v29; // [esp+14h] [ebp-130h] BYREF
  float v30; // [esp+18h] [ebp-12Ch]
  float v31; // [esp+1Ch] [ebp-128h]
  float v32; // [esp+20h] [ebp-124h]
  float v33; // [esp+24h] [ebp-120h] BYREF
  float v34; // [esp+28h] [ebp-11Ch]
  float v35; // [esp+2Ch] [ebp-118h]
  float v36; // [esp+30h] [ebp-114h] BYREF
  float v37; // [esp+34h] [ebp-110h]
  float v38; // [esp+38h] [ebp-10Ch]
  float v39; // [esp+3Ch] [ebp-108h] BYREF
  float v40; // [esp+40h] [ebp-104h]
  float v41; // [esp+44h] [ebp-100h]
  float v42; // [esp+48h] [ebp-FCh]
  float v43[9]; // [esp+4Ch] [ebp-F8h] BYREF
  float v44[3]; // [esp+70h] [ebp-D4h] BYREF
  float v45[3]; // [esp+7Ch] [ebp-C8h] BYREF
  float v46[3]; // [esp+88h] [ebp-BCh] BYREF
  float v47[3]; // [esp+94h] [ebp-B0h] BYREF
  float v48[3]; // [esp+A0h] [ebp-A4h] BYREF
  float v49[3]; // [esp+ACh] [ebp-98h] BYREF
  float v50[3]; // [esp+B8h] [ebp-8Ch] BYREF
  float v51[3]; // [esp+C4h] [ebp-80h] BYREF
  float v52[3]; // [esp+D0h] [ebp-74h] BYREF
  NiTransform v53; // [esp+DCh] [ebp-68h] BYREF
  NiTransform v54; // [esp+110h] [ebp-34h] BYREF

  v3 = *((_DWORD *)this + 7);
  if ( v3 )
    qmemcpy(&v53, (const void *)(v3 + 0x64), sizeof(v53));
  else
    sub_718A50((float *)&v53);
  v4 = sub_53D7A0(&v53, &v54, (NiTransform *)(this + 0xC));
  v5 = *((_BYTE *)this + 0xDC);
  qmemcpy(this + 0x19, v4, 0x34u);
  v6 = v5 & 7;
  qmemcpy(v43, &stru_B26AF0[0xA].unk2C, sizeof(v43));
  switch ( v6 )
  {
    case 0:
    case 3:
      if ( v6 == 3 )
      {
        if ( sub_7217C0((float *)a2, this + 0x22, (float *)&v29, &v39, &v36) )
          goto LABEL_9;
LABEL_23:
        JUMPOUT(0x722292);
      }
      v29 = *(int *)(a2 + 0x64);
      v30 = *(float *)(a2 + 0x70);
      v31 = *(float *)(a2 + 0x7C);
      v39 = -*(float *)&v29;
      *(float *)&v29 = v39;
      v40 = -v30;
      v30 = v40;
      v41 = -v31;
      v7 = *(float *)(a2 + 0x68);
      v31 = v41;
      v36 = v7;
      v8 = *(float *)(a2 + 0x74);
      v39 = v36;
      v37 = v8;
      v9 = *(float *)(a2 + 0x80);
      v40 = v37;
      v38 = v9;
      v10 = *(float *)(a2 + 0x6C);
      v41 = v38;
      v33 = v10;
      v34 = *(float *)(a2 + 0x78);
      v35 = *(float *)(a2 + 0x84);
      v36 = v33;
      v37 = v34;
      v38 = v35;
LABEL_9:
      v11 = sub_710250(v50, (float *)&v29, this + 0x19);
      v29 = *(int *)v11;
      v30 = v11[1];
      v31 = v11[2];
      v12 = sub_710250(v45, &v39, this + 0x19);
      v39 = *v12;
      v40 = v12[1];
      v41 = v12[2];
      v13 = sub_710250(v47, &v36, this + 0x19);
      v36 = *v13;
      v37 = v13[1];
      v38 = v13[2];
      v32 = v40 * v40 + v37 * v37;
      v32 = sqrt(v32);
      if ( v32 <= (double)flt_A372CC )
      {
        v33 = -v36;
        v34 = -v37;
        v35 = -v38;
        v43[0] = v33;
        v43[3] = v34;
        v43[6] = v35;
        v33 = -v39;
        v34 = -v40;
        v35 = -v41;
        v43[1] = v33;
        v43[4] = v34;
        v14 = v35;
      }
      else
      {
        v32 = 1.0 / v32;
        v42 = v32 * v40;
        v32 = v32 * -v37;
        v43[0] = v36 * v42 + v39 * v32;
        v43[3] = v32 * v40 + v42 * v37;
        v43[6] = v41 * v32 + v38 * v42;
        v43[1] = v39 * v42 - v36 * v32;
        v43[4] = v40 * v42 - v37 * v32;
        v14 = v42 * v41 - v32 * v38;
      }
      v43[7] = v14;
      v43[2] = *(float *)&v29;
      v43[5] = v30;
      v43[8] = v31;
      return def_721BEB(a2);
    case 1:
      v33 = *(float *)(a2 + 0x88) - *(this + 0x22);
      v34 = *(float *)(a2 + 0x8C) - *(this + 0x23);
      v35 = *(float *)(a2 + 0x90) - *(this + 0x24);
      v27 = *(this + 0x25);
      v16 = sub_710250(v51, &v33, this + 0x19);
      sub_4BF9B0(v16, (float *)&v29, v27);
      v42 = v31 * v31 + *(float *)&v29 * *(float *)&v29;
      v42 = sqrt(v42);
      v32 = v42;
      if ( v42 < (double)flt_A7F7D8 )
        return def_721BEB(a2);
      v32 = 1.0 / v42;
      *(float *)&v29 = *(float *)&v29 * v32;
      v31 = v32 * v31;
      v43[0] = v31;
      v43[3] = 0.0;
      v43[6] = -*(float *)&v29;
      v43[1] = 0.0;
      v43[4] = 1.0;
      v43[7] = 0.0;
      v43[5] = 0.0;
      v43[2] = *(float *)&v29;
      v43[8] = v31;
      return def_721BEB(a2);
    case 2:
    case 4:
      if ( v6 == 4 )
      {
        if ( !sub_7217C0((float *)a2, this + 0x22, &v36, &v39, (float *)&v29) )
          goto LABEL_23;
      }
      else
      {
        v33 = *(float *)(a2 + 0x64);
        v34 = *(float *)(a2 + 0x70);
        v35 = *(float *)(a2 + 0x7C);
        *(float *)&v29 = -v33;
        v36 = *(float *)&v29;
        v30 = -v34;
        v37 = v30;
        v31 = -v35;
        v17 = *(float *)(a2 + 0x68);
        v38 = v31;
        v33 = v17;
        v18 = *(float *)(a2 + 0x74);
        v39 = v33;
        v34 = v18;
        v19 = *(float *)(a2 + 0x80);
        v40 = v34;
        v35 = v19;
        v20 = *(float *)(a2 + 0x6C);
        v41 = v35;
        v33 = v20;
        v21 = *(float *)(a2 + 0x78);
        *(float *)&v29 = v33;
        v34 = v21;
        v35 = *(float *)(a2 + 0x84);
        v30 = v34;
        v31 = v35;
      }
      v22 = sub_710250(v49, &v36, this + 0x19);
      v36 = *v22;
      v37 = v22[1];
      v38 = v22[2];
      v23 = sub_710250(v52, &v39, this + 0x19);
      v39 = *v23;
      v40 = v23[1];
      v41 = v23[2];
      v24 = sub_710250(v46, (float *)&v29, this + 0x19);
      v29 = *(int *)v24;
      v30 = v24[1];
      v25 = v24[2];
      v43[0] = *(float *)&v29;
      v31 = v25;
      v43[3] = v30;
      v43[6] = v25;
      v43[1] = v39;
      v43[4] = v40;
      v43[7] = v41;
      v43[2] = v36;
      v43[5] = v37;
      v43[8] = v38;
      return def_721BEB(a2);
    case 5:
      *(this + 0x19) = 1.0;
      *(this + 0x1C) = 0.0;
      *(this + 0x1F) = 0.0;
      *(this + 0x1A) = 0.0;
      *(this + 0x20) = 0.0;
      *(this + 0x1D) = 1.0;
      *(this + 0x1B) = 0.0;
      *(this + 0x1E) = 0.0;
      *(this + 0x21) = 1.0;
      v44[0] = *(float *)(a2 + 0x88) - *(this + 0x22);
      v44[1] = *(float *)(a2 + 0x8C) - *(this + 0x23);
      v44[2] = *(float *)(a2 + 0x90) - *(this + 0x24);
      v28 = *(this + 0x25);
      v26 = sub_710250(v48, v44, this + 0x19);
      sub_4BF9B0(v26, (float *)&v29, v28);
      v42 = v30 * v30 + *(float *)&v29 * *(float *)&v29;
      v42 = sqrt(v42);
      v32 = v42;
      if ( v42 < (double)flt_A7F7D8 )
        return def_721BEB(a2);
      v32 = 1.0 / v42;
      *(float *)&v29 = *(float *)&v29 * v32;
      v30 = v32 * v30;
      v43[0] = -v30;
      v43[3] = *(float *)&v29;
      v43[6] = 0.0;
      v43[1] = 0.0;
      v43[4] = 0.0;
      v43[7] = 1.0;
      v43[2] = *(float *)&v29;
      v43[5] = v30;
      v43[8] = 0.0;
      return def_721BEB(a2);
    default:
      goto LABEL_23;
  }
}
