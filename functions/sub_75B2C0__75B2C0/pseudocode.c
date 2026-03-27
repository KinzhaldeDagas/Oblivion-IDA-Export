int __thiscall sub_75B2C0(float *this, float a2, int a3)
{
  float v3; // edx
  int v5; // ecx
  int v6; // edi
  bool v7; // zf
  float v8; // eax
  float v9; // ecx
  float v10; // edx
  int v11; // eax
  NiTransform *v12; // eax
  float v13; // ecx
  float v14; // edx
  float v15; // eax
  int result; // eax
  float *v17; // ebp
  float *v18; // eax
  int v19; // esi
  double v20; // st7
  int v21; // eax
  int v22; // eax
  float x; // eax
  float y; // ecx
  float z; // edx
  float v27; // [esp+10h] [ebp-148h]
  float v28; // [esp+10h] [ebp-148h]
  float v29; // [esp+10h] [ebp-148h]
  float v30; // [esp+10h] [ebp-148h]
  float v31; // [esp+10h] [ebp-148h]
  float v32; // [esp+10h] [ebp-148h]
  float v33; // [esp+10h] [ebp-148h]
  float v34; // [esp+10h] [ebp-148h]
  float v35; // [esp+10h] [ebp-148h]
  float v36; // [esp+10h] [ebp-148h]
  float v37; // [esp+10h] [ebp-148h]
  float v38; // [esp+10h] [ebp-148h]
  float v39; // [esp+14h] [ebp-144h]
  float v40; // [esp+18h] [ebp-140h]
  float v41; // [esp+1Ch] [ebp-13Ch]
  float v42; // [esp+20h] [ebp-138h] BYREF
  float v43; // [esp+24h] [ebp-134h]
  float v44; // [esp+28h] [ebp-130h]
  float v45; // [esp+2Ch] [ebp-12Ch]
  float v46; // [esp+30h] [ebp-128h]
  float v47; // [esp+34h] [ebp-124h]
  float v48; // [esp+38h] [ebp-120h]
  float v49; // [esp+3Ch] [ebp-11Ch]
  float v50; // [esp+40h] [ebp-118h]
  float v51; // [esp+44h] [ebp-114h]
  __int64 v52; // [esp+48h] [ebp-110h]
  float v53; // [esp+50h] [ebp-108h]
  int v54; // [esp+54h] [ebp-104h]
  NiTransform v55; // [esp+58h] [ebp-100h] BYREF
  __int64 v56; // [esp+ACh] [ebp-ACh]
  float v57; // [esp+B4h] [ebp-A4h]
  NiTransform v58; // [esp+BCh] [ebp-9Ch] BYREF
  float v59[13]; // [esp+F0h] [ebp-68h] BYREF
  NiTransform v60; // [esp+124h] [ebp-34h] BYREF

  v3 = dword_B3F9B0;
  v5 = *((_DWORD *)&Vector3_InitValue_ + 1);
  v6 = a3;
  v7 = *(_WORD *)(a3 + 0x48) == 0;
  *(float *)&v52 = Vector3_InitValue_;
  v8 = *(this + 7);
  HIDWORD(v52) = v5;
  v9 = *(this + 8);
  v53 = v3;
  v10 = *(this + 9);
  v42 = v8;
  v43 = v9;
  v44 = v10;
  if ( !v7 )
  {
    v11 = *((_DWORD *)this + 6);
    if ( v11 )
    {
      qmemcpy(&v58, (const void *)(v11 + 0x64), sizeof(v58));
      qmemcpy(v59, (const void *)(*((_DWORD *)this + 4) + 0x64), sizeof(v59));
      sub_718A80(v59, &v60);
      sub_53D7A0(&v60, (NiTransform *)&v55.scale, &v58);
      v52 = v56;
      v53 = v57;
      v12 = sub_7101F0((NiTransform *)&v55.scale, &v55, (NiPoint3 *)(this + 7));
      v13 = v12->rot.data[0][0];
      v14 = v12->rot.data[0][1];
      v15 = v12->rot.data[0][2];
      v42 = v13;
      v43 = v14;
      v44 = v15;
      sub_43F350(&v42);
      v6 = a3;
    }
  }
  result = 0;
  v7 = *(_WORD *)(v6 + 0x48) == 0;
  v54 = 0;
  if ( !v7 )
  {
    while ( 1 )
    {
      v17 = (float *)(*(_DWORD *)(v6 + 0x5C) + 0x1C * (unsigned __int16)result);
      v27 = v17[5];
      if ( v27 >= (double)a2 )
        goto LABEL_23;
      v18 = (float *)(*(_DWORD *)(v6 + 0x1C) + 0xC * (unsigned __int16)result);
      v48 = a2 - v27;
      v45 = *v18 - *(float *)&v52;
      v46 = v18[1] - *((float *)&v52 + 1);
      v47 = v18[2] - v53;
      v28 = v46 * v46 + v45 * v45 + v47 * v47;
      v29 = sqrt(v28);
      v19 = *((_DWORD *)this + 0xC);
      v20 = v29;
      if ( v19 )
      {
        if ( *(this + 0xA) < v20 )
          goto LABEL_23;
      }
      v21 = *((_DWORD *)this + 0xD);
      if ( !v21 )
        break;
      v22 = v21 - 1;
      if ( !v22 )
      {
        v32 = v44 * v47 + v43 * v46 + v45 * v42;
        v55.rot.data[2][0] = v42 * v32;
        v55.rot.data[2][1] = v43 * v32;
        v55.rot.data[2][2] = v32 * v44;
        v49 = v45 - v55.rot.data[2][0];
        v39 = v49;
        v50 = v46 - v55.rot.data[2][1];
        v40 = v50;
        v51 = v47 - v55.rot.data[2][2];
        v41 = v51;
        v33 = v50 * v50 + v49 * v49 + v51 * v51;
        v34 = sqrt(v33);
        v20 = v34;
        if ( v34 != 0.0 )
        {
          v35 = 1.0 / v20;
          v39 = v35 * v49;
          v40 = v50 * v35;
          v41 = v35 * v51;
        }
        goto LABEL_18;
      }
      if ( v22 == 1 )
      {
        v30 = v45 * v42 + v43 * v46 + v44 * v47;
        if ( v30 >= 0.0 )
        {
          x = v42;
          y = v43;
          v20 = v30;
          z = v44;
        }
        else
        {
          v31 = -v30;
          v55.pos.x = -v42;
          x = v55.pos.x;
          v55.pos.y = -v43;
          y = v55.pos.y;
          v55.pos.z = -v44;
          z = v55.pos.z;
          v20 = v31;
        }
        goto LABEL_17;
      }
LABEL_18:
      v37 = 1.0;
      if ( v19 == 1 )
      {
        v37 = (*(this + 0xA) - v20) / *(this + 0xA);
      }
      else if ( v19 == 2 )
      {
        v38 = -v20 / *(this + 0xA);
        v37 = exp(v38);
      }
      v48 = *(this + 0xB) * v37 * v48;
      v55.rot.data[0][0] = v48 * v39;
      v55.rot.data[0][1] = v40 * v48;
      v55.rot.data[0][2] = v48 * v41;
      *v17 = *v17 + v55.rot.data[0][0];
      v17[1] = v17[1] + v55.rot.data[0][1];
      v17[2] = v17[2] + v55.rot.data[0][2];
LABEL_23:
      result = v54 + 1;
      if ( (unsigned __int16)++v54 >= *(_WORD *)(v6 + 0x48) )
        return result;
    }
    v36 = 1.0 / v20;
    v55.rot.data[1][0] = v36 * v45;
    x = v55.rot.data[1][0];
    v55.rot.data[1][1] = v46 * v36;
    y = v55.rot.data[1][1];
    v55.rot.data[1][2] = v36 * v47;
    z = v55.rot.data[1][2];
LABEL_17:
    v39 = x;
    v40 = y;
    v41 = z;
    goto LABEL_18;
  }
  return result;
}
