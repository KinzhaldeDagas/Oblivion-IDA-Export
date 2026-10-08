// AVU decode: LowProcess_CalcDamage? estimates damage against target actor arg_4. Early path combines ResistNormalWeapons, armor rating, Strength, ResistMagic, weapon/H2H, active effects, distance, target health, and fatigue factors.
double __userpurge LowProcess_CalcDamage_@<st0>(int ebx0@<ebx>, HighProcess *a2, TESObjectREFR *a3)
{
  TESObjectREFR *v3; // esi
  void (__thiscall *HasFatigue)(Actor *); // edx
  double v5; // st7
  SInt32 (__thiscall *Unk_37)(Actor *, AVCode); // edx
  SInt32 (__thiscall *v7)(Actor *, AVCode); // edx
  int v8; // eax
  Actor *v9; // edi
  int v10; // ecx
  SInt32 v11; // eax
  int v12; // eax
  void **v13; // eax
  double v14; // st7
  _DWORD *v15; // ebx
  int v16; // esi
  int v17; // eax
  int v18; // eax
  float v19; // ecx
  float v20; // eax
  int v21; // eax
  float v22; // eax
  int v23; // eax
  int SchoolAV; // eax
  int v25; // ebx
  double v26; // st7
  double v27; // st7
  TESForm *ActorBaseForm; // eax
  int v29; // eax
  ActorVtbl *vtbl; // edx
  double v31; // st7
  _DWORD *v32; // esi
  double result; // st7
  float BaseCalcAVf; // [esp+0h] [ebp-68h]
  float v35; // [esp+4h] [ebp-64h]
  int v36; // [esp+Ch] [ebp-5Ch]
  float v37; // [esp+Ch] [ebp-5Ch]
  float v38; // [esp+10h] [ebp-58h]
  int v39; // [esp+14h] [ebp-54h]
  char v40; // [esp+14h] [ebp-54h]
  float v41; // [esp+14h] [ebp-54h]
  float v42; // [esp+14h] [ebp-54h]
  int v43; // [esp+1Ch] [ebp-4Ch]
  int v44; // [esp+1Ch] [ebp-4Ch]
  int v45; // [esp+20h] [ebp-48h]
  unsigned int v46; // [esp+24h] [ebp-44h]
  int v47; // [esp+28h] [ebp-40h]
  float v48; // [esp+2Ch] [ebp-3Ch]
  int v49; // [esp+30h] [ebp-38h]
  float v50; // [esp+30h] [ebp-38h]
  float v51; // [esp+34h] [ebp-34h]
  float v52; // [esp+34h] [ebp-34h]
  _DWORD *v53[3]; // [esp+38h] [ebp-30h] BYREF
  _DWORD *v54; // [esp+44h] [ebp-24h]
  float v55; // [esp+48h] [ebp-20h]
  float v56; // [esp+4Ch] [ebp-1Ch]
  float v57; // [esp+50h] [ebp-18h]
  __int128 v58; // [esp+54h] [ebp-14h] BYREF

  v3 = a3;                                      // Reads target current integer AV 0x41 ResistNormalWeapons through actor vtable slot 0x284 and saves it as the resistance contribution. /*0x6481b5*/
  v57 = COERCE_FLOAT(((int (__thiscall *)(TESObjectREFR *, int))a3->vtbl[1].Unk_37)(a3, 0x41)); /*0x6481c8*/
  HasFatigue = (void (__thiscall *)(Actor *))a3->vtbl[1].HasFatigue; /*0x6481d2*/
  *((double *)&v58 + 1) = (double)SLODWORD(v57); /*0x6481da*/
  v5 = ((double (__thiscall *)(TESObjectREFR *))HasFatigue)(a3);// AVU hook site: ECX/ESI both hold target actor. Vanilla calls actor vtable slot 0x348 GetArmorRating, divides returned ST0 by 100, then multiplies by ResistNormalWeapons contribution. AVU overwrites the call+divide and performs both in HndlDiv. /*0x6481de*/
  Unk_37 = (SInt32 (__thiscall *)(Actor *, AVCode))a3->vtbl[1].Unk_37; /*0x6481e8*/
  *(float *)&v58 = v5 / fCostant_100 * *((double *)&v58 + 1);// After armor/100 is on ST0, vanilla multiplies by the saved ResistNormalWeapons value and stores the combined target physical resistance estimate. /*0x6481f6*/
  v56 = COERCE_FLOAT(Unk_37((Actor *)a3, kActorVal_Willpower)); /*0x6481fc*/
  v7 = (SInt32 (__thiscall *)(Actor *, AVCode))a3->vtbl[1].Unk_37; /*0x648206*/
  *(double *)((char *)&v58 + 4) = (double)SLODWORD(v56) * dbl_A70398; /*0x648216*/
  *(float *)&v8 = COERCE_FLOAT(v7((Actor *)a3, kActorVal_ResistMagic));// Reads target current integer AV 0x40 ResistMagic and adds it into the combat damage estimate path after the physical resistance contribution. /*0x64821a*/
  v9 = (Actor *)HIDWORD(v58); /*0x64821c*/
  v10 = *(_DWORD *)(HIDWORD(v58) + 0x58); /*0x648220*/
  v55 = *(float *)&v8; /*0x648223*/
  LODWORD(v48) = 1; /*0x64822b*/
  v57 = (double)v8 + *(double *)&v58; /*0x648231*/
  *(float *)&v53[1] = 0.0; /*0x648237*/
  if ( (*(int (__thiscall **)(int))(*(_DWORD *)v10 + 0xEC))(v10) ) /*0x648243*/
  {
    v47 = 1; /*0x6482ac*/
    v12 = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(HIDWORD(v58) + 0x58) + 0xEC))(*(_DWORD *)(HIDWORD(v58) + 0x58)); /*0x6482ae*/
    if ( v12 ) /*0x6482b4*/
    {
      if ( OblivionDynamicCast( /*0x6482c6*/
             *(void **)(v12 + 8),
             0,
             (struct _s_RTTICompleteObjectLocator *)&TESBoundObject `RTTI Type Descriptor',
             &TESObjectWEAP `RTTI Type Descriptor',
             0) )
      {
        v51 = ((double (__thiscall *)(_DWORD))*(_DWORD *)(**(_DWORD **)(HIDWORD(v58) + 0x58) + 0x324))(*(_DWORD *)(HIDWORD(v58) + 0x58)); /*0x6482df*/
        if ( v51 <= 0.0 ) /*0x6482ee*/
        {
          v46 = 1; /*0x6482fb*/
          v13 = (void **)(*(int (__thiscall **)(_DWORD))(**(_DWORD **)(HIDWORD(v58) + 0x58) + 0xEC))(*(_DWORD *)(HIDWORD(v58) + 0x58)); /*0x6482fd*/
          *(float *)&v49 = sub_612A90((Actor *)HIDWORD(v58), v13); /*0x648306*/
          v45 = v49; /*0x648313*/
          (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(HIDWORD(v58) + 0x58) + 0x328))(*(_DWORD *)(HIDWORD(v58) + 0x58)); /*0x648320*/
        }
      }
    }
  }
  else
  {
    v47 = (int)&v58 + 8; /*0x64824f*/
    *((float *)&v58 + 2) = 0.0; /*0x648250*/
    *(float *)&v46 = COERCE_FLOAT(v53); /*0x648258*/
    v45 = 1; /*0x648259*/
    *(float *)&v43 = Actor_GetFatigueFraction((Actor *)HIDWORD(v58), ebx0, SHIDWORD(v58)); /*0x64826b*/
    v40 = ((int (__thiscall *)(Actor *))v9->vtbl->GetActorValue)(v9); /*0x648277*/
    v36 = ((int (__thiscall *)(Actor *))v9->vtbl->GetActorValue)(v9); /*0x648286*/
    v11 = ((int (__thiscall *)(Actor *))v9->vtbl->GetActorValue)(v9); /*0x648291*/
    Calc_HandToHandDamage(v11, 0x11, v36, COERCE_FLOAT(7), v40, 0, (float *)v43); /*0x648294*/
  }
  v44 = ebx0; /*0x648326*/
  v52 = COERCE_FLOAT(1) / fCostant_100; /*0x648331*/
  v14 = 0.0; /*0x64833a*/
  v15 = sub_5E8ED0(v9, 1); /*0x64833c*/
  *(float *)v53 = 0.0; /*0x64833e*/
  v54 = v15; /*0x648344*/
  v50 = 0.0; /*0x648348*/
  v57 = 0.0; /*0x64834c*/
  if ( v15 )
  {
    while ( 1 ) /*0x648356*/
    {
      v16 = *v15; /*0x648356*/
      if ( !*v15 ) /*0x64835a*/
      {
LABEL_38:
        if ( v48 != 0.0 || v56 != 0.0 ) /*0x64847e*/
        {
          SchoolAV = EffectItemList_GetSchoolAV(); /*0x648485*/
          v50 = (double)v9->vtbl->GetActorValue(v9, (AVCode)SchoolAV) * dbl_A2FC68 / fCostant_100; /*0x6484ab*/
        }
        v3 = (TESObjectREFR *)LODWORD(v56); /*0x6484af*/
        goto LABEL_42; /*0x6484af*/
      }
      v15 = (_DWORD *)v15[1]; /*0x648360*/
      v17 = *(_DWORD *)(EffectItemList_GetStrongestItem((_DWORD *)(v16 + 0x24), 3, 0, v44, v45, v46, v47, SLOBYTE(v48)) /*0x64836e*/
                      + 0x10);
      if ( v17 != 2 ) /*0x648374*/
        break; /*0x648374*/
      if ( v16 ) /*0x648378*/
        v18 = v16 + 0x18; /*0x64837a*/
      else
        v18 = 0; /*0x64837f*/
      sub_5E0970(v9, v18); /*0x648384*/
      v41 = v14; /*0x64838a*/
      v14 = sub_546CA0(v41); /*0x64838d*/
      if ( v14 <= *(float *)&SrcStr ) /*0x6483a0*/
        goto LABEL_37; /*0x6483a0*/
      v19 = v56; /*0x6483a6*/
      if ( v56 != 0.0 ) /*0x6483ac*/
        goto LABEL_33; /*0x6483ac*/
      v20 = COERCE_FLOAT(FormHeapAlloc(8u)); /*0x6483b4*/
      if ( v20 == 0.0 ) /*0x6483be*/
      {
        v56 = 0.0; /*0x6483e7*/
      }
      else
      {
        if ( v16 ) /*0x6483c2*/
          *(_DWORD *)LODWORD(v20) = v16 + 0x18; /*0x6483c7*/
        else
          *(_DWORD *)LODWORD(v20) = 0; /*0x6483d7*/
        *(_DWORD *)(LODWORD(v20) + 4) = 0; /*0x6483c9*/
        v56 = v20; /*0x6483cc*/
      }
LABEL_37:
      if ( !v15 ) /*0x64846a*/
        goto LABEL_38; /*0x64846a*/
    }
    if ( v17 != 1 ) /*0x6483f0*/
      goto LABEL_37; /*0x6483f0*/
    v21 = v16 ? v16 + 0x18 : 0;
    sub_5E0970(v9, v21); /*0x648400*/
    v42 = v14; /*0x648406*/
    v14 = sub_546CA0(v42); /*0x648409*/
    if ( v14 <= *(float *)&SrcStr ) /*0x64841c*/
      goto LABEL_37; /*0x64841c*/
    v19 = v48; /*0x64841e*/
    if ( v48 == 0.0 ) /*0x648424*/
    {
      v22 = COERCE_FLOAT(FormHeapAlloc(8u)); /*0x648428*/
      if ( v22 == 0.0 ) /*0x648432*/
      {
        v48 = 0.0; /*0x648455*/
      }
      else
      {
        if ( v16 ) /*0x648436*/
          *(_DWORD *)LODWORD(v22) = v16 + 0x18; /*0x64843b*/
        else
          *(_DWORD *)LODWORD(v22) = 0; /*0x648448*/
        *(_DWORD *)(LODWORD(v22) + 4) = 0; /*0x64843d*/
        v48 = v22; /*0x648440*/
      }
      goto LABEL_37; /*0x648444*/
    }
LABEL_33:
    if ( v16 ) /*0x64845d*/
      v23 = v16 + 0x18; /*0x64845f*/
    else
      v23 = 0; /*0x648464*/
    *(_DWORD *)LODWORD(v19) = v23; /*0x648466*/
    goto LABEL_37; /*0x648466*/
  }
LABEL_42:
  v25 = v39; /*0x6484b3*/
  v56 = v48 - v52; /*0x6484bc*/
  v26 = v56; /*0x6484c0*/
  v56 = v50 - *(float *)v53; /*0x6484cc*/
  if ( v56 >= v26 ) /*0x6484db*/
    v27 = 0.0; /*0x6484e3*/
  else
    v27 = *(float *)&v46; /*0x6484dd*/
  v56 = v27; /*0x6484e6*/
  *(float *)v53 = TesObjectREF_GetDistance((TESObjectREFR *)v9, v3, 0); /*0x6484f2*/
  v38 = v56; /*0x648507*/
  ActorBaseForm = Actor_GetActorBaseForm((Actor *)v3, 0); /*0x64850b*/
  *(float *)&v29 = COERCE_FLOAT(TESActorBase_GetHealth(ActorBaseForm)); /*0x648512*/
  vtbl = v9->vtbl; /*0x648517*/
  v56 = *(float *)&v29; /*0x648519*/
  v37 = (float)v29; /*0x64852a*/
  v55 = COERCE_FLOAT(((int (__thiscall *)(Actor *))vtbl->GetActorValue)(v9)); /*0x648531*/
  v35 = (float)SLODWORD(v55); /*0x64853c*/
  BaseCalcAVf = Actor_GetBaseCalcAVf((int *)v9, v25, (int)v9, (int)v3, 8);// Late LowProcess_CalcDamage? estimate calls Actor_GetBaseCalcAVf with AV 8 Health after reading target base health; this is estimate math, not an AVU hook point. /*0x648547*/
  v31 = sub_547910(BaseCalcAVf, v35, COERCE_FLOAT(8), v37, v38); /*0x64854a*/
  v32 = v53[0]; /*0x64854f*/
  v55 = v31; /*0x648553*/
  if ( v53[0] ) /*0x64855c*/
  {
    BSSimpleList_Clear(v53[0]); /*0x648560*/
    FormHeapFree((unsigned int)v32); /*0x648566*/
  }
  FormHeapFree(v46); /*0x648573*/
  FormHeapFree((unsigned int)v54); /*0x64857d*/
  result = v55; /*0x648592*/
  if ( v55 <= 0.0 ) /*0x648597*/
    return (float)1.0; /*0x6485a1*/
  return result; /*0x6485a5*/
}
