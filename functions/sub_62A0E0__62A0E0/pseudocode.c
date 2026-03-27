void __userpurge sub_62A0E0(int a1@<ecx>, double a2@<st1>, double a3@<st0>, Actor *a4)
{
  int v6; // eax
  int v7; // ebp
  char v8; // bl
  int v9; // ecx
  int v10; // ecx
  TESObjectCELL *ParentCell; // eax
  int v12; // eax
  TESTopic *v13; // ebx
  Unk1C *DialogueInfo; // ebx
  int v15; // eax
  int v16; // edi
  int v17; // ebx
  unsigned int Len; // eax
  int *SafeFloatPointer; // eax
  int v20; // ecx
  unsigned int v21; // ebp
  int v22; // [esp+1Ch] [ebp-10h]
  Unk1C *v23; // [esp+20h] [ebp-Ch]
  double Distance; // [esp+24h] [ebp-8h]

  v6 = (*(int (__usercall **)@<eax>(int@<ecx>, double@<st0>, double@<st1>))(*(_DWORD *)a1 + 0x184))(a1, a3, a2);
  v7 = 0;
  v22 = 0;
  if ( v6 )
  {
    if ( *(_BYTE *)(v6 + 0x20) == 0x11 )
    {
      v22 = v6;
      v7 = v6;
    }
  }
  v8 = 0;
  if ( v7 )
  {
    v9 = *(_DWORD *)(a1 + 0x2C);
    if ( v9 )
    {
      if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v9 + 0x190))(v9) )
      {
        v10 = *(_DWORD *)(a1 + 0x2C);
        if ( v10 )
        {
          if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v10 + 0x354))(v10) )
          {
            if ( *(int *)(v7 + 0x50) < 1 )
              sub_5E6C60(a4);
            if ( *(float *)(v7 + 0x3C) > 0.0 )
            {
              if ( *(float *)(a1 + 0x21C) <= 0.0 )
                v8 = 1;
              else
                *(float *)(a1 + 0x21C) = *(float *)(a1 + 0x21C) - flt_B33E9C;
              v20 = *(_DWORD *)(a1 + 0x250);
              if ( v20 )
              {
                sub_6B7C30(v20);
                v21 = *(_DWORD *)(a1 + 0x250);
                if ( v21 )
                {
                  sub_6B81D0(*(unsigned int **)(a1 + 0x250));
                  FormHeapFree(v21);
                }
                *(_DWORD *)(a1 + 0x250) = 0;
              }
              if ( v8 )
                (*(void (__thiscall **)(int, Actor *, unsigned int))(*(_DWORD *)a1 + 0x188))(a1, a4, 0xFFFFFFFF);
            }
            else
            {
              ParentCell = TESObjectREFR_GetParentCell((TESObjectREFR *)TESDataHandler_g_PlayerRef);
              TESObjectCELL_GetOwner((ExtraDataList *)ParentCell);
              dword_B361C4 = v12;
              v13 = (TESTopic *)TESTopic::GEtTopic(2, 4);
              dword_B361C4 = 0;
              if ( v13 )
              {
                (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)a1 + 0x344))(a1, 0);
                DialogueInfo = TESTopic::CreateDialogueInfo(v13, a4, *(TESObjectREFR **)(a1 + 0x2C), 0, 0);
                v23 = DialogueInfo;
                (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)a1 + 0x484))(a1, *(_DWORD *)(a1 + 0x2C));
                if ( DialogueInfo )
                {
                  sub_6B7BA0(DialogueInfo);
                  v15 = sub_6B7C20(DialogueInfo);
                  v16 = v15;
                  if ( v15 )
                  {
                    v17 = *(_DWORD *)(v15 + 0xC);
                    Len = BSStringT_GetLen((BSStringT *)v15);
                    Actor::InitDialogue(
                      a4,
                      *(char **)(v16 + 0x10),
                      (int **)(a1 + 0x220),
                      *(_DWORD *)(v16 + 8),
                      v17,
                      Len,
                      1,
                      0,
                      0,
                      1);
                    *(float *)(a1 + 0x21C) = 0.0;
                    if ( byte_B13208 )
                    {
                      if ( *(_DWORD *)v16 )
                      {
                        Distance = TesObjectREF_GetDistance(
                                     (TESObjectREFR *)a4,
                                     (TESObjectREFR *)TESDataHandler_g_PlayerRef,
                                     0);
                        SafeFloatPointer = GameSetting_GetSafeFloatPointer((int *)&unk_B36AD8);
                        if ( *(float *)SafeFloatPointer + *(float *)SafeFloatPointer >= Distance )
                          GameUI_QueueMessage(*(const char **)v16, *(_DWORD *)(a1 + 0x220), 0, flt_A30634);
                      }
                    }
                    (*(void (__thiscall **)(int, Actor *))(*(_DWORD *)a1 + 0x48))(a1, a4);
                    DialogueInfo = v23;
                    v7 = v22;
                  }
                }
                *(_DWORD *)(a1 + 0x250) = DialogueInfo;
                *(_BYTE *)(a1 + 0x228) = 1;
                *(float *)(v7 + 0x3C) = *(float *)(v7 + 0x3C) + flt_B33E9C;
                sub_67D330((_DWORD *)v7, 1);
              }
            }
          }
          else
          {
            (*(void (__thiscall **)(int, Actor *, int))(*(_DWORD *)a1 + 0x188))(a1, a4, 1);
          }
        }
      }
    }
  }
}
