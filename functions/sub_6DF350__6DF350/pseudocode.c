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
  float x; // edx
  double v24; // rt0
  float y; // eax
  float z; // ecx
  double v27; // rt1
  int v28; // eax
  int v29; // eax
  double v30; // st7
  int v31; // ecx
  float *v32; // esi
  int v33; // ecx
  float angleZ; // [esp+18h] [ebp-F4h]
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
  float v49[9]; // [esp+A0h] [ebp-6Ch] BYREF
  NiMatrix33 right; // [esp+C4h] [ebp-48h] BYREF
  NiMatrix33 out; // [esp+E8h] [ebp-24h] BYREF

  v5 = *(float **)(this + 0x10); /*0x6df359*/
  if ( !v5 ) /*0x6df35e*/
  {
    *a4 = -flt_A7DEB4; /*0x6df36f*/
    a4[4] = -flt_A7DEB4; /*0x6df379*/
    a4[7] = -flt_A7DEB4; /*0x6df384*/
    *(float *)(this + 0x18) = -flt_A7DEB4; /*0x6df391*/
    *(float *)(this + 0x28) = -flt_A7DEB4; /*0x6df39c*/
    *(float *)(this + 0x34) = -flt_A7DEB4; /*0x6df3a7*/
    return 0; /*0x6df3b1*/
  }
  v7 = v5[0x22]; /*0x6df3b4*/
  v8 = v5[0x23]; /*0x6df3ba*/
  v9 = v5[0x24]; /*0x6df3c0*/
  v36 = v7; /*0x6df3c6*/
  v10 = *(_DWORD *)(this + 0x38); /*0x6df3ca*/
  v38 = v9; /*0x6df3d0*/
  v11 = *(float **)(a3 + 0x1C); /*0x6df3db*/
  v37 = v8; /*0x6df3df*/
  if ( v10 ) /*0x6df3e3*/
  {
    result = (*(int (__stdcall **)(_DWORD, int, float *))(*(_DWORD *)v10 + 0x54))(LODWORD(a2), a3, &v45.scale); /*0x6df3fb*/
    if ( !result ) /*0x6df3ff*/
    {
      *(float *)(this + 0x18) = -flt_A7DEB4; /*0x6df40b*/
      *(float *)(this + 0x28) = -flt_A7DEB4; /*0x6df416*/
      *(float *)(this + 0x34) = -flt_A7DEB4; /*0x6df421*/
      return result; /*0x6df42b*/
    }
    sub_471390((_DWORD *)(this + 0x18), &v45.scale); /*0x6df436*/
  }
  else
  {
    v12 = *(float *)(a3 + 0x58); /*0x6df440*/
    v45.scale = *(float *)(a3 + 0x54); /*0x6df443*/
    v13 = *(float *)(a3 + 0x5C); /*0x6df447*/
    v46 = v12; /*0x6df44a*/
    v47 = v13; /*0x6df44e*/
  }
  if ( v11 ) /*0x6df461*/
  {
    qmemcpy(v49, v11 + 0x19, sizeof(v49)); /*0x6df466*/
    v35 = v11[0x25]; /*0x6df46e*/
    v14 = sub_7101F0((NiTransform *)v49, &v45, (NiPoint3 *)&v45.scale); /*0x6df483*/
    v39 = v35 * v14->rot.data[0][0]; /*0x6df490*/
    v40 = v14->rot.data[0][1] * v35; /*0x6df499*/
    v41 = v35 * v14->rot.data[0][2]; /*0x6df4a0*/
    v45.rot.data[0][0] = v11[0x22] + v39; /*0x6df4ae*/
    scale = v45.rot.data[0][0]; /*0x6df4b2*/
    v45.rot.data[0][1] = v11[0x23] + v40; /*0x6df4c0*/
    v16 = v45.rot.data[0][1]; /*0x6df4c4*/
    v45.rot.data[0][2] = v11[0x24] + v41; /*0x6df4d2*/
    v17 = v45.rot.data[0][2]; /*0x6df4d6*/
  }
  else
  {
    scale = v45.scale; /*0x6df4dc*/
    v16 = v46; /*0x6df4e0*/
    qmemcpy(v49, &stru_B26AF0[0xA].unk2C, sizeof(v49)); /*0x6df4e9*/
    v17 = v47; /*0x6df4eb*/
  }
  v39 = scale; /*0x6df4f3*/
  v40 = v16; /*0x6df4fb*/
  v41 = v17; /*0x6df4ff*/
  v42 = v36 - scale; /*0x6df503*/
  v43 = v37 - v16; /*0x6df50f*/
  v44 = v38 - v17; /*0x6df51b*/
  v35 = v42 * v42 + v43 * v43 + v44 * v44; /*0x6df53b*/
  if ( v35 < (double)flt_A37080 ) /*0x6df54e*/
  {
    sub_70FD10(v45.rot.data[1]); /*0x6df554*/
    goto LABEL_34; /*0x6df559*/
  }
  Vector3_NormalizeInPlace(&v42); /*0x6df562*/
  v18 = v44; /*0x6df577*/
  v19 = v43; /*0x6df57c*/
  if ( v44 < (double)flt_A7B17C ) /*0x6df580*/
  {
    v20 = v44; /*0x6df582*/
    v21 = v43; /*0x6df582*/
    if ( v44 > dbl_A3F460 ) /*0x6df58f*/
    {
LABEL_18:
      x = stru_B258DC.x; /*0x6df5b1*/
      v24 = v20; /*0x6df5b7*/
      v19 = v21; /*0x6df5b7*/
      v18 = v24; /*0x6df5b7*/
      y = stru_B258DC.y; /*0x6df5b9*/
      v35 = v19; /*0x6df5be*/
      z = stru_B258DC.z; /*0x6df5c2*/
      goto LABEL_21; /*0x6df5c8*/
    }
    v19 = v43; /*0x6df591*/
    v18 = v44; /*0x6df591*/
  }
  if ( flt_A7B178 < v18 ) /*0x6df5a0*/
  {
    v22 = v19; /*0x6df5a2*/
    v20 = v18; /*0x6df5a2*/
    v21 = v22; /*0x6df5a2*/
    if ( v20 < dbl_A7B170 ) /*0x6df5af*/
      goto LABEL_18; /*0x6df5af*/
    v27 = v20; /*0x6df5ca*/
    v19 = v21; /*0x6df5ca*/
    v18 = v27; /*0x6df5ca*/
  }
  x = rhs.x; /*0x6df5cc*/
  y = rhs.y; /*0x6df5d4*/
  v35 = v18; /*0x6df5d9*/
  z = rhs.z; /*0x6df5dd*/
LABEL_21:
  v36 = v42 * v35; /*0x6df5e5*/
  v37 = v19 * v35; /*0x6df60d*/
  v38 = v18 * v35; /*0x6df613*/
  v45.rot.data[0][0] = x - v36; /*0x6df61f*/
  v45.rot.data[0][1] = y - v37; /*0x6df62b*/
  v45.rot.data[0][2] = z - v38; /*0x6df637*/
  Vector3_NormalizeInPlace((float *)&v45); /*0x6df63b*/
  if ( (*(_BYTE *)(this + 0xC) & 1) == 0 ) /*0x6df646*/
  {
    v36 = -v42; /*0x6df64e*/
    v42 = v36; /*0x6df65a*/
    v37 = -v43; /*0x6df660*/
    v43 = v37; /*0x6df66c*/
    v38 = -v44; /*0x6df672*/
    v44 = v38; /*0x6df67a*/
  }
  v28 = (*(unsigned __int8 *)(this + 0xC) >> 1) & 3; /*0x6df690*/
  v39 = v45.rot.data[0][1] * v44 - v45.rot.data[0][2] * v43; /*0x6df6a6*/
  v40 = v45.rot.data[0][2] * v42 - v45.rot.data[0][0] * v44; /*0x6df6bc*/
  v41 = v45.rot.data[0][0] * v43 - v45.rot.data[0][1] * v42; /*0x6df6cc*/
  if ( !v28 ) /*0x6df6d0*/
  {
    v45.rot.data[1][0] = v42; /*0x6df77d*/
    v45.rot.data[2][0] = v43; /*0x6df783*/
    v45.pos.x = v44; /*0x6df789*/
    v45.rot.data[1][1] = v45.rot.data[0][0]; /*0x6df78f*/
    v45.rot.data[2][1] = v45.rot.data[0][1]; /*0x6df793*/
    v45.pos.y = v45.rot.data[0][2]; /*0x6df797*/
    v36 = -v39; /*0x6df7a1*/
    v37 = -v40; /*0x6df7ab*/
    v30 = v41; /*0x6df7af*/
    goto LABEL_28; /*0x6df7b3*/
  }
  v29 = v28 - 1; /*0x6df6d6*/
  if ( !v29 ) /*0x6df6d9*/
  {
    v45.rot.data[1][0] = v39; /*0x6df723*/
    v45.rot.data[2][0] = v40; /*0x6df72b*/
    v45.pos.x = v41; /*0x6df733*/
    v45.rot.data[1][1] = v42; /*0x6df73b*/
    v45.rot.data[2][1] = v43; /*0x6df741*/
    v30 = v45.rot.data[0][2]; /*0x6df745*/
    v45.pos.y = v44; /*0x6df747*/
    v36 = -v45.rot.data[0][0]; /*0x6df74f*/
    v37 = -v45.rot.data[0][1]; /*0x6df755*/
LABEL_28:
    v38 = -v30; /*0x6df759*/
    v45.rot.data[1][2] = v36; /*0x6df763*/
    v45.rot.data[2][2] = v37; /*0x6df76b*/
    v45.pos.z = v38; /*0x6df773*/
    goto LABEL_30; /*0x6df777*/
  }
  if ( v29 == 1 ) /*0x6df6de*/
  {
    v45.rot.data[1][0] = v39; /*0x6df6e8*/
    v45.rot.data[2][0] = v40; /*0x6df6f0*/
    v45.pos.x = v41; /*0x6df6f8*/
    v45.rot.data[1][1] = v45.rot.data[0][0]; /*0x6df6fc*/
    v45.rot.data[2][1] = v45.rot.data[0][1]; /*0x6df702*/
    v45.pos.y = v45.rot.data[0][2]; /*0x6df706*/
    v45.rot.data[1][2] = v42; /*0x6df70e*/
    v45.rot.data[2][2] = v43; /*0x6df712*/
    v45.pos.z = v44; /*0x6df716*/
  }
LABEL_30:
  qmemcpy(v45.rot.data[1], sub_710490(v49, (float *)&right, v45.rot.data[1]), 0x24u); /*0x6df7bf*/
  v31 = *(_DWORD *)(this + 0x3C); /*0x6df7e5*/
  if ( v31 ) /*0x6df7ea*/
  {
    if ( !(*(unsigned __int8 (__stdcall **)(_DWORD, int, float *))(*(_DWORD *)v31 + 0x5C))(LODWORD(a2), a3, &v35) ) /*0x6df809*/
    {
      sub_6C34D0((float *)(this + 0x18)); /*0x6df812*/
      return 0; /*0x6df823*/
    }
    angleZ = -v35; /*0x6df834*/
    NiMatrix33_InitRotationZ(&right, angleZ); /*0x6df837*/
    qmemcpy(v45.rot.data[1], NiMAtrix33_Multiply((NiMatrix33 *)v45.rot.data[1], &out, &right), 0x24u); /*0x6df860*/
  }
LABEL_34:
  sub_7150F0(v48, v45.rot.data[1]); /*0x6df862*/
  v32 = (float *)(this + 0x18); /*0x6df874*/
  sub_471430((_DWORD *)(this + 0x18), v48); /*0x6df87a*/
  v33 = *(_DWORD *)(this + 0x40); /*0x6df87f*/
  if ( v33 ) /*0x6df884*/
  {
    result = (*(int (__stdcall **)(_DWORD, int, float *))(*(_DWORD *)v33 + 0x5C))(LODWORD(a2), a3, &v35); /*0x6df8a3*/
    if ( !result ) /*0x6df8a7*/
    {
      *v32 = -flt_A7DEB4; /*0x6df8b2*/
      *(float *)(this + 0x28) = -flt_A7DEB4; /*0x6df8bc*/
      *(float *)(this + 0x34) = -flt_A7DEB4; /*0x6df8c7*/
      return result; /*0x6df8d3*/
    }
    sub_471560((float *)(this + 0x18), v35); /*0x6df8e0*/
  }
  if ( NiTransform_IsInvalid((float *)(this + 0x18)) ) /*0x6df8e7*/
  {
    *a4 = -flt_A7DEB4; /*0x6df900*/
    a4[4] = -flt_A7DEB4; /*0x6df90d*/
    a4[7] = -flt_A7DEB4; /*0x6df918*/
    return 0; /*0x6df91b*/
  }
  else
  {
    qmemcpy(a4, v32, 0x20u); /*0x6df939*/
    *(float *)(this + 8) = a2; /*0x6df93b*/
    return 1; /*0x6df941*/
  }
}
