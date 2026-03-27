double __usercall TESObjectREFR_GetDistanceBetween_@<st0>(
        int *a1@<edi>,
        TESObjectREFR *a2,
        TESObjectREFR *a3,
        char a4,
        char a5)
{
  double result; // st7
  bool v7; // bl
  float *v8; // eax
  float v9; // edx
  float v10; // ecx
  float v11; // eax
  TESObjectREFRVtbl *vtbl; // edx
  float *v13; // eax
  int v14; // edx
  int v15; // ecx
  float v16; // edx
  float v17; // ecx
  float v18; // edx
  int v19; // eax
  int v20; // eax
  void (__thiscall *Unk_57)(UInt32); // edx
  int v22; // eax
  void (__thiscall *Unk_56)(TESObjectREFR *); // edx
  int v24; // eax
  double v25; // st7
  double v26; // st5
  bool v27; // c0
  bool v28; // c3
  double v29; // st7
  double v30; // st7
  TESObjectREFRVtbl *v31; // eax
  double v32; // st7
  void (__thiscall *v33)(UInt32); // edx
  double v34; // st7
  TESObjectREFRVtbl *v35; // eax
  float (__thiscall *GetScale)(TESObjectREFR *); // edx
  double v37; // st7
  int v38; // eax
  double v39; // [esp+18h] [ebp-48h] BYREF
  double v40; // [esp+24h] [ebp-3Ch]
  int v41; // [esp+2Ch] [ebp-34h]
  double v42; // [esp+30h] [ebp-30h] BYREF
  float v43; // [esp+38h] [ebp-28h]
  float v44; // [esp+3Ch] [ebp-24h]
  float v45; // [esp+40h] [ebp-20h]
  float v46; // [esp+44h] [ebp-1Ch]
  float v47; // [esp+48h] [ebp-18h] BYREF
  float v48; // [esp+4Ch] [ebp-14h]
  float v49; // [esp+50h] [ebp-10h]
  float v50; // [esp+54h] [ebp-Ch]
  float v51[2]; // [esp+58h] [ebp-8h] BYREF
  float Distance; // [esp+68h] [ebp+8h]

  if ( !a3 )
    return 0.0;
  Distance = TesObjectREF_GetDistance(a2, a3, 0);
  result = Distance;
  if ( Distance != dbl_A3A5B0 )
  {
    if ( !((unsigned __int8 (__thiscall *)(TESObjectREFR *, int *))a2->vtbl->IsActor)(a2, a1) )
      goto LABEL_19;
    if ( !a3->vtbl->IsActor(a3) )
      goto LABEL_19;
    v7 = Actor_IsSwimming(a2) && Actor_IsSwimming(a3);
    v8 = a2->vtbl->GetPos(a2);
    v9 = v8[1];
    v10 = *v8;
    v11 = v8[2];
    v46 = v9;
    vtbl = a3->vtbl;
    v45 = v10;
    v47 = v11;
    v13 = vtbl->GetPos(a3);
    v14 = *((_DWORD *)v13 + 1);
    *((float *)&v40 + 1) = *v13;
    v15 = *((_DWORD *)v13 + 2);
    v41 = v14;
    v16 = *v13;
    LODWORD(v42) = v15;
    v17 = v13[1];
    v48 = v16;
    v18 = v13[2];
    v49 = v17;
    v50 = v18;
    if ( !v7 )
    {
      if ( !a5 )
        goto LABEL_19;
      *(float *)&v39 = v47 - v50;
      *(float *)&v39 = fabs(*(float *)&v39);
      if ( *(float *)GameSetting_GetSafeFloatPointer((int *)&fAICombatSlopeDifference) > (double)*(float *)&v39 )
        goto LABEL_19;
    }
    v19 = ((int (__thiscall *)(TESObjectREFR *, char *))a2->vtbl->Unk_57)(a2, (char *)&v42 + 4);
    *(float *)&v39 = *(float *)(v19 + 8) + v47;
    v20 = ((int (__thiscall *)(TESObjectREFR *, char *))a2->vtbl->Unk_56)(a2, (char *)&v42 + 4);
    Unk_57 = a3->vtbl->Unk_57;
    *((float *)&v42 + 1) = *(float *)(v20 + 8) + v47;
    v22 = ((int (__thiscall *)(TESObjectREFR *, char *))Unk_57)(a3, (char *)&v39 + 4);
    Unk_56 = a3->vtbl->Unk_56;
    *((float *)&v39 + 1) = *(float *)(v22 + 8) + *(float *)&v42;
    v24 = ((int (__thiscall *)(TESObjectREFR *, float *))Unk_56)(a3, v51);
    *((float *)&v40 + 1) = *(float *)(v24 + 8) + *(float *)&v42;
    v25 = *(float *)&v39;
    v26 = *((float *)&v40 + 1);
    if ( *((float *)&v39 + 1) < (double)*(float *)&v39 )
    {
      v29 = *((float *)&v40 + 1);
    }
    else
    {
      v27 = v26 < v25;
      v28 = v26 == v25;
      v29 = *((float *)&v40 + 1);
      if ( v27 || v28 )
      {
LABEL_15:
        *((float *)&v42 + 1) = v45 - v48;
        v43 = v46 - v49;
        v44 = 0.0 - 0.0;
        sub_404C90((float *)&v42 + 1);
LABEL_19:
        v30 = *(float *)(((int (__thiscall *)(TESObjectREFR *, float *))a3->vtbl->Unk_57)(a3, v51) + 4);
        v31 = a3->vtbl;
        v42 = v30;
        v32 = ((double (__thiscall *)(TESObjectREFR *))v31->GetScale)(a3);
        v33 = a2->vtbl->Unk_57;
        v40 = v32 * v42;
        v34 = *(float *)(((int (__thiscall *)(TESObjectREFR *, float *))v33)(a2, &v47) + 4);
        v35 = a2->vtbl;
        v42 = v34;
        GetScale = v35->GetScale;
        v39 = Distance;
        v37 = ((double (__thiscall *)(TESObjectREFR *))GetScale)(a2);
        v38 = Double_To_SInt32(v37 * v42 + v40);
        return (float)(v39 - (double)v38);
      }
    }
    if ( *((float *)&v42 + 1) > (double)*((float *)&v39 + 1) || *((float *)&v42 + 1) < v29 )
      goto LABEL_19;
    goto LABEL_15;
  }
  return result;
}
