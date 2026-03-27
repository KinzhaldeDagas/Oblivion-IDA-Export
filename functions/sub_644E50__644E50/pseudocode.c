char __userpurge sub_644E50@<al>(
        float **a1@<ecx>,
        float ***a2@<ebp>,
        double a3@<st2>,
        double a4@<st1>,
        double a5@<st0>,
        PlayerCharacter *a6,
        int a7,
        TESObjectREFR *a8,
        TESObjectREFR *a9,
        float a10)
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
  int v21; // ecx
  int v22; // eax
  void (__thiscall **v23)(float **); // edx
  _DWORD *v24; // ebx
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
  float *v40; // eax
  int v41; // [esp+24h] [ebp-Ch] BYREF
  int v42; // [esp+28h] [ebp-8h]
  int v43; // [esp+2Ch] [ebp-4h]

  if ( a6 == TESDataHandler_g_PlayerRef )
  {
    if ( !a1[0xD] )
      (*((void (__thiscall **)(float **))*a1 + 0x102))(a1);
    if ( sub_6899E0(a1[0xD]) )
    {
      ((void (__usercall *)(PlayerCharacter *@<ecx>, int, double@<st0>, double@<st1>, double@<st2>))a6->vtbl->super.super.Unk_73)(
        a6,
        a7,
        a5,
        a4,
        a3);
    }
    else
    {
      vtbl = a6->vtbl;
      sub_68A160(a1[0xD]);
      ((void (__thiscall *)(PlayerCharacter *, int))vtbl->super.super.Unk_73)(a6, v12);
    }
    if ( (*((int (__thiscall **)(float **))*a1 + 0xDE))(a1) && (*((int (__thiscall **)(float **))*a1 + 0xE0))(a1) )
    {
      a7 = *(unsigned __int16 *)((*((int (__thiscall **)(float **))*a1 + 0xE0))(a1) + 0xC);
      Unk_7A = TESDataHandler_g_PlayerRef->vtbl->super.super.Unk_7A;
      *(float *)&a7 = (double)a7 / dbl_A2FC70;
      ((void (__stdcall *)(int))Unk_7A)(a7);
      return 1;
    }
    if ( TESDataHandler_g_PlayerRef->vtbl->super.GetMountedHorse(TESDataHandler_g_PlayerRef) )
    {
      v15 = ((int (__usercall *)@<eax>(PlayerCharacter *@<ecx>, double@<st0>, double@<st1>, double@<st2>))TESDataHandler_g_PlayerRef->vtbl->super.GetMountedHorse)(
              TESDataHandler_g_PlayerRef,
              a5,
              a4,
              a3);
      v16 = TESDataHandler_g_PlayerRef->vtbl;
      v17 = ((double (__thiscall *)(int))*(_DWORD *)(*(_DWORD *)v15 + 0x1E0))(v15);
      v18 = v16->super.super.Unk_7A;
      v19 = TESDataHandler_g_PlayerRef;
      *(float *)&a7 = v17 + dbl_A6E740;
      ((void (__thiscall *)(PlayerCharacter *, int))v18)(v19, a7);
      return 1;
    }
    return 1;
  }
  if ( a6 && !(*((unsigned __int8 (__thiscall **)(float **))*a1 + 0xD3))(a1) )
  {
    v20 = a1[0xD];
    if ( !v20 || sub_6899E0(v20) )
    {
      if ( !a1[0xD] )
        (*((void (__thiscall **)(float **))*a1 + 0x102))(a1);
      if ( sub_6899E0(a1[0xD]) )
      {
        v21 = *(_DWORD *)a7;
        v22 = *(_DWORD *)(a7 + 8);
        v42 = *(_DWORD *)(a7 + 4);
        v23 = (void (__thiscall **)(float **))*a1;
        v41 = v21;
        v43 = v22;
        v24 = (_DWORD *)((int (__usercall *)@<eax>(float **@<ecx>, double@<st0>, double@<st1>, double@<st2>))v23[0x33])(
                          a1,
                          a5,
                          a4,
                          a3);
        if ( !Actor_IsSwimming(a6) )
        {
          if ( v24 )
          {
            if ( (*(unsigned __int8 (__thiscall **)(_DWORD *))(*v24 + 0x190))(v24) )
            {
              if ( Actor_IsSwimming(v24) )
              {
                a5 = *(float *)&v43 - sub_5E0660(a6);
                *(float *)&v43 = a5;
              }
            }
          }
        }
        if ( byte_B15800 )
        {
          IsSleeping = PlayerCharacter::IsSleeping_(TESDataHandler_g_PlayerRef);
          sub_6836E0((_DWORD *)dword_B3BF80, a3, a4, (TESObjectREFR *)a6, a8, a9, v41, v42, v43, IsSleeping);
          v26 = dword_B3BF80;
          LOBYTE(a7) = 0;
          if ( !sub_682820(v26, (int)a6, (int)a6, &a7) )
            return 0;
          v27 = (_BYTE)a7 == 0;
        }
        else
        {
          a5 = sub_68B030((int *)a1[0xD], a5, a6, (float *)&v41, a8, a9);
          v27 = v28 == 0;
        }
        if ( v27 )
        {
          sub_5F7CF0((Actor *)a6, 0, 0);
          return 0;
        }
        v29 = *(_DWORD *)a1[0xD];
        sub_68A160(a1[0xD]);
        (*(void (__thiscall **)(float *, PlayerCharacter *, int, _DWORD))(v29 + 0x14))(a1[0xD], a6, v30, 0);
        if ( sub_6899E0(a1[0xD]) )
          goto LABEL_55;
      }
    }
    if ( ((int (__usercall *)@<eax>(PlayerCharacter *@<ecx>, double@<st0>, double@<st1>, double@<st2>))a6->vtbl->super.GetMountedHorse)(
           a6,
           a5,
           a4,
           a3) )
    {
      v31 = a1[0xD];
      if ( v31 )
      {
        v32 = (TESObjectREFR *)sub_68A180(v31);
        v33 = v32;
        if ( v32 )
        {
          if ( GetTeleportExtraData(v32) )
          {
            Distance = TesObjectREF_GetDistance(v33, (TESObjectREFR *)a6, 0);
            if ( Distance <= dbl_A6E6F8 )
            {
              v35 = a6->vtbl->super.GetMountedHorse((Actor *)a6);
              sub_5E9A60(v35, Distance);
              if ( !v36 )
              {
                v37 = (Actor *)a6->vtbl->super.GetMountedHorse((Actor *)a6);
                sub_5F80D0(v37);
              }
              a6->vtbl->super.SetPackageDismount((Actor *)a6);
              return 0;
            }
          }
        }
      }
    }
    v38 = a10;
    sub_68A9D0(a1[0xD], a10);
    ProcessLevel = Actor::GetProcessLevel((Actor *)a6);
    if ( !(*(unsigned __int8 (__thiscall **)(float *, PlayerCharacter *))(*(_DWORD *)a1[0xD] + 0x20))(a1[0xD], a6) )
    {
      if ( !Actor_IsCreature((Actor *)a6)
        && !a6->vtbl->super.GetMountedHorse((Actor *)a6)
        && ((unsigned __int8 (__thiscall *)(LowProcess *, PlayerCharacter *, _DWORD))a6->super.super.super.process->Unk_E7)(
             a6->super.super.super.process,
             a6,
             0) )
      {
        return 0;
      }
      (*(void (__thiscall **)(float *, PlayerCharacter *))(*(_DWORD *)a1[0xD] + 0x18))(a1[0xD], a6);
    }
    if ( ProcessLevel == Actor::GetProcessLevel((Actor *)a6) )
    {
      if ( !(*(unsigned __int8 (__thiscall **)(float *, PlayerCharacter *))(*(_DWORD *)a1[0xD] + 0x20))(a1[0xD], a6) )
        goto LABEL_59;
      if ( !(*(unsigned __int8 (__usercall **)@<al>(float *@<ecx>, double@<st0>, double@<st1>, double@<st2>))(*(_DWORD *)a1[0xD] + 0xC))(
              a1[0xD],
              v38,
              a4,
              a3) )
      {
        v40 = (float *)(*((int (__thiscall **)(float **))*a1 + 0x104))(a1);
        if ( v40 )
        {
          sub_684EC0(v40);
          v38 = ((double (__thiscall *)(PlayerCharacter *, int))a6->vtbl->super.super.super.Unk_60)(a6, 1);
        }
      }
      if ( !sub_68ABA0((int *)a1[0xD], a2, a3, a4, v38, (TESObjectREFR *)a6) )
        return 0;
      if ( a1[0xD]
        && ProcessLevel == Actor::GetProcessLevel((Actor *)a6)
        && ProcessLevel == MobileObject_GetProcessLevel((MobileObject *)a6) )
      {
LABEL_59:
        if ( sub_6899E0(a1[0xD]) )
LABEL_55:
          ((void (__thiscall *)(PlayerCharacter *, int))a6->vtbl->super.super.super.Unk_60)(a6, 1);
      }
    }
  }
  return 1;
}
