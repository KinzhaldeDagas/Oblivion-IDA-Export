void __thiscall sub_75C810(_DWORD *this, float a2, int a3)
{
  int v3; // ebx
  int v5; // ecx
  bool v6; // zf
  float x; // edi
  NiTransform *v8; // eax
  float v9; // ecx
  float v10; // edx
  float v11; // eax
  float *v12; // esi
  double v13; // st7
  double v14; // st4
  float *v15; // eax
  float v16; // eax
  float v17; // ecx
  unsigned __int16 v18; // di
  float *v19; // esi
  int v20; // eax
  float v21; // edx
  int v22; // eax
  float v23; // ecx
  double v24; // st7
  float v25; // edx
  char v26; // bl
  double v27; // st7
  double v28; // st6
  double v29; // st5
  double v30; // st7
  double v31; // st7
  float v32; // [esp+14h] [ebp-15Ch]
  float v33; // [esp+14h] [ebp-15Ch]
  float v34; // [esp+14h] [ebp-15Ch]
  float v35; // [esp+14h] [ebp-15Ch]
  float v36; // [esp+14h] [ebp-15Ch]
  float v37; // [esp+14h] [ebp-15Ch]
  float v38; // [esp+14h] [ebp-15Ch]
  float v39; // [esp+14h] [ebp-15Ch]
  float v40; // [esp+14h] [ebp-15Ch]
  float v41; // [esp+14h] [ebp-15Ch]
  float v42; // [esp+14h] [ebp-15Ch]
  float v43; // [esp+18h] [ebp-158h]
  float v44; // [esp+18h] [ebp-158h]
  float v45; // [esp+18h] [ebp-158h]
  float v46; // [esp+1Ch] [ebp-154h]
  float v47; // [esp+1Ch] [ebp-154h]
  float v48; // [esp+1Ch] [ebp-154h]
  float v49; // [esp+20h] [ebp-150h]
  float v50; // [esp+20h] [ebp-150h]
  float v51; // [esp+20h] [ebp-150h]
  float v52; // [esp+24h] [ebp-14Ch]
  __int64 v53; // [esp+24h] [ebp-14Ch]
  float y; // [esp+28h] [ebp-148h]
  float z; // [esp+2Ch] [ebp-144h]
  float v56; // [esp+2Ch] [ebp-144h]
  __int64 v57; // [esp+30h] [ebp-140h] BYREF
  float v58; // [esp+38h] [ebp-138h]
  __int64 v59; // [esp+3Ch] [ebp-134h] BYREF
  float v60; // [esp+44h] [ebp-12Ch]
  float v61; // [esp+48h] [ebp-128h]
  float v62; // [esp+4Ch] [ebp-124h]
  NiPoint3 pos; // [esp+50h] [ebp-120h]
  NiTransform v64; // [esp+5Ch] [ebp-114h] BYREF
  float v65; // [esp+90h] [ebp-E0h]
  float v66; // [esp+94h] [ebp-DCh]
  float v67; // [esp+98h] [ebp-D8h]
  float v68; // [esp+9Ch] [ebp-D4h]
  NiTransform out; // [esp+A0h] [ebp-D0h] BYREF
  NiTransform local; // [esp+D4h] [ebp-9Ch] BYREF
  float v71[13]; // [esp+108h] [ebp-68h] BYREF
  NiTransform parent; // [esp+13Ch] [ebp-34h] BYREF

  v3 = a3; /*0x75c817*/
  if ( *(_WORD *)(a3 + 0x48) ) /*0x75c81e*/
  {
    v5 = *(this + 6); /*0x75c82c*/
    if ( v5 ) /*0x75c831*/
    {
      if ( 0.0 == *((float *)this + 8) && 0.0 == *((float *)this + 0x17) && !*((_BYTE *)this + 0x62) ) /*0x75c84d*/
      {
        if ( *((_BYTE *)this + 0x24) ) /*0x75c853*/
          sub_75C2F0((int)this, a2, a3); /*0x75c867*/
        else
          sub_75C590((int)this, a2, a3); /*0x75c877*/
        return; /*0x75c874*/
      }
      qmemcpy(&local, (const void *)(v5 + 0x64), sizeof(local)); /*0x75c89a*/
      qmemcpy(v71, (const void *)(*(this + 4) + 0x64), sizeof(v71)); /*0x75c8b5*/
      sub_718A80(v71, &parent); /*0x75c8bf*/
      NiTransform_Compose(&parent, &out, &local); /*0x75c8db*/
      v6 = *((_BYTE *)this + 0x60) == 0; /*0x75c8e0*/
      x = out.pos.x; /*0x75c8e4*/
      pos = out.pos; /*0x75c8f9*/
      if ( v6 ) /*0x75c905*/
      {
        v9 = *((float *)this + 0x13); /*0x75c926*/
        v10 = *((float *)this + 0x14); /*0x75c929*/
        v11 = *((float *)this + 0x15); /*0x75c92c*/
      }
      else
      {
        v8 = sub_7101F0(&out, &v64, (NiPoint3 *)(this + 0x13)); /*0x75c917*/
        v9 = v8->rot.data[0][0]; /*0x75c91c*/
        v10 = v8->rot.data[0][1]; /*0x75c91e*/
        v11 = v8->rot.data[0][2]; /*0x75c921*/
      }
      v43 = v9; /*0x75c92f*/
      v49 = v11; /*0x75c939*/
      v46 = v10; /*0x75c942*/
      v52 = g_zeroNiPoint3.x; /*0x75c94c*/
      v12 = (float *)(this + 0xC); /*0x75c950*/
      y = g_zeroNiPoint3.y; /*0x75c95a*/
      z = g_zeroNiPoint3.z; /*0x75c95e*/
      v13 = a2; /*0x75c967*/
      if ( NiPoint3__NotEqual((const NiPoint3 *)this + 4, &stru_B28B54) /*0x75c996*/
        && *((float *)this + 0xF) != dbl_A3A5B0
        && v13 != *((float *)this + 0xF) )
      {
        *(float *)&v59 = pos.x - *v12; /*0x75c9a7*/
        *((float *)&v59 + 1) = pos.y - *((float *)this + 0xD); /*0x75c9b2*/
        v60 = pos.z - *((float *)this + 0xE); /*0x75c9bd*/
        v14 = *((float *)this + 0x17); /*0x75c9d0*/
        v64.rot.data[0][0] = *(float *)&v59 * v14; /*0x75c9d6*/
        v64.rot.data[0][1] = *((float *)&v59 + 1) * v14; /*0x75c9e0*/
        v64.rot.data[0][2] = v14 * v60; /*0x75c9e8*/
        v32 = v13 - *((float *)this + 0xF); /*0x75c9ef*/
        v15 = sub_4BF9B0((float *)&v64, v64.rot.data[2], v32); /*0x75c9ff*/
        v13 = a2; /*0x75ca04*/
        v52 = *v15; /*0x75ca10*/
        y = v15[1]; /*0x75ca17*/
        z = v15[2]; /*0x75ca1b*/
      }
      *((float *)this + 0xF) = v13; /*0x75ca1f*/
      v16 = pos.y; /*0x75ca22*/
      v17 = pos.z; /*0x75ca29*/
      v33 = *((float *)this + 7); /*0x75ca2d*/
      *v12 = x; /*0x75ca31*/
      *((float *)this + 0xD) = v16; /*0x75ca37*/
      *((float *)this + 0xE) = v17; /*0x75ca3e*/
      *(float *)&v59 = v43 * v33; /*0x75ca47*/
      *((float *)&v59 + 1) = v46 * v33; /*0x75ca51*/
      v60 = v33 * v49; /*0x75ca59*/
      *(float *)&v53 = *(float *)&v59 + v52; /*0x75ca65*/
      *((float *)&v53 + 1) = y + *((float *)&v59 + 1); /*0x75ca71*/
      v56 = z + v60; /*0x75ca7d*/
      v34 = v56 * v56 + *(float *)&v53 * *(float *)&v53 + *((float *)&v53 + 1) * *((float *)&v53 + 1); /*0x75ca9f*/
      if ( v34 != *(float *)&SrcStr ) /*0x75cab2*/
      {
        v60 = v56; /*0x75cac4*/
        v59 = v53; /*0x75cacc*/
        v68 = Vector3_NormalizeInPlace((float *)&v59); /*0x75cad9*/
        if ( *((_BYTE *)this + 0x62) ) /*0x75cae0*/
        {
          v35 = *((float *)this + 0x19) * unk_B3F99C; /*0x75caef*/
          v36 = cos(v35); /*0x75cafc*/
          v64.pos.x = v36; /*0x75cb04*/
        }
        v18 = 0; /*0x75cb08*/
        if ( *(_WORD *)(a3 + 0x48) ) /*0x75cb0a*/
        {
          while ( 1 ) /*0x75cb36*/
          {
            v19 = (float *)(*(_DWORD *)(v3 + 0x5C) + 0x1C * v18); /*0x75cb36*/
            v62 = a2 - v19[5]; /*0x75cb3c*/
            if ( 0.0 != v62 ) /*0x75cb4b*/
              break; /*0x75cb4b*/
LABEL_33:
            if ( ++v18 >= *(_WORD *)(v3 + 0x48) ) /*0x75ce1c*/
              return; /*0x75ce1c*/
          }
          v20 = *(_DWORD *)(v3 + 0x1C); /*0x75cb51*/
          v21 = *(float *)(v20 + 0xC * v18); /*0x75cb57*/
          v22 = v20 + 0xC * v18; /*0x75cb5a*/
          v23 = *(float *)(v22 + 4); /*0x75cb5d*/
          v64.pos.y = v21; /*0x75cb60*/
          v24 = v21 - pos.x; /*0x75cb6e*/
          v25 = *(float *)(v22 + 8); /*0x75cb72*/
          v64.pos.z = v23; /*0x75cb75*/
          v64.scale = v25; /*0x75cb7c*/
          v64.rot.data[1][0] = v24; /*0x75cb83*/
          v26 = *((_BYTE *)this + 0x24); /*0x75cb87*/
          v64.rot.data[1][1] = v23 - pos.y; /*0x75cb97*/
          v64.rot.data[1][2] = v25 - pos.z; /*0x75cba6*/
          v61 = v64.rot.data[1][1] * v64.rot.data[1][1] /*0x75cbc6*/
              + v64.rot.data[1][0] * v64.rot.data[1][0]
              + v64.rot.data[1][2] * v64.rot.data[1][2];
          if ( !v26 || *((float *)this + 0xB) >= (double)v61 ) /*0x75cbda*/
          {
            v6 = *((_BYTE *)this + 0x62) == 0; /*0x75cbe0*/
            v57 = v53; /*0x75cbf0*/
            v58 = v56; /*0x75cbf8*/
            if ( v6 ) /*0x75cbfc*/
              goto LABEL_26; /*0x75cbfc*/
            v57 = *(_QWORD *)&v64.rot.data[1][0]; /*0x75cc16*/
            v58 = v64.rot.data[1][2]; /*0x75cc1a*/
            Vector3_NormalizeInPlace((float *)&v57); /*0x75cc1e*/
            v37 = v60 * v58 + *((float *)&v59 + 1) * *((float *)&v57 + 1) + *(float *)&v57 * *(float *)&v59; /*0x75cc4d*/
            if ( v64.pos.x <= (double)v37 ) /*0x75cc60*/
            {
              *(float *)&v57 = *(float *)&v57 * v68; /*0x75cc73*/
              *((float *)&v57 + 1) = *((float *)&v57 + 1) * v68; /*0x75cc7d*/
              v58 = v58 * v68; /*0x75cc83*/
LABEL_26:
              v44 = *v19; /*0x75cc87*/
              v47 = v19[1]; /*0x75cc9b*/
              v50 = v19[2]; /*0x75cca1*/
              v27 = *(float *)&v57; /*0x75cca7*/
              v65 = *v19 - *(float *)&v57; /*0x75cca9*/
              v28 = *((float *)&v57 + 1); /*0x75ccbc*/
              v66 = v47 - *((float *)&v57 + 1); /*0x75ccbe*/
              v29 = v58; /*0x75ccd1*/
              v67 = v50 - v58; /*0x75ccd3*/
              v38 = v66 * *((float *)&v57 + 1) + v65 * *(float *)&v57 + v67 * v58; /*0x75ccf9*/
              if ( v38 < 0.0 ) /*0x75cd0c*/
              {
                v39 = v62; /*0x75cd18*/
                if ( v26 ) /*0x75cd1c*/
                {
                  if ( 0.0 != *((float *)this + 8) ) /*0x75cd2a*/
                  {
                    v40 = sqrt(v61); /*0x75cd3b*/
                    v41 = 1.0 - v40 / *((float *)this + 0xA); /*0x75cd4a*/
                    v42 = pow(v41, *((float *)this + 8)); /*0x75cd5a*/
                    v39 = v42 * v62; /*0x75cd66*/
                    v27 = *(float *)&v57; /*0x75cd6a*/
                    v29 = v58; /*0x75cd76*/
                    v28 = *((float *)&v57 + 1); /*0x75cd76*/
                  }
                }
                v61 = *((float *)this + 0x16); /*0x75cd7b*/
                v64.rot.data[2][0] = v27 * v61; /*0x75cd89*/
                v64.rot.data[2][1] = v28 * v61; /*0x75cd93*/
                v64.rot.data[2][2] = v61 * v29; /*0x75cd99*/
                v64.rot.data[0][0] = v64.rot.data[2][0] * v39; /*0x75cdab*/
                v64.rot.data[0][1] = v64.rot.data[2][1] * v39; /*0x75cdb5*/
                v64.rot.data[0][2] = v39 * v64.rot.data[2][2]; /*0x75cdbd*/
                v45 = v64.rot.data[0][0] + v44; /*0x75cdc9*/
                v30 = v64.rot.data[0][1]; /*0x75cdd1*/
                *v19 = v45; /*0x75cdd5*/
                v48 = v30 + v47; /*0x75cddb*/
                v31 = v64.rot.data[0][2]; /*0x75cde3*/
                v19[1] = v48; /*0x75cde7*/
                v51 = v31 + v50; /*0x75cdee*/
                v19[2] = v51; /*0x75cdf6*/
              }
            }
          }
          v3 = a3; /*0x75ce0e*/
          goto LABEL_33; /*0x75ce0e*/
        }
      }
    }
  }
}
