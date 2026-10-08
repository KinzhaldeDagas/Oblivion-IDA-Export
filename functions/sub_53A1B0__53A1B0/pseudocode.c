void sub_53A1B0()
{
  const char *v0; // edx
  const char *v1; // edx
  const char *v2; // edx
  const char *v3; // edx
  const char *v4; // edx
  const char *v5; // edx
  const char *v6; // edx
  const char *v7; // edx
  const char *v8; // edx
  unsigned int v9; // ecx
  double v10; // st7
  double v11; // st6
  float v12; // [esp+0h] [ebp-8h] BYREF
  float v13; // [esp+4h] [ebp-4h] BYREF

  v0 = off_B11ABC; /*0x53a1b5*/
  v12 = 1.0; /*0x53a1bf*/
  v13 = 1.0; /*0x53a1c3*/
  sscanf(v0, "%f, %f", &v12, &v13); /*0x53a1d2*/
  v1 = off_B11AB4; /*0x53a1db*/
  flt_B2EC70 = v12; /*0x53a1e1*/
  flt_B2EC74 = v13; /*0x53a1f0*/
  v13 = 1.0; /*0x53a1fd*/
  v12 = 1.0; /*0x53a206*/
  sscanf(v1, "%f, %f", &v13, &v12); /*0x53a20b*/
  v2 = off_B11AAC; /*0x53a214*/
  flt_B2EC78 = v13; /*0x53a21a*/
  flt_B2EC7C = v12; /*0x53a229*/
  v13 = 1.0; /*0x53a236*/
  v12 = 1.0; /*0x53a23f*/
  sscanf(v2, "%f, %f", &v13, &v12); /*0x53a244*/
  v3 = off_B11AA4; /*0x53a24d*/
  flt_B2EC80 = v13; /*0x53a253*/
  flt_B2EC84 = v12; /*0x53a262*/
  v13 = 1.0; /*0x53a26f*/
  v12 = 1.0; /*0x53a278*/
  sscanf(v3, "%f, %f", &v13, &v12); /*0x53a27d*/
  v4 = off_B11A9C; /*0x53a286*/
  flt_B2EC88 = v13; /*0x53a28c*/
  flt_B2EC8C = v12; /*0x53a29c*/
  v13 = 1.0; /*0x53a2a9*/
  v12 = 1.0; /*0x53a2ae*/
  sscanf(v4, "%f, %f", &v13, &v12); /*0x53a2b8*/
  flt_B2EC90 = v13; /*0x53a2c1*/
  flt_B2EC94 = v12; /*0x53a2d0*/
  v13 = 1.0; /*0x53a2d8*/
  v12 = 1.0; /*0x53a2dc*/
  sscanf(off_B11A94, "%f, %f", &v13, &v12); /*0x53a2f1*/
  v5 = off_B11A8C; /*0x53a2fa*/
  flt_B2EC98 = v13; /*0x53a300*/
  flt_B2EC9C = v12; /*0x53a30f*/
  v13 = 1.0; /*0x53a31c*/
  v12 = 1.0; /*0x53a325*/
  sscanf(v5, "%f, %f", &v13, &v12); /*0x53a32a*/
  v6 = off_B11A84; /*0x53a333*/
  flt_B2ECA0 = v13; /*0x53a339*/
  flt_B2ECA4 = v12; /*0x53a348*/
  v13 = 1.0; /*0x53a355*/
  v12 = 1.0; /*0x53a35e*/
  sscanf(v6, "%f, %f", &v13, &v12); /*0x53a363*/
  v7 = off_B11A7C; /*0x53a36c*/
  flt_B2ECC0 = v13; /*0x53a372*/
  flt_B2ECC4 = v12; /*0x53a382*/
  v13 = 1.0; /*0x53a38f*/
  v12 = 1.0; /*0x53a394*/
  sscanf(v7, "%f, %f", &v13, &v12); /*0x53a39e*/
  v8 = off_B11A74; /*0x53a3a7*/
  flt_B2ECC8 = v13; /*0x53a3ad*/
  flt_B2ECCC = v12; /*0x53a3bc*/
  v13 = 1.0; /*0x53a3c9*/
  v12 = 1.0; /*0x53a3d2*/
  sscanf(v8, "%f, %f", &v13, &v12); /*0x53a3d7*/
  flt_B2ECD0 = v13; /*0x53a3e0*/
  v9 = 0; /*0x53a3ec*/
  flt_B2ECD4 = v12; /*0x53a3ee*/
  flt_B2EC58 = flt_B11A34; /*0x53a3fa*/
  flt_B2EC54 = flt_B11A3C; /*0x53a406*/
  v10 = fGetUpTime; /*0x53a40c*/
  v11 = flt_B11A2C; /*0x53a412*/
  do /*0x53a451*/
  {
    if ( *(float *)(v9 + 0xB2EE68) >= 0.0 ) /*0x53a425*/
      *(float *)(v9 + 0xB2EE68) = v10; /*0x53a429*/
    if ( *(float *)(v9 + 0xB2EEE8) >= 0.0 ) /*0x53a43c*/
      *(float *)(v9 + 0xB2EEE8) = v11; /*0x53a440*/
    v9 += 4; /*0x53a448*/
  }
  while ( v9 < 0x80 ); /*0x53a451*/
}
