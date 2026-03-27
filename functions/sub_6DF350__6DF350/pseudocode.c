char __thiscall sub_6DF350(int this, float a2, int a3, float *a4)
{
  float *v5; // eax
  char result; // al
  float v7; // ecx
  float v8; // edx
  float v9; // eax
  int v10; // ecx
  float *v11; // ebp
  float v12; // ecx
  float v13; // edx
  NiTransform *v14; // eax
  float scale; // edx
  float v16; // eax
  float v17; // ecx
  double v18; // st7
  double v19; // st6
  double v20; // st6
  double v21; // st7
  double v22; // rtt
  int v23; // edx
  double v24; // rt0
  float v25; // eax
  float v26; // ecx
  double v27; // rt1
  int v28; // eax
  int v29; // eax
  double v30; // st7
  int v31; // ecx
  float *v32; // esi
  int v33; // ecx
  float v34; // [esp+18h] [ebp-F4h]
  float v35; // [esp+2Ch] [ebp-E0h] BYREF
  float v36; // [esp+30h] [ebp-DCh]
  float v37; // [esp+34h] [ebp-D8h]
  float v38; // [esp+38h] [ebp-D4h]
  float v39; // [esp+3Ch] [ebp-D0h]
  float v40; // [esp+40h] [ebp-CCh]
  float v41; // [esp+44h] [ebp-C8h]
  float v42; // [esp+48h] [ebp-C4h] BYREF
  float v43; // [esp+4Ch] [ebp-C0h]
  float v44; // [esp+50h] [ebp-BCh]
  NiTransform v45; // [esp+54h] [ebp-B8h] BYREF
  float v46; // [esp+88h] [ebp-84h]
  float v47; // [esp+8Ch] [ebp-80h]
  float v48[4]; // [esp+90h] [ebp-7Ch] BYREF
  NiTransform v49; // [esp+A0h] [ebp-6Ch] BYREF
  float v50[9]; // [esp+E8h] [ebp-24h] BYREF

  v5 = *(float **)(this + 0x10);
  if ( !v5 )
  {
    *a4 = -flt_A7DEB4;
    a4[4] = -flt_A7DEB4;
    a4[7] = -flt_A7DEB4;
    *(float *)(this + 0x18) = -flt_A7DEB4;
    *(float *)(this + 0x28) = -flt_A7DEB4;
    *(float *)(this + 0x34) = -flt_A7DEB4;
    return 0;
  }
  v7 = v5[0x22];
  v8 = v5[0x23];
  v9 = v5[0x24];
  v36 = v7;
  v10 = *(_DWORD *)(this + 0x38);
  v38 = v9;
  v11 = *(float **)(a3 + 0x1C);
  v37 = v8;
  if ( v10 )
  {
    result = (*(int (__stdcall **)(_DWORD, int, float *))(*(_DWORD *)v10 + 0x54))(LODWORD(a2), a3, &v45.scale);
    if ( !result )
    {
      *(float *)(this + 0x18) = -flt_A7DEB4;
      *(float *)(this + 0x28) = -flt_A7DEB4;
      *(float *)(this + 0x34) = -flt_A7DEB4;
      return result;
    }
    sub_471390((_DWORD *)(this + 0x18), &v45.scale);
  }
  else
  {
    v12 = *(float *)(a3 + 0x58);
    v45.scale = *(float *)(a3 + 0x54);
    v13 = *(float *)(a3 + 0x5C);
    v46 = v12;
    v47 = v13;
  }
  if ( v11 )
  {
    qmemcpy(&v49, v11 + 0x19, 0x24u);
    v35 = v11[0x25];
    v14 = sub_7101F0(&v49, &v45, (NiPoint3 *)&v45.scale);
    v39 = v35 * v14->rot.data[0][0];
    v40 = v14->rot.data[0][1] * v35;
    v41 = v35 * v14->rot.data[0][2];
    v45.rot.data[0][0] = v11[0x22] + v39;
    scale = v45.rot.data[0][0];
    v45.rot.data[0][1] = v11[0x23] + v40;
    v16 = v45.rot.data[0][1];
    v45.rot.data[0][2] = v11[0x24] + v41;
    v17 = v45.rot.data[0][2];
  }
  else
  {
    scale = v45.scale;
    v16 = v46;
    qmemcpy(&v49, &stru_B26AF0[0xA].unk2C, 0x24u);
    v17 = v47;
  }
  v39 = scale;
  v40 = v16;
  v41 = v17;
  v42 = v36 - scale;
  v43 = v37 - v16;
  v44 = v38 - v17;
  v35 = v42 * v42 + v43 * v43 + v44 * v44;
  if ( v35 < (double)flt_A37080 )
  {
    sub_70FD10(v45.rot.data[1]);
    goto LABEL_34;
  }
  sub_43F350(&v42);
  v18 = v44;
  v19 = v43;
  if ( v44 < (double)flt_A7B17C )
  {
    v20 = v44;
    v21 = v43;
    if ( v44 > dbl_A3F460 )
    {
LABEL_18:
      v23 = dword_B258DC;
      v24 = v20;
      v19 = v21;
      v18 = v24;
      v25 = *(float *)&qword_B258E0;
      v35 = v19;
      v26 = *((float *)&qword_B258E0 + 1);
      goto LABEL_21;
    }
    v19 = v43;
    v18 = v44;
  }
  if ( flt_A7B178 < v18 )
  {
    v22 = v19;
    v20 = v18;
    v21 = v22;
    if ( v20 < dbl_A7B170 )
      goto LABEL_18;
    v27 = v20;
    v19 = v21;
    v18 = v27;
  }
  v23 = dword_B258E8;
  v25 = *(float *)&dword_B258EC;
  v35 = v18;
  v26 = *(float *)&dword_B258F0;
LABEL_21:
  v36 = v42 * v35;
  v37 = v19 * v35;
  v38 = v18 * v35;
  v45.rot.data[0][0] = *(float *)&v23 - v36;
  v45.rot.data[0][1] = v25 - v37;
  v45.rot.data[0][2] = v26 - v38;
  sub_43F350((float *)&v45);
  if ( (*(_BYTE *)(this + 0xC) & 1) == 0 )
  {
    v36 = -v42;
    v42 = v36;
    v37 = -v43;
    v43 = v37;
    v38 = -v44;
    v44 = v38;
  }
  v28 = (*(unsigned __int8 *)(this + 0xC) >> 1) & 3;
  v39 = v45.rot.data[0][1] * v44 - v45.rot.data[0][2] * v43;
  v40 = v45.rot.data[0][2] * v42 - v45.rot.data[0][0] * v44;
  v41 = v45.rot.data[0][0] * v43 - v45.rot.data[0][1] * v42;
  if ( !v28 )
  {
    v45.rot.data[1][0] = v42;
    v45.rot.data[2][0] = v43;
    v45.pos.x = v44;
    v45.rot.data[1][1] = v45.rot.data[0][0];
    v45.rot.data[2][1] = v45.rot.data[0][1];
    v45.pos.y = v45.rot.data[0][2];
    v36 = -v39;
    v37 = -v40;
    v30 = v41;
    goto LABEL_28;
  }
  v29 = v28 - 1;
  if ( !v29 )
  {
    v45.rot.data[1][0] = v39;
    v45.rot.data[2][0] = v40;
    v45.pos.x = v41;
    v45.rot.data[1][1] = v42;
    v45.rot.data[2][1] = v43;
    v30 = v45.rot.data[0][2];
    v45.pos.y = v44;
    v36 = -v45.rot.data[0][0];
    v37 = -v45.rot.data[0][1];
LABEL_28:
    v38 = -v30;
    v45.rot.data[1][2] = v36;
    v45.rot.data[2][2] = v37;
    v45.pos.z = v38;
    goto LABEL_30;
  }
  if ( v29 == 1 )
  {
    v45.rot.data[1][0] = v39;
    v45.rot.data[2][0] = v40;
    v45.pos.x = v41;
    v45.rot.data[1][1] = v45.rot.data[0][0];
    v45.rot.data[2][1] = v45.rot.data[0][1];
    v45.pos.y = v45.rot.data[0][2];
    v45.rot.data[1][2] = v42;
    v45.rot.data[2][2] = v43;
    v45.pos.z = v44;
  }
LABEL_30:
  qmemcpy(v45.rot.data[1], sub_710490((float *)&v49, &v49.pos.x, v45.rot.data[1]), 0x24u);
  v31 = *(_DWORD *)(this + 0x3C);
  if ( v31 )
  {
    if ( !(*(unsigned __int8 (__stdcall **)(_DWORD, int, float *))(*(_DWORD *)v31 + 0x5C))(LODWORD(a2), a3, &v35) )
    {
      sub_6C34D0((float *)(this + 0x18));
      return 0;
    }
    v34 = -v35;
    NiMatrix33_InitRotationTransform(&v49.pos.x, v34);
    qmemcpy(v45.rot.data[1], NiMAtrix33_Multiply(v45.rot.data[1], v50, &v49.pos.x), 0x24u);
  }
LABEL_34:
  sub_7150F0(v48, v45.rot.data[1]);
  v32 = (float *)(this + 0x18);
  sub_471430((_DWORD *)(this + 0x18), v48);
  v33 = *(_DWORD *)(this + 0x40);
  if ( v33 )
  {
    result = (*(int (__stdcall **)(_DWORD, int, float *))(*(_DWORD *)v33 + 0x5C))(LODWORD(a2), a3, &v35);
    if ( !result )
    {
      *v32 = -flt_A7DEB4;
      *(float *)(this + 0x28) = -flt_A7DEB4;
      *(float *)(this + 0x34) = -flt_A7DEB4;
      return result;
    }
    sub_471560((float *)(this + 0x18), v35);
  }
  if ( sub_6CBC10((float *)(this + 0x18)) )
  {
    *a4 = -flt_A7DEB4;
    a4[4] = -flt_A7DEB4;
    a4[7] = -flt_A7DEB4;
    return 0;
  }
  else
  {
    qmemcpy(a4, v32, 0x20u);
    *(float *)(this + 8) = a2;
    return 1;
  }
}
