double __userpurge LowProcess_CalcDamage_@<st0>(int ebx0@<ebx>, HighProcess *a1, Actor *a2)
{
  TESObjectREFR *v3; // esi
  bool (__thiscall *Unk_D2)(TESObjectREFR *); // edx
  double v5; // st7
  void (__thiscall *GetActorValue)(TESObjectREFR *); // edx
  void (__thiscall *v7)(TESObjectREFR *); // edx
  int v8; // eax
  Actor *v9; // edi
  int v10; // ecx
  int v11; // eax
  int v12; // eax
  void **v13; // eax
  double v14; // st7
  _DWORD *v15; // ebx
  int v16; // esi
  int v17; // eax
  int v18; // eax
  int v19; // ecx
  _DWORD *v20; // eax
  int v21; // eax
  int v22; // eax
  int SchoolAV; // eax
  int v24; // ebx
  double v25; // st7
  double v26; // st7
  TESForm *ActorBaseForm; // eax
  int Health; // eax
  ActorVtbl *vtbl; // edx
  double v30; // st7
  _DWORD *v31; // esi
  double result; // st7
  float BaseCalcAVf; // [esp+0h] [ebp-68h]
  float v34; // [esp+4h] [ebp-64h]
  int v35; // [esp+Ch] [ebp-5Ch]
  float v36; // [esp+Ch] [ebp-5Ch]
  float v37; // [esp+10h] [ebp-58h]
  int v38; // [esp+14h] [ebp-54h]
  char v39; // [esp+14h] [ebp-54h]
  float v40; // [esp+14h] [ebp-54h]
  float v41; // [esp+14h] [ebp-54h]
  int v42; // [esp+1Ch] [ebp-4Ch]
  unsigned int v43; // [esp+24h] [ebp-44h]
  float v44; // [esp+30h] [ebp-38h]
  float v45; // [esp+30h] [ebp-38h]
  float v46; // [esp+34h] [ebp-34h]
  float v47; // [esp+34h] [ebp-34h]
  _DWORD *v48[3]; // [esp+38h] [ebp-30h] BYREF
  _DWORD *v49; // [esp+44h] [ebp-24h]
  float v50; // [esp+48h] [ebp-20h]
  float v51; // [esp+4Ch] [ebp-1Ch]
  float v52; // [esp+50h] [ebp-18h]
  __int128 v53; // [esp+54h] [ebp-14h]

  v3 = (TESObjectREFR *)a2;
  v52 = COERCE_FLOAT(a2->vtbl->GetActorValue(a2, kActorVal_ResistNormalWeapons));
  Unk_D2 = (bool (__thiscall *)(TESObjectREFR *))a2->vtbl->Unk_D2;
  *((double *)&v53 + 1) = (double)SLODWORD(v52);
  v5 = ((double (__thiscall *)(Actor *))Unk_D2)(a2);
  GetActorValue = (void (__thiscall *)(TESObjectREFR *))a2->vtbl->GetActorValue;
  *(float *)&v53 = v5 / fCostant_100 * *((double *)&v53 + 1);
  v51 = COERCE_FLOAT(((int (__thiscall *)(Actor *, int))GetActorValue)(a2, 2));
  v7 = (void (__thiscall *)(TESObjectREFR *))a2->vtbl->GetActorValue;
  *(double *)((char *)&v53 + 4) = (double)SLODWORD(v51) * dbl_A70398;
  v8 = ((int (__thiscall *)(Actor *, int))v7)(a2, 0x40);
  v9 = (Actor *)HIDWORD(v53);
  v10 = *(_DWORD *)(HIDWORD(v53) + 0x58);
  v50 = *(float *)&v8;
  v52 = (double)v8 + *(double *)&v53;
  *(float *)&v48[1] = 0.0;
  if ( (*(int (__thiscall **)(int))(*(_DWORD *)v10 + 0xEC))(v10) )
  {
    v12 = (*(int (__thiscall **)(_DWORD, int))(**(_DWORD **)(HIDWORD(v53) + 0x58) + 0xEC))(
            *(_DWORD *)(HIDWORD(v53) + 0x58),
            1);
    if ( v12 )
    {
      if ( OblivionDynamicCast(
             *(void **)(v12 + 8),
             0,
             (struct _s_RTTICompleteObjectLocator *)&TESBoundObject `RTTI Type Descriptor',
             &TESObjectWEAP `RTTI Type Descriptor',
             0) )
      {
        v46 = ((double (__thiscall *)(_DWORD))*(_DWORD *)(**(_DWORD **)(HIDWORD(v53) + 0x58) + 0x324))(*(_DWORD *)(HIDWORD(v53) + 0x58));
        if ( v46 <= 0.0 )
        {
          v43 = 1;
          v13 = (void **)(*(int (__thiscall **)(_DWORD))(**(_DWORD **)(HIDWORD(v53) + 0x58) + 0xEC))(*(_DWORD *)(HIDWORD(v53) + 0x58));
          v44 = sub_612A90((Actor *)HIDWORD(v53), v13);
          (*(void (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)(HIDWORD(v53) + 0x58) + 0x328))(
            *(_DWORD *)(HIDWORD(v53) + 0x58),
            LODWORD(v44));
        }
      }
    }
  }
  else
  {
    *((float *)&v53 + 2) = 0.0;
    *(float *)&v43 = COERCE_FLOAT(v48);
    *(float *)&v42 = Actor_GetFatigueFraction((Actor *)HIDWORD(v53), ebx0, SHIDWORD(v53));
    v39 = ((int (__thiscall *)(Actor *))v9->vtbl->GetActorValue)(v9);
    v35 = ((int (__thiscall *)(Actor *))v9->vtbl->GetActorValue)(v9);
    v11 = ((int (__thiscall *)(Actor *))v9->vtbl->GetActorValue)(v9);
    Calc_HandToHandDamage(v11, 0x11, v35, COERCE_FLOAT(7), v39, 0, (float *)v42);
  }
  v47 = COERCE_FLOAT(1) / fCostant_100;
  v14 = 0.0;
  v15 = sub_5E8ED0(v9, 1);
  *(float *)v48 = 0.0;
  v49 = v15;
  v45 = 0.0;
  v52 = 0.0;
  if ( v15 )
  {
    while ( 1 )
    {
      v16 = *v15;
      if ( !*v15 )
      {
LABEL_32:
        SchoolAV = EffectItemList_GetSchoolAV();
        v45 = (double)v9->vtbl->GetActorValue(v9, (AVCode)SchoolAV) * dbl_A2FC68 / fCostant_100;
        v3 = (TESObjectREFR *)LODWORD(v51);
        goto LABEL_33;
      }
      v15 = (_DWORD *)v15[1];
      v17 = *(_DWORD *)(EffectItemList_GetStrongestItem(3, 0) + 0x10);
      if ( v17 != 2 )
        break;
      if ( v16 )
        v18 = v16 + 0x18;
      else
        v18 = 0;
      sub_5E0970(v9, v18);
      v40 = v14;
      v14 = sub_546CA0(v40);
      if ( v14 <= *(float *)&SrcStr )
        goto LABEL_31;
      v19 = LODWORD(v51);
      if ( v51 != 0.0 )
        goto LABEL_27;
      v20 = (_DWORD *)FormHeapAlloc(8u);
      if ( v20 )
      {
        if ( v16 )
          *v20 = v16 + 0x18;
        else
          *v20 = 0;
        v20[1] = 0;
        v51 = *(float *)&v20;
      }
      else
      {
        v51 = 0.0;
      }
LABEL_31:
      if ( !v15 )
        goto LABEL_32;
    }
    if ( v17 != 1 )
      goto LABEL_31;
    v21 = v16 ? v16 + 0x18 : 0;
    sub_5E0970(v9, v21);
    v41 = v14;
    v14 = sub_546CA0(v41);
    if ( v14 <= *(float *)&SrcStr )
      goto LABEL_31;
    v19 = 1;
LABEL_27:
    if ( v16 )
      v22 = v16 + 0x18;
    else
      v22 = 0;
    *(_DWORD *)v19 = v22;
    goto LABEL_31;
  }
LABEL_33:
  v24 = v38;
  v51 = COERCE_FLOAT(1) - v47;
  v25 = v51;
  v51 = v45 - *(float *)v48;
  if ( v51 >= v25 )
    v26 = 0.0;
  else
    v26 = *(float *)&v43;
  v51 = v26;
  *(float *)v48 = TesObjectREF_GetDistance((TESObjectREFR *)v9, v3, 0);
  v37 = v51;
  ActorBaseForm = Actor_GetActorBaseForm((Actor *)v3, 0);
  Health = TESActorBase_GetHealth(ActorBaseForm);
  vtbl = v9->vtbl;
  v51 = *(float *)&Health;
  v36 = (float)Health;
  v50 = COERCE_FLOAT(((int (__thiscall *)(Actor *))vtbl->GetActorValue)(v9));
  v34 = (float)SLODWORD(v50);
  BaseCalcAVf = Actor_GetBaseCalcAVf((int *)v9, v24, (int)v9, (int)v3, 8);
  v30 = sub_547910(BaseCalcAVf, v34, COERCE_FLOAT(8), v36, v37);
  v31 = v48[0];
  v50 = v30;
  if ( v48[0] )
  {
    BSSimpleList_Clear(v48[0]);
    FormHeapFree((unsigned int)v31);
  }
  FormHeapFree(v43);
  FormHeapFree((unsigned int)v49);
  result = v50;
  if ( v50 <= 0.0 )
    return (float)1.0;
  return result;
}
