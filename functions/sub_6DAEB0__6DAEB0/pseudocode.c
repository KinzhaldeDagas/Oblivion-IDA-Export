float *__thiscall sub_6DAEB0(_DWORD *this, unsigned int a2, unsigned int a3, float a4, float *a5)
{
  float *result; // eax
  int v7; // ebp
  unsigned __int8 v8; // cl
  int v9; // edi
  int v10; // esi
  double v11; // st7
  float *v12; // eax
  float *v13; // eax
  float *v14; // eax
  float *v15; // eax
  float *v16; // eax
  float *v17; // eax
  double v18; // st7
  double v19; // st6
  double v20; // st5
  __int16 v21; // cx
  double v22; // st4
  int v23; // [esp+4h] [ebp-114h]
  float v24; // [esp+14h] [ebp-104h]
  float v25; // [esp+18h] [ebp-100h]
  float *v26; // [esp+1Ch] [ebp-FCh]
  float *v27; // [esp+1Ch] [ebp-FCh]
  float v28; // [esp+1Ch] [ebp-FCh]
  int v29; // [esp+30h] [ebp-E8h] BYREF
  float v30; // [esp+34h] [ebp-E4h]
  float v31; // [esp+38h] [ebp-E0h]
  float v32; // [esp+3Ch] [ebp-DCh]
  int v33; // [esp+40h] [ebp-D8h]
  int v34; // [esp+44h] [ebp-D4h] BYREF
  int v35; // [esp+48h] [ebp-D0h] BYREF
  unsigned int v36; // [esp+4Ch] [ebp-CCh]
  float v37; // [esp+50h] [ebp-C8h]
  int v38; // [esp+54h] [ebp-C4h] BYREF
  float v39; // [esp+58h] [ebp-C0h]
  float v40; // [esp+5Ch] [ebp-BCh]
  int v41; // [esp+60h] [ebp-B8h] BYREF
  float v42; // [esp+64h] [ebp-B4h]
  float v43; // [esp+68h] [ebp-B0h]
  float v44[9]; // [esp+6Ch] [ebp-ACh] BYREF
  int v45; // [esp+90h] [ebp-88h] BYREF
  float v46; // [esp+94h] [ebp-84h]
  float v47; // [esp+98h] [ebp-80h]
  int v48; // [esp+9Ch] [ebp-7Ch] BYREF
  float v49; // [esp+A0h] [ebp-78h]
  float v50; // [esp+A4h] [ebp-74h]
  int v51; // [esp+A8h] [ebp-70h]
  int v52[3]; // [esp+ACh] [ebp-6Ch] BYREF
  float v53[3]; // [esp+B8h] [ebp-60h] BYREF
  int v54[3]; // [esp+C4h] [ebp-54h] BYREF
  float v55[9]; // [esp+D0h] [ebp-48h] BYREF
  float v56[9]; // [esp+F4h] [ebp-24h] BYREF

  result = (float *)*(this + 6);
  qmemcpy(v44, &stru_B26AF0[0xA].unk2C, sizeof(v44));
  if ( result )
  {
    v7 = *((_DWORD *)result + 4);
    v8 = *((_BYTE *)result + 0x14);
    v9 = *((_DWORD *)result + 3);
    v32 = result[2];
    if ( LODWORD(v32) >= 2 )
    {
      if ( (*(_BYTE *)(this + 3) & 4) != 0 )
      {
        v10 = v8;
        v51 = a3 * v8 + v9;
        v33 = a2 * v8 + v9;
        sub_6BBEE0(a4, v33, v51, v7, (float *)&v45, (float *)&v41, (float *)&v48, (float *)&v34);
        if ( 0.0 != *((float *)this + 0xB) )
        {
          v11 = a4;
          if ( 1.0 - *((float *)this + 0xB) > a4 )
          {
            if ( *((float *)this + 0xB) >= v11 )
            {
              if ( (*(_BYTE *)(this + 3) & 2) != 0 || a2 )
                v36 = a2;
              else
                v36 = LODWORD(v32) - 1;
              if ( v36 )
              {
                v37 = (*((float *)this + 0xB) - v11) / (*((float *)this + 0xB) + *((float *)this + 0xB));
                v32 = 1.0 - v37;
                sub_6BBEE0(
                  *((float *)this + 0xB),
                  v33,
                  v51,
                  v7,
                  (float *)&v38,
                  (float *)&v41,
                  (float *)&v48,
                  (float *)&v34);
                *(float *)&v33 = 1.0 - *((float *)this + 0xB);
                sub_6BBEE0(
                  *(float *)&v33,
                  v9 + v10 * (v36 - 1),
                  v9 + v36 * v10,
                  v7,
                  (float *)&v38,
                  (float *)&v29,
                  (float *)&v48,
                  (float *)&v35);
                v27 = sub_47DA10((float *)v52, v37, (float *)&v29);
                v15 = sub_47DA10((float *)v54, v32, (float *)&v41);
                v16 = sub_47D9B0(v15, v53, v27);
                v41 = *(int *)v16;
                v42 = v16[1];
                v43 = v16[2];
                sub_43F350((float *)&v41);
                *(float *)&v34 = *(float *)&v35 * v37 + v32 * *(float *)&v34;
                v17 = sub_498FE0((float *)&v45, (float *)v52, (float *)&v41);
                v48 = *(int *)v17;
                v49 = v17[1];
                v50 = v17[2];
              }
            }
          }
          else
          {
            if ( (*(_BYTE *)(this + 3) & 2) != 0 || a3 != LODWORD(v32) - 1 )
              v36 = a3;
            else
              v36 = 0;
            if ( v36 < LODWORD(v32) - 1 )
            {
              v23 = v33;
              v32 = (1.0 - v11 + *((float *)this + 0xB)) / (*((float *)this + 0xB) + *((float *)this + 0xB));
              v37 = 1.0 - v32;
              *(float *)&v33 = 1.0 - *((float *)this + 0xB);
              sub_6BBEE0(*(float *)&v33, v23, v51, v7, (float *)&v38, (float *)&v41, (float *)&v48, (float *)&v34);
              sub_6BBEE0(
                *((float *)this + 0xB),
                v9 + v36 * v10,
                v9 + v10 * (v36 + 1),
                v7,
                (float *)&v38,
                (float *)&v29,
                (float *)&v48,
                (float *)&v35);
              v26 = sub_47DA10((float *)v54, v37, (float *)&v29);
              v12 = sub_47DA10((float *)v52, v32, (float *)&v41);
              v13 = sub_47D9B0(v12, v53, v26);
              v41 = *(int *)v13;
              v42 = v13[1];
              v43 = v13[2];
              sub_43F350((float *)&v41);
              *(float *)&v34 = *(float *)&v35 * v37 + v32 * *(float *)&v34;
              v14 = sub_498FE0((float *)&v45, (float *)v52, (float *)&v41);
              v48 = *(int *)v14;
              v49 = v14[1];
              v50 = v14[2];
            }
          }
        }
        v18 = *(float *)&v45;
        v44[0] = *(float *)&v45;
        v19 = v46;
        v44[3] = v46;
        v20 = v47;
        v44[6] = v47;
        *(float *)&v29 = -*(float *)&v41;
        v30 = -v42;
        v31 = -v43;
        v44[1] = *(float *)&v29;
        v44[4] = v30;
        v44[7] = v31;
        *(float *)&v29 = -*(float *)&v48;
        v30 = -v49;
        v31 = -v50;
        v44[2] = *(float *)&v29;
        v44[5] = v30;
        v44[8] = v31;
      }
      else
      {
        sub_6BBEE0(a4, v9 + a2 * v8, v9 + a3 * v8, v7, (float *)&v45, (float *)&v41, (float *)&v48, (float *)&v34);
        v44[0] = *(float *)&v45;
        v44[3] = v46;
        v44[6] = v47;
        sub_4BF9E0((float *)&dword_B258E8, (float *)&v38, (float *)&v45);
        v44[1] = *(float *)&v38;
        v44[4] = v39;
        v44[7] = v40;
        *(float *)&v29 = v40 * v46 - v39 * v47;
        v30 = v47 * *(float *)&v38 - v40 * *(float *)&v45;
        v19 = v46;
        v31 = v39 * *(float *)&v45 - *(float *)&v38 * v46;
        v44[2] = *(float *)&v29;
        v44[5] = v30;
        v44[8] = v31;
        v20 = v47;
        v18 = *(float *)&v45;
      }
      v21 = *((_WORD *)this + 6);
      if ( (v21 & 0x40) != 0 )
      {
        *(float *)&v29 = -v18;
        v30 = -v19;
        v31 = -v20;
        v44[0] = *(float *)&v29;
        v44[3] = v30;
        v44[6] = v31;
        *(float *)&v29 = -v44[1];
        v30 = -v44[4];
        v31 = -v44[7];
        v44[1] = *(float *)&v29;
        v44[4] = v30;
        v44[7] = v31;
      }
      result = (float *)(*((__int16 *)this + 0x18) - 1);
      if ( *((_WORD *)this + 0x18) == 1 )
      {
        v29 = SLODWORD(v44[0]);
        v30 = v44[3];
        v31 = v44[6];
        *(float *)&v38 = -v44[1];
        v39 = -v44[4];
        v40 = -v44[7];
        v44[0] = *(float *)&v38;
        v44[3] = v39;
        v44[6] = v40;
        v44[1] = *(float *)&v29;
        v44[4] = v30;
        v44[7] = v31;
      }
      else
      {
        result = (float *)(*((__int16 *)this + 0x18) - 2);
        if ( *((_WORD *)this + 0x18) == 2 )
        {
          v29 = SLODWORD(v44[0]);
          v30 = v44[3];
          v31 = v44[6];
          *(float *)&v38 = -v44[2];
          v39 = -v44[5];
          v40 = -v44[8];
          v44[0] = *(float *)&v38;
          v44[3] = v39;
          v44[6] = v40;
          v44[2] = *(float *)&v29;
          v44[5] = v30;
          v44[8] = v31;
        }
      }
      if ( (v21 & 8) != 0 )
      {
        if ( (dword_B3DD34 & 1) == 0 )
        {
          v22 = flt_B3F9A4;
          dword_B3DD34 |= 1u;
          flt_B3DD30 = dbl_A3C800 / v22;
        }
        *(float *)&v35 = (double)(int)*(this + 0xE) * *((float *)this + 0xA);
        if ( *((float *)this + 0xD) > (double)*(float *)&v34 )
        {
          *(float *)&v33 = *(float *)&v34 / *((float *)this + 0xD);
          *(float *)&v33 = atan(*(float *)&v33);
          *(float *)&v35 = *(float *)&v33 * flt_B3DD30 * *(float *)&v35;
          v18 = *(float *)&v45;
          v20 = v47;
          v19 = v46;
        }
        v28 = v20;
        v25 = v19;
        v24 = v18;
        sub_70FE20(v55, *(float *)&v35, v24, v25, v28);
        result = NiMAtrix33_Multiply(v55, v56, v44);
        qmemcpy(v44, result, sizeof(v44));
      }
    }
  }
  qmemcpy(a5, v44, 0x24u);
  return result;
}
