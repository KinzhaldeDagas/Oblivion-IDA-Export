void __thiscall sub_758980(int this, float a2, int a3)
{
  int v4; // eax
  NiTransform *v5; // eax
  float v6; // ecx
  float v7; // edx
  unsigned __int16 v8; // di
  bool v9; // zf
  int v10; // ecx
  float v11; // edx
  float v12; // ecx
  float *v13; // esi
  double v14; // st7
  double v15; // st6
  double v16; // st7
  double v17; // st5
  double v18; // st7
  float v19; // [esp+4h] [ebp-12Ch]
  float v20; // [esp+4h] [ebp-12Ch]
  float v21; // [esp+4h] [ebp-12Ch]
  float v22; // [esp+4h] [ebp-12Ch]
  float v23; // [esp+8h] [ebp-128h]
  float v24; // [esp+8h] [ebp-128h]
  float v25; // [esp+8h] [ebp-128h]
  float v26; // [esp+Ch] [ebp-124h]
  float v27; // [esp+10h] [ebp-120h] BYREF
  float v28; // [esp+14h] [ebp-11Ch]
  float v29; // [esp+18h] [ebp-118h]
  float v30; // [esp+1Ch] [ebp-114h]
  NiTransform v31; // [esp+20h] [ebp-110h] BYREF
  float v32; // [esp+54h] [ebp-DCh]
  float v33; // [esp+58h] [ebp-D8h]
  float v34; // [esp+5Ch] [ebp-D4h]
  NiTransform out; // [esp+60h] [ebp-D0h] BYREF
  NiTransform local; // [esp+94h] [ebp-9Ch] BYREF
  float v37[13]; // [esp+C8h] [ebp-68h] BYREF
  NiTransform parent; // [esp+FCh] [ebp-34h] BYREF

  if ( *(float *)(this + 0x28) > 0.0 ) /*0x758993*/
  {
    if ( *(_WORD *)(a3 + 0x48) ) /*0x7589a1*/
    {
      v4 = *(_DWORD *)(this + 0x18); /*0x7589ac*/
      if ( v4 ) /*0x7589b1*/
      {
        qmemcpy(&local, (const void *)(v4 + 0x64), sizeof(local)); /*0x7589c8*/
        qmemcpy(v37, (const void *)(*(_DWORD *)(this + 0x10) + 0x64), sizeof(v37)); /*0x7589e3*/
        sub_718A80(v37, &parent); /*0x7589ed*/
        NiTransform_Compose(&parent, &out, &local); /*0x758a06*/
        *(NiPoint3 *)&v31.rot.data[1][0] = out.pos; /*0x758a20*/
        v5 = sub_7101F0(&out, &v31, (NiPoint3 *)(this + 0x1C)); /*0x758a39*/
        v6 = v5->rot.data[0][1]; /*0x758a40*/
        v27 = v5->rot.data[0][0]; /*0x758a43*/
        v7 = v5->rot.data[0][2]; /*0x758a47*/
        v28 = v6; /*0x758a4a*/
        v29 = v7; /*0x758a52*/
        Vector3_NormalizeInPlace(&v27); /*0x758a56*/
        v8 = 0; /*0x758a61*/
        v9 = *(_WORD *)(a3 + 0x48) == 0; /*0x758a63*/
        v30 = v28 * v28 + v27 * v27 + v29 * v29; /*0x758a7f*/
        v34 = *(float *)(this + 0x30) - *(float *)(this + 0x2C); /*0x758a89*/
        if ( !v9 ) /*0x758a8d*/
        {
          do /*0x758a9c*/
          {
            v10 = *(_DWORD *)(a3 + 0x1C) + 0xC * v8; /*0x758a9c*/
            v31.rot.data[2][0] = *(float *)v10; /*0x758aa1*/
            v11 = *(float *)(v10 + 4); /*0x758aa5*/
            v12 = *(float *)(v10 + 8); /*0x758aac*/
            *(_QWORD *)&v31.rot.data[2][1] = __PAIR64__(LODWORD(v12), LODWORD(v11)); /*0x758ab3*/
            v31.scale = v31.rot.data[2][0] - v31.rot.data[1][0]; /*0x758ac2*/
            v13 = (float *)(*(_DWORD *)(a3 + 0x5C) + 0x1C * v8); /*0x758ad3*/
            v32 = v11 - v31.rot.data[1][1]; /*0x758ad6*/
            v33 = v12 - v31.rot.data[1][2]; /*0x758ae2*/
            v19 = v32 * v32 + v31.scale * v31.scale + v33 * v33; /*0x758b02*/
            v20 = sqrt(v19); /*0x758b0f*/
            v26 = *(float *)(this + 0x28); /*0x758b1e*/
            v23 = (a2 - v13[5]) / dbl_A87738; /*0x758b32*/
            v14 = v20; /*0x758b36*/
            if ( *(float *)(this + 0x2C) >= (double)v20 ) /*0x758b44*/
              goto LABEL_8; /*0x758b44*/
            if ( *(float *)(this + 0x30) > v14 ) /*0x758b50*/
            {
              v21 = v14 - *(float *)(this + 0x2C); /*0x758b59*/
              v26 = (1.0 - v21 / v34) * v26; /*0x758b6d*/
LABEL_8:
              v15 = v27; /*0x758b75*/
              v16 = v28; /*0x758b8a*/
              v17 = v29; /*0x758b99*/
              v22 = v13[2] * v29 + v13[1] * v28 + *v13 * v27; /*0x758b9d*/
              if ( v23 * v26 <= dbl_A2F928 ) /*0x758bbc*/
              {
                v25 = v23 * -v26 * (v22 / v30); /*0x758c1a*/
                v31.rot.data[0][0] = v15 * v25; /*0x758c28*/
                v31.rot.data[0][1] = v16 * v25; /*0x758c32*/
                v31.rot.data[0][2] = v17 * v25; /*0x758c38*/
                *v13 = v31.rot.data[0][0] + *v13; /*0x758c42*/
                v13[1] = v13[1] + v31.rot.data[0][1]; /*0x758c4b*/
                v18 = v13[2] + v31.rot.data[0][2]; /*0x758c51*/
              }
              else
              {
                v24 = -v22 / v30; /*0x758bcc*/
                v31.pos.x = v15 * v24; /*0x758bda*/
                v31.pos.y = v16 * v24; /*0x758be4*/
                v31.pos.z = v17 * v24; /*0x758bea*/
                *v13 = v31.pos.x + *v13; /*0x758bf4*/
                v13[1] = v13[1] + v31.pos.y; /*0x758bfd*/
                v18 = v13[2] + v31.pos.z; /*0x758c03*/
              }
              v13[2] = v18; /*0x758c07*/
            }
            ++v8; /*0x758c5c*/
          }
          while ( v8 < *(_WORD *)(a3 + 0x48) ); /*0x758a9c*/
        }
      }
    }
  }
}
