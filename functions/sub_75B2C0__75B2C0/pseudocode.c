int __thiscall sub_75B2C0(float *this, float a2, int a3)
{
  float z; // edx
  float y; // ecx
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
  float v23; // eax
  float v24; // ecx
  float v25; // edx
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
  NiPoint3 pos; // [esp+48h] [ebp-110h]
  int v53; // [esp+54h] [ebp-104h]
  float v54; // [esp+58h] [ebp-100h] BYREF
  float v55; // [esp+5Ch] [ebp-FCh]
  float v56; // [esp+60h] [ebp-F8h]
  float v57; // [esp+64h] [ebp-F4h]
  float v58; // [esp+68h] [ebp-F0h]
  float v59; // [esp+6Ch] [ebp-ECh]
  float v60; // [esp+70h] [ebp-E8h]
  float v61; // [esp+74h] [ebp-E4h]
  float v62; // [esp+78h] [ebp-E0h]
  float v63; // [esp+7Ch] [ebp-DCh]
  float v64; // [esp+80h] [ebp-D8h]
  float v65; // [esp+84h] [ebp-D4h]
  NiTransform out; // [esp+88h] [ebp-D0h] BYREF
  NiTransform local; // [esp+BCh] [ebp-9Ch] BYREF
  float v68[13]; // [esp+F0h] [ebp-68h] BYREF
  NiTransform parent; // [esp+124h] [ebp-34h] BYREF

  z = g_zeroNiPoint3.z; /*0x75b2cb*/
  y = g_zeroNiPoint3.y; /*0x75b2d5*/
  v6 = a3; /*0x75b2e0*/
  v7 = *(_WORD *)(a3 + 0x48) == 0; /*0x75b2e7*/
  pos.x = g_zeroNiPoint3.x; /*0x75b2ec*/
  v8 = *(this + 7); /*0x75b2f0*/
  pos.y = y; /*0x75b2f3*/
  v9 = *(this + 8); /*0x75b2f7*/
  pos.z = z; /*0x75b2fa*/
  v10 = *(this + 9); /*0x75b2fe*/
  v42 = v8; /*0x75b301*/
  v43 = v9; /*0x75b305*/
  v44 = v10; /*0x75b309*/
  if ( !v7 ) /*0x75b30d*/
  {
    v11 = *((_DWORD *)this + 6); /*0x75b313*/
    if ( v11 ) /*0x75b318*/
    {
      qmemcpy(&local, (const void *)(v11 + 0x64), sizeof(local)); /*0x75b32d*/
      qmemcpy(v68, (const void *)(*((_DWORD *)this + 4) + 0x64), sizeof(v68)); /*0x75b348*/
      sub_718A80(v68, &parent); /*0x75b352*/
      NiTransform_Compose(&parent, &out, &local); /*0x75b36e*/
      pos = out.pos; /*0x75b388*/
      v12 = sub_7101F0(&out, (NiTransform *)&v54, (NiPoint3 *)(this + 7)); /*0x75b3a1*/
      v13 = v12->rot.data[0][0]; /*0x75b3a6*/
      v14 = v12->rot.data[0][1]; /*0x75b3a8*/
      v15 = v12->rot.data[0][2]; /*0x75b3ab*/
      v42 = v13; /*0x75b3ae*/
      v43 = v14; /*0x75b3b6*/
      v44 = v15; /*0x75b3ba*/
      Vector3_NormalizeInPlace(&v42); /*0x75b3be*/
      v6 = a3; /*0x75b3c5*/
    }
  }
  result = 0; /*0x75b3cc*/
  v7 = *(_WORD *)(v6 + 0x48) == 0; /*0x75b3ce*/
  v53 = 0; /*0x75b3d2*/
  if ( !v7 ) /*0x75b3d6*/
  {
    while ( 1 ) /*0x75b3f6*/
    {
      v17 = (float *)(*(_DWORD *)(v6 + 0x5C) + 0x1C * (unsigned __int16)result); /*0x75b3f6*/
      v27 = v17[5]; /*0x75b3fc*/
      if ( v27 >= (double)a2 ) /*0x75b40b*/
        goto LABEL_23; /*0x75b40b*/
      v18 = (float *)(*(_DWORD *)(v6 + 0x1C) + 0xC * (unsigned __int16)result); /*0x75b419*/
      v48 = a2 - v27; /*0x75b41c*/
      v45 = *v18 - pos.x; /*0x75b426*/
      v46 = v18[1] - pos.y; /*0x75b431*/
      v47 = v18[2] - pos.z; /*0x75b43c*/
      v28 = v46 * v46 + v45 * v45 + v47 * v47; /*0x75b45c*/
      v29 = sqrt(v28); /*0x75b469*/
      v19 = *((_DWORD *)this + 0xC); /*0x75b471*/
      v20 = v29; /*0x75b47a*/
      if ( v19 ) /*0x75b47e*/
      {
        if ( *(this + 0xA) < v20 ) /*0x75b48a*/
          goto LABEL_23; /*0x75b48a*/
      }
      v21 = *((_DWORD *)this + 0xD); /*0x75b490*/
      if ( !v21 ) /*0x75b496*/
        break; /*0x75b496*/
      v22 = v21 - 1; /*0x75b49c*/
      if ( !v22 ) /*0x75b49f*/
      {
        v32 = v44 * v47 + v43 * v46 + v45 * v42; /*0x75b56f*/
        v60 = v42 * v32; /*0x75b581*/
        v61 = v43 * v32; /*0x75b58b*/
        v62 = v32 * v44; /*0x75b593*/
        v49 = v45 - v60; /*0x75b59f*/
        v39 = v49; /*0x75b5ab*/
        v50 = v46 - v61; /*0x75b5b3*/
        v40 = v50; /*0x75b5bb*/
        v51 = v47 - v62; /*0x75b5c3*/
        v41 = v51; /*0x75b5cf*/
        v33 = v50 * v50 + v49 * v49 + v51 * v51; /*0x75b5eb*/
        v34 = sqrt(v33); /*0x75b5f8*/
        v20 = v34; /*0x75b60e*/
        if ( v34 != 0.0 ) /*0x75b613*/
        {
          v35 = 1.0 / v20; /*0x75b61b*/
          v39 = v35 * v49; /*0x75b629*/
          v40 = v50 * v35; /*0x75b633*/
          v41 = v35 * v51; /*0x75b63b*/
        }
        goto LABEL_18; /*0x75b63f*/
      }
      if ( v22 == 1 ) /*0x75b4a8*/
      {
        v30 = v45 * v42 + v43 * v46 + v44 * v47; /*0x75b4d8*/
        if ( v30 >= 0.0 ) /*0x75b4eb*/
        {
          v23 = v42; /*0x75b52a*/
          v24 = v43; /*0x75b530*/
          v20 = v30; /*0x75b534*/
          v25 = v44; /*0x75b536*/
        }
        else
        {
          v31 = -v30; /*0x75b4ef*/
          v63 = -v42; /*0x75b4f7*/
          v23 = v63; /*0x75b4fb*/
          v64 = -v43; /*0x75b503*/
          v24 = v64; /*0x75b50a*/
          v65 = -v44; /*0x75b513*/
          v25 = v65; /*0x75b51a*/
          v20 = v31; /*0x75b521*/
        }
        goto LABEL_17; /*0x75b525*/
      }
LABEL_18:
      v37 = 1.0; /*0x75b683*/
      if ( v19 == 1 ) /*0x75b68c*/
      {
        v37 = (*(this + 0xA) - v20) / *(this + 0xA); /*0x75b694*/
      }
      else if ( v19 == 2 ) /*0x75b69d*/
      {
        v38 = -v20 / *(this + 0xA); /*0x75b6a4*/
        v37 = exp(v38); /*0x75b6b1*/
      }
      v48 = *(this + 0xB) * v37 * v48; /*0x75b6cc*/
      v54 = v48 * v39; /*0x75b6da*/
      v55 = v40 * v48; /*0x75b6e4*/
      v56 = v48 * v41; /*0x75b6ec*/
      *v17 = *v17 + v54; /*0x75b6f7*/
      v17[1] = v17[1] + v55; /*0x75b701*/
      v17[2] = v17[2] + v56; /*0x75b70b*/
LABEL_23:
      result = v53 + 1; /*0x75b714*/
      if ( (unsigned __int16)++v53 >= *(_WORD *)(v6 + 0x48) ) /*0x75b71b*/
        return result; /*0x75b723*/
    }
    v36 = 1.0 / v20; /*0x75b647*/
    v57 = v36 * v45; /*0x75b655*/
    v23 = v57; /*0x75b659*/
    v58 = v46 * v36; /*0x75b663*/
    v24 = v58; /*0x75b667*/
    v59 = v36 * v47; /*0x75b66f*/
    v25 = v59; /*0x75b673*/
LABEL_17:
    v39 = v23; /*0x75b677*/
    v40 = v24; /*0x75b67b*/
    v41 = v25; /*0x75b67f*/
    goto LABEL_18; /*0x75b67f*/
  }
  return result; /*0x75b729*/
}
