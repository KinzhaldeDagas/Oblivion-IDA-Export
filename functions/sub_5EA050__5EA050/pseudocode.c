bool __userpurge sub_5EA050@<al>(TESObjectREFR *a1@<ecx>, TESObjectREFR *a2, bool a7)
{
  TESObjectREFR *v3; // edi
  bool v5; // zf
  _DWORD *v6; // eax
  _DWORD *v7; // ebp
  _DWORD *v8; // ebx
  int v9; // eax
  TESForm *v10; // eax
  TESObjectREFRVtbl *vtbl; // edx
  int v12; // eax
  int v13; // eax
  float a5; // [esp+10h] [ebp-30h]
  char v16; // [esp+18h] [ebp-28h]
  int friendlyFight_; // [esp+34h] [ebp-Ch]
  char v18; // [esp+38h] [ebp-8h]
  int disposition; // [esp+3Ch] [ebp-4h]

  v3 = a2;
  v18 = ((int (__thiscall *)(TESObjectREFR *, int))a2->vtbl[1].GetSleepState)(a2, 1);
  friendlyFight_ = 0;
  disposition = ((int (__thiscall *)(TESObjectREFR *, TESObjectREFR *))a1->vtbl[1].super.Unk_1F)(a1, v3);
  if ( v18 )
  {
    if ( ((int (__thiscall *)(TESObjectREFR *))v3->vtbl[1].IsMobileObject)(v3) )
    {
      v5 = byte_B333B8 == 0;
      a2 = 0;
      if ( v5 )
      {
        v6 = (_DWORD *)((int (__thiscall *)(TESObjectREFR *))v3->vtbl[1].IsMobileObject)(v3);
        friendlyFight_ = sub_6144D0(v6, a1, &a2);
        if ( a2 )
        {
          v7 = sub_67CF50((int ***)&dword_B3BDB0, 0xC, (int)a2);
          v8 = v7;
          if ( v7 )
          {
            do
            {
              if ( !*v7 )
                break;
              v9 = sub_67B6B0((int **)*v7, (int)a2, 0);
              if ( v9 )
              {
                if ( *(_BYTE *)(v9 + 4) )
                  break;
              }
              v7 = (_DWORD *)v7[1];
            }
            while ( v7 );
            BSSimpleList_Clear(v8);
          }
          FormHeapFree((unsigned int)v8);
        }
      }
    }
  }
  v10 = a1->vtbl->GetBaseForm(a1);
  vtbl = a1->vtbl;
  a7 = v10->member.type == kFormType_Creature;
  ((void (__thiscall *)(TESObjectREFR *, int))vtbl[1].Unk_37)(a1, 0x24);
  v16 = a7;
  a5 = TesObjectREF_GetDistance(a1, v3, 0);
  v12 = ((int (__thiscall *)(TESObjectREFR *))a1->vtbl[1].Unk_37)(a1);
  shouldActorFight(disposition, friendlyFight_, v12, COERCE_FLOAT(0x21), SLOBYTE(a5), disposition, v16, friendlyFight_);
  return v13 > 0;
}
