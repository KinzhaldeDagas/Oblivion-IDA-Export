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

  v0 = off_B11B2C; /*0x53a465*/
  v12 = 1.0; /*0x53a46f*/
  v13 = 1.0; /*0x53a473*/
  sscanf(v0, "%f, %f", &v12, &v13); /*0x53a482*/
  v1 = off_B11B24; /*0x53a48b*/
  flt_B2ED70 = v12; /*0x53a491*/
  flt_B2ED74 = v13; /*0x53a4a0*/
  v13 = 1.0; /*0x53a4ad*/
  v12 = 1.0; /*0x53a4b6*/
  sscanf(v1, "%f, %f", &v13, &v12); /*0x53a4bb*/
  v2 = off_B11B1C; /*0x53a4c4*/
  flt_B2ED78 = v13; /*0x53a4ca*/
  flt_B2ED7C = v12; /*0x53a4d9*/
  v13 = 1.0; /*0x53a4e6*/
  v12 = 1.0; /*0x53a4ef*/
  sscanf(v2, "%f, %f", &v13, &v12); /*0x53a4f4*/
  v3 = off_B11B14; /*0x53a4fd*/
  flt_B2ED80 = v13; /*0x53a503*/
  flt_B2ED84 = v12; /*0x53a512*/
  v13 = 1.0; /*0x53a51f*/
  v12 = 1.0; /*0x53a528*/
  sscanf(v3, "%f, %f", &v13, &v12); /*0x53a52d*/
  v4 = off_B11B0C; /*0x53a536*/
  flt_B2ED88 = v13; /*0x53a53c*/
  flt_B2ED8C = v12; /*0x53a54c*/
  v13 = 1.0; /*0x53a559*/
  v12 = 1.0; /*0x53a55e*/
  sscanf(v4, "%f, %f", &v13, &v12); /*0x53a568*/
  flt_B2ED90 = v13; /*0x53a571*/
  flt_B2ED94 = v12; /*0x53a580*/
  v13 = 1.0; /*0x53a588*/
  v12 = 1.0; /*0x53a58c*/
  sscanf(off_B11B04, "%f, %f", &v13, &v12); /*0x53a5a1*/
  v5 = off_B11AFC; /*0x53a5aa*/
  flt_B2ED98 = v13; /*0x53a5b0*/
  flt_B2ED9C = v12; /*0x53a5bf*/
  v13 = 1.0; /*0x53a5cc*/
  v12 = 1.0; /*0x53a5d5*/
  sscanf(v5, "%f, %f", &v13, &v12); /*0x53a5da*/
  v6 = off_B11AF4; /*0x53a5e3*/
  flt_B2EDA8 = v13; /*0x53a5e9*/
  flt_B2EDAC = v12; /*0x53a5f8*/
  v13 = 1.0; /*0x53a605*/
  v12 = 1.0; /*0x53a60e*/
  sscanf(v6, "%f, %f", &v13, &v12); /*0x53a613*/
  v7 = off_B11AEC; /*0x53a61c*/
  flt_B2EDB0 = v13; /*0x53a622*/
  flt_B2EDB4 = v12; /*0x53a632*/
  v13 = 1.0; /*0x53a63f*/
  v12 = 1.0; /*0x53a644*/
  sscanf(v7, "%f, %f", &v13, &v12); /*0x53a64e*/
  v8 = off_B11AE4; /*0x53a657*/
  flt_B2EDC0 = v13; /*0x53a65d*/
  flt_B2EDC4 = v12; /*0x53a66c*/
  v13 = 1.0; /*0x53a679*/
  v12 = 1.0; /*0x53a682*/
  sscanf(v8, "%f, %f", &v13, &v12); /*0x53a687*/
  v9 = off_B11ADC; /*0x53a690*/
  flt_B2EDC8 = v13; /*0x53a696*/
  flt_B2EDCC = v12; /*0x53a6a5*/
  v13 = 1.0; /*0x53a6b2*/
  v12 = 1.0; /*0x53a6bb*/
  sscanf(v9, "%f, %f", &v13, &v12); /*0x53a6c0*/
  v10 = off_B11AD4; /*0x53a6c9*/
  flt_B2EDD8 = v13; /*0x53a6cf*/
  flt_B2EDDC = v12; /*0x53a6de*/
  v13 = 1.0; /*0x53a6eb*/
  v12 = 1.0; /*0x53a6f4*/
  result = sscanf(v10, "%f, %f", &v13, &v12); /*0x53a6f9*/
  flt_B2EDE0 = v13; /*0x53a702*/
  flt_B2EDE4 = v12; /*0x53a70e*/
  return result; /*0x53a714*/
}
