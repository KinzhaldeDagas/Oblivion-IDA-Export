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
  Actor ****v11; // eax
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

  v8 = 0; /*0x4f6b5c*/
  v9 = 0; /*0x4f6b5e*/
  if ( responsibility ) /*0x4f6b62*/
  {
    if ( (unsigned int)*(unsigned __int8 *)(responsibility + 4) - 0x31 <= 2 ) /*0x4f6b6e*/
      v9 = (TESObjectREFR *)responsibility; /*0x4f6b70*/
  }
  if ( arg0 && arg0->vtbl->IsActor(arg0) && v9 ) /*0x4f6b95*/
  {
    LOBYTE(disposition) = ((int (__usercall *)@<eax>(TESObjectREFR *@<ecx>, int, int, double@<st0>, double@<st1>, double@<st2>))v9->vtbl[1].GetSleepState)( /*0x4f6bb6*/
                            v9,
                            1,
                            a1,
                            a4,
                            a3,
                            a2);
    retaddr = ((int (__thiscall *)(TESObjectREFR *, TESObjectREFR *))arg0->vtbl[1].super.Unk_1F)(arg0, v9); /*0x4f6bc2*/
    LOBYTE(responsibility) = 0; /*0x4f6bc6*/
    if ( (_BYTE)disposition ) /*0x4f6bcb*/
    {
      if ( ((int (__thiscall *)(TESObjectREFR *))v9->vtbl[1].IsMobileObject)(v9) ) /*0x4f6bdb*/
      {
        v10 = unk_B333B8 == 0; /*0x4f6be5*/
        a7 = 0; /*0x4f6bec*/
        if ( v10 ) /*0x4f6bf0*/
        {
          v11 = (Actor ****)((int (__thiscall *)(TESObjectREFR *))v9->vtbl[1].IsMobileObject)(v9); /*0x4f6c02*/
          sub_6144D0(v11, arg0, (TESObjectREFR **)&a7); /*0x4f6c06*/
          if ( a7 ) /*0x4f6c15*/
          {
            v12 = sub_67CF50((int ***)&qword_B3BB2C[0xA1], 0xC, a7); /*0x4f6c24*/
            v13 = v12; /*0x4f6c28*/
            if ( v12 ) /*0x4f6c2a*/
            {
              while ( *v12 ) /*0x4f6c35*/
              {
                v14 = sub_67B6B0((int **)*v12, a7, 0); /*0x4f6c3e*/
                if ( v14 && *(_BYTE *)(v14 + 4) ) /*0x4f6c47*/
                {
                  LOBYTE(responsibility) = 1; /*0x4f6c56*/
                  break; /*0x4f6c56*/
                }
                v12 = (_DWORD *)v12[1]; /*0x4f6c4d*/
                if ( !v12 ) /*0x4f6c52*/
                  break; /*0x4f6c52*/
              }
              BSSimpleList_Clear(v13); /*0x4f6c5b*/
            }
            FormHeapFree((unsigned int)v13); /*0x4f6c63*/
          }
        }
      }
    }
    ((void (__thiscall *)(TESObjectREFR *, int))arg0->vtbl[1].Unk_37)(arg0, 0x24); /*0x4f6c77*/
    IsCreature = Actor_IsCreature((Actor *)arg0); /*0x4f6c8a*/
    a5 = TesObjectREF_GetDistance(arg0, v9, 0); /*0x4f6c9f*/
    v15 = ((int (__thiscall *)(TESObjectREFR *))arg0->vtbl[1].Unk_37)(arg0); /*0x4f6ca6*/
    shouldActorFight( /*0x4f6cb3*/
      disposition,
      friendlyFight_,
      v15,
      COERCE_FLOAT(0x21),
      SLOBYTE(a5),
      disposition,
      IsCreature,
      responsibility);
    v8 = v16; /*0x4f6cb8*/
    *a8 = (double)v16; /*0x4f6cc9*/
  }
  if ( MEMORY[0xB361AC] ) /*0x4f6ccb*/
    Interface_ConsolePrint("GetShouldAttack >> %i", v8); /*0x4f6cdb*/
  return 1; /*0x4f6ce3*/
}
