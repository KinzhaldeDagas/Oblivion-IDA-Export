// positive sp value has been detected, the output may be wrong!
void __userpurge sub_6E0028(float a1@<eax>, float *a2@<ebx>, NiPoint3 *a3@<ebp>, int a4)
{
  NiTransform *v4; // eax
  float x; // eax
  float y; // ecx
  float z; // edx
  double v8; // st7
  int v9; // eax
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

  LOBYTE(a1) &= 0x14u;
  v23 = a1;
  if ( LOBYTE(a1) )
  {
    qmemcpy(&v38, a2 + 0x19, 0x24u);
    v36.rot.data[1][0] = a2[0x25];
    v4 = sub_7101F0(&v38, &v36, a3 + 7);
    v27 = v4->rot.data[0][0] * v36.rot.data[1][0];
    v29 = v4->rot.data[0][1] * v36.rot.data[1][0];
    v31 = v36.rot.data[1][0] * v4->rot.data[0][2];
    v36.rot.data[0][0] = a2[0x22] + v27;
    x = v36.rot.data[0][0];
    v36.rot.data[0][1] = a2[0x23] + v29;
    y = v36.rot.data[0][1];
    v36.rot.data[0][2] = a2[0x24] + v31;
    z = v36.rot.data[0][2];
  }
  else
  {
    qmemcpy(&v38, &stru_B26AF0[0xA].unk2C, 0x24u);
    x = a3[7].x;
    y = a3[7].y;
    z = a3[7].z;
  }
  v33 = v15 - x;
  v34 = v19 - y;
  v35 = v23 - z;
  v36.rot.data[1][0] = v33 * v33 + v34 * v34 + v35 * v35;
  if ( v36.rot.data[1][0] >= (double)flt_A37080 )
  {
    sub_43F350(&v33);
    v8 = v35;
    if ( v35 >= (double)flt_A7B17C || v8 <= dbl_A3F460 )
    {
      v9 = dword_B258E8;
      v10 = *(float *)&dword_B258EC;
      v36.rot.data[1][0] = v35;
      v11 = *(float *)&dword_B258F0;
    }
    else
    {
      v9 = dword_B258DC;
      v36.rot.data[1][0] = v34;
      v10 = *(float *)&qword_B258E0;
      v11 = *((float *)&qword_B258E0 + 1);
    }
    v16 = v33 * v36.rot.data[1][0];
    v20 = v34 * v36.rot.data[1][0];
    v24 = v8 * v36.rot.data[1][0];
    v36.rot.data[0][0] = *(float *)&v9 - v16;
    v36.rot.data[0][1] = v10 - v20;
    v36.rot.data[0][2] = v11 - v24;
    sub_43F350((float *)&v36);
    if ( (*(_BYTE *)(v37 + 0x3C) & 1) == 0 )
    {
      v17 = -v33;
      v33 = v17;
      v21 = -v34;
      v34 = v21;
      v25 = -v35;
      v35 = v25;
    }
    v12 = (*(unsigned __int8 *)(v37 + 0x3C) >> 1) & 3;
    if ( v12 )
    {
      v13 = v12 - 1;
      if ( v13 )
      {
        if ( v13 == 1 )
        {
          v36.rot.data[1][1] = v36.rot.data[0][1] * v35 - v36.rot.data[0][2] * v34;
          v36.rot.data[2][1] = v36.rot.data[0][2] * v33 - v36.rot.data[0][0] * v35;
          v36.pos.y = v36.rot.data[0][0] * v34 - v36.rot.data[0][1] * v33;
          v36.rot.data[1][2] = v36.rot.data[0][0];
          v36.rot.data[2][2] = v36.rot.data[0][1];
          v36.pos.z = v36.rot.data[0][2];
          v36.rot.data[2][0] = v33;
          v36.pos.x = v34;
          v36.scale = v35;
        }
        goto LABEL_19;
      }
      v36.rot.data[1][1] = v36.rot.data[0][1] * v35 - v36.rot.data[0][2] * v34;
      v36.rot.data[2][1] = v36.rot.data[0][2] * v33 - v36.rot.data[0][0] * v35;
      v36.pos.y = v36.rot.data[0][0] * v34 - v36.rot.data[0][1] * v33;
      v36.rot.data[1][2] = v33;
      v36.rot.data[2][2] = v34;
      v14 = v36.rot.data[0][2];
      v36.pos.z = v35;
      v18 = -v36.rot.data[0][0];
      v22 = -v36.rot.data[0][1];
    }
    else
    {
      v36.rot.data[1][1] = v33;
      v36.rot.data[2][1] = v34;
      v36.pos.y = v35;
      v36.rot.data[1][2] = v36.rot.data[0][0];
      v36.rot.data[2][2] = v36.rot.data[0][1];
      v36.pos.z = v36.rot.data[0][2];
      v28 = v36.rot.data[0][1] * v35 - v36.rot.data[0][2] * v34;
      v18 = -v28;
      v30 = v36.rot.data[0][2] * v33 - v36.rot.data[0][0] * v35;
      v22 = -v30;
      v32 = v36.rot.data[0][0] * v34 - v36.rot.data[0][1] * v33;
      v14 = v32;
    }
    v26 = -v14;
    v36.rot.data[2][0] = v18;
    v36.pos.x = v22;
    v36.scale = v26;
LABEL_19:
    qmemcpy(&v36.rot.data[1][1], sub_710490((float *)&v38, &v38.pos.x, &v36.rot.data[1][1]), 0x24u);
    goto LABEL_20;
  }
  sub_70FD10(&v36.rot.data[1][1]);
LABEL_20:
  qmemcpy(&a3[4], &v36.rot.data[1][1], 0x24u);
}
