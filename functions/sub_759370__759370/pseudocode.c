void __thiscall sub_759370(int this, float a2, int a3)
{
  int v4; // ecx
  bool v5; // zf
  NiTransform *v6; // eax
  float v7; // ecx
  float v8; // edx
  float v9; // eax
  unsigned __int16 i; // di
  int v11; // esi
  int v12; // eax
  float v13; // edx
  int v14; // eax
  float v15; // ecx
  double v16; // st7
  float v17; // edx
  float v18; // eax
  float v19; // edx
  double v20; // st7
  float v21; // [esp+10h] [ebp-124h]
  float v22; // [esp+10h] [ebp-124h]
  float v23; // [esp+10h] [ebp-124h]
  float v24; // [esp+14h] [ebp-120h]
  float v25; // [esp+18h] [ebp-11Ch]
  float v26; // [esp+1Ch] [ebp-118h] BYREF
  float v27; // [esp+20h] [ebp-114h]
  float v28; // [esp+24h] [ebp-110h]
  float v29; // [esp+28h] [ebp-10Ch] BYREF
  float v30; // [esp+2Ch] [ebp-108h]
  float v31; // [esp+30h] [ebp-104h]
  float v32; // [esp+34h] [ebp-100h] BYREF
  float v33; // [esp+38h] [ebp-FCh]
  float v34; // [esp+3Ch] [ebp-F8h]
  NiPoint3 pos; // [esp+40h] [ebp-F4h]
  float v36; // [esp+4Ch] [ebp-E8h]
  float v37; // [esp+50h] [ebp-E4h]
  float v38; // [esp+54h] [ebp-E0h]
  float v39; // [esp+58h] [ebp-DCh]
  float v40; // [esp+5Ch] [ebp-D8h]
  float v41; // [esp+60h] [ebp-D4h]
  NiTransform out; // [esp+64h] [ebp-D0h] BYREF
  NiTransform local; // [esp+98h] [ebp-9Ch] BYREF
  float v44[13]; // [esp+CCh] [ebp-68h] BYREF
  NiTransform parent; // [esp+100h] [ebp-34h] BYREF

  if ( 0.0 != *(float *)(this + 0x1C) ) /*0x759383*/
  {
    if ( *(_WORD *)(a3 + 0x48) ) /*0x759391*/
    {
      v4 = *(_DWORD *)(this + 0x18); /*0x75939c*/
      if ( v4 ) /*0x7593a1*/
      {
        if ( *(_BYTE *)(this + 0x30) || 0.0 != *(float *)(this + 0x20) ) /*0x7593b5*/
        {
          qmemcpy(&local, (const void *)(v4 + 0x64), sizeof(local)); /*0x7593fe*/
          qmemcpy(v44, (const void *)(*(_DWORD *)(this + 0x10) + 0x64), sizeof(v44)); /*0x759419*/
          sub_718A80(v44, &parent); /*0x759423*/
          NiTransform_Compose(&parent, &out, &local); /*0x75943c*/
          v5 = *(_BYTE *)(this + 0x30) == 0; /*0x759441*/
          pos = out.pos; /*0x75945a*/
          if ( !v5 && NiPoint3__NotEqual((const NiPoint3 *)(this + 0x34), &g_zeroNiPoint3) ) /*0x759472*/
          {
            v6 = sub_7101F0(&out, (NiTransform *)&v32, (NiPoint3 *)(this + 0x34)); /*0x759485*/
            v7 = v6->rot.data[0][0]; /*0x75948a*/
            v8 = v6->rot.data[0][1]; /*0x75948c*/
            v9 = v6->rot.data[0][2]; /*0x75948f*/
            v29 = v7; /*0x759492*/
            v30 = v8; /*0x75949a*/
            v31 = v9; /*0x75949e*/
            Vector3_NormalizeInPlace(&v29); /*0x7594a2*/
          }
          for ( i = 0; i < *(_WORD *)(a3 + 0x48); ++i ) /*0x7594ab*/
          {
            v11 = *(_DWORD *)(a3 + 0x5C) + 0x1C * i; /*0x7594d6*/
            v24 = a2 - *(float *)(v11 + 0x14); /*0x7594dc*/
            if ( 0.0 != v24 ) /*0x7594eb*/
            {
              v12 = *(_DWORD *)(a3 + 0x1C); /*0x7594f1*/
              v13 = *(float *)(v12 + 0xC * i); /*0x7594f7*/
              v14 = v12 + 0xC * i; /*0x7594fa*/
              v15 = *(float *)(v14 + 4); /*0x7594fd*/
              v39 = v13; /*0x759500*/
              v16 = v13 - pos.x; /*0x759508*/
              v17 = *(float *)(v14 + 8); /*0x75950c*/
              v40 = v15; /*0x75950f*/
              v41 = v17; /*0x759513*/
              v36 = v16; /*0x759517*/
              v37 = v15 - pos.y; /*0x759523*/
              v38 = v17 - pos.z; /*0x75952f*/
              v21 = v37 * v37 + v36 * v36 + v38 * v38; /*0x75954f*/
              v22 = sqrt(v21); /*0x75955c*/
              if ( !*(_BYTE *)(this + 0x24) || *(float *)(this + 0x28) >= (double)v22 ) /*0x75957c*/
              {
                v25 = 1.0; /*0x759588*/
                if ( *(_BYTE *)(this + 0x30) ) /*0x759582*/
                {
                  v18 = *(float *)v11; /*0x759591*/
                  v19 = *(float *)(v11 + 8); /*0x759593*/
                  v27 = *(float *)(v11 + 4); /*0x759596*/
                  v26 = v18; /*0x75959e*/
                  v28 = v19; /*0x7595a2*/
                  Vector3_NormalizeInPlace(&v26); /*0x7595a6*/
                  v25 = v27 * v30 + v29 * v26 + v28 * v31; /*0x7595c9*/
                }
                v23 = v24 * *(float *)(this + 0x1C) * v25 / (*(float *)(this + 0x20) * v22 + dbl_A2F928); /*0x7595e7*/
                v20 = v23; /*0x7595f5*/
                if ( v23 >= 1.0 ) /*0x7595fa*/
                {
                  *(float *)v11 = g_zeroNiPoint3.x; /*0x759639*/
                  *(float *)(v11 + 4) = g_zeroNiPoint3.y; /*0x759641*/
                  *(float *)(v11 + 8) = g_zeroNiPoint3.z; /*0x75964a*/
                }
                else
                {
                  v32 = *(float *)v11 * v20; /*0x759600*/
                  v33 = *(float *)(v11 + 4) * v20; /*0x759609*/
                  v34 = v20 * *(float *)(v11 + 8); /*0x759610*/
                  *(float *)v11 = *(float *)v11 - v32; /*0x75961a*/
                  *(float *)(v11 + 4) = *(float *)(v11 + 4) - v33; /*0x759623*/
                  *(float *)(v11 + 8) = *(float *)(v11 + 8) - v34; /*0x75962d*/
                }
              }
            }
          }
        }
        else if ( *(_BYTE *)(this + 0x24) ) /*0x7593b7*/
        {
          sub_759120((float *)this, a2, a3); /*0x7593cb*/
        }
        else
        {
          sub_759030((float *)this, a2, a3); /*0x7593db*/
        }
      }
    }
  }
}
