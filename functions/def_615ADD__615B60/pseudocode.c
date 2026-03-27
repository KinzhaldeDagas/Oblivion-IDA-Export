// positive sp value has been detected, the output may be wrong!
float *__usercall def_615ADD@<eax>(
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

  v51 = *((float *)&a11 + 1);
  v31 = 0;
  v52 = a12;
  v53 = a13;
  if ( 0.0 == *(float *)(a2 + 0x20) )
  {
    if ( a1 > 0 )
    {
      do
      {
        v47 = v51 - *(float *)(a2 + 0xC);
        v49 = v52 - *(float *)(a2 + 0x10);
        v50 = v53 - *(float *)(a2 + 0x14);
        retaddr = v50 * v50 + v47 * v47 + v49 * v49;
        retaddr = sqrt(retaddr);
        v32 = retaddr;
        if ( retaddr < 1.0 )
          break;
        if ( flt_A6E730 < v32 )
          break;
        ++v31;
        retaddr = v32 / *(float *)(a2 + 0x1C);
        v44 = *(float *)&a17 * retaddr;
        v45 = *(float *)&a18 * retaddr;
        v46 = retaddr * *(float *)&a19;
        a23 = v44 + *((float *)&a11 + 1);
        v51 = a23;
        a24 = a12 + v45;
        v52 = a24;
        a25 = v46 + a13;
        v53 = a25;
      }
      while ( v31 < a1 );
    }
  }
  else if ( a1 > 0 )
  {
    do
    {
      a23 = v51 - *(float *)(a2 + 0xC);
      a24 = v52 - *(float *)(a2 + 0x10);
      a25 = v53 - *(float *)(a2 + 0x14);
      retaddr = a24 * a24 + a23 * a23 + 0.0 * 0.0;
      retaddr = sqrt(retaddr);
      v33 = flt_A6E730;
      if ( a25 > v33 )
        break;
      if ( retaddr < 1.0 )
        break;
      if ( retaddr > v33 )
        break;
      v40 = sub_6132D0(retaddr, a25, *(float *)(a2 + 0x1C), *(float *)(a2 + 0x20));
      v48 = retaddr;
      retaddr = cos(v40);
      ++v31;
      retaddr = v48 / (retaddr * *(float *)(a2 + 0x1C));
      a26 = *(float *)&a17 * retaddr;
      a27 = *(float *)&a18 * retaddr;
      a28 = retaddr * *(float *)&a19;
      a29 = a26 + *((float *)&a11 + 1);
      v51 = a29;
      a30 = a27 + a12;
      v52 = a30;
      a31 = a28 + a13;
      v53 = a31;
    }
    while ( v31 < a1 );
  }
  *(float *)&a20 = v51 - *(float *)(a2 + 0xC);
  a21 = v52 - *(float *)(a2 + 0x10);
  a22 = v53 - *(float *)(a2 + 0x14);
  if ( 0.0 == *(float *)(a2 + 0x20) )
  {
    retaddr = a21 * a21 + *(float *)&a20 * *(float *)&a20 + a22 * a22;
    retaddr = sqrt(retaddr);
    retaddr = a22 / retaddr;
    v34 = retaddr;
    if ( retaddr <= dbl_A3D360 )
    {
      v35 = -flt_B3F99C;
    }
    else if ( v34 >= 1.0 )
    {
      v35 = flt_B3F99C;
    }
    else
    {
      retaddr = asin(v34);
      v35 = retaddr;
    }
    v40 = v35;
  }
  sub_43F350((float *)&a20);
  retaddr = -v40;
  v36 = dbl_A3D5B0;
  if ( retaddr > dbl_A491E0 )
  {
    if ( retaddr > dbl_A3D5B8 )
      retaddr = retaddr - v36;
  }
  else
  {
    retaddr = retaddr + v36;
  }
  v41 = sub_683CB0((float *)&a20);
  v37 = v41;
  if ( v41 <= dbl_A491E0 )
  {
    v38 = v37 + dbl_A3D5B0;
LABEL_27:
    v42 = v38;
    v37 = v42;
    goto LABEL_28;
  }
  if ( v37 > dbl_A3D5B8 )
  {
    v38 = v37 - dbl_A3D5B0;
    goto LABEL_27;
  }
LABEL_28:
  result = *(float **)(a2 + 8);
  *result = retaddr;
  result[1] = 0.0;
  result[2] = v37;
  return result;
}
