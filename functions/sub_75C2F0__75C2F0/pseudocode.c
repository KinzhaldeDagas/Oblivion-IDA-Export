void __thiscall sub_75C2F0(int this, float a2, int a3)
{
  bool v4; // zf
  float x; // eax
  float y; // ecx
  float z; // edx
  NiTransform *v8; // eax
  float v9; // ecx
  float v10; // edx
  unsigned __int16 v11; // di
  double v12; // st5
  double v13; // st7
  double v14; // st6
  double v15; // st5
  float *v16; // edx
  double v17; // st4
  float *v18; // eax
  float v19; // [esp+4h] [ebp-11Ch]
  float v20; // [esp+4h] [ebp-11Ch]
  float v21; // [esp+4h] [ebp-11Ch]
  float v22; // [esp+4h] [ebp-11Ch]
  float v23; // [esp+8h] [ebp-118h]
  float v24; // [esp+8h] [ebp-118h]
  float v25; // [esp+Ch] [ebp-114h]
  float v26; // [esp+10h] [ebp-110h]
  float v27; // [esp+14h] [ebp-10Ch]
  float v28; // [esp+18h] [ebp-108h]
  float v29; // [esp+1Ch] [ebp-104h]
  float v30; // [esp+20h] [ebp-100h] BYREF
  float v31; // [esp+24h] [ebp-FCh]
  float v32; // [esp+28h] [ebp-F8h]
  float v33; // [esp+2Ch] [ebp-F4h]
  float v34; // [esp+30h] [ebp-F0h]
  float v35; // [esp+34h] [ebp-ECh]
  float v36; // [esp+38h] [ebp-E8h]
  float v37; // [esp+3Ch] [ebp-E4h]
  float v38; // [esp+40h] [ebp-E0h]
  float v39; // [esp+44h] [ebp-DCh]
  float v40; // [esp+48h] [ebp-D8h]
  float v41; // [esp+4Ch] [ebp-D4h]
  NiTransform out; // [esp+50h] [ebp-D0h] BYREF
  NiTransform local; // [esp+84h] [ebp-9Ch] BYREF
  float v44[13]; // [esp+B8h] [ebp-68h] BYREF
  NiTransform parent; // [esp+ECh] [ebp-34h] BYREF

  if ( 0.0 != *(float *)(this + 0x1C) ) /*0x75c303*/
  {
    qmemcpy(&local, (const void *)(*(_DWORD *)(this + 0x18) + 0x64), sizeof(local)); /*0x75c31d*/
    qmemcpy(v44, (const void *)(*(_DWORD *)(this + 0x10) + 0x64), sizeof(v44)); /*0x75c338*/
    sub_718A80(v44, &parent); /*0x75c342*/
    NiTransform_Compose(&parent, &out, &local); /*0x75c35b*/
    v4 = *(_BYTE *)(this + 0x60) == 0; /*0x75c360*/
    x = out.pos.x; /*0x75c36b*/
    *(float *)(this + 0x3C) = a2; /*0x75c36f*/
    y = out.pos.y; /*0x75c372*/
    z = out.pos.z; /*0x75c379*/
    *(float *)(this + 0x30) = x; /*0x75c380*/
    *(float *)(this + 0x34) = y; /*0x75c383*/
    v36 = x; /*0x75c386*/
    v37 = y; /*0x75c38a*/
    v38 = z; /*0x75c38e*/
    *(float *)(this + 0x38) = z; /*0x75c392*/
    if ( v4 ) /*0x75c395*/
    {
      v9 = *(float *)(this + 0x50); /*0x75c3ba*/
      v10 = *(float *)(this + 0x54); /*0x75c3bd*/
      v23 = *(float *)(this + 0x4C); /*0x75c3c0*/
    }
    else
    {
      v8 = sub_7101F0(&out, (NiTransform *)&v30, (NiPoint3 *)(this + 0x4C)); /*0x75c3a4*/
      v9 = v8->rot.data[0][1]; /*0x75c3ab*/
      v23 = v8->rot.data[0][0]; /*0x75c3ae*/
      v10 = v8->rot.data[0][2]; /*0x75c3b2*/
    }
    v11 = 0; /*0x75c3e2*/
    v12 = *(float *)(this + 0x1C); /*0x75c3e8*/
    if ( *(_WORD *)(a3 + 0x48) ) /*0x75c3e4*/
    {
      v29 = v12 * v10; /*0x75c400*/
      v13 = v29; /*0x75c40a*/
      v28 = v9 * v12; /*0x75c3f8*/
      v14 = v28; /*0x75c40e*/
      v27 = v23 * v12; /*0x75c3ee*/
      v15 = v27; /*0x75c412*/
      do /*0x75c569*/
      {
        v16 = (float *)(*(_DWORD *)(a3 + 0x5C) + 0x1C * v11); /*0x75c42c*/
        v19 = a2 - v16[5]; /*0x75c432*/
        v17 = v19; /*0x75c440*/
        if ( v19 != 0.0 ) /*0x75c445*/
        {
          v18 = (float *)(*(_DWORD *)(a3 + 0x1C) + 0xC * v11); /*0x75c451*/
          v24 = *v18 - v36; /*0x75c46c*/
          v25 = v18[1] - v37; /*0x75c47c*/
          v26 = v18[2] - v38; /*0x75c488*/
          v20 = v25 * v25 + v24 * v24 + v26 * v26; /*0x75c4a8*/
          if ( *(float *)(this + 0x2C) >= (double)v20 ) /*0x75c4ba*/
          {
            v39 = *v16 - v15; /*0x75c4c4*/
            v40 = v16[1] - v14; /*0x75c4cd*/
            v41 = v16[2] - v13; /*0x75c4d6*/
            v21 = v40 * v14 + v39 * v15 + v41 * v13; /*0x75c4f0*/
            if ( v21 < (double)*(float *)&SrcStr ) /*0x75c503*/
            {
              v22 = *(float *)(this + 0x58); /*0x75c508*/
              v33 = v22 * v15; /*0x75c514*/
              v34 = v22 * v14; /*0x75c51c*/
              v35 = v22 * v13; /*0x75c522*/
              v30 = v33 * v17; /*0x75c52c*/
              v31 = v34 * v17; /*0x75c536*/
              v32 = v17 * v35; /*0x75c53e*/
              *v16 = *v16 + v30; /*0x75c548*/
              v16[1] = v16[1] + v31; /*0x75c551*/
              v16[2] = v32 + v16[2]; /*0x75c55b*/
            }
          }
        }
        ++v11; /*0x75c562*/
      }
      while ( v11 < *(_WORD *)(a3 + 0x48) ); /*0x75c569*/
    }
  }
}
