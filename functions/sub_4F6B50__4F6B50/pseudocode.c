char __usercall sub_4F6B50@<al>(
        int a1@<esi>,
        double a2@<st2>,
        double a3@<st1>,
        double a4@<st0>,
        TESObjectREFR *arg0,
        int responsibility,
        int a7,
        double *a8)
{
  int v8; // ebx
  TESObjectREFR *v9; // edi
  bool v10; // zf
  _DWORD *v11; // eax
  _DWORD *v12; // ebp
  _DWORD *v13; // ebx
  int v14; // eax
  int v15; // eax
  int v16; // eax
  float a5; // [esp+10h] [ebp-2Ch]
  bool IsCreature; // [esp+18h] [ebp-24h]
  int friendlyFight_; // [esp+30h] [ebp-Ch]
  int disposition; // [esp+38h] [ebp-4h]
  int retaddr; // [esp+3Ch] [ebp+0h]

  v8 = 0;
  v9 = 0;
  if ( responsibility )
  {
    if ( (unsigned int)*(unsigned __int8 *)(responsibility + 4) - 0x31 <= 2 )
      v9 = (TESObjectREFR *)responsibility;
  }
  if ( arg0 && arg0->vtbl->IsActor(arg0) && v9 )
  {
    LOBYTE(disposition) = ((int (__usercall *)@<eax>(TESObjectREFR *@<ecx>, int, int, double@<st0>, double@<st1>, double@<st2>))v9->vtbl[1].GetSleepState)(
                            v9,
                            1,
                            a1,
                            a4,
                            a3,
                            a2);
    retaddr = ((int (__thiscall *)(TESObjectREFR *, TESObjectREFR *))arg0->vtbl[1].super.Unk_1F)(arg0, v9);
    LOBYTE(responsibility) = 0;
    if ( (_BYTE)disposition )
    {
      if ( ((int (__thiscall *)(TESObjectREFR *))v9->vtbl[1].IsMobileObject)(v9) )
      {
        v10 = byte_B333B8 == 0;
        a7 = 0;
        if ( v10 )
        {
          v11 = (_DWORD *)((int (__thiscall *)(TESObjectREFR *))v9->vtbl[1].IsMobileObject)(v9);
          sub_6144D0(v11, arg0, (TESObjectREFR **)&a7);
          if ( a7 )
          {
            v12 = sub_67CF50((int ***)&dword_B3BDB0, 0xC, a7);
            v13 = v12;
            if ( v12 )
            {
              while ( *v12 )
              {
                v14 = sub_67B6B0((int **)*v12, a7, 0);
                if ( v14 && *(_BYTE *)(v14 + 4) )
                {
                  LOBYTE(responsibility) = 1;
                  break;
                }
                v12 = (_DWORD *)v12[1];
                if ( !v12 )
                  break;
              }
              BSSimpleList_Clear(v13);
            }
            FormHeapFree((unsigned int)v13);
          }
        }
      }
    }
    ((void (__thiscall *)(TESObjectREFR *, int))arg0->vtbl[1].Unk_37)(arg0, 0x24);
    IsCreature = Actor_IsCreature((Actor *)arg0);
    a5 = TesObjectREF_GetDistance(arg0, v9, 0);
    v15 = ((int (__thiscall *)(TESObjectREFR *))arg0->vtbl[1].Unk_37)(arg0);
    shouldActorFight(
      disposition,
      friendlyFight_,
      v15,
      COERCE_FLOAT(0x21),
      SLOBYTE(a5),
      disposition,
      IsCreature,
      responsibility);
    v8 = v16;
    *a8 = (double)v16;
  }
  if ( IsConsoleMode )
    Interface_ConsolePrint("GetShouldAttack >> %i", v8);
  return 1;
}
