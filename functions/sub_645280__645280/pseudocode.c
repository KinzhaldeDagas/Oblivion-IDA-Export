char __userpurge sub_645280@<al>(
        MiddleLowProcess *a1@<ecx>,
        float ***a2@<ebp>,
        double a3@<st1>,
        double a4@<st0>,
        TESObjectREFR *a5,
        int *a6,
        TESObjectREFR *a7,
        int a8,
        float a9,
        float a10)
{
  Actor *v10; // esi
  PathLow *pathing; // ecx
  char IsSleeping; // al
  int v14; // ecx
  bool v15; // zf
  char v17; // al
  void (__thiscall **v18)(PathLow *, Actor *, int, _DWORD); // ebx
  int v19; // eax
  double v20; // st5
  int ProcessLevel; // ebx
  PathLow *v22; // ecx
  void (__thiscall **v23)(PathLow *, Actor *, int, _DWORD); // ebx
  int v24; // eax
  double v25; // st5

  v10 = (Actor *)a5;
  if ( a5 && a9 > 0.0 )
  {
    pathing = a1->pathing;
    if ( !pathing || sub_6899E0(pathing) )
    {
      if ( !a1->pathing )
        a1->Unk_101(a1);
      if ( sub_6899E0((_DWORD *)a1->pathing) )
      {
        if ( byte_B15800 )
        {
          IsSleeping = PlayerCharacter::IsSleeping_(TESDataHandler_g_PlayerRef);
          sub_6836E0(
            (_DWORD *)dword_B3BF80,
            0.0,
            a3,
            (TESObjectREFR *)v10,
            a7,
            (TESObjectREFR *)a8,
            *a6,
            a6[1],
            a6[2],
            IsSleeping);
          v14 = dword_B3BF80;
          LOBYTE(a5) = 0;
          if ( !sub_682820(v14, (int)v10, (int)v10, &a5) )
            return 0;
          v15 = (_BYTE)a5 == 0;
        }
        else
        {
          a3 = sub_68B030((int *)a1->pathing, a4, v10, (float *)a6, a7, (_DWORD *)a8);
          v15 = v17 == 0;
        }
        if ( v15 )
        {
          sub_5F7CF0(v10, 0, 0);
          return 0;
        }
        v18 = (void (__thiscall **)(PathLow *, Actor *, int, _DWORD))(*(_DWORD *)a1->pathing + 0x14);
        sub_68A160((_DWORD *)a1->pathing);
        (*v18)(a1->pathing, v10, v19, 0);
        if ( sub_6899E0((_DWORD *)a1->pathing) )
        {
          ((void (__thiscall *)(Actor *, int))v10->vtbl->super.super.Unk_60)(v10, 1);
          return 1;
        }
      }
    }
    sub_68A9D0((float *)a1->pathing, a10);
    v20 = a9;
    *(float *)&a8 = a9;
    while ( 1 )
    {
      if ( (*(unsigned __int8 (__thiscall **)(PathLow *, Actor *))(*(_DWORD *)a1->pathing + 0x20))(a1->pathing, v10) )
      {
        ProcessLevel = Actor::GetProcessLevel(v10);
        if ( !sub_68ABA0((int *)a1->pathing, a2, v20, a3, a4, (TESObjectREFR *)v10) )
          return 0;
        if ( ProcessLevel != Actor::GetProcessLevel(v10)
          || ProcessLevel != MobileObject_GetProcessLevel((MobileObject *)v10)
          || !a1->pathing )
        {
          break;
        }
      }
      if ( sub_6899E0((_DWORD *)a1->pathing) )
      {
        ((void (__thiscall *)(Actor *, int))v10->vtbl->super.super.Unk_60)(v10, 1);
        return 1;
      }
      a2 = (float ***)Actor::GetProcessLevel(v10);
      if ( (*(unsigned __int8 (__thiscall **)(PathLow *))(*(_DWORD *)a1->pathing + 0xC))(a1->pathing) )
      {
        v22 = a1->pathing;
        v23 = (void (__thiscall **)(PathLow *, Actor *, int, _DWORD))(*(_DWORD *)v22 + 0x14);
        sub_68A160(v22);
        (*v23)(a1->pathing, v10, v24, 0);
      }
      if ( !Actor_IsCreature(v10)
        && !v10->vtbl->GetMountedHorse(v10)
        && ((unsigned __int8 (__thiscall *)(LowProcess *, Actor *, _DWORD))v10->members.super.process->Unk_E7)(
             v10->members.super.process,
             v10,
             0) )
      {
        return 0;
      }
      v25 = *(float *)&a8;
      (*(void (__stdcall **)(Actor *, int))(*(_DWORD *)a1->pathing + 0x1C))(v10, a8);
      *(float *)&a8 = v25;
      if ( a2 != (float ***)Actor::GetProcessLevel(v10)
        || a2 != (float ***)MobileObject_GetProcessLevel((MobileObject *)v10)
        || !a1->pathing
        || (*(unsigned __int8 (__thiscall **)(PathLow *))(*(_DWORD *)a1->pathing + 0x2C))(a1->pathing) )
      {
        return 1;
      }
      v20 = 0.0;
      if ( *(float *)&a8 <= 0.0 )
        return 1;
    }
  }
  return 1;
}
