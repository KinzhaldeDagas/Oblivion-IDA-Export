int sub_53A460()
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
  const char *v9; // edx
  const char *v10; // edx
  int result; // eax
  float v12; // [esp+0h] [ebp-8h] BYREF
  float v13; // [esp+4h] [ebp-4h] BYREF

  v0 = off_B11B2C;
  v12 = 1.0;
  v13 = 1.0;
  sscanf(v0, "%f, %f", &v12, &v13);
  v1 = off_B11B24;
  flt_B2ED70 = v12;
  flt_B2ED74 = v13;
  v13 = 1.0;
  v12 = 1.0;
  sscanf(v1, "%f, %f", &v13, &v12);
  v2 = off_B11B1C;
  flt_B2ED78 = v13;
  flt_B2ED7C = v12;
  v13 = 1.0;
  v12 = 1.0;
  sscanf(v2, "%f, %f", &v13, &v12);
  v3 = off_B11B14;
  flt_B2ED80 = v13;
  flt_B2ED84 = v12;
  v13 = 1.0;
  v12 = 1.0;
  sscanf(v3, "%f, %f", &v13, &v12);
  v4 = off_B11B0C;
  flt_B2ED88 = v13;
  flt_B2ED8C = v12;
  v13 = 1.0;
  v12 = 1.0;
  sscanf(v4, "%f, %f", &v13, &v12);
  flt_B2ED90 = v13;
  flt_B2ED94 = v12;
  v13 = 1.0;
  v12 = 1.0;
  sscanf(off_B11B04, "%f, %f", &v13, &v12);
  v5 = off_B11AFC;
  flt_B2ED98 = v13;
  flt_B2ED9C = v12;
  v13 = 1.0;
  v12 = 1.0;
  sscanf(v5, "%f, %f", &v13, &v12);
  v6 = off_B11AF4;
  flt_B2EDA8 = v13;
  flt_B2EDAC = v12;
  v13 = 1.0;
  v12 = 1.0;
  sscanf(v6, "%f, %f", &v13, &v12);
  v7 = off_B11AEC;
  flt_B2EDB0 = v13;
  flt_B2EDB4 = v12;
  v13 = 1.0;
  v12 = 1.0;
  sscanf(v7, "%f, %f", &v13, &v12);
  v8 = off_B11AE4;
  flt_B2EDC0 = v13;
  flt_B2EDC4 = v12;
  v13 = 1.0;
  v12 = 1.0;
  sscanf(v8, "%f, %f", &v13, &v12);
  v9 = off_B11ADC;
  flt_B2EDC8 = v13;
  flt_B2EDCC = v12;
  v13 = 1.0;
  v12 = 1.0;
  sscanf(v9, "%f, %f", &v13, &v12);
  v10 = off_B11AD4;
  flt_B2EDD8 = v13;
  flt_B2EDDC = v12;
  v13 = 1.0;
  v12 = 1.0;
  result = sscanf(v10, "%f, %f", &v13, &v12);
  flt_B2EDE0 = v13;
  flt_B2EDE4 = v12;
  return result;
}
