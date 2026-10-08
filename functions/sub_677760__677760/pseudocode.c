TESObjectREFR **__userpurge sub_677760@<eax>(
        int a1@<ecx>,
        char a2@<bl>,
        double a3@<st2>,
        double a4@<st0>,
        double a5@<st1>,
        TESObjectREFR *friendlyFight_,
        float arg4,
        int a8,
        int a9,
        int a10,
        TESObjectREFR *a11)
{
  TESObjectREFR *v11; // ebp
  int v13; // eax
  TESObjectREFR **result; // eax
  TESObjectREFR **v15; // edi
  TESObjectREFR *v16; // esi
  double v17; // st7
  double v18; // st6
  int v19; // eax
  int v20; // ebx
  double v21; // st7
  double v22; // st7
  _DWORD *v23; // edi
  int v24; // eax
  int v25; // eax
  int v26; // eax
  int v27; // eax
  float v28; // [esp+14h] [ebp-40h]
  int a6; // [esp+1Ch] [ebp-38h]
  int v30; // [esp+24h] [ebp-30h]
  int v32; // [esp+28h] [ebp-2Ch]
  int v33; // [esp+2Ch] [ebp-28h]
  int v34; // [esp+38h] [ebp-1Ch]
  int v35; // [esp+3Ch] [ebp-18h]
  TESObjectREFR **v36; // [esp+40h] [ebp-14h]
  TESObjectREFR **v37; // [esp+44h] [ebp-10h]
  _DWORD *v38; // [esp+48h] [ebp-Ch]
  int v39; // [esp+50h] [ebp-4h]
  BOOL retaddr; // [esp+54h] [ebp+0h]

  v11 = friendlyFight_; /*0x677764*/
  v35 = 0; /*0x677777*/
  if ( ((int (__usercall *)@<eax>(TESObjectREFR *@<ecx>, double@<st0>, double@<st1>, double@<st2>))friendlyFight_->vtbl[1].IsMobileObject)( /*0x677784*/
         friendlyFight_,
         a4,
         a5,
         a3) )
  {
    v13 = ((int (__thiscall *)(TESObjectREFR *))v11->vtbl[1].IsMobileObject)(v11); /*0x67779a*/
    v35 = CombatController_GetCurrentTarget(v13); /*0x6777a3*/
  }
  result = (TESObjectREFR **)ActorList_ReturnHead((ActorList *)(a1 + 0x68)); /*0x6777aa*/
  v15 = result; /*0x6777af*/
  v36 = result; /*0x6777b3*/
  if ( result ) /*0x6777b7*/
  {
    while ( v15[1] || *v15 ) /*0x6777c4*/
    {
      if ( (*v15)->vtbl->IsActor(*v15) ) /*0x6777dd*/
      {
        v16 = *v15; /*0x6777e7*/
        if ( *v15 ) /*0x6777e7*/
        {
          if ( v16 != a11 /*0x677837*/
            && v16 != v11
            && !((unsigned __int8 (__thiscall *)(TESObjectREFR *, int))v16->vtbl[1].GetSleepState)(v16, 1)
            && !v16->vtbl->IsDead(v16, 0)
            && (v16->member.super.flags & 0x800) == 0 )
          {
            v17 = TESObjectREFR::GetDistanceToPoint((float *)v16, &arg4); /*0x677844*/
            v18 = flt_B36778[0x74]; /*0x677849*/
            if ( v18 >= v17 ) /*0x677856*/
            {
              LOBYTE(friendlyFight_) = 0; /*0x67786c*/
              Actor_GetDetectionLevelAgainstActor(v16, (int)v15, a3, v18, v17, 0, v11, &friendlyFight_, 0, 0, 0, a2); /*0x677871*/
              v39 = v19; /*0x677876*/
              v20 = 0; /*0x67787e*/
              if ( v35 ) /*0x677882*/
                v20 = ((int (__thiscall *)(TESObjectREFR *, int))v16->vtbl[1].super.Unk_1F)(v16, v35); /*0x677891*/
              v21 = (double)(*((int (__thiscall **)(TESObjectREFRVtbl *, TESObjectREFR *, int))v16[1].vtbl->super.super.InitializeComponent /*0x6778aa*/
                             + 0x72))(
                              v16[1].vtbl,
                              v11,
                              v32);
              if ( (_BYTE)a11 ) /*0x6778ae*/
                v22 = v21 + flt_B36778[0x74]; /*0x6778b0*/
              else
                v22 = v21 + unk_B36CA0; /*0x6778b8*/
              v35 = Double_To_SInt32(v22); /*0x6778c3*/
              if ( v36 ) /*0x6778d2*/
              {
                v23 = sub_67CF50((int ***)&qword_B3BB2C[0xA1], 0xC, (int)v36); /*0x6778e1*/
                v38 = v23; /*0x6778e5*/
                if ( v23 ) /*0x6778e9*/
                {
                  do /*0x677911*/
                  {
                    if ( !*v23 ) /*0x6778f0*/
                      break; /*0x6778f4*/
                    v24 = sub_67B6B0((int **)*v23, (int)v36, 0); /*0x6778fd*/
                    if ( v24 ) /*0x677904*/
                    {
                      if ( *(_BYTE *)(v24 + 4) ) /*0x677906*/
                        break; /*0x67790a*/
                    }
                    v23 = (_DWORD *)v23[1]; /*0x67790c*/
                  }
                  while ( v23 ); /*0x677911*/
                  BSSimpleList_Clear(v38); /*0x67791e*/
                }
                FormHeapFree((unsigned int)v38); /*0x677928*/
                v15 = v37; /*0x67792d*/
              }
              v33 = ((int (__thiscall *)(TESObjectREFR *, int, int))v16->vtbl[1].Unk_37)(v16, 0x24, v33); /*0x677946*/
              a2 = v39; /*0x677947*/
              LOBYTE(v25) = Actor_IsCreature((Actor *)v16); /*0x67794a*/
              v30 = v25; /*0x677955*/
              *(float *)&a6 = TesObjectREF_GetDistance(v16, v11, 0); /*0x677968*/
              v28 = COERCE_FLOAT(((int (__thiscall *)(TESObjectREFR *))v16->vtbl[1].Unk_37)(v16)); /*0x677971*/
              v26 = ((int (__thiscall *)(TESObjectREFR *))v16->vtbl[1].super.Unk_1F)(v16); /*0x67797e*/
              shouldActorFight(v26, (int)v11, v20, v28, 0x21, a6, retaddr, v30); /*0x677981*/
              if ( v34 <= 0 || v27 <= 0 || v39 > 0 ) /*0x67799a*/
              {
                if ( Actor::IsSleeping(v16) && v34 > 0 ) /*0x6779ca*/
                  v16->vtbl[1].Unk_5E(v16); /*0x6779d6*/
              }
              else
              {
                (*((void (__thiscall **)(TESObjectREFRVtbl *, TESObjectREFR *, TESObjectREFR *, _DWORD, _DWORD, _DWORD, int, _DWORD, _DWORD, _DWORD, _DWORD))v16[1].vtbl->super.super.InitializeComponent /*0x6779b9*/
                 + 0x8A))(
                  v16[1].vtbl,
                  v16,
                  v11,
                  0,
                  0,
                  0,
                  1,
                  0,
                  0,
                  0,
                  0);
              }
            }
          }
        }
      }
      result = (TESObjectREFR **)v15[1]; /*0x6779d8*/
      v36 = result; /*0x6779dd*/
      if ( !result ) /*0x6779e1*/
        break; /*0x6779e1*/
      v15 = (TESObjectREFR **)v15[1]; /*0x6777c0*/
    }
  }
  return result; /*0x6779e8*/
}
