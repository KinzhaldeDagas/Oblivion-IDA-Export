NiPoint3 *__thiscall sub_74A0A0(float *this, NiPoint3 *a2, NiPoint3 *a3, NiPoint3 *a4)
{
  NiPoint3 *result; // eax
  float *v6; // eax
  int v7; // eax
  int v8; // eax
  double v9; // st6
  int v10; // eax
  int v11; // eax
  int v12; // eax
  NiTransform *v13; // eax
  float v14; // [esp+4h] [ebp-ECh]
  float v15; // [esp+4h] [ebp-ECh]
  float v16; // [esp+4h] [ebp-ECh]
  float v17; // [esp+4h] [ebp-ECh]
  NiTransform v18; // [esp+8h] [ebp-E8h] BYREF
  NiTransform v19; // [esp+54h] [ebp-9Ch] BYREF
  float v20[13]; // [esp+88h] [ebp-68h] BYREF
  NiTransform v21; // [esp+BCh] [ebp-34h] BYREF

  result = a2;
  if ( a2 )
  {
    qmemcpy(&v19, &a2[8].y, sizeof(v19));
    qmemcpy(v20, (const void *)(*((_DWORD *)this + 4) + 0x64), sizeof(v20));
    sub_718A80(v20, &v21);
    sub_53D7A0(&v21, (NiTransform *)v18.rot.data[2], &v19);
    v6 = sub_53D4B0((NiTransform *)v18.rot.data[2], v18.rot.data[1], a3);
    a3->x = *v6;
    a3->y = v6[1];
    a3->z = v6[2];
    v7 = *((_DWORD *)this + 0x1C);
    if ( v7 )
    {
      v8 = v7 - 1;
      if ( v8 )
      {
        result = (NiPoint3 *)(v8 - 1);
        if ( !result )
        {
          sub_7101F0((NiTransform *)v18.rot.data[2], (NiTransform *)v18.rot.data[1], (NiPoint3 *)this + 0xA);
          v14 = (double)rand() / dbl_A3D5A8;
          v15 = (v14 - dbl_A2FAA0) * *(this + 7) + *(this + 6);
          sub_43F350(v18.rot.data[1]);
          v18.rot.data[0][0] = v18.rot.data[1][0] * v15;
          v9 = v18.rot.data[1][1];
          a4->x = v18.rot.data[0][0];
          v18.rot.data[0][1] = v9 * v15;
          a4->y = v18.rot.data[0][1];
          v18.rot.data[0][2] = v15 * v18.rot.data[1][2];
          a4->z = v18.rot.data[0][2];
          return a4;
        }
      }
      else
      {
        v10 = rand();
        a4->x = ((double)v10 + (double)v10) / dbl_A3D5A8 - dbl_A2F928;
        v11 = rand();
        a4->y = ((double)v11 + (double)v11) / dbl_A3D5A8 - dbl_A2F928;
        v12 = rand();
        a4->z = ((double)v12 + (double)v12) / dbl_A3D5A8 - dbl_A2F928;
        sub_43F350(&a4->x);
        result = (NiPoint3 *)rand();
        v16 = (double)(int)result / dbl_A3D5A8;
        v17 = (v16 - dbl_A2FAA0) * *(this + 7) + *(this + 6);
        a4->x = a4->x * v17;
        a4->y = v17 * a4->y;
        a4->z = v17 * a4->z;
      }
    }
    else
    {
      v13 = sub_7101F0((NiTransform *)v18.rot.data[2], &v18, a4);
      a4->x = v13->rot.data[0][0];
      a4->y = v13->rot.data[0][1];
      result = (NiPoint3 *)LODWORD(v13->rot.data[0][2]);
      LODWORD(a4->z) = result;
    }
  }
  return result;
}
