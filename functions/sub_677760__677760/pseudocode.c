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
  int v19; // ebx
  double v20; // st7
  double v21; // st7
  _DWORD *v22; // edi
  int v23; // eax
  int v24; // eax
  int v25; // eax
  int v26; // eax
  float v27; // [esp+14h] [ebp-40h]
  int a6; // [esp+1Ch] [ebp-38h]
  int v29; // [esp+24h] [ebp-30h]
  int v31; // [esp+28h] [ebp-2Ch]
  int v32; // [esp+2Ch] [ebp-28h]
  int v33; // [esp+38h] [ebp-1Ch]
  int v34; // [esp+3Ch] [ebp-18h]
  TESObjectREFR **v35; // [esp+40h] [ebp-14h]
  TESObjectREFR **v36; // [esp+44h] [ebp-10h]
  _DWORD *v37; // [esp+48h] [ebp-Ch]
  int DetectionLevel; // [esp+50h] [ebp-4h]
  BOOL retaddr; // [esp+54h] [ebp+0h]

  v11 = friendlyFight_;
  v34 = 0;
  if ( ((int (__usercall *)@<eax>(TESObjectREFR *@<ecx>, double@<st0>, double@<st1>))friendlyFight_->vtbl[1].IsMobileObject)(
         friendlyFight_,
         a4,
         a5) )
  {
    v13 = ((int (__thiscall *)(TESObjectREFR *))v11->vtbl[1].IsMobileObject)(v11);
    v34 = sub_6135F0(v13);
  }
  result = (TESObjectREFR **)sub_7616D0((ActorList *)(a1 + 0x68));
  v15 = result;
  v35 = result;
  if ( result )
  {
    while ( v15[1] || *v15 )
    {
      if ( (*v15)->vtbl->IsActor(*v15) )
      {
        v16 = *v15;
        if ( *v15 )
        {
          if ( v16 != a11
            && v16 != v11
            && !((unsigned __int8 (__thiscall *)(TESObjectREFR *, int))v16->vtbl[1].GetSleepState)(v16, 1)
            && !v16->vtbl->IsDead(v16, 0)
            && (v16->member.super.flags & 0x800) == 0 )
          {
            v17 = sub_4D7E30((float *)v16, &arg4);
            v18 = flt_B36948;
            if ( v18 >= v17 )
            {
              LOBYTE(friendlyFight_) = 0;
              DetectionLevel = Actor_GetDetectionLevel(
                                 v16,
                                 (int)v15,
                                 a3,
                                 v18,
                                 v17,
                                 0,
                                 v11,
                                 &friendlyFight_,
                                 0,
                                 0,
                                 0,
                                 a2);
              v19 = 0;
              if ( v34 )
                v19 = ((int (__thiscall *)(TESObjectREFR *, int))v16->vtbl[1].super.Unk_1F)(v16, v34);
              v20 = (double)(*((int (__thiscall **)(TESObjectREFRVtbl *, TESObjectREFR *, int))v16[1].vtbl->super.super.InitializeComponent
                             + 0x72))(
                              v16[1].vtbl,
                              v11,
                              v31);
              if ( (_BYTE)a11 )
                v21 = v20 + flt_B36948;
              else
                v21 = v20 + flt_B36CA0;
              v34 = Double_To_SInt32(v21);
              if ( v35 )
              {
                v22 = sub_67CF50((int ***)&dword_B3BDB0, 0xC, (int)v35);
                v37 = v22;
                if ( v22 )
                {
                  do
                  {
                    if ( !*v22 )
                      break;
                    v23 = sub_67B6B0((int **)*v22, (int)v35, 0);
                    if ( v23 )
                    {
                      if ( *(_BYTE *)(v23 + 4) )
                        break;
                    }
                    v22 = (_DWORD *)v22[1];
                  }
                  while ( v22 );
                  BSSimpleList_Clear(v37);
                }
                FormHeapFree((unsigned int)v37);
                v15 = v36;
              }
              v32 = ((int (__thiscall *)(TESObjectREFR *, int, int))v16->vtbl[1].Unk_37)(v16, 0x24, v32);
              a2 = DetectionLevel;
              LOBYTE(v24) = Actor_IsCreature((Actor *)v16);
              v29 = v24;
              *(float *)&a6 = TesObjectREF_GetDistance(v16, v11, 0);
              v27 = COERCE_FLOAT(((int (__thiscall *)(TESObjectREFR *))v16->vtbl[1].Unk_37)(v16));
              v25 = ((int (__thiscall *)(TESObjectREFR *))v16->vtbl[1].super.Unk_1F)(v16);
              shouldActorFight(v25, (int)v11, v19, v27, 0x21, a6, retaddr, v29);
              if ( v33 <= 0 || v26 <= 0 || DetectionLevel > 0 )
              {
                if ( sub_5E0F30(v16) && v33 > 0 )
                  v16->vtbl[1].Unk_5E(v16);
              }
              else
              {
                (*((void (__thiscall **)(TESObjectREFRVtbl *, TESObjectREFR *, TESObjectREFR *, _DWORD, _DWORD, _DWORD, int, _DWORD, _DWORD, _DWORD, _DWORD))v16[1].vtbl->super.super.InitializeComponent
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
      result = (TESObjectREFR **)v15[1];
      v35 = result;
      if ( !result )
        break;
      v15 = (TESObjectREFR **)v15[1];
    }
  }
  return result;
}
