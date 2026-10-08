NiMatrix33 *__thiscall sub_6DC940(_DWORD *this, int a2, int a3, float a4, NiMatrix33 *a5)
{
  NiMatrix33 *result; // eax
  int v7; // ebp
  unsigned __int8 v8; // cl
  float v9; // edi
  int v10; // esi
  double v11; // st7
  float *v12; // eax
  float *v13; // eax
  double x; // st7
  double y; // st6
  double z; // st5
  __int16 v17; // cx
  double v18; // st4
  int v19; // [esp+4h] [ebp-114h]
  float v20; // [esp+14h] [ebp-104h]
  float v21; // [esp+18h] [ebp-100h]
  float *v22; // [esp+1Ch] [ebp-FCh]
  float *v23; // [esp+1Ch] [ebp-FCh]
  float v24; // [esp+1Ch] [ebp-FCh]
  int v25; // [esp+30h] [ebp-E8h] BYREF
  float v26; // [esp+34h] [ebp-E4h]
  float v27; // [esp+38h] [ebp-E0h]
  float v28; // [esp+3Ch] [ebp-DCh]
  int v29; // [esp+40h] [ebp-D8h]
  int v30; // [esp+44h] [ebp-D4h] BYREF
  int v31; // [esp+48h] [ebp-D0h] BYREF
  unsigned int v32; // [esp+4Ch] [ebp-CCh]
  float v33; // [esp+50h] [ebp-C8h]
  NiPoint3 out; // [esp+54h] [ebp-C4h] BYREF
  NiPoint3 other; // [esp+60h] [ebp-B8h] BYREF
  NiMatrix33 right; // [esp+6Ch] [ebp-ACh] BYREF
  NiPoint3 rhs; // [esp+90h] [ebp-88h] BYREF
  NiPoint3 v38; // [esp+9Ch] [ebp-7Ch] BYREF
  int v39; // [esp+A8h] [ebp-70h]
  NiPoint3 v40; // [esp+ACh] [ebp-6Ch] BYREF
  float v41[3]; // [esp+B8h] [ebp-60h] BYREF
  int v42[3]; // [esp+C4h] [ebp-54h] BYREF
  NiMatrix33 v43; // [esp+D0h] [ebp-48h] BYREF
  NiMatrix33 v44; // [esp+F4h] [ebp-24h] BYREF

  result = (NiMatrix33 *)*(this + 0x12); /*0x6dc94b*/
  qmemcpy(&right, &stru_B26AF0[0xA].unk2C, sizeof(right)); /*0x6dc95f*/
  if ( result ) /*0x6dc961*/
  {
    v7 = LODWORD(result->data[1][1]); /*0x6dc96d*/
    v8 = LOBYTE(result->data[1][2]); /*0x6dc970*/
    v9 = result->data[1][0]; /*0x6dc973*/
    v28 = result->data[0][2]; /*0x6dc976*/
    if ( LODWORD(v28) >= 2 ) /*0x6dc97a*/
    {
      if ( (*(_BYTE *)(this + 0xF) & 4) != 0 ) /*0x6dc98f*/
      {
        v10 = v8; /*0x6dc995*/
        v39 = a3 * v8 + LODWORD(v9); /*0x6dc9cd*/
        v29 = a2 * v8 + LODWORD(v9); /*0x6dc9d4*/
        sub_6BBEE0(a4, v29, v39, v7, &rhs.x, &other.x, &v38.x, (float *)&v30); /*0x6dc9db*/
        if ( 0.0 != *((float *)this + 0x17) ) /*0x6dc9ed*/
        {
          v11 = a4; /*0x6dc9f3*/
          if ( 1.0 - *((float *)this + 0x17) > a4 ) /*0x6dca0c*/
          {
            if ( *((float *)this + 0x17) >= v11 ) /*0x6dcba5*/
            {
              if ( (*(_BYTE *)(this + 0xF) & 2) != 0 || a2 ) /*0x6dcbbc*/
                v32 = a2; /*0x6dcbd2*/
              else
                v32 = LODWORD(v28) - 1; /*0x6dcbc5*/
              if ( v32 ) /*0x6dcbdb*/
              {
                v33 = (*((float *)this + 0x17) - v11) / (*((float *)this + 0x17) + *((float *)this + 0x17)); /*0x6dcc15*/
                v28 = 1.0 - v33; /*0x6dcc1d*/
                sub_6BBEE0(*((float *)this + 0x17), v29, v39, v7, &out.x, &other.x, &v38.x, (float *)&v30); /*0x6dcc27*/
                *(float *)&v29 = 1.0 - *((float *)this + 0x17); /*0x6dcc48*/
                sub_6BBEE0( /*0x6dcc6f*/
                  *(float *)&v29,
                  LODWORD(v9) + v10 * (v32 - 1),
                  LODWORD(v9) + v32 * v10,
                  v7,
                  &out.x,
                  (float *)&v25,
                  &v38.x,
                  (float *)&v31);
                v23 = sub_47DA10(&v40.x, v33, (float *)&v25); /*0x6dcc98*/
                v13 = sub_47DA10((float *)v42, v28, &other.x); /*0x6dccb2*/
                other = *(NiPoint3 *)sub_47D9B0(v13, v41, v23); /*0x6dccc3*/
                Vector3_NormalizeInPlace(&other.x); /*0x6dccd9*/
                *(float *)&v30 = *(float *)&v31 * v33 + v28 * *(float *)&v30; /*0x6dcd03*/
                v38 = *NiPoint3_CrossProduct(&rhs, &v40, &other); /*0x6dcd0e*/
              }
            }
          }
          else
          {
            if ( (*(_BYTE *)(this + 0xF) & 2) != 0 || a3 != LODWORD(v28) - 1 ) /*0x6dca29*/
              v32 = a3; /*0x6dca3c*/
            else
              v32 = 0; /*0x6dca2b*/
            if ( v32 < LODWORD(v28) - 1 ) /*0x6dca4b*/
            {
              v19 = v29; /*0x6dca85*/
              v28 = (1.0 - v11 + *((float *)this + 0x17)) / (*((float *)this + 0x17) + *((float *)this + 0x17)); /*0x6dca89*/
              v33 = 1.0 - v28; /*0x6dca93*/
              *(float *)&v29 = 1.0 - *((float *)this + 0x17); /*0x6dca9a*/
              sub_6BBEE0(*(float *)&v29, v19, v39, v7, &out.x, &other.x, &v38.x, (float *)&v30); /*0x6dcaa5*/
              sub_6BBEE0( /*0x6dcadf*/
                *((float *)this + 0x17),
                LODWORD(v9) + v32 * v10,
                LODWORD(v9) + v10 * (v32 + 1),
                v7,
                &out.x,
                (float *)&v25,
                &v38.x,
                (float *)&v31);
              v22 = sub_47DA10((float *)v42, v33, (float *)&v25); /*0x6dcb08*/
              v12 = sub_47DA10(&v40.x, v28, &other.x); /*0x6dcb22*/
              other = *(NiPoint3 *)sub_47D9B0(v12, v41, v22); /*0x6dcb33*/
              Vector3_NormalizeInPlace(&other.x); /*0x6dcb49*/
              *(float *)&v30 = *(float *)&v31 * v33 + v28 * *(float *)&v30; /*0x6dcb73*/
              v38 = *NiPoint3_CrossProduct(&rhs, &v40, &other); /*0x6dcb7e*/
            }
          }
        }
        x = rhs.x; /*0x6dcd2c*/
        right.data[0][0] = rhs.x; /*0x6dcd30*/
        y = rhs.y; /*0x6dcd34*/
        right.data[1][0] = rhs.y; /*0x6dcd38*/
        z = rhs.z; /*0x6dcd3c*/
        right.data[2][0] = rhs.z; /*0x6dcd40*/
        *(float *)&v25 = -other.x; /*0x6dcd4a*/
        v26 = -other.y; /*0x6dcd54*/
        v27 = -other.z; /*0x6dcd5e*/
        right.data[0][1] = *(float *)&v25; /*0x6dcd66*/
        right.data[1][1] = v26; /*0x6dcd6e*/
        right.data[2][1] = v27; /*0x6dcd76*/
        *(float *)&v25 = -v38.x; /*0x6dcd80*/
        v26 = -v38.y; /*0x6dcd8d*/
        v27 = -v38.z; /*0x6dcd9a*/
        right.data[0][2] = *(float *)&v25; /*0x6dcda2*/
        right.data[1][2] = v26; /*0x6dcdaa*/
        right.data[2][2] = v27; /*0x6dcdb2*/
      }
      else
      {
        sub_6BBEE0(a4, LODWORD(v9) + a2 * v8, LODWORD(v9) + a3 * v8, v7, &rhs.x, &other.x, &v38.x, (float *)&v30); /*0x6dcdf2*/
        right.data[0][0] = rhs.x; /*0x6dce01*/
        right.data[1][0] = rhs.y; /*0x6dce0e*/
        right.data[2][0] = rhs.z; /*0x6dce20*/
        NiPoint3__NormalizedCrossProduct(&::rhs, &out, &rhs); /*0x6dce24*/
        right.data[0][1] = out.x; /*0x6dce2d*/
        right.data[1][1] = out.y; /*0x6dce35*/
        right.data[2][1] = out.z; /*0x6dce3d*/
        *(float *)&v25 = out.z * rhs.y - out.y * rhs.z; /*0x6dce59*/
        v26 = rhs.z * out.x - out.z * rhs.x; /*0x6dce6f*/
        y = rhs.y; /*0x6dce7b*/
        v27 = out.y * rhs.x - out.x * rhs.y; /*0x6dce81*/
        right.data[0][2] = *(float *)&v25; /*0x6dce89*/
        right.data[1][2] = v26; /*0x6dce91*/
        right.data[2][2] = v27; /*0x6dce99*/
        z = rhs.z; /*0x6dce9d*/
        x = rhs.x; /*0x6dce9d*/
      }
      v17 = *((_WORD *)this + 0x1E); /*0x6dce9f*/
      if ( (v17 & 0x40) != 0 ) /*0x6dceab*/
      {
        *(float *)&v25 = -x; /*0x6dceb1*/
        v26 = -y; /*0x6dceb9*/
        v27 = -z; /*0x6dcec1*/
        right.data[0][0] = *(float *)&v25; /*0x6dcec9*/
        right.data[1][0] = v26; /*0x6dced1*/
        right.data[2][0] = v27; /*0x6dced9*/
        *(float *)&v25 = -right.data[0][1]; /*0x6dcee3*/
        v26 = -right.data[1][1]; /*0x6dceed*/
        v27 = -right.data[2][1]; /*0x6dcef7*/
        right.data[0][1] = *(float *)&v25; /*0x6dceff*/
        right.data[1][1] = v26; /*0x6dcf07*/
        right.data[2][1] = v27; /*0x6dcf0f*/
      }
      result = (NiMatrix33 *)(*((__int16 *)this + 0x30) - 1); /*0x6dcf17*/
      if ( *((_WORD *)this + 0x30) == 1 ) /*0x6dcf1a*/
      {
        v25 = SLODWORD(right.data[0][0]); /*0x6dcf91*/
        v26 = right.data[1][0]; /*0x6dcf99*/
        v27 = right.data[2][0]; /*0x6dcfa1*/
        out.x = -right.data[0][1]; /*0x6dcfab*/
        out.y = -right.data[1][1]; /*0x6dcfb5*/
        out.z = -right.data[2][1]; /*0x6dcfbf*/
        right.data[0][0] = out.x; /*0x6dcfc7*/
        right.data[1][0] = out.y; /*0x6dcfcf*/
        right.data[2][0] = out.z; /*0x6dcfd7*/
        right.data[0][1] = *(float *)&v25; /*0x6dcfdf*/
        right.data[1][1] = v26; /*0x6dcfe7*/
        right.data[2][1] = v27; /*0x6dcfef*/
      }
      else
      {
        result = (NiMatrix33 *)(*((__int16 *)this + 0x30) - 2); /*0x6dcf1c*/
        if ( *((_WORD *)this + 0x30) == 2 ) /*0x6dcf1f*/
        {
          v25 = SLODWORD(right.data[0][0]); /*0x6dcf29*/
          v26 = right.data[1][0]; /*0x6dcf31*/
          v27 = right.data[2][0]; /*0x6dcf39*/
          out.x = -right.data[0][2]; /*0x6dcf43*/
          out.y = -right.data[1][2]; /*0x6dcf4d*/
          out.z = -right.data[2][2]; /*0x6dcf57*/
          right.data[0][0] = out.x; /*0x6dcf5f*/
          right.data[1][0] = out.y; /*0x6dcf67*/
          right.data[2][0] = out.z; /*0x6dcf6f*/
          right.data[0][2] = *(float *)&v25; /*0x6dcf77*/
          right.data[1][2] = v26; /*0x6dcf7f*/
          right.data[2][2] = v27; /*0x6dcf87*/
        }
      }
      if ( (v17 & 8) != 0 ) /*0x6dcff9*/
      {
        if ( (unk_B3DD9C & 1) == 0 ) /*0x6dd006*/
        {
          v18 = unk_B3F9A4; /*0x6dd008*/
          unk_B3DD9C |= 1u; /*0x6dd00e*/
          unk_B3DD98 = dbl_A3C800 / v18; /*0x6dd01b*/
        }
        *(float *)&v31 = (double)(int)*(this + 0x1A) * *((float *)this + 0x16); /*0x6dd027*/
        if ( *((float *)this + 0x19) > (double)*(float *)&v30 ) /*0x6dd039*/
        {
          *(float *)&v29 = *(float *)&v30 / *((float *)this + 0x19); /*0x6dd048*/
          *(float *)&v29 = atan(*(float *)&v29); /*0x6dd055*/
          *(float *)&v31 = *(float *)&v29 * unk_B3DD98 * *(float *)&v31; /*0x6dd067*/
          x = rhs.x; /*0x6dd079*/
          z = rhs.z; /*0x6dd07b*/
          y = rhs.y; /*0x6dd07b*/
        }
        v24 = z; /*0x6dd080*/
        v21 = y; /*0x6dd08b*/
        v20 = x; /*0x6dd08f*/
        sub_70FE20((float *)&v43, *(float *)&v31, v20, v21, v24); /*0x6dd09a*/
        result = NiMAtrix33_Multiply(&v43, &v44, &right); /*0x6dd0b3*/
        qmemcpy(&right, result, sizeof(right)); /*0x6dd0c3*/
      }
    }
  }
  qmemcpy(a5, &right, sizeof(NiMatrix33)); /*0x6dd0e1*/
  return result; /*0x6dd0e3*/
}
