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
  float y; // eax
  float z; // ecx
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
  float v54; // [esp+28h] [ebp-148h]
  float v55; // [esp+2Ch] [ebp-144h]
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
  NiTransform v69; // [esp+A0h] [ebp-D0h] BYREF
  NiTransform v70; // [esp+D4h] [ebp-9Ch] BYREF
  float v71[13]; // [esp+108h] [ebp-68h] BYREF
  NiTransform v72; // [esp+13Ch] [ebp-34h] BYREF

  v3 = a3;
  if ( *(_WORD *)(a3 + 0x48) )
  {
    v5 = *(this + 6);
    if ( v5 )
    {
      if ( 0.0 == *((float *)this + 8) && 0.0 == *((float *)this + 0x17) && !*((_BYTE *)this + 0x62) )
      {
        if ( *((_BYTE *)this + 0x24) )
          sub_75C2F0((int)this, a2, a3);
        else
          sub_75C590((int)this, a2, a3);
        return;
      }
      qmemcpy(&v70, (const void *)(v5 + 0x64), sizeof(v70));
      qmemcpy(v71, (const void *)(*(this + 4) + 0x64), sizeof(v71));
      sub_718A80(v71, &v72);
      sub_53D7A0(&v72, &v69, &v70);
      v6 = *((_BYTE *)this + 0x60) == 0;
      x = v69.pos.x;
      pos = v69.pos;
      if ( v6 )
      {
        v9 = *((float *)this + 0x13);
        v10 = *((float *)this + 0x14);
        v11 = *((float *)this + 0x15);
      }
      else
      {
        v8 = sub_7101F0(&v69, &v64, (NiPoint3 *)(this + 0x13));
        v9 = v8->rot.data[0][0];
        v10 = v8->rot.data[0][1];
        v11 = v8->rot.data[0][2];
      }
      v43 = v9;
      v49 = v11;
      v46 = v10;
      v52 = Vector3_InitValue_;
      v12 = (float *)(this + 0xC);
      v54 = *(&Vector3_InitValue_ + 1);
      v55 = dword_B3F9B0;
      v13 = a2;
      if ( sub_8AA390((float *)this + 0xC, (float *)&dword_B28B54) )
      {
        if ( *((float *)this + 0xF) != dbl_A3A5B0 && v13 != *((float *)this + 0xF) )
        {
          *(float *)&v59 = pos.x - *v12;
          *((float *)&v59 + 1) = pos.y - *((float *)this + 0xD);
          v60 = pos.z - *((float *)this + 0xE);
          v14 = *((float *)this + 0x17);
          v64.rot.data[0][0] = *(float *)&v59 * v14;
          v64.rot.data[0][1] = *((float *)&v59 + 1) * v14;
          v64.rot.data[0][2] = v14 * v60;
          v32 = v13 - *((float *)this + 0xF);
          v15 = sub_4BF9B0((float *)&v64, v64.rot.data[2], v32);
          v13 = a2;
          v52 = *v15;
          v54 = v15[1];
          v55 = v15[2];
        }
      }
      *((float *)this + 0xF) = v13;
      y = pos.y;
      z = pos.z;
      v33 = *((float *)this + 7);
      *v12 = x;
      *((float *)this + 0xD) = y;
      *((float *)this + 0xE) = z;
      *(float *)&v59 = v43 * v33;
      *((float *)&v59 + 1) = v46 * v33;
      v60 = v33 * v49;
      *(float *)&v53 = *(float *)&v59 + v52;
      *((float *)&v53 + 1) = v54 + *((float *)&v59 + 1);
      v56 = v55 + v60;
      v34 = v56 * v56 + *(float *)&v53 * *(float *)&v53 + *((float *)&v53 + 1) * *((float *)&v53 + 1);
      if ( v34 != *(float *)&SrcStr )
      {
        v60 = v56;
        v59 = v53;
        v68 = sub_43F350((float *)&v59);
        if ( *((_BYTE *)this + 0x62) )
        {
          v35 = *((float *)this + 0x19) * flt_B3F99C;
          v36 = cos(v35);
          v64.pos.x = v36;
        }
        v18 = 0;
        if ( *(_WORD *)(a3 + 0x48) )
        {
          while ( 1 )
          {
            v19 = (float *)(*(_DWORD *)(v3 + 0x5C) + 0x1C * v18);
            v62 = a2 - v19[5];
            if ( 0.0 != v62 )
              break;
LABEL_33:
            if ( ++v18 >= *(_WORD *)(v3 + 0x48) )
              return;
          }
          v20 = *(_DWORD *)(v3 + 0x1C);
          v21 = *(float *)(v20 + 0xC * v18);
          v22 = v20 + 0xC * v18;
          v23 = *(float *)(v22 + 4);
          v64.pos.y = v21;
          v24 = v21 - pos.x;
          v25 = *(float *)(v22 + 8);
          v64.pos.z = v23;
          v64.scale = v25;
          v64.rot.data[1][0] = v24;
          v26 = *((_BYTE *)this + 0x24);
          v64.rot.data[1][1] = v23 - pos.y;
          v64.rot.data[1][2] = v25 - pos.z;
          v61 = v64.rot.data[1][1] * v64.rot.data[1][1]
              + v64.rot.data[1][0] * v64.rot.data[1][0]
              + v64.rot.data[1][2] * v64.rot.data[1][2];
          if ( !v26 || *((float *)this + 0xB) >= (double)v61 )
          {
            v6 = *((_BYTE *)this + 0x62) == 0;
            v57 = v53;
            v58 = v56;
            if ( v6 )
              goto LABEL_26;
            v57 = *(_QWORD *)&v64.rot.data[1][0];
            v58 = v64.rot.data[1][2];
            sub_43F350((float *)&v57);
            v37 = v60 * v58 + *((float *)&v59 + 1) * *((float *)&v57 + 1) + *(float *)&v57 * *(float *)&v59;
            if ( v64.pos.x <= (double)v37 )
            {
              *(float *)&v57 = *(float *)&v57 * v68;
              *((float *)&v57 + 1) = *((float *)&v57 + 1) * v68;
              v58 = v58 * v68;
LABEL_26:
              v44 = *v19;
              v47 = v19[1];
              v50 = v19[2];
              v27 = *(float *)&v57;
              v65 = *v19 - *(float *)&v57;
              v28 = *((float *)&v57 + 1);
              v66 = v47 - *((float *)&v57 + 1);
              v29 = v58;
              v67 = v50 - v58;
              v38 = v66 * *((float *)&v57 + 1) + v65 * *(float *)&v57 + v67 * v58;
              if ( v38 < 0.0 )
              {
                v39 = v62;
                if ( v26 )
                {
                  if ( 0.0 != *((float *)this + 8) )
                  {
                    v40 = sqrt(v61);
                    v41 = 1.0 - v40 / *((float *)this + 0xA);
                    v42 = pow(v41, *((float *)this + 8));
                    v39 = v42 * v62;
                    v27 = *(float *)&v57;
                    v29 = v58;
                    v28 = *((float *)&v57 + 1);
                  }
                }
                v61 = *((float *)this + 0x16);
                v64.rot.data[2][0] = v27 * v61;
                v64.rot.data[2][1] = v28 * v61;
                v64.rot.data[2][2] = v61 * v29;
                v64.rot.data[0][0] = v64.rot.data[2][0] * v39;
                v64.rot.data[0][1] = v64.rot.data[2][1] * v39;
                v64.rot.data[0][2] = v39 * v64.rot.data[2][2];
                v45 = v64.rot.data[0][0] + v44;
                v30 = v64.rot.data[0][1];
                *v19 = v45;
                v48 = v30 + v47;
                v31 = v64.rot.data[0][2];
                v19[1] = v48;
                v51 = v31 + v50;
                v19[2] = v51;
              }
            }
          }
          v3 = a3;
          goto LABEL_33;
        }
      }
    }
  }
}
