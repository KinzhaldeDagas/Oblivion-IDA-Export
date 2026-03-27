void __userpurge sub_62A660(
        HighProcess *a1@<ecx>,
        int a2@<ebx>,
        int a3@<edi>,
        double a5@<st1>,
        double st7_0@<st0>,
        Actor *a6)
{
  Actor *follow; // ebp
  TESTopic *v9; // ebx
  Unk1C *DialogueInfo; // ebx
  int v11; // eax
  int v12; // ebp
  int v13; // ebx
  unsigned int Len; // eax
  void (__thiscall *Unk_2E)(BaseProcess *__hidden, UInt32); // eax
  Unk1C *unk250; // ecx
  Unk1C *v17; // ebx
  ActorAnimData *v18; // eax
  LowProcess *process; // ecx
  MiddleHighProcess_vtbl *v20; // edx
  Actor ***p_unk03C; // ebp
  int *v22; // eax
  Actor **v23; // ebx
  TESPackage *(__thiscall *GetCurrentPackage)(BaseProcess *__hidden); // eax
  int v25; // eax
  char v26; // [esp+0h] [ebp-20h]
  int v27; // [esp+4h] [ebp-1Ch]
  int v28; // [esp+10h] [ebp-10h]
  char *v29; // [esp+18h] [ebp-8h]
  Unk1C *v30; // [esp+1Ch] [ebp-4h]
  Actor *retaddr; // [esp+20h] [ebp+0h]
  Actor *v32; // [esp+24h] [ebp+4h]

  if ( PlayerCharacter::IsSleeping_(TESDataHandler_g_PlayerRef) )
  {
    sub_5EAE70(a6, a2, a3, v28);
  }
  else
  {
    if ( !a1->follow )
      a1->Unk_155(a1, (TESChildCELL *)a6);
    follow = a1->follow;
    if ( follow )
    {
      TesObjectREF_GetDistance((TESObjectREFR *)a6, (TESObjectREFR *)follow, 0);
      if ( st7_0 > dbl_A6BEA0 )
      {
        ((void (__thiscall *)(HighProcess *, Actor *, int))a1->Unk_61)(a1, a6, 1);
      }
      else
      {
        v27 = a2;
        if ( Actor_IsNPC(a6) && follow->members.unk07C != a6 && Actor_IsNPC(follow) )
        {
          if ( a1->Unk_2F(a1) )
          {
            if ( a1->unk21C <= 0.0 )
              byte_B3B92C = 1;
            else
              a1->unk21C = a1->unk21C - flt_B33E9C;
            unk250 = a1->unk250;
            if ( unk250 )
            {
              sub_6B7C30((int)unk250);
              v17 = a1->unk250;
              if ( v17 )
              {
                sub_6B81D0(a1->unk250->unk00);
                FormHeapFree((unsigned int)v17);
              }
              a1->unk250 = 0;
            }
          }
          else
          {
            v9 = (TESTopic *)TESTopic::GEtTopic(6, 3);
            if ( v9 )
            {
              ((void (__thiscall *)(HighProcess *, _DWORD, int))a1->StopSoundITMTorchHeldLP)(a1, 0, v27);
              DialogueInfo = TESTopic::CreateDialogueInfo(v9, a6, (TESObjectREFR *)a1->follow, 0, 0);
              v30 = DialogueInfo;
              ((void (__thiscall *)(HighProcess *, Actor *))a1->Unk_120)(a1, a1->follow);
              if ( DialogueInfo )
              {
                sub_6B7BA0(DialogueInfo);
                v11 = sub_6B7C20(DialogueInfo);
                if ( v11 )
                {
                  v12 = *(_DWORD *)(v11 + 0xC);
                  v13 = *(_DWORD *)(v11 + 8);
                  v26 = bBackgroundLoadLipFiles;
                  v29 = *(char **)(v11 + 0x10);
                  Len = BSStringT_GetLen((BSStringT *)v11);
                  Actor::InitDialogue(a6, v29, (int **)a1->unk220, v13, v12, Len, 0, 0, v26, 1);
                  a1->unk21C = st7_0;
                  a1->Unk_12(a1, (UInt32)a6);
                  DialogueInfo = v30;
                  follow = retaddr;
                }
              }
              Unk_2E = a1->Unk_2E;
              a1->unk250 = DialogueInfo;
              a1->unk228 = 1;
              Unk_2E(a1, 1);
            }
          }
          if ( byte_B3B92C )
          {
            a1->unk250 = 0;
            a1->unk228 = 0;
          }
        }
        else if ( !a1->Unk_2F(a1) )
        {
          a1->Unk_12(a1, (UInt32)a6);
          a1->Unk_2E(a1, 1);
        }
        v18 = a6->vtbl->super.super.GetAnimData(a6);
        if ( v18 )
        {
          if ( sub_472EA0(v18) )
          {
            process = follow->members.super.process;
            if ( process )
              ((void (__thiscall *)(LowProcess *, _DWORD))process->Unk_80)(process, 0);
            follow->members.unk080[1] = *(UInt32 *)GameSetting_GetSafeFloatPointer((int *)&flt_B36CC0);
            ((void (__thiscall *)(HighProcess *, int))a1->Unk_126)(a1, v27);
            v20 = a1->__vftable;
            p_unk03C = (Actor ***)&a1->unk03C;
            if ( a1->unk03C )
            {
              if ( !((int (__thiscall *)(HighProcess *, _DWORD))v20->GetUnk220Element)(a1, 0)
                || (v22 = (int *)((int (__thiscall *)(HighProcess *, _DWORD))a1->GetUnk220Element)(a1, 0),
                    !sub_6B7260(v22)) )
              {
                v23 = *p_unk03C;
                v32 = **p_unk03C;
                sub_67F100(&a1->unk03C);
                FormHeapFree((unsigned int)v23);
                a1->Unk_2E(a1, 0);
                ((void (__thiscall *)(HighProcess *, Actor *, unsigned int))a1->Unk_61)(a1, a6, 0xFFFFFFFF);
                GetCurrentPackage = a1->GetCurrentPackage;
                a1->follow = v32;
                v25 = (int)GetCurrentPackage(a1);
                TESPackage_LocationData_SetReference(*(_DWORD **)(v25 + 0x24), (int)a1->follow);
                BSSimpleList_PushFront(&a1->unk0A8, (int)v32);
              }
            }
            else
            {
              v20->Unk_61(a1, (UInt32)a6);
            }
          }
        }
      }
    }
    else
    {
      ((void (__usercall *)(HighProcess *@<ecx>, Actor *, int, double@<st0>, double@<st1>))a1->Unk_61)(
        a1,
        a6,
        1,
        st7_0,
        a5);
    }
  }
}
