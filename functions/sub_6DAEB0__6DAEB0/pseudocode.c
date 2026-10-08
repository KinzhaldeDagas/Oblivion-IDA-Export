NiMatrix33 *__thiscall sub_6DAEB0(_DWORD *this, int a2, int a3, float a4, NiMatrix33 *a5)
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

  result = (NiMatrix33 *)*(this + 6); /*0x6daebb*/
  qmemcpy(&right, &stru_B26AF0[0xA].unk2C, sizeof(right)); /*0x6daecf*/
  if ( result ) /*0x6daed1*/
  {
    v7 = LODWORD(result->data[1][1]); /*0x6daedd*/
    v8 = LOBYTE(result->data[1][2]); /*0x6daee0*/
    v9 = result->data[1][0]; /*0x6daee3*/
    v28 = result->data[0][2]; /*0x6daee6*/
    if ( LODWORD(v28) >= 2 ) /*0x6daeea*/
    {
      if ( (*(_BYTE *)(this + 3) & 4) != 0 ) /*0x6daeff*/
      {
        v10 = v8; /*0x6daf05*/
        v39 = a3 * v8 + LODWORD(v9); /*0x6daf3d*/
        v29 = a2 * v8 + LODWORD(v9); /*0x6daf44*/
        sub_6BBEE0(a4, v29, v39, v7, &rhs.x, &other.x, &v38.x, (float *)&v30); /*0x6daf4b*/
        if ( 0.0 != *((float *)this + 0xB) ) /*0x6daf5d*/
        {
          v11 = a4; /*0x6daf63*/
          if ( 1.0 - *((float *)this + 0xB) > a4 ) /*0x6daf7c*/
          {
            if ( *((float *)this + 0xB) >= v11 ) /*0x6db115*/
            {
              if ( (*(_BYTE *)(this + 3) & 2) != 0 || a2 ) /*0x6db12c*/
                v32 = a2; /*0x6db142*/
              else
                v32 = LODWORD(v28) - 1; /*0x6db135*/
              if ( v32 ) /*0x6db14b*/
              {
                v33 = (*((float *)this + 0xB) - v11) / (*((float *)this + 0xB) + *((float *)this + 0xB)); /*0x6db185*/
                v28 = 1.0 - v33; /*0x6db18d*/
                sub_6BBEE0(*((float *)this + 0xB), v29, v39, v7, &out.x, &other.x, &v38.x, (float *)&v30); /*0x6db197*/
                *(float *)&v29 = 1.0 - *((float *)this + 0xB); /*0x6db1b8*/
                sub_6BBEE0( /*0x6db1df*/
                  *(float *)&v29,
                  LODWORD(v9) + v10 * (v32 - 1),
                  LODWORD(v9) + v32 * v10,
                  v7,
                  &out.x,
                  (float *)&v25,
                  &v38.x,
                  (float *)&v31);
                v23 = sub_47DA10(&v40.x, v33, (float *)&v25); /*0x6db208*/
                v13 = sub_47DA10((float *)v42, v28, &other.x); /*0x6db222*/
                other = *(NiPoint3 *)sub_47D9B0(v13, v41, v23); /*0x6db233*/
                Vector3_NormalizeInPlace(&other.x); /*0x6db249*/
                *(float *)&v30 = *(float *)&v31 * v33 + v28 * *(float *)&v30; /*0x6db273*/
                v38 = *NiPoint3_CrossProduct(&rhs, &v40, &other); /*0x6db27e*/
              }
            }
          }
          else
          {
            if ( (*(_BYTE *)(this + 3) & 2) != 0 || a3 != LODWORD(v28) - 1 ) /*0x6daf99*/
              v32 = a3; /*0x6dafac*/
            else
              v32 = 0; /*0x6daf9b*/
            if ( v32 < LODWORD(v28) - 1 ) /*0x6dafbb*/
            {
              v19 = v29; /*0x6daff5*/
              v28 = (1.0 - v11 + *((float *)this + 0xB)) / (*((float *)this + 0xB) + *((float *)this + 0xB)); /*0x6daff9*/
              v33 = 1.0 - v28; /*0x6db003*/
              *(float *)&v29 = 1.0 - *((float *)this + 0xB); /*0x6db00a*/
              sub_6BBEE0(*(float *)&v29, v19, v39, v7, &out.x, &other.x, &v38.x, (float *)&v30); /*0x6db015*/
              sub_6BBEE0( /*0x6db04f*/
                *((float *)this + 0xB),
                LODWORD(v9) + v32 * v10,
                LODWORD(v9) + v10 * (v32 + 1),
                v7,
                &out.x,
                (float *)&v25,
                &v38.x,
                (float *)&v31);
              v22 = sub_47DA10((float *)v42, v33, (float *)&v25); /*0x6db078*/
              v12 = sub_47DA10(&v40.x, v28, &other.x); /*0x6db092*/
              other = *(NiPoint3 *)sub_47D9B0(v12, v41, v22); /*0x6db0a3*/
              Vector3_NormalizeInPlace(&other.x); /*0x6db0b9*/
              *(float *)&v30 = *(float *)&v31 * v33 + v28 * *(float *)&v30; /*0x6db0e3*/
              v38 = *NiPoint3_CrossProduct(&rhs, &v40, &other); /*0x6db0ee*/
            }
          }
        }
        x = rhs.x; /*0x6db29c*/
        right.data[0][0] = rhs.x; /*0x6db2a0*/
        y = rhs.y; /*0x6db2a4*/
        right.data[1][0] = rhs.y; /*0x6db2a8*/
        z = rhs.z; /*0x6db2ac*/
        right.data[2][0] = rhs.z; /*0x6db2b0*/
        *(float *)&v25 = -other.x; /*0x6db2ba*/
        v26 = -other.y; /*0x6db2c4*/
        v27 = -other.z; /*0x6db2ce*/
        right.data[0][1] = *(float *)&v25; /*0x6db2d6*/
        right.data[1][1] = v26; /*0x6db2de*/
        right.data[2][1] = v27; /*0x6db2e6*/
        *(float *)&v25 = -v38.x; /*0x6db2f0*/
        v26 = -v38.y; /*0x6db2fd*/
        v27 = -v38.z; /*0x6db30a*/
        right.data[0][2] = *(float *)&v25; /*0x6db312*/
        right.data[1][2] = v26; /*0x6db31a*/
        right.data[2][2] = v27; /*0x6db322*/
      }
      else
      {
        sub_6BBEE0(a4, LODWORD(v9) + a2 * v8, LODWORD(v9) + a3 * v8, v7, &rhs.x, &other.x, &v38.x, (float *)&v30); /*0x6db362*/
        right.data[0][0] = rhs.x; /*0x6db371*/
        right.data[1][0] = rhs.y; /*0x6db37e*/
        right.data[2][0] = rhs.z; /*0x6db390*/
        NiPoint3__NormalizedCrossProduct(&::rhs, &out, &rhs); /*0x6db394*/
        right.data[0][1] = out.x; /*0x6db39d*/
        right.data[1][1] = out.y; /*0x6db3a5*/
        right.data[2][1] = out.z; /*0x6db3ad*/
        *(float *)&v25 = out.z * rhs.y - out.y * rhs.z; /*0x6db3c9*/
        v26 = rhs.z * out.x - out.z * rhs.x; /*0x6db3df*/
        y = rhs.y; /*0x6db3eb*/
        v27 = out.y * rhs.x - out.x * rhs.y; /*0x6db3f1*/
        right.data[0][2] = *(float *)&v25; /*0x6db3f9*/
        right.data[1][2] = v26; /*0x6db401*/
        right.data[2][2] = v27; /*0x6db409*/
        z = rhs.z; /*0x6db40d*/
        x = rhs.x; /*0x6db40d*/
      }
      v17 = *((_WORD *)this + 6); /*0x6db40f*/
      if ( (v17 & 0x40) != 0 ) /*0x6db41b*/
      {
        *(float *)&v25 = -x; /*0x6db421*/
        v26 = -y; /*0x6db429*/
        v27 = -z; /*0x6db431*/
        right.data[0][0] = *(float *)&v25; /*0x6db439*/
        right.data[1][0] = v26; /*0x6db441*/
        right.data[2][0] = v27; /*0x6db449*/
        *(float *)&v25 = -right.data[0][1]; /*0x6db453*/
        v26 = -right.data[1][1]; /*0x6db45d*/
        v27 = -right.data[2][1]; /*0x6db467*/
        right.data[0][1] = *(float *)&v25; /*0x6db46f*/
        right.data[1][1] = v26; /*0x6db477*/
        right.data[2][1] = v27; /*0x6db47f*/
      }
      result = (NiMatrix33 *)(*((__int16 *)this + 0x18) - 1); /*0x6db487*/
      if ( *((_WORD *)this + 0x18) == 1 ) /*0x6db48a*/
      {
        v25 = SLODWORD(right.data[0][0]); /*0x6db501*/
        v26 = right.data[1][0]; /*0x6db509*/
        v27 = right.data[2][0]; /*0x6db511*/
        out.x = -right.data[0][1]; /*0x6db51b*/
        out.y = -right.data[1][1]; /*0x6db525*/
        out.z = -right.data[2][1]; /*0x6db52f*/
        right.data[0][0] = out.x; /*0x6db537*/
        right.data[1][0] = out.y; /*0x6db53f*/
        right.data[2][0] = out.z; /*0x6db547*/
        right.data[0][1] = *(float *)&v25; /*0x6db54f*/
        right.data[1][1] = v26; /*0x6db557*/
        right.data[2][1] = v27; /*0x6db55f*/
      }
      else
      {
        result = (NiMatrix33 *)(*((__int16 *)this + 0x18) - 2); /*0x6db48c*/
        if ( *((_WORD *)this + 0x18) == 2 ) /*0x6db48f*/
        {
          v25 = SLODWORD(right.data[0][0]); /*0x6db499*/
          v26 = right.data[1][0]; /*0x6db4a1*/
          v27 = right.data[2][0]; /*0x6db4a9*/
          out.x = -right.data[0][2]; /*0x6db4b3*/
          out.y = -right.data[1][2]; /*0x6db4bd*/
          out.z = -right.data[2][2]; /*0x6db4c7*/
          right.data[0][0] = out.x; /*0x6db4cf*/
          right.data[1][0] = out.y; /*0x6db4d7*/
          right.data[2][0] = out.z; /*0x6db4df*/
          right.data[0][2] = *(float *)&v25; /*0x6db4e7*/
          right.data[1][2] = v26; /*0x6db4ef*/
          right.data[2][2] = v27; /*0x6db4f7*/
        }
      }
      if ( (v17 & 8) != 0 ) /*0x6db569*/
      {
        if ( (unk_B3DD34 & 1) == 0 ) /*0x6db576*/
        {
          v18 = unk_B3F9A4; /*0x6db578*/
          unk_B3DD34 |= 1u; /*0x6db57e*/
          unk_B3DD30 = dbl_A3C800 / v18; /*0x6db58b*/
        }
        *(float *)&v31 = (double)(int)*(this + 0xE) * *((float *)this + 0xA); /*0x6db597*/
        if ( *((float *)this + 0xD) > (double)*(float *)&v30 ) /*0x6db5a9*/
        {
          *(float *)&v29 = *(float *)&v30 / *((float *)this + 0xD); /*0x6db5b8*/
          *(float *)&v29 = atan(*(float *)&v29); /*0x6db5c5*/
          *(float *)&v31 = *(float *)&v29 * unk_B3DD30 * *(float *)&v31; /*0x6db5d7*/
          x = rhs.x; /*0x6db5e9*/
          z = rhs.z; /*0x6db5eb*/
          y = rhs.y; /*0x6db5eb*/
        }
        v24 = z; /*0x6db5f0*/
        v21 = y; /*0x6db5fb*/
        v20 = x; /*0x6db5ff*/
        sub_70FE20((float *)&v43, *(float *)&v31, v20, v21, v24); /*0x6db60a*/
        result = NiMAtrix33_Multiply(&v43, &v44, &right); /*0x6db623*/
        qmemcpy(&right, result, sizeof(right)); /*0x6db633*/
      }
    }
  }
  qmemcpy(a5, &right, sizeof(NiMatrix33)); /*0x6db651*/
  return result; /*0x6db653*/
}
