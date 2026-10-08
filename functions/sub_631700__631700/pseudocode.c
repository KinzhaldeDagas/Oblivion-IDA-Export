char __userpurge sub_631700@<al>(
        _DWORD *a1@<ecx>,
        int a2@<ebp>,
        int a3@<edi>,
        double a4@<st2>,
        double value@<st1>,
        double a6@<st0>,
        Actor *a7,
        int a8,
        int a9,
        float a10)
{
  int v11; // ebx
  int v13; // ecx
  int v14; // edx
  float *v15; // eax
  double DistanceToPoint; // st7
  int v17; // eax
  double v18; // st7
  NiPoint3 *LinkedTeleportMarkerPosition; // eax
  TeleportData *TeleportData; // eax
  TESObjectREFR *v21; // ecx
  NiPoint3 *v22; // eax
  int v23; // ebp
  UInt32 DwordAtOffset40; // eax
  NiPoint3 *v25; // eax
  int v26; // eax
  unsigned int v27; // eax
  bool v28; // cc
  PlayerCharacter *v29; // ecx
  bool IsSleeping; // al
  int v31; // eax
  unsigned int v32; // eax
  float *v33; // [esp+1Ch] [ebp-2Ch]
  TESWorldSpace *WorldSpace; // [esp+1Ch] [ebp-2Ch]
  float *v35; // [esp+1Ch] [ebp-2Ch]
  double v36; // [esp+30h] [ebp-18h] BYREF
  float x; // [esp+38h] [ebp-10h] BYREF
  float v38[3]; // [esp+3Ch] [ebp-Ch] BYREF

  v11 = (*(int (__usercall **)@<eax>(_DWORD *@<ecx>, double@<st0>, double@<st1>, double@<st2>))(*a1 + 0x184))( /*0x631711*/
          a1,
          a6,
          value,
          a4);
  if ( !v11 ) /*0x631715*/
    return 0; /*0x63171e*/
  if ( !*((_BYTE *)a1 + 0xD0) ) /*0x631721*/
    (*(void (__thiscall **)(_DWORD *, Actor *))(*a1 + 0x194))(a1, a7); /*0x63173a*/
  if ( !a1[0xB] ) /*0x63173c*/
    (*(void (__thiscall **)(_DWORD *, Actor *))(*a1 + 0x558))(a1, a7); /*0x63174d*/
  v13 = a1[0xB]; /*0x63174f*/
  if ( !v13 ) /*0x631757*/
    goto LABEL_65; /*0x631757*/
  if ( (*(unsigned __int8 (__thiscall **)(int, int))(*(_DWORD *)v13 + 0x198))(v13, 1) && !a1[0x11] ) /*0x63176b*/
  {
    sub_566870((TargetData **)v11, (TESForm *)a1[0xB], 1); /*0x631779*/
    if ( (*(_DWORD *)(v11 + 0x1C) & 0x1000) == 0 ) /*0x631787*/
    {
      ((void (__thiscall *)(Actor *, _DWORD))a7->vtbl->Unk_BE)(a7, a1[0xB]); /*0x63179b*/
      return 0; /*0x6317a6*/
    }
    return 0; /*0x631787*/
  }
  v14 = a1[0xB]; /*0x6317a9*/
  if ( (*(_DWORD *)(v14 + 8) & 0x20) != 0 || (*(_DWORD *)(v14 + 8) & 0x800) != 0 ) /*0x6317c2*/
  {
    if ( (*(_DWORD *)(v14 + 8) & 0x20) != 0 ) /*0x631b1a*/
      sub_566870((TargetData **)v11, (TESForm *)v14, 1); /*0x631b21*/
LABEL_65:
    (*(void (__thiscall **)(_DWORD *, Actor *, int))(*a1 + 0x188))(a1, a7, 1); /*0x631b28*/
    return 0; /*0x631b33*/
  }
  if ( *(_BYTE *)(v11 + 0x20) == 9 ) /*0x6317cc*/
  {
    v15 = sub_566B30((TESPackage *)v11, v38, a7); /*0x6317d6*/
    DistanceToPoint = TESObjectREFR::GetDistanceToPoint((TESObjectREFR *)a1[0xB], v15); /*0x6317df*/
    v36 = (double)Double_To_SInt32(DistanceToPoint); /*0x6317f3*/
    sub_566DB0((_DWORD *)v11); /*0x6317f7*/
    v18 = (double)v17; /*0x631802*/
    if ( v17 < 0 ) /*0x631806*/
      v18 = v18 + flt_A2FC78; /*0x631808*/
    a6 = v18 + dbl_A3DDE0; /*0x63180e*/
    if ( a6 < v36 ) /*0x63181d*/
      (*(void (__thiscall **)(_DWORD *, Actor *, unsigned int))(*a1 + 0x188))(a1, a7, 0xFFFFFFFF); /*0x63182c*/
  }
  if ( TESObjectREFR_GetTeleportData((TESObjectREFR *)a1[0xB]) ) /*0x631831*/
  {
    v33 = a7->vtbl->super.super.GetPos(a7); /*0x631846*/
    LinkedTeleportMarkerPosition = TESObjectREFR_GetLinkedTeleportMarkerPosition((TESObjectREFR *)a1[0xB]); /*0x63184f*/
    sub_4121A0(&LinkedTeleportMarkerPosition->x, (float *)&v36, v33); /*0x631856*/
    a6 = NiPoint3_Length((float *)&v36); /*0x63185f*/
    value = (double)(int)stru_B36B28.value; /*0x631864*/
    if ( value >= a6 ) /*0x631871*/
      goto LABEL_34; /*0x631871*/
  }
  else if ( sub_5687D0((TESPackage *)v11, v11, a6, (TESObjectREFR *)a7) ) /*0x63187b*/
  {
    goto LABEL_34; /*0x631882*/
  }
  if ( sub_64ADA0((Actor *)a1) ) /*0x63188a*/
    return 0; /*0x63188a*/
  if ( (*(int (__thiscall **)(_DWORD *, int, int))(*a1 + 0x36C))(a1, a2, a3) ) /*0x6318a1*/
    (*(void (__thiscall **)(_DWORD *, Actor *))(*a1 + 0x1B0))(a1, a7); /*0x6318b2*/
  TeleportData = TESObjectREFR_GetTeleportData((TESObjectREFR *)a1[0xB]); /*0x6318b7*/
  v21 = (TESObjectREFR *)a1[0xB]; /*0x6318be*/
  v22 = TeleportData ? TESObjectREFR_GetLinkedTeleportMarkerPosition(v21) : (NiPoint3 *)v21->vtbl->GetPos(v21);
  v23 = *a1; /*0x6318d6*/
  x = v22->x; /*0x6318d8*/
  v38[0] = v22->y; /*0x6318df*/
  v38[1] = v22->z; /*0x6318eb*/
  sub_5677B0((TESPackage *)v11, a6, (TESObjectREFR *)a7, 2); /*0x6318ef*/
  a6 = a10; /*0x6318fe*/
  WorldSpace = TESObjectREFR_GetWorldSpace((TESObjectREFR *)a1[0xB]); /*0x63190d*/
  DwordAtOffset40 = Shared_GetDwordAtOffset40((void *)a1[0xB]); /*0x63190e*/
  (*(void (__thiscall **)(_DWORD *, Actor *, float *, UInt32, TESWorldSpace *))(v23 + 0x418))( /*0x631922*/
    a1,
    a7,
    &x,
    DwordAtOffset40,
    WorldSpace);
  if ( Actor::GetProcessLevel(a7) ) /*0x631926*/
    return 0; /*0x63192d*/
  if ( TESObjectREFR_GetTeleportData((TESObjectREFR *)a1[0xB]) ) /*0x631936*/
  {
    v35 = a7->vtbl->super.super.GetPos(a7); /*0x63194e*/
    v25 = TESObjectREFR_GetLinkedTeleportMarkerPosition((TESObjectREFR *)a1[0xB]); /*0x631954*/
    sub_4121A0(&v25->x, v38, v35); /*0x63195b*/
    a6 = NiPoint3_Length(v38); /*0x631964*/
    value = (double)(int)stru_B36B28.value; /*0x631969*/
    if ( value < a6 ) /*0x631976*/
      return 0; /*0x631976*/
  }
  else if ( !sub_5687D0((TESPackage *)v11, v11, a6, (TESObjectREFR *)a7) ) /*0x631988*/
  {
    return 0; /*0x631988*/
  }
LABEL_34:
  if ( sub_64ADA0((Actor *)a1) && (*(_DWORD *)(v11 + 0x1C) & 4) != 0 ) /*0x6319a2*/
    return 0; /*0x6319a2*/
  if ( !(*(unsigned __int8 (__thiscall **)(_DWORD))(*(_DWORD *)a1[0xB] + 0x190))(a1[0xB]) ) /*0x6319b3*/
  {
    (*(void (__thiscall **)(_DWORD *, int))(*a1 + 0x394))(a1, 1); /*0x6319c9*/
    v26 = a1[0x11]; /*0x6319cb*/
    if ( v26 ) /*0x6319d2*/
    {
      ActivateRef( /*0x6319e2*/
        (TESObjectREFR *)a1[0xB],
        a4,
        value,
        a6,
        (TESObjectREFR *)a7,
        1,
        *(_DWORD *)(v26 + 4),
        *(_DWORD *)(v26 + 0x10));
      v27 = a1[0x11]; /*0x6319e7*/
      --a1[0xE]; /*0x6319ea*/
      if ( v27 ) /*0x6319f0*/
        FormHeapFree(v27); /*0x6319f3*/
      v28 = a1[0xE] < 1; /*0x6319fb*/
      a1[0x11] = 0; /*0x6319ff*/
      a1[0xB] = 0; /*0x631a02*/
      if ( !v28 ) /*0x631a05*/
        return 1; /*0x631a05*/
      if ( *(_DWORD *)(v11 + 0x18) == 0x1A && !*(_DWORD *)(v11 + 0x30) ) /*0x631a0d*/
      {
        (*(void (__thiscall **)(_DWORD *, Actor *, int))(*a1 + 0x188))(a1, a7, 2); /*0x631a1f*/
        return 1; /*0x631a2a*/
      }
    }
    else
    {
      ActivateRef((TESObjectREFR *)a1[0xB], a4, value, a6, (TESObjectREFR *)a7, 0, 0, 1); /*0x631a35*/
    }
    (*(void (__thiscall **)(_DWORD *, Actor *, int))(*a1 + 0x188))(a1, a7, 1); /*0x631a47*/
    return 1; /*0x631a52*/
  }
  v29 = reference; /*0x631a55*/
  if ( (PlayerCharacter *)a1[0xB] == reference /*0x631a6f*/
    && (IsSleeping = PlayerCharacter::IsSleeping_(v29), v29 = reference, IsSleeping)
    && !v29->isMovingToNewSpace )
  {
    v29->HoursToSleep = 0; /*0x631a7a*/
    v29->isSleeping = 1; /*0x631a84*/
    (*(void (__thiscall **)(_DWORD *, Actor *, unsigned int))(*a1 + 0x188))(a1, a7, 0xFFFFFFFE); /*0x631a8d*/
  }
  else
  {
    if ( a1[0x11] ) /*0x631a94*/
    {
      if ( (*(unsigned __int8 (__thiscall **)(_DWORD, _DWORD))(*(_DWORD *)a1[0xB] + 0x198))(a1[0xB], 0) /*0x631ab1*/
        || (v31 = a1[0x11], *(int *)(v31 + 8) > 0) )
      {
        ActivateRef( /*0x631ae7*/
          (TESObjectREFR *)a1[0xB],
          a4,
          value,
          a6,
          (TESObjectREFR *)a7,
          1,
          *(_DWORD *)(a1[0x11] + 4),
          *(_DWORD *)(a1[0x11] + 0x10));
        v32 = a1[0x11]; /*0x631aec*/
        --a1[0xE]; /*0x631aef*/
        if ( v32 ) /*0x631af5*/
          FormHeapFree(v32); /*0x631af8*/
        a1[0x11] = 0; /*0x631b00*/
        a1[0xB] = 0; /*0x631b03*/
      }
      else if ( *(int *)(v31 + 0xC) > 0 ) /*0x631ab6*/
      {
        (*(void (__thiscall **)(_DWORD *, Actor *, _DWORD, _DWORD, _DWORD, int, _DWORD, int, _DWORD, _DWORD, int))(*a1 + 0x228))( /*0x631ad2*/
          a1,
          a7,
          a1[0xB],
          0,
          0,
          1,
          0,
          1,
          0,
          0,
          1);
      }
      if ( (int)a1[0xE] > 0 ) /*0x631b09*/
        return 0; /*0x631b09*/
    }
    else if ( (PlayerCharacter *)a1[0xB] == v29 ) /*0x631b12*/
    {
      return 0; /*0x631b12*/
    }
    (*(void (__thiscall **)(_DWORD *, Actor *, int))(*a1 + 0x188))(a1, a7, 2); /*0x631b0d*/
  }
  return 0; /*0x631717*/
}
