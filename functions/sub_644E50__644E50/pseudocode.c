char __userpurge sub_644E50@<al>(
        float **a1@<ecx>,
        double a2@<st2>,
        double a3@<st1>,
        double a4@<st0>,
        Actor *a5,
        int a6,
        TESObjectCELL *destinationCell,
        TESWorldSpace *destinationWorldspace,
        float a9)
{
  PlayerCharacterVtbl *vtbl; // ebx
  int v12; // eax
  void (__thiscall *Unk_7A)(MobileObject *); // edx
  int v15; // eax
  PlayerCharacterVtbl *v16; // esi
  double v17; // st7
  void (__thiscall *v18)(MobileObject *); // edx
  PlayerCharacter *v19; // ecx
  float *v20; // ecx
  float v21; // ecx
  float v22; // eax
  void (__thiscall **v23)(float **); // edx
  Actor *v24; // ebx
  char IsSleeping; // al
  int v26; // ecx
  bool v27; // zf
  char v28; // al
  int v29; // ebx
  int v30; // eax
  float *v31; // ecx
  TESObjectREFR *v32; // eax
  TESObjectREFR *v33; // ebx
  double Distance; // st7
  Creature *v35; // eax
  char v36; // al
  Actor *v37; // eax
  double v38; // st7
  int ProcessLevel; // ebx
  int **v40; // eax
  NiPoint3 destinationPosition; // [esp+24h] [ebp-Ch] BYREF

  if ( a5 == (Actor *)reference ) /*0x644e62*/
  {
    if ( !a1[0xD] ) /*0x644e68*/
      (*((void (__thiscall **)(float **))*a1 + 0x102))(a1); /*0x644e76*/
    if ( sub_6899E0(a1[0xD]) ) /*0x644e7b*/
    {
      ((void (__usercall *)(Actor *@<ecx>, int, double@<st0>, double@<st1>, double@<st2>))a5->vtbl->super.Unk_73)( /*0x644e93*/
        a5,
        a6,
        a4,
        a3,
        a2);
    }
    else
    {
      vtbl = (PlayerCharacterVtbl *)a5->vtbl; /*0x644e9a*/
      sub_68A160((float ***)a1[0xD]); /*0x644e9c*/
      ((void (__thiscall *)(Actor *, int))vtbl->super.super.Unk_73)(a5, v12); /*0x644eaa*/
    }
    if ( (*((int (__thiscall **)(float **))*a1 + 0xDE))(a1) && (*((int (__thiscall **)(float **))*a1 + 0xE0))(a1) ) /*0x644ec6*/
    {
      a6 = *(unsigned __int16 *)((*((int (__thiscall **)(float **))*a1 + 0xE0))(a1) + 0xC); /*0x644edc*/
      Unk_7A = reference->vtbl->super.super.Unk_7A; /*0x644eec*/
      *(float *)&a6 = (double)a6 / dbl_A2FC70; /*0x644ef9*/
      ((void (__stdcall *)(int))Unk_7A)(a6); /*0x644f04*/
      return 1; /*0x644f0e*/
    }
    if ( reference->vtbl->super.GetMountedHorse(reference) ) /*0x644f1f*/
    {
      v15 = ((int (__usercall *)@<eax>(PlayerCharacter *@<ecx>, double@<st0>, double@<st1>, double@<st2>))reference->vtbl->super.GetMountedHorse)( /*0x644f37*/
              reference,
              a4,
              a3,
              a2);
      v16 = reference->vtbl; /*0x644f3f*/
      v17 = ((double (__thiscall *)(int))*(_DWORD *)(*(_DWORD *)v15 + 0x1E0))(v15); /*0x644f4b*/
      v18 = v16->super.super.Unk_7A; /*0x644f53*/
      v19 = reference; /*0x644f5a*/
      *(float *)&a6 = v17 + dbl_A6E740; /*0x644f60*/
      ((void (__thiscall *)(PlayerCharacter *, int))v18)(v19, a6); /*0x644f6b*/
      return 1; /*0x644f75*/
    }
    return 1; /*0x644f23*/
  }
  if ( a5 && !(*((unsigned __int8 (__thiscall **)(float **))*a1 + 0xD3))(a1) ) /*0x644f88*/
  {
    v20 = a1[0xD]; /*0x644f92*/
    if ( !v20 || sub_6899E0(v20) ) /*0x644f99*/
    {
      if ( !a1[0xD] ) /*0x644fa6*/
        (*((void (__thiscall **)(float **))*a1 + 0x102))(a1); /*0x644fb6*/
      if ( sub_6899E0(a1[0xD]) ) /*0x644fbb*/
      {
        v21 = *(float *)a6; /*0x644fcf*/
        v22 = *(float *)(a6 + 8); /*0x644fd1*/
        destinationPosition.y = *(float *)(a6 + 4); /*0x644fd4*/
        v23 = (void (__thiscall **)(float **))*a1; /*0x644fd8*/
        destinationPosition.x = v21; /*0x644fda*/
        destinationPosition.z = v22; /*0x644fde*/
        v24 = (Actor *)((int (__thiscall *)(float **))v23[0x33])(a1); /*0x644fee*/
        if ( !Actor_IsSwimming(a5) ) /*0x644ff0*/
        {
          if ( v24 ) /*0x644ffb*/
          {
            if ( v24->vtbl->super.super.IsActor((TESObjectREFR *)v24) && Actor_IsSwimming(v24) ) /*0x64500f*/
              destinationPosition.z = destinationPosition.z - Actor_GetScaledCollisionHeight(a5); /*0x64502b*/
          }
        }
        if ( byte_B15800 ) /*0x64502f*/
        {
          IsSleeping = PlayerCharacter::IsSleeping_(reference); /*0x64503e*/
          sub_6836E0( /*0x64506e*/
            (NiTMap_TESCELL *)unk_B3BF80,
            a2,
            a3,
            a4,
            (TESObjectREFR *)a5,
            destinationCell,
            (TESObjectREFR *)destinationWorldspace,
            SLODWORD(destinationPosition.x),
            SLODWORD(destinationPosition.y),
            SLODWORD(destinationPosition.z),
            IsSleeping);
          v26 = unk_B3BF80; /*0x645078*/
          LOBYTE(a6) = 0; /*0x64507f*/
          if ( !sub_682820(v26, (int)a5, a5, &a6) ) /*0x64508b*/
            return 0; /*0x645172*/
          v27 = (_BYTE)a6 == 0; /*0x645091*/
        }
        else
        {
          TravelPath_BuildToDestination( /*0x6450c1*/
            (TravelPath *)a1[0xD],
            (TESObjectREFR *)a5,
            &destinationPosition,
            destinationCell,
            destinationWorldspace);
          v27 = v28 == 0; /*0x6450c6*/
        }
        if ( v27 ) /*0x645098*/
        {
          sub_5F7CF0(a5, 0, 0); /*0x64509e*/
          return 0; /*0x6450ab*/
        }
        v29 = *(_DWORD *)a1[0xD]; /*0x6450cd*/
        sub_68A160((float ***)a1[0xD]); /*0x6450d1*/
        (*(void (__thiscall **)(float *, Actor *, int, _DWORD))(v29 + 0x14))(a1[0xD], a5, v30, 0); /*0x6450de*/
        if ( sub_6899E0(a1[0xD]) ) /*0x6450e3*/
          goto LABEL_55; /*0x6450e3*/
      }
    }
    if ( ((int (__usercall *)@<eax>(Actor *@<ecx>, double@<st0>, double@<st1>, double@<st2>))a5->vtbl->GetMountedHorse)( /*0x6450fa*/
           a5,
           a4,
           a3,
           a2) )
    {
      v31 = a1[0xD]; /*0x645100*/
      if ( v31 ) /*0x645105*/
      {
        v32 = (TESObjectREFR *)sub_68A180(v31); /*0x645107*/
        v33 = v32; /*0x64510c*/
        if ( v32 ) /*0x645110*/
        {
          if ( TESObjectREFR_GetTeleportData(v32) ) /*0x645114*/
          {
            Distance = TesObjectREF_GetDistance(v33, (TESObjectREFR *)a5, 0); /*0x645122*/
            if ( Distance <= dbl_A6E6F8 ) /*0x645132*/
            {
              v35 = a5->vtbl->GetMountedHorse(a5); /*0x64513e*/
              sub_5E9A60(v35, Distance); /*0x645142*/
              if ( !v36 ) /*0x645149*/
              {
                v37 = (Actor *)a5->vtbl->GetMountedHorse(a5); /*0x645155*/
                sub_5F80D0(v37); /*0x645159*/
              }
              a5->vtbl->SetPackageDismount(a5); /*0x645168*/
              return 0; /*0x645168*/
            }
          }
        }
      }
    }
    v38 = a9; /*0x645175*/
    sub_68A9D0(a1[0xD], a9); /*0x645180*/
    ProcessLevel = Actor::GetProcessLevel(a5); /*0x645191*/
    if ( !(*(unsigned __int8 (__thiscall **)(float *, Actor *))(*(_DWORD *)a1[0xD] + 0x20))(a1[0xD], a5) ) /*0x645197*/
    {
      if ( !Actor_IsCreature(a5) /*0x6451c5*/
        && !a5->vtbl->GetMountedHorse(a5)
        && ((unsigned __int8 (__thiscall *)(LowProcess *, Actor *, _DWORD))a5->members.super.process->Unk_E7)(
             a5->members.super.process,
             a5,
             0) )
      {
        return 0; /*0x6451c9*/
      }
      (*(void (__thiscall **)(float *, Actor *))(*(_DWORD *)a1[0xD] + 0x18))(a1[0xD], a5); /*0x6451d4*/
    }
    if ( ProcessLevel == Actor::GetProcessLevel(a5) ) /*0x6451df*/
    {
      if ( !(*(unsigned __int8 (__thiscall **)(float *, Actor *))(*(_DWORD *)a1[0xD] + 0x20))(a1[0xD], a5) ) /*0x6451ee*/
        goto LABEL_59; /*0x6451ee*/
      if ( !(*(unsigned __int8 (__usercall **)@<al>(float *@<ecx>, double@<st0>, double@<st1>, double@<st2>))(*(_DWORD *)a1[0xD] + 0xC))( /*0x6451fc*/
              a1[0xD],
              v38,
              a3,
              a2) )
      {
        v40 = (int **)(*((int (__thiscall **)(float **))*a1 + 0x104))(a1); /*0x64520c*/
        if ( v40 ) /*0x645210*/
        {
          sub_684EC0(v40); /*0x645214*/
          v38 = ((double (__thiscall *)(Actor *, int))a5->vtbl->super.super.Unk_60)(a5, 1); /*0x645225*/
        }
      }
      if ( !sub_68ABA0((int *)a1[0xD], a2, a3, v38, (TESObjectREFR *)a5) ) /*0x645232*/
        return 0; /*0x645232*/
      if ( a1[0xD] /*0x645252*/
        && ProcessLevel == Actor::GetProcessLevel(a5)
        && ProcessLevel == MobileObject_GetProcessLevel((MobileObject *)a5) )
      {
LABEL_59:
        if ( sub_6899E0(a1[0xD]) ) /*0x645257*/
LABEL_55:
          ((void (__thiscall *)(Actor *, int))a5->vtbl->super.super.Unk_60)(a5, 1); /*0x64526c*/
      }
    }
  }
  return 1; /*0x644f08*/
}
