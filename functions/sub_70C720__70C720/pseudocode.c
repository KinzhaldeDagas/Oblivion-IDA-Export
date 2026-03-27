void __thiscall sub_70C720(int this, float *a2, float *a3, float *a4, float a5)
{
  float v6; // edx
  bool v8; // zf
  double v10; // st7
  double v11; // st7
  float *v12; // eax
  double v13; // st7
  double v14; // st6
  double v15; // st5
  float *v16; // eax
  double v17; // st7
  double v18; // st6
  double v19; // st5
  double v20; // st7
  double v21; // st6
  double v22; // st6
  double v23; // st7
  double v24; // rt0
  double v25; // rt1
  double v26; // st7
  float v27; // [esp+0h] [ebp-38h]
  float v28; // [esp+0h] [ebp-38h]
  float v29; // [esp+4h] [ebp-34h]
  float v30; // [esp+8h] [ebp-30h]
  float v31; // [esp+Ch] [ebp-2Ch]
  float v32; // [esp+10h] [ebp-28h]
  float v33; // [esp+14h] [ebp-24h] BYREF
  float v34; // [esp+18h] [ebp-20h]
  float v35; // [esp+1Ch] [ebp-1Ch]
  float v36; // [esp+20h] [ebp-18h] BYREF
  float v37; // [esp+24h] [ebp-14h]
  float v38; // [esp+28h] [ebp-10h]
  float v39; // [esp+2Ch] [ebp-Ch] BYREF
  float v40; // [esp+30h] [ebp-8h]
  float v41; // [esp+34h] [ebp-4h]
  int v42; // [esp+3Ch] [ebp+4h]
  float v43; // [esp+40h] [ebp+8h]
  float v44; // [esp+40h] [ebp+8h]
  int v45; // [esp+40h] [ebp+8h]
  int v46; // [esp+40h] [ebp+8h]
  int v47; // [esp+40h] [ebp+8h]
  int v48; // [esp+40h] [ebp+8h]

  v6 = a2[1];
  v42 = *((int *)a2 + 3);
  v8 = *(_BYTE *)(this + 0x104) == 0;
  v30 = *a2;
  v31 = v6;
  v32 = a2[2];
  v33 = *a2 - *(float *)(this + 0x88);
  v34 = v6 - *(float *)(this + 0x8C);
  v35 = v32 - *(float *)(this + 0x90);
  v29 = 1.0 / (*(float *)(this + 0x100) - *(float *)(this + 0xFC));
  v36 = *(float *)(this + 0x64);
  v37 = *(float *)(this + 0x70);
  v38 = *(float *)(this + 0x7C);
  v27 = v37 * v34 + v36 * v33 + v38 * v35;
  v28 = v27 - *(float *)(this + 0xFC);
  v10 = *(float *)&v42;
  if ( v8 )
  {
    v43 = v28 - v10;
    a3[2] = v43 * v29;
    v44 = v10 + v28;
    v11 = v29 * v44;
  }
  else
  {
    v11 = 0.0;
    a3[2] = 0.0;
  }
  a4[2] = v11;
  v39 = *(float *)(this + 0x68);
  v40 = *(float *)(this + 0x74);
  v41 = *(float *)(this + 0x80);
  v12 = sub_4BF9E0(&v33, &v36, &v39);
  v39 = *v12 * *(float *)&v42;
  v40 = v12[1] * *(float *)&v42;
  v41 = *(float *)&v42 * v12[2];
  v13 = v39;
  v36 = v30 - v39;
  v14 = v40;
  v37 = v31 - v40;
  v15 = v41;
  v38 = v32 - v41;
  *(float *)&v45 = *(float *)(this + 0xDC) * v36
                 + *(float *)(this + 0xE0) * v37
                 + v38 * *(float *)(this + 0xE4)
                 + *(float *)(this + 0xE8);
  if ( a5 >= (double)*(float *)&v45 )
    goto LABEL_32;
  *a3 = (v37 * *(float *)(this + 0xB0)
       + v36 * *(float *)(this + 0xAC)
       + *(float *)(this + 0xB4) * v38
       + *(float *)(this + 0xB8))
      / *(float *)&v45;
  v39 = v13 + v30;
  v40 = v14 + v31;
  v41 = v15 + v32;
  *(float *)&v46 = *(float *)(this + 0xE0) * v40
                 + v39 * *(float *)(this + 0xDC)
                 + v41 * *(float *)(this + 0xE4)
                 + *(float *)(this + 0xE8);
  if ( a5 >= (double)*(float *)&v46 )
    goto LABEL_32;
  *a4 = (v40 * *(float *)(this + 0xB0)
       + v39 * *(float *)(this + 0xAC)
       + v41 * *(float *)(this + 0xB4)
       + *(float *)(this + 0xB8))
      / *(float *)&v46;
  v39 = *(float *)(this + 0x6C);
  v40 = *(float *)(this + 0x78);
  v41 = *(float *)(this + 0x84);
  v16 = sub_4BF9E0(&v39, &v36, &v33);
  v39 = *v16 * *(float *)&v42;
  v40 = v16[1] * *(float *)&v42;
  v41 = *(float *)&v42 * v16[2];
  v17 = v39;
  v36 = v30 - v39;
  v18 = v40;
  v37 = v31 - v40;
  v19 = v41;
  v38 = v32 - v41;
  *(float *)&v47 = *(float *)(this + 0xE0) * v37
                 + v36 * *(float *)(this + 0xDC)
                 + v38 * *(float *)(this + 0xE4)
                 + *(float *)(this + 0xE8);
  if ( a5 >= (double)*(float *)&v47
    || (a3[1] = (v37 * *(float *)(this + 0xC0)
               + v36 * *(float *)(this + 0xBC)
               + *(float *)(this + 0xC4) * v38
               + *(float *)(this + 0xC8))
              / *(float *)&v47,
        v39 = v17 + v30,
        v40 = v18 + v31,
        v41 = v19 + v32,
        *(float *)&v48 = *(float *)(this + 0xE0) * v40
                       + v39 * *(float *)(this + 0xDC)
                       + v41 * *(float *)(this + 0xE4)
                       + *(float *)(this + 0xE8),
        a5 >= (double)*(float *)&v48) )
  {
LABEL_32:
    v26 = flt_A30634;
    a3[1] = flt_A30634;
    *a3 = v26;
    v23 = 1.0;
    a4[1] = 1.0;
    *a4 = 1.0;
    goto LABEL_25;
  }
  a4[1] = (v40 * *(float *)(this + 0xC0)
         + v39 * *(float *)(this + 0xBC)
         + v41 * *(float *)(this + 0xC4)
         + *(float *)(this + 0xC8))
        / *(float *)&v48;
  v20 = flt_A30634;
  v21 = 1.0;
  if ( v20 <= *a3 )
  {
    if ( *a4 > 1.0 )
    {
      *a4 = 1.0;
      if ( *a3 > 1.0 )
        *a3 = 1.0;
    }
  }
  else
  {
    v22 = flt_A30634;
    v23 = 1.0;
    *a3 = flt_A30634;
    if ( v22 > *a4 )
    {
      *a4 = v22;
      goto LABEL_17;
    }
    v24 = v22;
    v21 = 1.0;
    v20 = v24;
    if ( *a4 > 1.0 )
      *a4 = 1.0;
  }
  v25 = v21;
  v22 = v20;
  v23 = v25;
LABEL_17:
  if ( v22 <= a3[1] )
  {
    if ( v23 < a4[1] )
    {
      a4[1] = v23;
      if ( v23 < a3[1] )
        a3[1] = v23;
    }
  }
  else
  {
    a3[1] = v22;
    if ( v22 <= a4[1] )
    {
      if ( v23 < a4[1] )
        a4[1] = v23;
    }
    else
    {
      a4[1] = v22;
    }
  }
LABEL_25:
  if ( a3[2] >= 0.0 )
  {
    if ( v23 < a4[2] )
    {
      a4[2] = v23;
      if ( v23 < a3[2] )
        a3[2] = v23;
    }
  }
  else
  {
    a3[2] = 0.0;
    if ( a4[2] < 0.0 )
    {
      v23 = 0.0;
LABEL_28:
      a4[2] = v23;
      return;
    }
    if ( v23 < a4[2] )
      goto LABEL_28;
  }
}
