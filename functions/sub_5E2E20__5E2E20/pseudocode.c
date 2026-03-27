int *__thiscall sub_5E2E20(
        TESObjectREFR *this,
        int *arg0,
        int a2,
        int a4,
        float a5,
        TESObjectCELL *a6,
        float a7,
        int a3,
        char a9)
{
  TESObjectCELL *v9; // esi
  char *v11; // eax
  char *v12; // esi
  char *v13; // eax
  char *v14; // edi
  char *v15; // eax
  TESObjectREFRVtbl *v16; // edx
  char *v17; // eax
  float v18; // edi
  float v19; // ebx
  float v20; // ebp
  float *v21; // eax
  double v22; // st7
  int v23; // esi
  int v24; // edx
  float v25; // ecx
  float *v26; // eax
  double v27; // st7
  TESObjectREFRVtbl *vtbl; // edx
  int *v29; // eax
  float *v30; // eax
  double v32; // [esp+10h] [ebp-18h] BYREF
  float v33; // [esp+18h] [ebp-10h]
  float v34; // [esp+1Ch] [ebp-Ch]
  float v35; // [esp+20h] [ebp-8h]
  float v36; // [esp+24h] [ebp-4h]

  v9 = a6;
  if ( !a6 )
    goto LABEL_21;
  if ( !sub_4AF170(a6) )
  {
    if ( !TESObjectCELL_IsInterior(v9) )
    {
      GetTerrainHeight(TES, (float *)&a2, (float *)&a3);
      *(float *)&a3 = *(float *)&a3 + dbl_A46970;
      if ( LOBYTE(a7) || a5 < (double)*(float *)&a3 )
        a5 = *(float *)&a3;
    }
LABEL_21:
    v23 = a2;
    v24 = a4;
    v25 = a5;
    goto LABEL_22;
  }
  v11 = sub_67D820((int)&a2, this, a9, 0);
  v12 = v11;
  if ( !v11 )
    goto LABEL_16;
  v13 = sub_4E7DE0(v11);
  if ( !v13 || !*((_DWORD *)v13 + 1) && !*(_DWORD *)v13 )
  {
    if ( !(_BYTE)a3
      || (v27 = *((float *)sub_4BEF40(v12) + 2), vtbl = this->vtbl, v32 = v27, vtbl->GetPos(this)[2] == v27) )
    {
      v29 = (int *)sub_4BEF40(v12);
      a2 = *v29;
      a4 = v29[1];
      a5 = *((float *)v29 + 2);
    }
    goto LABEL_16;
  }
  v14 = *(char **)v13;
  if ( !*(_DWORD *)v13
    || (_BYTE)a3
    && (v15 = sub_4BEF40(*(char **)v13),
        v16 = this->vtbl,
        v32 = *((float *)v15 + 2),
        *(float *)&a3 = v32 - v16->GetPos(this)[2],
        *(float *)&a3 = fabs(*(float *)&a3),
        *(float *)&a3 >= (double)flt_A6B324) )
  {
LABEL_16:
    v30 = this->vtbl->GetPos(this);
    v23 = *(_DWORD *)v30;
    a2 = *(_DWORD *)v30;
    v24 = *((_DWORD *)v30 + 1);
    a4 = v24;
    v25 = v30[2];
    goto LABEL_22;
  }
  v17 = sub_4BEF40(v14);
  v18 = *(float *)v17;
  v19 = *((float *)v17 + 1);
  v20 = *((float *)v17 + 2);
  v34 = *(float *)v17;
  v35 = v19;
  v36 = v20;
  v21 = (float *)sub_4BEF40(v12);
  *(float *)&v32 = v34 - *v21;
  *((float *)&v32 + 1) = v19 - v21[1];
  v33 = v20 - v21[2];
  a7 = sub_43F350((float *)&v32);
  a3 = GetRandomLargeInteger_(0) % 0x3E8;
  *(float *)&a3 = (double)a3 / dbl_A2FC70 * a7;
  v22 = *(float *)&a3;
  if ( *(float *)&a3 <= (double)a7 )
  {
    v34 = *(float *)&v32 * v22;
    v35 = *((float *)&v32 + 1) * v22;
    v36 = v22 * v33;
    v26 = (float *)sub_4BEF40(v12);
    *(float *)&v32 = *v26 + v34;
    v23 = LODWORD(v32);
    *((float *)&v32 + 1) = v26[1] + v35;
    v24 = HIDWORD(v32);
    v33 = v26[2] + v36;
    v25 = v33;
  }
  else
  {
    v23 = LODWORD(v18);
    v24 = LODWORD(v19);
    v25 = v20;
  }
LABEL_22:
  *arg0 = v23;
  arg0[1] = v24;
  *((float *)arg0 + 2) = v25;
  return arg0;
}
