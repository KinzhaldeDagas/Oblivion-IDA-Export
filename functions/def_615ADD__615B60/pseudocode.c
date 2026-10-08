// positive sp value has been detected, the output may be wrong!
float *__usercall Combat_PredictAimPoint_IterateAndSolve@<eax>(
        int a1@<ebx>,
        int a2@<ebp>,
        int a3,
        int a4,
        float a5,
        float a6,
        int a7,
        double a8,
        float a9,
        int a10,
        double a11,
        float a12,
        float a13,
        int a14,
        int a15,
        int a16,
        int a17,
        int a18,
        int a19,
        int a20,
        float a21,
        float a22,
        float a23,
        float a24,
        float a25,
        float a26,
        float a27,
        float a28,
        float a29,
        float a30,
        float a31)
{
  int v31; // esi
  double v32; // st7
  double v33; // st7
  long double v34; // st7
  double v35; // st7
  double v36; // st6
  double v37; // st7
  double v38; // st7
  float *result; // eax
  float v40; // [esp+Ch] [ebp-4h]
  float v41; // [esp+Ch] [ebp-4h]
  float v42; // [esp+Ch] [ebp-4h]
  float retaddr; // [esp+10h] [ebp+0h]
  float v44; // [esp+18h] [ebp+8h]
  float v45; // [esp+1Ch] [ebp+Ch]
  float v46; // [esp+20h] [ebp+10h]
  float v47; // [esp+28h] [ebp+18h]
  double v48; // [esp+28h] [ebp+18h]
  float v49; // [esp+2Ch] [ebp+1Ch]
  float v50; // [esp+30h] [ebp+20h]
  float v51; // [esp+48h] [ebp+38h]
  float v52; // [esp+4Ch] [ebp+3Ch]
  float v53; // [esp+50h] [ebp+40h]

  v51 = *((float *)&a11 + 1); /*0x615b71*/
  v31 = 0; /*0x615b75*/
  v52 = a12; /*0x615b77*/
  v53 = a13; /*0x615b7d*/
  if ( 0.0 == *(float *)(a2 + 0x20) )           // Zero-gravity projectile branch: iteratively recompute distance, flightTime=distance/projectileSpeed, then targetPos += targetVelocity*flightTime. /*0x615b84*/
  {
    if ( a1 > 0 ) /*0x615b8c*/
    {
      do /*0x615c7e*/
      {
        v47 = v51 - *(float *)(a2 + 0xC); /*0x615b99*/
        v49 = v52 - *(float *)(a2 + 0x10); /*0x615ba4*/
        v50 = v53 - *(float *)(a2 + 0x14); /*0x615baf*/
        retaddr = v50 * v50 + v47 * v47 + v49 * v49; /*0x615bd1*/
        retaddr = sqrt(retaddr); /*0x615bde*/
        v32 = retaddr; /*0x615bf4*/
        if ( retaddr < 1.0 ) /*0x615bf9*/
          break; /*0x615bf9*/
        if ( flt_A6E730 < v32 ) /*0x615c0c*/
          break; /*0x615c0c*/
        ++v31; /*0x615c15*/
        retaddr = v32 / *(float *)(a2 + 0x1C);  // Zero-gravity iteration flight time = current predicted 3D distance / projectile speed. /*0x615c1a*/
        v44 = *(float *)&a17 * retaddr; /*0x615c2c*/
        v45 = *(float *)&a18 * retaddr; /*0x615c36*/
        v46 = retaddr * *(float *)&a19; /*0x615c3e*/
        a23 = v44 + *((float *)&a11 + 1); /*0x615c4a*/
        v51 = a23; /*0x615c56*/
        a24 = a12 + v45; /*0x615c5e*/
        v52 = a24; /*0x615c6a*/
        a25 = v46 + a13; /*0x615c72*/
        v53 = a25; /*0x615c7a*/
      }
      while ( v31 < a1 ); /*0x615c7e*/
    }
  }
  else if ( a1 > 0 )                            // Nonzero gravity enters the bow-only ballistic lead loop; zero-gravity spells/enchantments use the straight 3D distance branch. /*0x615c8b*/
  {
    do /*0x615de7*/
    {
      a23 = v51 - *(float *)(a2 + 0xC); /*0x615ca0*/
      a24 = v52 - *(float *)(a2 + 0x10); /*0x615cab*/
      a25 = v53 - *(float *)(a2 + 0x14); /*0x615cb6*/
      retaddr = a24 * a24 + a23 * a23 + 0.0 * 0.0; /*0x615cce*/
      retaddr = sqrt(retaddr); /*0x615cdb*/
      v33 = flt_A6E730; /*0x615ce7*/
      if ( a25 > v33 ) /*0x615cf8*/
        break; /*0x615cf8*/
      if ( retaddr < 1.0 ) /*0x615d0d*/
        break; /*0x615d0d*/
      if ( retaddr > v33 ) /*0x615d1c*/
        break; /*0x615d1c*/
      v40 = Combat_CalculateBallisticPitch(retaddr, a25, *(float *)(a2 + 0x1C), *(float *)(a2 + 0x20));// Gravity branch solves ballistic pitch, then uses horizontalDistance/(cos(pitch)*projectileSpeed) as target lead time. /*0x615d3f*/
      v48 = retaddr; /*0x615d4a*/
      retaddr = cos(v40); /*0x615d57*/
      ++v31; /*0x615d5f*/
      retaddr = v48 / (retaddr * *(float *)(a2 + 0x1C)); /*0x615d6b*/
      a26 = *(float *)&a17 * retaddr; /*0x615d7d*/
      a27 = *(float *)&a18 * retaddr; /*0x615d87*/
      a28 = retaddr * *(float *)&a19; /*0x615d8f*/
      a29 = a26 + *((float *)&a11 + 1); /*0x615d9e*/
      v51 = a29; /*0x615db0*/
      a30 = a27 + a12; /*0x615db8*/
      v52 = a30; /*0x615dcd*/
      a31 = a28 + a13; /*0x615dd5*/
      v53 = a31; /*0x615de3*/
    }
    while ( v31 < a1 ); /*0x615de7*/
  }
  *(float *)&a20 = v51 - *(float *)(a2 + 0xC); /*0x615dfc*/
  a21 = v52 - *(float *)(a2 + 0x10); /*0x615e07*/
  a22 = v53 - *(float *)(a2 + 0x14); /*0x615e12*/
  if ( 0.0 == *(float *)(a2 + 0x20) ) /*0x615e20*/
  {
    retaddr = a21 * a21 + *(float *)&a20 * *(float *)&a20 + a22 * a22; /*0x615e4a*/
    retaddr = sqrt(retaddr); /*0x615e57*/
    retaddr = a22 / retaddr; /*0x615e63*/
    v34 = retaddr; /*0x615e67*/
    if ( retaddr <= dbl_A3D360 ) /*0x615e76*/
    {
      v35 = -unk_B3F99C; /*0x615ea4*/
    }
    else if ( v34 >= 1.0 ) /*0x615e81*/
    {
      v35 = unk_B3F99C; /*0x615e94*/
    }
    else
    {
      retaddr = asin(v34); /*0x615e88*/
      v35 = retaddr; /*0x615e8c*/
    }
    v40 = v35; /*0x615ea6*/
  }
  Vector3_NormalizeInPlace((float *)&a20); /*0x615eae*/
  retaddr = -v40; /*0x615ebb*/
  v36 = dbl_A3D5B0; /*0x615ecb*/
  if ( retaddr > dbl_A491E0 ) /*0x615ed4*/
  {
    if ( retaddr > dbl_A3D5B8 ) /*0x615eeb*/
      retaddr = retaddr - v36; /*0x615eef*/
  }
  else
  {
    retaddr = retaddr + v36; /*0x615ed8*/
  }
  v41 = Vector3_CalculateHeadingRadiansXY((float *)&a20); /*0x615f03*/
  v37 = v41; /*0x615f07*/
  if ( v41 <= dbl_A491E0 ) /*0x615f19*/
  {
    v38 = v37 + dbl_A3D5B0; /*0x615f1b*/
LABEL_27:
    v42 = v38; /*0x615f36*/
    v37 = v42; /*0x615f3a*/
    goto LABEL_28; /*0x615f3a*/
  }
  if ( v37 > dbl_A3D5B8 ) /*0x615f2e*/
  {
    v38 = v37 - dbl_A3D5B0; /*0x615f30*/
    goto LABEL_27; /*0x615f30*/
  }
LABEL_28:
  result = *(float **)(a2 + 8); /*0x615f3e*/
  *result = retaddr; /*0x615f45*/
  result[1] = 0.0; /*0x615f4b*/
  result[2] = v37; /*0x615f4f*/
  return result; /*0x615f55*/
}
