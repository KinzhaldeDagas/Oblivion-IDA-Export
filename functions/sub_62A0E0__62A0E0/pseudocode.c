void __userpurge sub_62A0E0(int a1@<ecx>, double a2@<st1>, double a3@<st0>, Actor *a4)
{
  int v5; // eax
  int v6; // ebp
  char v7; // bl
  int v8; // ecx
  int v9; // ecx
  TESObjectCELL *ParentCell; // eax
  int v11; // eax
  TESTopic *v12; // ebx
  Unk1C *DialogueInfo; // ebx
  int v14; // eax
  int v15; // edi
  int v16; // ebx
  unsigned int Len; // eax
  int *SafeFloatPointer; // eax
  int v19; // ecx
  unsigned int v20; // ebp
  int v21; // [esp+1Ch] [ebp-10h]
  Unk1C *v22; // [esp+20h] [ebp-Ch]
  double Distance; // [esp+24h] [ebp-8h]

  v5 = (*(int (__usercall **)@<eax>(int@<ecx>, double@<st0>, double@<st1>))(*(_DWORD *)a1 + 0x184))(a1, a3, a2); /*0x62a0f0*/
  v6 = 0; /*0x62a0f2*/
  v21 = 0; /*0x62a0f6*/
  if ( v5 ) /*0x62a0fa*/
  {
    if ( *(_BYTE *)(v5 + 0x20) == 0x11 ) /*0x62a100*/
    {
      v21 = v5; /*0x62a102*/
      v6 = v5; /*0x62a106*/
    }
  }
  v7 = 0; /*0x62a108*/
  if ( v6 ) /*0x62a10c*/
  {
    v8 = *(_DWORD *)(a1 + 0x2C); /*0x62a112*/
    if ( v8 ) /*0x62a117*/
    {
      if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v8 + 0x190))(v8) ) /*0x62a125*/
      {
        v9 = *(_DWORD *)(a1 + 0x2C); /*0x62a12f*/
        if ( v9 ) /*0x62a134*/
        {
          if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v9 + 0x354))(v9) ) /*0x62a142*/
          {
            if ( *(int *)(v6 + 0x50) < 1 ) /*0x62a16d*/
              Actor_IsGuardClass(a4); /*0x62a171*/
            if ( *(float *)(v6 + 0x3C) > 0.0 ) /*0x62a180*/
            {
              if ( *(float *)(a1 + 0x21C) <= 0.0 ) /*0x62a2e5*/
                v7 = 1; /*0x62a2fb*/
              else
                *(float *)(a1 + 0x21C) = *(float *)(a1 + 0x21C) - *(float *)&MEMORY[0xB33E90][0xC]; /*0x62a2f3*/
              v19 = *(_DWORD *)(a1 + 0x250); /*0x62a2fd*/
              if ( v19 ) /*0x62a305*/
              {
                DialogueItem::RunResult(v19); /*0x62a307*/
                v20 = *(_DWORD *)(a1 + 0x250); /*0x62a30c*/
                if ( v20 ) /*0x62a314*/
                {
                  DialogueItem::Destroy(*(BSSimpleList_VoidPtr **)(a1 + 0x250)); /*0x62a318*/
                  FormHeapFree(v20); /*0x62a31e*/
                }
                *(_DWORD *)(a1 + 0x250) = 0; /*0x62a326*/
              }
              if ( v7 ) /*0x62a332*/
                (*(void (__thiscall **)(int, Actor *, unsigned int))(*(_DWORD *)a1 + 0x188))(a1, a4, 0xFFFFFFFF); /*0x62a341*/
            }
            else
            {
              ParentCell = Shared_GetDwordAtOffset40((TESObjectREFR *)reference); /*0x62a18e*/
              TESObjectCELL_GetOwner((ExtraDataList *)ParentCell); /*0x62a195*/
              unk_B361C4 = v11; /*0x62a19e*/
              v12 = (TESTopic *)TESTopic::GetTopic(2, 4); /*0x62a1a8*/
              unk_B361C4 = 0; /*0x62a1af*/
              if ( v12 ) /*0x62a1b9*/
              {
                (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)a1 + 0x344))(a1, 0); /*0x62a1cb*/
                DialogueInfo = TESTopic::CreateDialogueItem(v12, a4, *(TESObjectREFR **)(a1 + 0x2C), 0, 0); /*0x62a1e5*/
                v22 = DialogueInfo; /*0x62a1ed*/
                (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)a1 + 0x484))(a1, *(_DWORD *)(a1 + 0x2C)); /*0x62a1f1*/
                if ( DialogueInfo ) /*0x62a1f5*/
                {
                  DialogueItem::FirstResponse(DialogueInfo); /*0x62a1fd*/
                  v14 = DialogueListCursor::GetCurrent(DialogueInfo); /*0x62a204*/
                  v15 = v14; /*0x62a209*/
                  if ( v14 ) /*0x62a20d*/
                  {
                    v16 = *(_DWORD *)(v14 + 0xC); /*0x62a213*/
                    Len = BSStringT_GetLen((BSStringT *)v14); /*0x62a226*/
                    Actor::InitDialogue( /*0x62a23c*/
                      a4,
                      *(char **)(v15 + 0x10),
                      (int **)(a1 + 0x220),
                      *(_DWORD *)(v15 + 8),
                      v16,
                      Len,
                      1,
                      0,
                      0,
                      1);
                    *(float *)(a1 + 0x21C) = 0.0; /*0x62a241*/
                    if ( byte_B13208 ) /*0x62a247*/
                    {
                      if ( *(_DWORD *)v15 ) /*0x62a250*/
                      {
                        Distance = TesObjectREF_GetDistance((TESObjectREFR *)a4, (TESObjectREFR *)reference, 0); /*0x62a264*/
                        SafeFloatPointer = GameSetting_GetSafeFloatPointer((int *)unk_B36AD8); /*0x62a26d*/
                        if ( *(float *)SafeFloatPointer + *(float *)SafeFloatPointer >= Distance ) /*0x62a27f*/
                          GameUI_QueueMessage( /*0x62a294*/
                            *(const char **)v15,
                            *(_DWORD *)(a1 + 0x220),
                            0,
                            kTerrainLODQuadRayDirectionZ);
                      }
                    }
                    (*(void (__thiscall **)(int, Actor *))(*(_DWORD *)a1 + 0x48))(a1, a4); /*0x62a2a4*/
                    DialogueInfo = v22; /*0x62a2aa*/
                    v6 = v21; /*0x62a2aa*/
                  }
                }
                *(_DWORD *)(a1 + 0x250) = DialogueInfo; /*0x62a2ae*/
                *(_BYTE *)(a1 + 0x228) = 1;     // Installing the trespass/warning DialogueItem sets HighProcess.dialogueActive=1; the same path later runs the pending result, destroys the item, and clears dialogue state. /*0x62a2b4*/
                *(float *)(v6 + 0x3C) = *(float *)(v6 + 0x3C) + *(float *)&MEMORY[0xB33E90][0xC]; /*0x62a2c8*/
                sub_67D330((_DWORD *)v6, 1); /*0x62a2cb*/
              }
            }
          }
          else
          {
            (*(void (__thiscall **)(int, Actor *, int))(*(_DWORD *)a1 + 0x188))(a1, a4, 1); /*0x62a159*/
          }
        }
      }
    }
  }
}
