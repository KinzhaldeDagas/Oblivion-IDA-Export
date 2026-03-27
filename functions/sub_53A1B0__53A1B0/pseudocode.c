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

  v0 = off_B11ABC;
  v12 = 1.0;
  v13 = 1.0;
  sscanf(v0, "%f, %f", &v12, &v13);
  v1 = off_B11AB4;
  flt_B2EC70 = v12;
  flt_B2EC74 = v13;
  v13 = 1.0;
  v12 = 1.0;
  sscanf(v1, "%f, %f", &v13, &v12);
  v2 = off_B11AAC;
  flt_B2EC78 = v13;
  flt_B2EC7C = v12;
  v13 = 1.0;
  v12 = 1.0;
  sscanf(v2, "%f, %f", &v13, &v12);
  v3 = off_B11AA4;
  flt_B2EC80 = v13;
  flt_B2EC84 = v12;
  v13 = 1.0;
  v12 = 1.0;
  sscanf(v3, "%f, %f", &v13, &v12);
  v4 = off_B11A9C;
  flt_B2EC88 = v13;
  flt_B2EC8C = v12;
  v13 = 1.0;
  v12 = 1.0;
  sscanf(v4, "%f, %f", &v13, &v12);
  flt_B2EC90 = v13;
  flt_B2EC94 = v12;
  v13 = 1.0;
  v12 = 1.0;
  sscanf(off_B11A94, "%f, %f", &v13, &v12);
  v5 = off_B11A8C;
  flt_B2EC98 = v13;
  flt_B2EC9C = v12;
  v13 = 1.0;
  v12 = 1.0;
  sscanf(v5, "%f, %f", &v13, &v12);
  v6 = off_B11A84;
  flt_B2ECA0 = v13;
  flt_B2ECA4 = v12;
  v13 = 1.0;
  v12 = 1.0;
  sscanf(v6, "%f, %f", &v13, &v12);
  v7 = off_B11A7C;
  flt_B2ECC0 = v13;
  flt_B2ECC4 = v12;
  v13 = 1.0;
  v12 = 1.0;
  sscanf(v7, "%f, %f", &v13, &v12);
  v8 = off_B11A74;
  flt_B2ECC8 = v13;
  flt_B2ECCC = v12;
  v13 = 1.0;
  v12 = 1.0;
  sscanf(v8, "%f, %f", &v13, &v12);
  flt_B2ECD0 = v13;
  v9 = 0;
  flt_B2ECD4 = v12;
  flt_B2EC58 = flt_B11A34;
  flt_B2EC54 = flt_B11A3C;
  v10 = fGetUpTime;
  v11 = flt_B11A2C;
  do
  {
    if ( *(float *)(v9 + 0xB2EE68) >= 0.0 )
      *(float *)(v9 + 0xB2EE68) = v10;
    if ( *(float *)(v9 + 0xB2EEE8) >= 0.0 )
      *(float *)(v9 + 0xB2EEE8) = v11;
    v9 += 4;
  }
  while ( v9 < 0x80 );
}
