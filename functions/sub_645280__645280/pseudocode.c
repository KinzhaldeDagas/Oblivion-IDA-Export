// 3DTheft decode 2026-05-18: process path execution helper used by Follow/travel movement. Builds path when needed, advances PathLow, and returns without invoking Actor::EvaluatePackage.
char __userpurge sub_645280@<al>(
        MiddleLowProcess *a1@<ecx>,
        double a2@<st1>,
        double a3@<st0>,
        TESObjectREFR *sourceRef,
        int *destinationPosition,
        TESObjectCELL *destinationCell,
        float destinationWorldspace,
        float a8,
        float a9)
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
  int v22; // ebp
  float ***v23; // ecx
  void (__thiscall **v24)(PathLow *, Actor *, int, _DWORD); // ebx
  int v25; // eax
  double v26; // st5

  v10 = (Actor *)sourceRef; /*0x645283*/
  if ( sourceRef && a8 > 0.0 ) /*0x64529d*/
  {
    pathing = a1->pathing; /*0x6452a3*/
    if ( !pathing || sub_6899E0(pathing) ) /*0x6452aa*/
    {
      if ( !a1->pathing ) /*0x6452b7*/
        a1->Unk_101(a1); /*0x6452c7*/
      if ( sub_6899E0((_DWORD *)a1->pathing) ) /*0x6452cc*/
      {
        if ( byte_B15800 ) /*0x6452d9*/
        {
          IsSleeping = PlayerCharacter::IsSleeping_(reference); /*0x6452e8*/
          sub_6836E0( /*0x645318*/
            (NiTMap_TESCELL *)unk_B3BF80,
            0.0,
            a2,
            a3,
            (TESObjectREFR *)v10,
            destinationCell,
            (TESObjectREFR *)LODWORD(destinationWorldspace),
            *destinationPosition,
            destinationPosition[1],
            destinationPosition[2],
            IsSleeping);
          v14 = unk_B3BF80; /*0x645322*/
          LOBYTE(sourceRef) = 0; /*0x645329*/
          if ( !sub_682820(v14, (int)v10, v10, &sourceRef) ) /*0x645335*/
            return 0; /*0x64534f*/
          v15 = (_BYTE)sourceRef == 0; /*0x645337*/
        }
        else
        {
          TravelPath_BuildToDestination( /*0x645365*/
            (TravelPath *)a1->pathing,
            (TESObjectREFR *)v10,
            (const NiPoint3 *)destinationPosition,
            destinationCell,
            (TESWorldSpace *)LODWORD(destinationWorldspace));
          v15 = v17 == 0; /*0x64536a*/
        }
        if ( v15 ) /*0x64533e*/
        {
          sub_5F7CF0(v10, 0, 0); /*0x645344*/
          return 0; /*0x645344*/
        }
        v18 = (void (__thiscall **)(PathLow *, Actor *, int, _DWORD))(*(_DWORD *)a1->pathing + 0x14); /*0x645375*/
        sub_68A160((float ***)a1->pathing); /*0x645378*/
        (*v18)(a1->pathing, v10, v19, 0); /*0x645384*/
        if ( sub_6899E0((_DWORD *)a1->pathing) ) /*0x645389*/
        {
          ((void (__thiscall *)(Actor *, int))v10->vtbl->super.super.Unk_60)(v10, 1); /*0x64539e*/
          return 1; /*0x6453a6*/
        }
      }
    }
    sub_68A9D0((float *)a1->pathing, a9); /*0x6453b4*/
    v20 = a8; /*0x6453b9*/
    destinationWorldspace = a8; /*0x6453bd*/
    while ( 1 ) /*0x6453c1*/
    {
      if ( (*(unsigned __int8 (__thiscall **)(PathLow *, Actor *))(*(_DWORD *)a1->pathing + 0x20))(a1->pathing, v10) ) /*0x6453ca*/
      {
        ProcessLevel = Actor::GetProcessLevel(v10); /*0x6453db*/
        if ( !sub_68ABA0((int *)a1->pathing, v20, a2, a3, (TESObjectREFR *)v10) ) /*0x6453e4*/
          return 0; /*0x6453e4*/
        if ( ProcessLevel != Actor::GetProcessLevel(v10) /*0x645408*/
          || ProcessLevel != MobileObject_GetProcessLevel((MobileObject *)v10)
          || !a1->pathing )
        {
          break; /*0x645408*/
        }
      }
      if ( sub_6899E0((_DWORD *)a1->pathing) ) /*0x645415*/
      {
        ((void (__thiscall *)(Actor *, int))v10->vtbl->super.super.Unk_60)(v10, 1); /*0x6454e9*/
        return 1; /*0x6454e9*/
      }
      v22 = Actor::GetProcessLevel(v10); /*0x64542e*/
      if ( (*(unsigned __int8 (__thiscall **)(PathLow *))(*(_DWORD *)a1->pathing + 0xC))(a1->pathing) ) /*0x645433*/
      {
        v23 = (float ***)a1->pathing; /*0x645439*/
        v24 = (void (__thiscall **)(PathLow *, Actor *, int, _DWORD))(*v23 + 5); /*0x645440*/
        sub_68A160(v23); /*0x645443*/
        (*v24)(a1->pathing, v10, v25, 0); /*0x64544f*/
      }
      if ( !Actor_IsCreature(v10) /*0x64547a*/
        && !v10->vtbl->GetMountedHorse(v10)
        && ((unsigned __int8 (__thiscall *)(LowProcess *, Actor *, _DWORD))v10->members.super.process->Unk_E7)(
             v10->members.super.process,
             v10,
             0) )
      {
        return 0; /*0x64547e*/
      }
      v26 = destinationWorldspace; /*0x645487*/
      (*(void (__stdcall **)(Actor *, float))(*(_DWORD *)a1->pathing + 0x1C))( /*0x645495*/
        v10,
        COERCE_FLOAT(LODWORD(destinationWorldspace)));
      destinationWorldspace = v26; /*0x645497*/
      if ( v22 != Actor::GetProcessLevel(v10) /*0x6454bf*/
        || v22 != MobileObject_GetProcessLevel((MobileObject *)v10)
        || !a1->pathing
        || (*(unsigned __int8 (__thiscall **)(PathLow *))(*(_DWORD *)a1->pathing + 0x2C))(a1->pathing) )
      {
        return 1; /*0x6454c3*/
      }
      v20 = 0.0; /*0x6454c5*/
      if ( destinationWorldspace <= 0.0 ) /*0x6454d0*/
        return 1; /*0x6454dc*/
    }
  }
  return 1; /*0x64534b*/
}
