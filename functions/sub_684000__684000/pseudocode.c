void __thiscall sub_684000(int *this, Actor *a2)
{
  int *v2; // edi
  NiDX92DBufferData *v3; // eax
  char *v4; // ebx
  NiDX92DBufferData *SurfaceData; // eax
  char *v6; // ebp
  NiSurfaceData *v7; // esi
  float *v8; // eax
  float *v9; // edi
  float *v10; // eax
  float *v11; // edi
  float *v12; // eax
  float *v13; // edi
  float *v14; // eax
  double v15; // st7
  NiSurfaceData *v16; // eax
  float *v17; // eax
  float *v18; // edi
  float *v19; // eax
  double v20; // st7
  double v21; // st7
  float *v22; // edi
  float *v23; // eax
  double v24; // st7
  float v25; // [esp+4h] [ebp-68h]
  float v26; // [esp+4h] [ebp-68h]
  float v27; // [esp+4h] [ebp-68h]
  float v28; // [esp+4h] [ebp-68h]
  bool v29; // [esp+1Eh] [ebp-4Eh]
  bool v30; // [esp+1Fh] [ebp-4Dh]
  float v31; // [esp+20h] [ebp-4Ch]
  int v32; // [esp+24h] [ebp-48h] BYREF
  int *v33; // [esp+28h] [ebp-44h]
  float v34; // [esp+2Ch] [ebp-40h]
  float v35; // [esp+30h] [ebp-3Ch] BYREF
  float v36; // [esp+34h] [ebp-38h]
  float v37; // [esp+38h] [ebp-34h]
  float v38; // [esp+3Ch] [ebp-30h] BYREF
  float v39; // [esp+40h] [ebp-2Ch]
  float v40; // [esp+44h] [ebp-28h]
  float v41; // [esp+48h] [ebp-24h]
  float v42; // [esp+4Ch] [ebp-20h]
  float v43; // [esp+50h] [ebp-1Ch]
  float v44; // [esp+54h] [ebp-18h]
  float v45; // [esp+58h] [ebp-14h]
  float v46; // [esp+5Ch] [ebp-10h]
  float v47[3]; // [esp+60h] [ebp-Ch] BYREF
  char v48; // [esp+70h] [ebp+4h]

  v2 = this;
  v33 = this;
  if ( !a2 )
    return;
  v29 = sub_5E3400(a2);
  v30 = !sub_5E1E90(a2);
  v3 = (NiDX92DBufferData *)sub_42B410((BSExtraData *)(v2 + 5));
  v4 = (char *)v3;
  if ( v3 )
  {
    SurfaceData = (NiDX92DBufferData *)NiDX92DBufferData::GetSurfaceData(v3);
    v6 = (char *)SurfaceData;
    if ( SurfaceData )
    {
      v7 = NiDX92DBufferData::GetSurfaceData(SurfaceData);
      goto LABEL_7;
    }
  }
  else
  {
    v6 = 0;
  }
  v7 = 0;
LABEL_7:
  v48 = 0;
  if ( v4 )
  {
    do
    {
      if ( !v6 || !v7 )
        break;
      if ( !v29 && sub_68CA80(v7) || !v30 && sub_68CAB0(v7) )
        goto LABEL_33;
      if ( !TES->currentInteriorCell )
      {
        v8 = (float *)sub_6899C0(v6);
        if ( !sub_43F840(TES, v8) )
          break;
      }
      v9 = (float *)sub_6899C0(v4);
      v10 = (float *)sub_6899C0(v6);
      v47[0] = *v10 - *v9;
      v47[1] = v10[1] - v9[1];
      v47[2] = v10[2] - v9[2];
      v31 = sub_683CB0(v47);
      v11 = (float *)sub_6899C0(v6);
      v12 = (float *)sub_6899C0((char *)v7);
      v35 = *v12 - *v11;
      v36 = v12[1] - v11[1];
      v37 = v12[2] - v11[2];
      v25 = sub_683CB0(&v35);
      v34 = fabs(sub_683AD0(v31, v25, (float *)&v32));
      v13 = (float *)sub_6899C0(v4);
      v14 = (float *)sub_6899C0((char *)v7);
      v38 = *v14 - *v13;
      v39 = v14[1] - v13[1];
      v40 = v14[2] - v13[2];
      v26 = sub_683CB0(&v38);
      *(float *)&v32 = fabs(sub_683AD0(v31, v26, (float *)&v32));
      v15 = flt_A6E734;
      if ( v15 > *(float *)&v32 )
      {
        while ( v15 > v34 && !v48 && !sub_68CA50(v6) )
        {
          sub_68BE80(v33 + 5, v6, v4);
          v6 = (char *)v7;
          v16 = NiDX92DBufferData::GetSurfaceData((NiDX92DBufferData *)v7);
          v7 = v16;
          if ( !v16 )
            goto LABEL_31;
          if ( !v29 && sub_68CA80(v16) || !v30 && sub_68CAB0(v7) )
          {
            v48 = 1;
            break;
          }
          if ( TES->currentInteriorCell || (v17 = (float *)sub_6899C0(v6), sub_43F840(TES, v17)) )
          {
            v18 = (float *)sub_6899C0(v6);
            v19 = (float *)sub_6899C0((char *)v7);
            v41 = *v19 - *v18;
            v20 = v19[1];
            v35 = v41;
            v42 = v20 - v18[1];
            v21 = v19[2];
            v36 = v42;
            v43 = v21 - v18[2];
            v37 = v43;
            v27 = sub_683CB0(&v35);
            v34 = fabs(sub_683AD0(v31, v27, (float *)&v32));
            v22 = (float *)sub_6899C0(v4);
            v23 = (float *)sub_6899C0((char *)v7);
            v44 = *v23 - *v22;
            v45 = v23[1] - v22[1];
            v24 = v23[2] - v22[2];
            v38 = v44;
            v39 = v45;
            v46 = v24;
            v40 = v46;
            v28 = sub_683CB0(&v38);
            *(float *)&v32 = fabs(sub_683AD0(v31, v28, (float *)&v32));
            v15 = flt_A6E734;
            if ( v15 > *(float *)&v32 )
              continue;
          }
          break;
        }
      }
      if ( v7 )
      {
        if ( !v48 )
        {
          v4 = v6;
          v6 = (char *)v7;
          v7 = NiDX92DBufferData::GetSurfaceData((NiDX92DBufferData *)v7);
        }
      }
LABEL_31:
      v2 = v33;
    }
    while ( v4 );
    if ( !v48 )
      return;
LABEL_33:
    if ( v7 )
    {
      sub_68C0F0(v2 + 5, v7);
      *((_BYTE *)v2 + 0x2C) |= 0x80u;
    }
  }
}
