float *__thiscall sub_721B70(float *this, float *a2)
{
  int v3; // eax
  NiTransform *v4; // esi
  char v5; // al
  float *v6; // ebp
  int v7; // eax
  double v8; // st7
  double v9; // st7
  double v10; // st7
  double v11; // st7
  float *v12; // eax
  double v13; // st7
  float *v15; // eax
  double v16; // st7
  double v17; // st7
  double v18; // st7
  double v19; // st7
  double v20; // st7
  float *v21; // eax
  float *v22; // eax
  float v23; // eax
  float *v24; // eax
  float v25; // [esp+0h] [ebp-144h]
  float v26; // [esp+0h] [ebp-144h]
  NiPoint3 v27; // [esp+14h] [ebp-130h] BYREF
  float v28; // [esp+20h] [ebp-124h]
  NiPoint3 v29; // [esp+24h] [ebp-120h] BYREF
  NiPoint3 v30; // [esp+30h] [ebp-114h] BYREF
  float x; // [esp+3Ch] [ebp-108h] BYREF
  float y; // [esp+40h] [ebp-104h]
  float z; // [esp+44h] [ebp-100h]
  float v34; // [esp+48h] [ebp-FCh]
  float v35[9]; // [esp+4Ch] [ebp-F8h] BYREF
  float v36[3]; // [esp+70h] [ebp-D4h] BYREF
  float v37[3]; // [esp+7Ch] [ebp-C8h] BYREF
  float v38[3]; // [esp+88h] [ebp-BCh] BYREF
  float v39[3]; // [esp+94h] [ebp-B0h] BYREF
  float v40[3]; // [esp+A0h] [ebp-A4h] BYREF
  float v41[3]; // [esp+ACh] [ebp-98h] BYREF
  float v42[3]; // [esp+B8h] [ebp-8Ch] BYREF
  float v43[3]; // [esp+C4h] [ebp-80h] BYREF
  float v44[3]; // [esp+D0h] [ebp-74h] BYREF
  NiTransform parent; // [esp+DCh] [ebp-68h] BYREF
  NiTransform out; // [esp+110h] [ebp-34h] BYREF

  v3 = *((_DWORD *)this + 7); /*0x721b79*/
  if ( v3 ) /*0x721b80*/
    qmemcpy(&parent, (const void *)(v3 + 0x64), sizeof(parent)); /*0x721b91*/
  else
    sub_718A50((float *)&parent); /*0x721b9c*/
  v4 = NiTransform_Compose(&parent, &out, (const NiTransform *)(this + 0xC)); /*0x721bba*/
  v5 = *((_BYTE *)this + 0xDC); /*0x721bbc*/
  v6 = this + 0x19; /*0x721bc3*/
  qmemcpy(this + 0x19, v4, 0x34u); /*0x721bcd*/
  v7 = v5 & 7; /*0x721bcf*/
  qmemcpy(v35, &stru_B26AF0[0xA].unk2C, sizeof(v35)); /*0x721be3*/
  switch ( v7 ) /*0x721beb*/
  {
    case 0: /*0x721beb*/
    case 3: /*0x721beb*/
      if ( v7 == 3 ) /*0x721bf5*/
      {
        if ( sub_7217C0(a2, this + 0x22, &v27, &x, &v30.x) ) /*0x721c17*/
          goto LABEL_9; /*0x721c1e*/
LABEL_23:
        JUMPOUT(0x722292); /*0x722292*/
      }
      v27.x = a2[0x19]; /*0x721c33*/
      v27.y = a2[0x1C]; /*0x721c3a*/
      v27.z = a2[0x1F]; /*0x721c41*/
      x = -v27.x; /*0x721c4b*/
      v27.x = x; /*0x721c57*/
      y = -v27.y; /*0x721c5d*/
      v27.y = y; /*0x721c69*/
      z = -v27.z; /*0x721c6f*/
      v8 = a2[0x1A]; /*0x721c77*/
      v27.z = z; /*0x721c7a*/
      v30.x = v8; /*0x721c7e*/
      v9 = a2[0x1D]; /*0x721c86*/
      x = v30.x; /*0x721c89*/
      v30.y = v9; /*0x721c8d*/
      v10 = a2[0x20]; /*0x721c95*/
      y = v30.y; /*0x721c9b*/
      v30.z = v10; /*0x721c9f*/
      v11 = a2[0x1B]; /*0x721ca7*/
      z = v30.z; /*0x721caa*/
      v29.x = v11; /*0x721cae*/
      v29.y = a2[0x1E]; /*0x721cb5*/
      v29.z = a2[0x21]; /*0x721cc7*/
      v30 = v29; /*0x721ccf*/
LABEL_9:
      v27 = *(NiPoint3 *)NiPoint3_MultiplyMatrix3(v42, &v27.x, this + 0x19); /*0x721cdb*/
      v12 = NiPoint3_MultiplyMatrix3(v37, &x, this + 0x19); /*0x721d10*/
      x = *v12; /*0x721d17*/
      y = v12[1]; /*0x721d1e*/
      z = v12[2]; /*0x721d33*/
      v30 = *(NiPoint3 *)NiPoint3_MultiplyMatrix3(v39, &v30.x, this + 0x19); /*0x721d42*/
      v28 = y * y + v30.y * v30.y; /*0x721d63*/
      v28 = sqrt(v28); /*0x721d70*/
      if ( v28 <= (double)flt_A372CC ) /*0x721d8f*/
      {
        v29.x = -v30.x; /*0x721e3d*/
        v29.y = -v30.y; /*0x721e47*/
        v29.z = -v30.z; /*0x721e51*/
        v35[0] = v29.x; /*0x721e59*/
        v35[3] = v29.y; /*0x721e61*/
        v35[6] = v29.z; /*0x721e69*/
        v29.x = -x; /*0x721e73*/
        v29.y = -y; /*0x721e7d*/
        v29.z = -z; /*0x721e87*/
        v35[1] = v29.x; /*0x721e8f*/
        v35[4] = v29.y; /*0x721e97*/
        v13 = v29.z; /*0x721e9b*/
      }
      else
      {
        v28 = 1.0 / v28; /*0x721d99*/
        v34 = v28 * y; /*0x721dad*/
        v28 = v28 * -v30.y; /*0x721dbd*/
        v35[0] = v30.x * v34 + x * v28; /*0x721ddf*/
        v35[3] = v28 * y + v34 * v30.y; /*0x721ded*/
        v35[6] = z * v28 + v30.z * v34; /*0x721dff*/
        v35[1] = x * v34 - v30.x * v28; /*0x721e11*/
        v35[4] = y * v34 - v30.y * v28; /*0x721e23*/
        v13 = v34 * z - v28 * v30.z; /*0x721e31*/
      }
      v35[7] = v13; /*0x721e9f*/
      v35[2] = v27.x; /*0x721ea7*/
      v35[5] = v27.y; /*0x721eaf*/
      v35[8] = v27.z; /*0x721eb7*/
      return def_721BEB((int)this, v6, (int)a2);
    case 1: /*0x721beb*/
      v29.x = a2[0x22] - *(this + 0x22); /*0x721edf*/
      v29.y = a2[0x23] - *(this + 0x23); /*0x721eef*/
      v29.z = a2[0x24] - *(this + 0x24); /*0x721f03*/
      v25 = *(this + 0x25); /*0x721f0d*/
      v15 = NiPoint3_MultiplyMatrix3(v43, &v29.x, this + 0x19); /*0x721f14*/
      sub_4BF9B0(v15, &v27.x, v25); /*0x721f1e*/
      v34 = v27.z * v27.z + v27.x * v27.x; /*0x721f33*/
      v34 = sqrt(v34); /*0x721f40*/
      v28 = v34; /*0x721f48*/
      if ( v34 < (double)flt_A7F7D8 ) /*0x721f5f*/
        return def_721BEB((int)this, v6, (int)a2); /*0x721f5f*/
      v28 = 1.0 / v34; /*0x721f69*/
      v27.x = v27.x * v28; /*0x721f7b*/
      v27.z = v28 * v27.z; /*0x721f83*/
      v35[0] = v27.z; /*0x721f8b*/
      v35[3] = 0.0; /*0x721f91*/
      v35[6] = -v27.x; /*0x721f9d*/
      v35[1] = 0.0; /*0x721fa3*/
      v35[4] = 1.0; /*0x721fa9*/
      v35[7] = 0.0; /*0x721fad*/
      v35[5] = 0.0; /*0x721fb1*/
      v35[2] = v27.x; /*0x721fb5*/
      v35[8] = v27.z; /*0x721fb9*/
      return def_721BEB((int)this, v6, (int)a2); /*0x721fbd*/
    case 2: /*0x721beb*/
    case 4: /*0x721beb*/
      if ( v7 == 4 ) /*0x721fc5*/
      {
        if ( !sub_7217C0(a2, this + 0x22, &v30, &x, &v27.x) ) /*0x721fee*/
          goto LABEL_23; /*0x721fee*/
      }
      else
      {
        v29.x = a2[0x19]; /*0x722003*/
        v29.y = a2[0x1C]; /*0x72200a*/
        v29.z = a2[0x1F]; /*0x722011*/
        v27.x = -v29.x; /*0x72201b*/
        v30.x = v27.x; /*0x722027*/
        v27.y = -v29.y; /*0x72202d*/
        v30.y = v27.y; /*0x722039*/
        v27.z = -v29.z; /*0x72203f*/
        v16 = a2[0x1A]; /*0x722047*/
        v30.z = v27.z; /*0x72204a*/
        v29.x = v16; /*0x72204e*/
        v17 = a2[0x1D]; /*0x722056*/
        x = v29.x; /*0x722059*/
        v29.y = v17; /*0x72205d*/
        v18 = a2[0x20]; /*0x722065*/
        y = v29.y; /*0x72206b*/
        v29.z = v18; /*0x72206f*/
        v19 = a2[0x1B]; /*0x722077*/
        z = v29.z; /*0x72207a*/
        v29.x = v19; /*0x72207e*/
        v20 = a2[0x1E]; /*0x722086*/
        v27.x = v29.x; /*0x722089*/
        v29.y = v20; /*0x72208d*/
        v29.z = a2[0x21]; /*0x72209b*/
        v27.y = v29.y; /*0x7220a3*/
        v27.z = v29.z; /*0x7220a7*/
      }
      v30 = *(NiPoint3 *)NiPoint3_MultiplyMatrix3(v41, &v30.x, this + 0x19); /*0x7220c0*/
      v21 = NiPoint3_MultiplyMatrix3(v44, &x, this + 0x19); /*0x7220e0*/
      x = *v21; /*0x7220e7*/
      y = v21[1]; /*0x7220ee*/
      z = v21[2]; /*0x722103*/
      v22 = NiPoint3_MultiplyMatrix3(v38, &v27.x, this + 0x19); /*0x722107*/
      v27.x = *v22; /*0x72210e*/
      v27.y = v22[1]; /*0x722119*/
      v23 = v22[2]; /*0x72211d*/
      v35[0] = v27.x; /*0x722120*/
      v27.z = v23; /*0x722128*/
      v35[3] = v27.y; /*0x72212c*/
      v35[6] = v23; /*0x722137*/
      v35[1] = x; /*0x72213f*/
      v35[4] = y; /*0x722147*/
      v35[7] = z; /*0x72214f*/
      v35[2] = v30.x; /*0x722157*/
      v35[5] = v30.y; /*0x72215f*/
      v35[8] = v30.z; /*0x722167*/
      return def_721BEB((int)this, v6, (int)a2); /*0x72216b*/
    case 5: /*0x721beb*/
      *v6 = 1.0; /*0x722179*/
      *(this + 0x1C) = 0.0; /*0x722183*/
      *(this + 0x1F) = 0.0; /*0x72218a*/
      *(this + 0x1A) = 0.0; /*0x72218d*/
      *(this + 0x20) = 0.0; /*0x722190*/
      *(this + 0x1D) = 1.0; /*0x722195*/
      *(this + 0x1B) = 0.0; /*0x72219a*/
      *(this + 0x1E) = 0.0; /*0x72219d*/
      *(this + 0x21) = 1.0; /*0x7221a0*/
      v36[0] = a2[0x22] - *(this + 0x22); /*0x7221af*/
      v36[1] = a2[0x23] - *(this + 0x23); /*0x7221bf*/
      v36[2] = a2[0x24] - *(this + 0x24); /*0x7221d6*/
      v26 = *(this + 0x25); /*0x7221e0*/
      v24 = NiPoint3_MultiplyMatrix3(v40, v36, this + 0x19); /*0x7221e7*/
      sub_4BF9B0(v24, &v27.x, v26); /*0x7221f1*/
      v34 = v27.y * v27.y + v27.x * v27.x; /*0x722206*/
      v34 = sqrt(v34); /*0x722213*/
      v28 = v34; /*0x72221b*/
      if ( v34 < (double)flt_A7F7D8 ) /*0x722232*/
        return def_721BEB((int)this, v6, (int)a2); /*0x722290*/
      v28 = 1.0 / v34; /*0x722238*/
      v27.x = v27.x * v28; /*0x72224a*/
      v27.y = v28 * v27.y; /*0x722252*/
      v35[0] = -v27.y; /*0x72225e*/
      v35[3] = v27.x; /*0x722266*/
      v35[6] = 0.0; /*0x72226c*/
      v35[1] = 0.0; /*0x722270*/
      v35[4] = 0.0; /*0x722274*/
      v35[7] = 1.0; /*0x72227a*/
      v35[2] = v27.x; /*0x722280*/
      v35[5] = v27.y; /*0x722286*/
      v35[8] = 0.0; /*0x72228a*/
      return def_721BEB((int)this, v6, (int)a2); /*0x72228e*/
    default:
      goto LABEL_23;
  }
}
