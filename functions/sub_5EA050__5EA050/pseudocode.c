bool __userpurge sub_5EA050@<al>(TESObjectREFR *a1@<ecx>, TESObjectREFR *a2, bool a7)
{
  TESObjectREFR *v3; // edi
  bool v5; // zf
  Actor ****v6; // eax
  _DWORD *v7; // ebp
  _DWORD *v8; // ebx
  int v9; // eax
  TESForm *v10; // eax
  TESObjectREFRVtbl *vtbl; // edx
  int v12; // eax
  int v13; // eax
  float a5; // [esp+10h] [ebp-30h]
  bool v16; // [esp+18h] [ebp-28h]
  int friendlyFight_; // [esp+34h] [ebp-Ch]
  char v18; // [esp+38h] [ebp-8h]
  int disposition; // [esp+3Ch] [ebp-4h]

  v3 = a2; /*0x5ea057*/
  v18 = ((int (__thiscall *)(TESObjectREFR *, int))a2->vtbl[1].GetSleepState)(a2, 1); /*0x5ea07a*/
  friendlyFight_ = 0; /*0x5ea07e*/
  disposition = ((int (__thiscall *)(TESObjectREFR *, TESObjectREFR *))a1->vtbl[1].super.Unk_1F)(a1, v3); /*0x5ea086*/
  if ( v18 ) /*0x5ea08f*/
  {
    if ( ((int (__thiscall *)(TESObjectREFR *))v3->vtbl[1].IsMobileObject)(v3) ) /*0x5ea09f*/
    {
      v5 = unk_B333B8 == 0; /*0x5ea0a9*/
      a2 = 0; /*0x5ea0b0*/
      if ( v5 ) /*0x5ea0b4*/
      {
        v6 = (Actor ****)((int (__thiscall *)(TESObjectREFR *))v3->vtbl[1].IsMobileObject)(v3); /*0x5ea0c6*/
        friendlyFight_ = sub_6144D0(v6, a1, &a2); /*0x5ea0cf*/
        if ( a2 ) /*0x5ea0d9*/
        {
          v7 = sub_67CF50((int ***)&qword_B3BB2C[0xA1], 0xC, (int)a2); /*0x5ea0e8*/
          v8 = v7; /*0x5ea0ec*/
          if ( v7 ) /*0x5ea0ee*/
          {
            do /*0x5ea112*/
            {
              if ( !*v7 ) /*0x5ea0f0*/
                break; /*0x5ea0f5*/
              v9 = sub_67B6B0((int **)*v7, (int)a2, 0); /*0x5ea0fe*/
              if ( v9 ) /*0x5ea105*/
              {
                if ( *(_BYTE *)(v9 + 4) ) /*0x5ea107*/
                  break; /*0x5ea10b*/
              }
              v7 = (_DWORD *)v7[1]; /*0x5ea10d*/
            }
            while ( v7 ); /*0x5ea112*/
            BSSimpleList_Clear(v8); /*0x5ea11d*/
          }
          FormHeapFree((unsigned int)v8); /*0x5ea123*/
        }
      }
    }
  }
  v10 = a1->vtbl->GetBaseForm(a1); /*0x5ea135*/
  vtbl = a1->vtbl; /*0x5ea13b*/
  a7 = v10->member.type == kFormType_Creature; /*0x5ea140*/
  ((void (__thiscall *)(TESObjectREFR *, int))vtbl[1].Unk_37)(a1, 0x24); /*0x5ea14e*/
  v16 = a7; /*0x5ea15e*/
  a5 = TesObjectREF_GetDistance(a1, v3, 0); /*0x5ea173*/
  v12 = ((int (__thiscall *)(TESObjectREFR *))a1->vtbl[1].Unk_37)(a1); /*0x5ea17a*/
  shouldActorFight(disposition, friendlyFight_, v12, COERCE_FLOAT(0x21), SLOBYTE(a5), disposition, v16, friendlyFight_); /*0x5ea187*/
  return v13 > 0; /*0x5ea18f*/
}
