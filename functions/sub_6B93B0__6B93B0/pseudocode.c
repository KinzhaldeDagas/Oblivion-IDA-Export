char __userpurge sub_6B93B0@<al>(
        UnkBohBoh *a1@<ecx>,
        double a2@<st1>,
        double a3@<st0>,
        TESObjectREFR *a4,
        UnkBohDialogueTopicBoh *a5)
{
  TESTopic *v6; // edi
  bool v7; // zf
  int v8; // eax
  UInt32 v9; // ebp
  TESQuest *v10; // ebx
  UnkBohDialogueTopicBoh *v11; // eax
  UnkBohDialogueTopicBoh *v12; // edi
  void *unk18; // ebp
  tListTopic **p_unk5E4; // ebp

  a1->unk10 = 0;
  sub_6B9250((BSSimpleList_VoidPtr **)a1, 1);
  v6 = (TESTopic *)a5;
  v7 = a5 == 0;
  a1->unk10 = a4;
  if ( v7 )
  {
    v6 = (TESTopic *)TESTopic::GEtTopic((int)v6, (int)v6);
    if ( !v6 )
      goto LABEL_13;
  }
  v8 = sub_52F770(v6, &a4, (Actor *)a1->unk10, (TESObjectREFR *)TESDataHandler_g_PlayerRef);
  v9 = v8;
  if ( !v8 )
    goto LABEL_13;
  v10 = sub_52F570(v6, v8);
  v11 = (UnkBohDialogueTopicBoh *)FormHeapAlloc(0x28u);
  a5 = v11;
  v12 = v11 ? sub_6B8E00(v11, v10, v6, v9, (Actor *)a1->unk10, 0) : 0;
  BSSimpleList_PushBack(&a1->unk04, (int)v12);
  if ( !v12 )
    goto LABEL_13;
  unk18 = (void *)v12->unk18;
  if ( !unk18 )
    goto LABEL_13;
  if ( (*((_BYTE *)unk18 + 0x25) & 1) != 0 )
  {
    sub_5308D0(v12->unk18);
    sub_531470((TESForm *)unk18, a2, a3, a1->unk10);
    return 1;
  }
  if ( v12->unk08 )
    p_unk5E4 = (tListTopic **)(*((_DWORD *)unk18 + 0xC) + 8);
  else
LABEL_13:
    p_unk5E4 = &TESDataHandler_g_PlayerRef->unk5E4;
  sub_6B9010(a1, (tListTopic *)p_unk5E4);
  a1->unk00 = (UInt32)&a1->unk04;
  return 0;
}
