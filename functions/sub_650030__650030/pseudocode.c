char __userpurge sub_650030@<al>(
        int a1@<ecx>,
        int a2@<ebx>,
        int a3@<ebp>,
        double a4@<st2>,
        double a5@<st1>,
        double a6@<st0>,
        Actor *a7)
{
  int v8; // eax
  int v9; // ecx
  int v10; // edi
  char result; // al
  ActorAnimData *v13; // ebp
  int v14; // ecx
  bool v15; // bl
  int v16; // eax
  unsigned __int8 **v17; // eax
  UInt32 v18; // ebx
  UInt32 v19; // eax
  double v20; // st7
  double v21; // st7
  UInt32 v22; // eax
  double v23; // st7
  int v26; // [esp+50h] [ebp-14h]
  float v27; // [esp+50h] [ebp-14h]
  int v28; // [esp+5Ch] [ebp-8h] BYREF
  float v29; // [esp+60h] [ebp-4h]
  bool v30; // [esp+68h] [ebp+4h]
  float v31; // [esp+68h] [ebp+4h]

  v8 = (*(int (__usercall **)@<eax>(int@<ecx>, double@<st0>, double@<st1>, double@<st2>))(*(_DWORD *)a1 + 0x184))( /*0x65003f*/
         a1,
         a6,
         a5,
         a4);
  v9 = *(_DWORD *)(a1 + 0x120); /*0x650041*/
  v10 = v8; /*0x650049*/
  if ( (!v9 || !(*(int (__thiscall **)(int))(*(_DWORD *)v9 + 0x154))(v9)) && (!v10 || *(_BYTE *)(v10 + 0x20) != 0x1B) ) /*0x650067*/
    return 0; /*0x6505b1*/
  if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)a1 + 0x304))(a1) /*0x650087*/
    && !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)a1 + 0x210))(a1) )
  {
    (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)a1 + 0x300))(a1, 0); /*0x650099*/
    return 1; /*0x6500a2*/
  }
  *(_DWORD *)(a1 + 0x30) = 0; /*0x6500a9*/
  v13 = a7->vtbl->super.super.GetAnimData(a7); /*0x6500bf*/
  if ( (unsigned int)Actor_GetCurrentAction(a7) <= 9 ) /*0x6500c9*/
    return 1; /*0x6500d3*/
  v14 = *(_DWORD *)(a1 + 0x120); /*0x6500d6*/
  v15 = 0; /*0x6500dd*/
  v30 = 0; /*0x6500e1*/
  if ( v14 ) /*0x6500e5*/
  {
    (*(void (__thiscall **)(int))(*(_DWORD *)v14 + 0x170))(v14); /*0x6500ef*/
    v30 = sub_4AE5D0(*(unsigned __int8 *)(a1 + 0x136)); /*0x650101*/
    v15 = v30; /*0x650105*/
  }
  if ( !*(_BYTE *)(a1 + 0x11D) ) /*0x650107*/
  {
    if ( v15 ) /*0x650116*/
    {
      v16 = *(_DWORD *)(a1 + 8); /*0x650118*/
      if ( !v16 || *(_BYTE *)(v16 + 0x20) != 0x1B ) /*0x650123*/
        (*(void (__thiscall **)(int, Actor *, _DWORD, _DWORD))(*(_DWORD *)a1 + 0x588))(a1, a7, 0, 0); /*0x650134*/
    }
    (*(void (__thiscall **)(int, int, _DWORD, int, int))(*(_DWORD *)a1 + 0x2C4))(a1, 0x400, 0, a2, a3); /*0x650147*/
    if ( a7 != (Actor *)reference ) /*0x65014f*/
      (*(void (__thiscall **)(int, Actor *))(*(_DWORD *)a1 + 0x194))(a1, a7); /*0x65015c*/
    if ( !((unsigned __int8 (__thiscall *)(Actor *))a7->vtbl->Unk_D6)(a7) /*0x65017c*/
      && sub_4D72C0(*(TESObjectREFR **)(a1 + 0x120), *(unsigned __int8 *)(a1 + 0x124)) )
    {
      (*(void (__thiscall **)(int, Actor *, _DWORD))(*(_DWORD *)a1 + 0x370))(a1, a7, 0); /*0x650196*/
      return 1; /*0x6501a1*/
    }
    if ( !((unsigned __int8 (__thiscall *)(Actor *))a7->vtbl->Unk_D6)(a7) ) /*0x6501ae*/
    {
      if ( v15 ) /*0x6501b6*/
        (*(void (__thiscall **)(int, Actor *, int, _DWORD, _DWORD))(*(_DWORD *)a1 + 0x370))( /*0x6501d4*/
          a1,
          a7,
          6,
          *(_DWORD *)(a1 + 0x120),
          *(unsigned __int8 *)(a1 + 0x124));
      else
        (*(void (__thiscall **)(int, Actor *, int, _DWORD, _DWORD))(*(_DWORD *)a1 + 0x370))( /*0x6501f4*/
          a1,
          a7,
          1,
          *(_DWORD *)(a1 + 0x120),
          *(unsigned __int8 *)(a1 + 0x124));
      if ( !(*(unsigned __int8 (__thiscall **)(int, Actor *))(*(_DWORD *)a1 + 0x384))(a1, a7) ) /*0x650201*/
        PrintError( /*0x650214*/
          "Missing furniture dynamic idle for marker %d in the editor's idle manager.",
          *(unsigned __int8 *)(a1 + 0x136));
    }
    a3 = *(unsigned __int8 *)(a1 + 0x124); /*0x650235*/
    a2 = *(_DWORD *)(a1 + 0x120); /*0x650236*/
    if ( v15 ) /*0x65021e*/
      (*(void (__thiscall **)(int, Actor *, int))(*(_DWORD *)a1 + 0x370))(a1, a7, 7); /*0x65023c*/
    else
      (*(void (__thiscall **)(int, Actor *, int))(*(_DWORD *)a1 + 0x370))(a1, a7, 2); /*0x65025c*/
    v17 = TESIdleForm_FindIdleForActor( /*0x65026c*/
            (TESObjectREFR *)MEMORY[0xB362C0],
            (TESObjectREFR *)a7,
            *(TESObjectREFR **)(a1 + 0x120));
    v18 = (UInt32)v17; /*0x650271*/
    if ( !v17 ) /*0x650275*/
    {
      *(_BYTE *)(a1 + 0x11D) = 0; /*0x650279*/
      return 0; /*0x650286*/
    }
    v19 = TESIdleForm_GetQueuedAnimType(v17); /*0x65028b*/
    ActorAnimData_ReplaceCurrentIdleLoader((int **)v13, v18, v19); /*0x650294*/
    ((void (__thiscall *)(Actor *, int))a7->vtbl->super.Unk_73)(a7, a1 + 0x128); /*0x6502aa*/
    *(float *)&v13->unk0C = g_zeroNiPoint3; /*0x6502b1*/
    v13->unk10 = *(UInt32 *)(&g_zeroNiPoint3 + 1); /*0x6502ba*/
    *(float *)&v13->unk14 = MEMORY[0xB3F9B0]; /*0x6502c3*/
    sub_4D7300(*(_BYTE **)(a1 + 0x120), *(unsigned __int8 *)(a1 + 0x124), 1); /*0x6502d6*/
    sub_65AC20((MobileObject *)a7, 1); /*0x6502df*/
    v15 = v30; /*0x6502e4*/
  }
  switch ( *(_BYTE *)(a1 + 0x11D) ) /*0x650302*/
  {
    case 2: /*0x650302*/
    case 7: /*0x650302*/
      v31 = (double)*(unsigned __int16 *)(a1 + 0x134) / dbl_A2FC70; /*0x650324*/
      *(float *)&v28 = 0.0; /*0x65032a*/
      sub_683D80((int)a7, v31, (float *)&v28); /*0x650336*/
      v29 = fabs(v31); /*0x650348*/
      v20 = v29; /*0x65034c*/
      v29 = (double)MEMORY[0xB36C18] * dbl_A31C78; /*0x65035c*/
      if ( v29 >= v20 ) /*0x65036b*/
      {
        sub_5E05F0(a7, 0x30); /*0x650390*/
        ((void (__thiscall *)(Actor *, _DWORD, int, int))a7->vtbl->super.Unk_7A)(a7, LODWORD(v31), a2, a3); /*0x6503a7*/
        ((void (__thiscall *)(Actor *, int))a7->vtbl->super.Unk_73)(a7, a1 + 0x128); /*0x6503ba*/
        *(float *)&v13->unk0C = g_zeroNiPoint3; /*0x6503c3*/
        v13->unk10 = *(UInt32 *)(&g_zeroNiPoint3 + 1); /*0x6503cc*/
        *(float *)&v13->unk14 = MEMORY[0xB3F9B0]; /*0x6503d5*/
        if ( !v15 ) /*0x6503d8*/
        {
          (*(void (__thiscall **)(int, Actor *, int))(*(_DWORD *)a1 + 0x370))(a1, a7, 3); /*0x650420*/
          goto LABEL_40; /*0x650420*/
        }
        (*(void (__thiscall **)(int, Actor *, int))(*(_DWORD *)a1 + 0x370))(a1, a7, 8); /*0x6503f6*/
        result = 1; /*0x6503fb*/
      }
      else
      {
        sub_685530(a7, v31, 1); /*0x650378*/
        result = 1; /*0x650383*/
      }
      break; /*0x650389*/
    case 3: /*0x650302*/
    case 8: /*0x650302*/
      if ( ActorAnimData_IsCurrentIdleReady(v13) /*0x650468*/
        && (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 0x2D0))(a1) == 0xFFFFFFFF
        && (!ActorAnimData_GetNormalizedSequenceSlot(v13, 0)
         || ActorAnimData_GetNormalizedSequenceSlot(v13, 0)[8].next == (PowerListEntry *)1) )
      {
        v13->unkC4 = 1; /*0x65046a*/
        *(float *)&v13->unk0C = g_zeroNiPoint3; /*0x650476*/
        v13->unk10 = *(UInt32 *)(&g_zeroNiPoint3 + 1); /*0x65047f*/
        *(float *)&v13->unk14 = MEMORY[0xB3F9B0]; /*0x650488*/
        ((void (__thiscall *)(Actor *, int))a7->vtbl->super.Unk_73)(a7, a1 + 0x128); /*0x65049c*/
        ActorAnimData_StartQueuedIdleAction(v13, (PlayerCharacter *)a7); /*0x6504a1*/
        Actor_ProcessAction(a7, a4, a5, 1.0, 1.0, 1.0); /*0x6504b4*/
        v13->unkC4 = 1; /*0x6504ba*/
        result = 1; /*0x6504c3*/
      }
      else
      {
        if ( !ActorAnimData_IsIdleInactive(v13) ) /*0x6504d5*/
          goto LABEL_40; /*0x6504d5*/
        if ( ((unsigned __int8 (__thiscall *)(Actor *, int, int))a7->vtbl->Unk_D6)(a7, a2, a3) ) /*0x6504e5*/
        {
          (*(void (__thiscall **)(int, Actor *, _DWORD))(*(_DWORD *)a1 + 0x370))(a1, a7, 0); /*0x6504fc*/
          sub_65AC20((MobileObject *)a7, 0); /*0x650502*/
          result = 0; /*0x65050a*/
        }
        else
        {
          v26 = *(unsigned __int8 *)(a1 + 0x136); /*0x650520*/
          (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(a1 + 0x120) + 0x170))(*(_DWORD *)(a1 + 0x120)); /*0x650529*/
          v21 = sub_4AEBE0(v26); /*0x65052d*/
          v27 = v21; /*0x650535*/
          sub_659B90((int *)a7, v21, v27); /*0x650538*/
          v13->unkC4 = 1; /*0x65053f*/
          if ( v15 ) /*0x650546*/
          {
            v22 = sub_5E12B0(a7); /*0x65054a*/
            if ( v22 ) /*0x650551*/
              (*(void (__thiscall **)(UInt32, int, _DWORD))(*(_DWORD *)v22 + 0x9C))(v22, 1, 0); /*0x650561*/
            (*(void (__thiscall **)(int, Actor *, int))(*(_DWORD *)a1 + 0x370))(a1, a7, 9); /*0x650576*/
            goto LABEL_40; /*0x650576*/
          }
          v23 = ((double (__thiscall *)(int, Actor *, int))*(_DWORD *)(*(_DWORD *)a1 + 0x370))(a1, a7, 4); /*0x650597*/
          HideEquipment((TESObjectREFR *)a7, a4, a5, v23, 0, 0); /*0x65059f*/
          result = 1; /*0x6505a7*/
        }
      }
      break; /*0x6504c9*/
    default:
LABEL_40:
      result = 1; /*0x650422*/
      break; /*0x65042b*/
  }
  return result; /*0x65009b*/
}
