void __usercall sub_975690(
        int a1@<edx>,
        int a2@<ecx>,
        int a3@<edi>,
        int a4@<esi>,
        int a5,
        int a6,
        float *a7,
        float *a8)
{
  double v9; // st7
  double v10; // st6
  double v11; // st6
  double v12; // st5
  double v13; // st4
  double v14; // st7
  double v15; // st5
  double v16; // st4
  double v17; // st7
  float v18; // [esp+8h] [ebp-4h]
  float v19; // [esp+8h] [ebp-4h]
  float v20; // [esp+10h] [ebp+4h]
  float v21; // [esp+10h] [ebp+4h]
  float v22; // [esp+10h] [ebp+4h]
  float v23; // [esp+10h] [ebp+4h]
  float v24; // [esp+10h] [ebp+4h]
  float v25; // [esp+10h] [ebp+4h]
  float v26; // [esp+10h] [ebp+4h]
  float v27; // [esp+10h] [ebp+4h]
  float v28; // [esp+10h] [ebp+4h]
  float v29; // [esp+10h] [ebp+4h]
  float v30; // [esp+10h] [ebp+4h]
  float v31; // [esp+10h] [ebp+4h]

  v20 = *(float *)(a3 + 4 * a1) - *(float *)(a5 + 4 * a1 + 0x30); /*0x9756a2*/
  v18 = *(float *)(a3 + 4 * a2) - *(float *)(a5 + 4 * a2 + 0x30); /*0x9756ad*/
  v9 = v20; /*0x9756bc*/
  v21 = *(float *)(a4 + 4 * a2) * v20; /*0x9756be*/
  v10 = v18; /*0x9756cd*/
  v19 = *(float *)(a4 + 4 * a1) * v18; /*0x9756cf*/
  if ( v19 > (double)v21 ) /*0x9756e2*/
  {
    *(float *)(a3 + 4 * a2) = *(float *)(a5 + 4 * a2 + 0x30); /*0x9757a8*/
    v26 = *(float *)(a5 + 4 * a1 + 0x30) + *(float *)(a3 + 4 * a1); /*0x9757b2*/
    v15 = v26; /*0x9757c1*/
    v27 = v19 - *(float *)(a4 + 4 * a2) * v26; /*0x9757c5*/
    v16 = v27; /*0x9757d3*/
    if ( v27 >= 0.0 ) /*0x9757d8*/
    {
      v28 = 1.0 /*0x9757ee*/
          / (*(float *)(a4 + 4 * a1) * *(float *)(a4 + 4 * a1) + *(float *)(a4 + 4 * a2) * *(float *)(a4 + 4 * a2));
      *a8 = v16 * v16 * v28 + *a8; /*0x975805*/
      *(float *)(a3 + 4 * a1) = -*(float *)(a5 + 4 * a1 + 0x30); /*0x97580e*/
      *a7 = -(v28 * (v10 * *(float *)(a4 + 4 * a2) + v15 * *(float *)(a4 + 4 * a1))); /*0x975823*/
      goto LABEL_9; /*0x975825*/
    }
    v29 = 1.0 / *(float *)(a4 + 4 * a2); /*0x975832*/
    *(float *)(a3 + 4 * a1) = *(float *)(a3 + 4 * a1) - v19 * v29; /*0x975847*/
    v14 = v29 * -v10; /*0x97584c*/
  }
  else
  {
    v11 = v21; /*0x9756ea*/
    *(float *)(a3 + 4 * a1) = *(float *)(a5 + 4 * a1 + 0x30); /*0x9756f0*/
    v22 = *(float *)(a3 + 4 * a2) + *(float *)(a5 + 4 * a2 + 0x30); /*0x9756fa*/
    v12 = v22; /*0x975709*/
    v23 = v11 - *(float *)(a4 + 4 * a1) * v22; /*0x97570d*/
    v13 = v23; /*0x97571b*/
    if ( v23 < 0.0 ) /*0x975720*/
    {
      v25 = 1.0 / *(float *)(a4 + 4 * a1); /*0x975777*/
      *(float *)(a3 + 4 * a2) = *(float *)(a3 + 4 * a2) - v11 * v25; /*0x97578c*/
      *a7 = v25 * -v9; /*0x975799*/
      goto LABEL_9; /*0x97579b*/
    }
    v24 = 1.0 / (*(float *)(a4 + 4 * a1) * *(float *)(a4 + 4 * a1) + *(float *)(a4 + 4 * a2) * *(float *)(a4 + 4 * a2)); /*0x975736*/
    *a8 = v13 * v13 * v24 + *a8; /*0x97574d*/
    *(float *)(a3 + 4 * a2) = -*(float *)(a5 + 4 * a2 + 0x30); /*0x975756*/
    v14 = -((v9 * *(float *)(a4 + 4 * a1) + v12 * *(float *)(a4 + 4 * a2)) * v24); /*0x975765*/
  }
  *a7 = v14; /*0x975852*/
LABEL_9:
  v17 = *(float *)(a3 + 4 * a6); /*0x975854*/
  if ( -*(float *)(a5 + 4 * a6 + 0x30) <= v17 ) /*0x97586b*/
  {
    if ( *(float *)(a5 + 4 * a6 + 0x30) < v17 ) /*0x975899*/
    {
      v31 = *(float *)(a3 + 4 * a6) - *(float *)(a5 + 4 * a6 + 0x30); /*0x9758a2*/
      *a8 = v31 * v31 + *a8; /*0x9758af*/
      *(float *)(a3 + 4 * a6) = *(float *)(a5 + 4 * a6 + 0x30); /*0x9758b6*/
    }
  }
  else
  {
    v30 = v17 + *(float *)(a5 + 4 * a6 + 0x30); /*0x975871*/
    *a8 = v30 * v30 + *a8; /*0x97587e*/
    *(float *)(a3 + 4 * a6) = -*(float *)(a5 + 4 * a6 + 0x30); /*0x975889*/
  }
}
