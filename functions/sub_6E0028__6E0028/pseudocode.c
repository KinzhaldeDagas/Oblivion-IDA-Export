// positive sp value has been detected, the output may be wrong!
void __userpurge sub_6E0028(float a1@<eax>, float *a2@<ebx>, NiPoint3 *a3@<ebp>, int a4)
{
  NiTransform *v4; // eax
  float x; // eax
  float y; // ecx
  float z; // edx
  double v8; // st7
  float v9; // eax
  float v10; // ecx
  float v11; // edx
  int v12; // eax
  int v13; // eax
  double v14; // st7
  float v15; // [esp-A4h] [ebp-A4h]
  float v16; // [esp-A4h] [ebp-A4h]
  float v17; // [esp-A4h] [ebp-A4h]
  float v18; // [esp-A4h] [ebp-A4h]
  float v19; // [esp-A0h] [ebp-A0h]
  float v20; // [esp-A0h] [ebp-A0h]
  float v21; // [esp-A0h] [ebp-A0h]
  float v22; // [esp-A0h] [ebp-A0h]
  float v23; // [esp-9Ch] [ebp-9Ch]
  float v24; // [esp-9Ch] [ebp-9Ch]
  float v25; // [esp-9Ch] [ebp-9Ch]
  float v26; // [esp-9Ch] [ebp-9Ch]
  float v27; // [esp-98h] [ebp-98h]
  float v28; // [esp-98h] [ebp-98h]
  float v29; // [esp-94h] [ebp-94h]
  float v30; // [esp-94h] [ebp-94h]
  float v31; // [esp-90h] [ebp-90h]
  float v32; // [esp-90h] [ebp-90h]
  float v33; // [esp-8Ch] [ebp-8Ch] BYREF
  float v34; // [esp-88h] [ebp-88h]
  float v35; // [esp-84h] [ebp-84h]
  NiTransform v36; // [esp-80h] [ebp-80h] BYREF
  int v37; // [esp-4Ch] [ebp-4Ch]
  NiTransform v38; // [esp-48h] [ebp-48h] BYREF

  LOBYTE(a1) &= 0x14u; /*0x6e0028*/
  v23 = a1; /*0x6e002a*/
  if ( LOBYTE(a1) ) /*0x6e0037*/
  {
    qmemcpy(&v38, a2 + 0x19, 0x24u); /*0x6e003c*/
    v36.rot.data[1][0] = a2[0x25]; /*0x6e0044*/
    v4 = sub_7101F0(&v38, &v36, a3 + 7); /*0x6e0055*/
    v27 = v4->rot.data[0][0] * v36.rot.data[1][0]; /*0x6e0066*/
    v29 = v4->rot.data[0][1] * v36.rot.data[1][0]; /*0x6e006f*/
    v31 = v36.rot.data[1][0] * v4->rot.data[0][2]; /*0x6e0076*/
    v36.rot.data[0][0] = a2[0x22] + v27; /*0x6e0084*/
    x = v36.rot.data[0][0]; /*0x6e0088*/
    v36.rot.data[0][1] = a2[0x23] + v29; /*0x6e0096*/
    y = v36.rot.data[0][1]; /*0x6e009a*/
    v36.rot.data[0][2] = a2[0x24] + v31; /*0x6e00a8*/
    z = v36.rot.data[0][2]; /*0x6e00ac*/
  }
  else
  {
    qmemcpy(&v38, &stru_B26AF0[0xA].unk2C, 0x24u); /*0x6e00b7*/
    x = a3[7].x; /*0x6e00b9*/
    y = a3[7].y; /*0x6e00bc*/
    z = a3[7].z; /*0x6e00bf*/
  }
  v33 = v15 - x; /*0x6e00d6*/
  v34 = v19 - y; /*0x6e00e2*/
  v35 = v23 - z; /*0x6e00ee*/
  v36.rot.data[1][0] = v33 * v33 + v34 * v34 + v35 * v35; /*0x6e010e*/
  if ( v36.rot.data[1][0] >= (double)flt_A37080 ) /*0x6e0121*/
  {
    Vector3_NormalizeInPlace(&v33); /*0x6e0135*/
    v8 = v35; /*0x6e014a*/
    if ( v35 >= (double)flt_A7B17C || v8 <= dbl_A3F460 ) /*0x6e0164*/
    {
      v9 = rhs.x; /*0x6e017d*/
      v10 = rhs.y; /*0x6e0184*/
      v36.rot.data[1][0] = v35; /*0x6e018a*/
      v11 = rhs.z; /*0x6e018e*/
    }
    else
    {
      v9 = stru_B258DC.x; /*0x6e0166*/
      v36.rot.data[1][0] = v34; /*0x6e016b*/
      v10 = stru_B258DC.y; /*0x6e016f*/
      v11 = stru_B258DC.z; /*0x6e0175*/
    }
    v16 = v33 * v36.rot.data[1][0]; /*0x6e01b4*/
    v20 = v34 * v36.rot.data[1][0]; /*0x6e01be*/
    v24 = v8 * v36.rot.data[1][0]; /*0x6e01c4*/
    v36.rot.data[0][0] = v9 - v16; /*0x6e01d0*/
    v36.rot.data[0][1] = v10 - v20; /*0x6e01dc*/
    v36.rot.data[0][2] = v11 - v24; /*0x6e01e8*/
    Vector3_NormalizeInPlace((float *)&v36); /*0x6e01ec*/
    if ( (*(_BYTE *)(v37 + 0x3C) & 1) == 0 ) /*0x6e01fb*/
    {
      v17 = -v33; /*0x6e0203*/
      v33 = v17; /*0x6e020f*/
      v21 = -v34; /*0x6e0215*/
      v34 = v21; /*0x6e0221*/
      v25 = -v35; /*0x6e0227*/
      v35 = v25; /*0x6e022f*/
    }
    v12 = (*(unsigned __int8 *)(v37 + 0x3C) >> 1) & 3; /*0x6e0245*/
    if ( v12 ) /*0x6e0285*/
    {
      v13 = v12 - 1; /*0x6e028b*/
      if ( v13 ) /*0x6e028e*/
      {
        if ( v13 == 1 ) /*0x6e0293*/
        {
          v36.rot.data[1][1] = v36.rot.data[0][1] * v35 - v36.rot.data[0][2] * v34; /*0x6e029d*/
          v36.rot.data[2][1] = v36.rot.data[0][2] * v33 - v36.rot.data[0][0] * v35; /*0x6e02a5*/
          v36.pos.y = v36.rot.data[0][0] * v34 - v36.rot.data[0][1] * v33; /*0x6e02ad*/
          v36.rot.data[1][2] = v36.rot.data[0][0]; /*0x6e02b1*/
          v36.rot.data[2][2] = v36.rot.data[0][1]; /*0x6e02b7*/
          v36.pos.z = v36.rot.data[0][2]; /*0x6e02bb*/
          v36.rot.data[2][0] = v33; /*0x6e02c3*/
          v36.pos.x = v34; /*0x6e02c7*/
          v36.scale = v35; /*0x6e02cb*/
        }
        goto LABEL_19; /*0x6e02cf*/
      }
      v36.rot.data[1][1] = v36.rot.data[0][1] * v35 - v36.rot.data[0][2] * v34; /*0x6e02d8*/
      v36.rot.data[2][1] = v36.rot.data[0][2] * v33 - v36.rot.data[0][0] * v35; /*0x6e02e0*/
      v36.pos.y = v36.rot.data[0][0] * v34 - v36.rot.data[0][1] * v33; /*0x6e02e8*/
      v36.rot.data[1][2] = v33; /*0x6e02f0*/
      v36.rot.data[2][2] = v34; /*0x6e02f6*/
      v14 = v36.rot.data[0][2]; /*0x6e02fa*/
      v36.pos.z = v35; /*0x6e02fc*/
      v18 = -v36.rot.data[0][0]; /*0x6e0304*/
      v22 = -v36.rot.data[0][1]; /*0x6e030a*/
    }
    else
    {
      v36.rot.data[1][1] = v33; /*0x6e0332*/
      v36.rot.data[2][1] = v34; /*0x6e0338*/
      v36.pos.y = v35; /*0x6e033e*/
      v36.rot.data[1][2] = v36.rot.data[0][0]; /*0x6e0344*/
      v36.rot.data[2][2] = v36.rot.data[0][1]; /*0x6e0348*/
      v36.pos.z = v36.rot.data[0][2]; /*0x6e034c*/
      v28 = v36.rot.data[0][1] * v35 - v36.rot.data[0][2] * v34; /*0x6e025b*/
      v18 = -v28; /*0x6e0356*/
      v30 = v36.rot.data[0][2] * v33 - v36.rot.data[0][0] * v35; /*0x6e0271*/
      v22 = -v30; /*0x6e0360*/
      v32 = v36.rot.data[0][0] * v34 - v36.rot.data[0][1] * v33; /*0x6e0281*/
      v14 = v32; /*0x6e0364*/
    }
    v26 = -v14; /*0x6e0310*/
    v36.rot.data[2][0] = v18; /*0x6e0318*/
    v36.pos.x = v22; /*0x6e0320*/
    v36.scale = v26; /*0x6e0328*/
LABEL_19:
    qmemcpy(&v36.rot.data[1][1], sub_710490((float *)&v38, &v38.pos.x, &v36.rot.data[1][1]), 0x24u); /*0x6e0374*/
    goto LABEL_20; /*0x6e0395*/
  }
  sub_70FD10(&v36.rot.data[1][1]); /*0x6e0127*/
LABEL_20:
  qmemcpy(&a3[4], &v36.rot.data[1][1], 0x24u); /*0x6e0397*/
}
