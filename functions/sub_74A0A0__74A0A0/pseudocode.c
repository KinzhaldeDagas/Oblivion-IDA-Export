int __thiscall sub_74A0A0(float *this, NiPoint3 *a2, NiPoint3 *a3, NiPoint3 *a4)
{
  int result; // eax
  int v6; // eax
  int v7; // eax
  double v8; // st6
  int v9; // eax
  int v10; // eax
  int v11; // eax
  NiTransform *v12; // eax
  float v13; // [esp+4h] [ebp-ECh]
  float v14; // [esp+4h] [ebp-ECh]
  float v15; // [esp+4h] [ebp-ECh]
  float v16; // [esp+4h] [ebp-ECh]
  float v17; // [esp+8h] [ebp-E8h] BYREF
  float v18; // [esp+Ch] [ebp-E4h]
  float v19; // [esp+10h] [ebp-E0h]
  float v20[3]; // [esp+14h] [ebp-DCh] BYREF
  NiTransform out; // [esp+20h] [ebp-D0h] BYREF
  NiTransform local; // [esp+54h] [ebp-9Ch] BYREF
  float v23[13]; // [esp+88h] [ebp-68h] BYREF
  NiTransform parent; // [esp+BCh] [ebp-34h] BYREF

  result = (int)a2; /*0x74a0a0*/
  if ( a2 ) /*0x74a0af*/
  {
    qmemcpy(&local, &a2[8].y, sizeof(local)); /*0x74a0c3*/
    qmemcpy(v23, (const void *)(*((_DWORD *)this + 4) + 0x64), sizeof(v23)); /*0x74a0de*/
    sub_718A80(v23, &parent); /*0x74a0e8*/
    NiTransform_Compose(&parent, &out, &local); /*0x74a0fe*/
    *a3 = *(NiPoint3 *)NiTransform_TransformPoint(&out, v20, a3); /*0x74a11b*/
    v6 = *((_DWORD *)this + 0x1C); /*0x74a129*/
    if ( v6 ) /*0x74a12f*/
    {
      v7 = v6 - 1; /*0x74a135*/
      if ( v7 ) /*0x74a138*/
      {
        result = v7 - 1; /*0x74a13e*/
        if ( !result ) /*0x74a141*/
        {
          sub_7101F0(&out, (NiTransform *)v20, (NiPoint3 *)this + 0xA); /*0x74a154*/
          v13 = (double)rand() / dbl_A3D5A8; /*0x74a170*/
          v14 = (v13 - dbl_A2FAA0) * *(this + 7) + *(this + 6); /*0x74a184*/
          Vector3_NormalizeInPlace(v20); /*0x74a188*/
          v17 = v20[0] * v14; /*0x74a1a7*/
          v8 = v20[1]; /*0x74a1af*/
          a4->x = v17; /*0x74a1b3*/
          v18 = v8 * v14; /*0x74a1b7*/
          a4->y = v18; /*0x74a1bf*/
          v19 = v14 * v20[2]; /*0x74a1c6*/
          a4->z = v19; /*0x74a1ce*/
          return (int)a4; /*0x74a18d*/
        }
      }
      else
      {
        v9 = rand(); /*0x74a1da*/
        a4->x = ((double)v9 + (double)v9) / dbl_A3D5A8 - dbl_A2F928; /*0x74a1fc*/
        v10 = rand(); /*0x74a1fe*/
        a4->y = ((double)v10 + (double)v10) / dbl_A3D5A8 - dbl_A2F928; /*0x74a219*/
        v11 = rand(); /*0x74a21c*/
        a4->z = ((double)v11 + (double)v11) / dbl_A3D5A8 - dbl_A2F928; /*0x74a239*/
        Vector3_NormalizeInPlace(&a4->x); /*0x74a23c*/
        result = rand(); /*0x74a243*/
        v15 = (double)result / dbl_A3D5A8; /*0x74a257*/
        v16 = (v15 - dbl_A2FAA0) * *(this + 7) + *(this + 6); /*0x74a26b*/
        a4->x = a4->x * v16; /*0x74a27b*/
        a4->y = v16 * a4->y; /*0x74a282*/
        a4->z = v16 * a4->z; /*0x74a288*/
      }
    }
    else
    {
      v12 = sub_7101F0(&out, (NiTransform *)&v17, a4); /*0x74a2a7*/
      a4->x = v12->rot.data[0][0]; /*0x74a2ae*/
      a4->y = v12->rot.data[0][1]; /*0x74a2b3*/
      result = LODWORD(v12->rot.data[0][2]); /*0x74a2b6*/
      LODWORD(a4->z) = result; /*0x74a2b9*/
    }
  }
  return result; /*0x74a1d1*/
}
