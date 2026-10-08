void __thiscall sub_5BE400(Actor **this, int a2, int a3)
{
  TESTopic *Topic; // eax
  DialogueItemView *DialogueItem; // eax
  DialogueListCursorView *v6; // edi
  const char **Current; // esi
  const char *v8; // esi
  UInt32 v9; // eax
  float duration; // [esp+8h] [ebp-10h]

  Topic = 0; /*0x5be407*/
  switch ( a2 ) /*0x5be413*/
  {
    case 0: /*0x5be413*/
      switch ( a3 ) /*0x5be421*/
      {
        case 1: /*0x5be421*/
          Topic = TESTopic::GetTopic(DialogueType_Persuasion, 0x14); /*0x5be425*/
          break;
        case 2: /*0x5be421*/
          Topic = TESTopic::GetTopic(DialogueType_Persuasion, 0x15); /*0x5be431*/
          break;
        case 3: /*0x5be421*/
          Topic = TESTopic::GetTopic(DialogueType_Persuasion, 0x17); /*0x5be43d*/
          break;
        case 4: /*0x5be421*/
          Topic = TESTopic::GetTopic(DialogueType_Persuasion, 0x16); /*0x5be44d*/
          break;
      }
      break; /*0x5be425*/
    case 1: /*0x5be413*/
      switch ( a3 ) /*0x5be456*/
      {
        case 1: /*0x5be456*/
          Topic = TESTopic::GetTopic(DialogueType_Persuasion, 0x20); /*0x5be45a*/
          break;
        case 2: /*0x5be456*/
          Topic = TESTopic::GetTopic(DialogueType_Persuasion, 0x21); /*0x5be463*/
          break;
        case 3: /*0x5be456*/
          Topic = TESTopic::GetTopic(DialogueType_Persuasion, 0x23); /*0x5be46c*/
          break;
        case 4: /*0x5be456*/
          Topic = TESTopic::GetTopic(DialogueType_Persuasion, 0x22); /*0x5be475*/
          break;
      }
      break; /*0x5be45a*/
    case 2: /*0x5be413*/
      switch ( a3 ) /*0x5be47e*/
      {
        case 1: /*0x5be47e*/
          Topic = TESTopic::GetTopic(DialogueType_Persuasion, 0x18); /*0x5be482*/
          break;
        case 2: /*0x5be47e*/
          Topic = TESTopic::GetTopic(DialogueType_Persuasion, 0x19); /*0x5be48b*/
          break;
        case 3: /*0x5be47e*/
          Topic = TESTopic::GetTopic(DialogueType_Persuasion, 0x1B); /*0x5be494*/
          break;
        case 4: /*0x5be47e*/
          Topic = TESTopic::GetTopic(DialogueType_Persuasion, 0x1A); /*0x5be49d*/
          break;
      }
      break; /*0x5be482*/
    case 3: /*0x5be413*/
      switch ( a3 ) /*0x5be4a6*/
      {
        case 1: /*0x5be4a6*/
          Topic = TESTopic::GetTopic(DialogueType_Persuasion, 0x1C); /*0x5be4aa*/
          break;
        case 2: /*0x5be4a6*/
          Topic = TESTopic::GetTopic(DialogueType_Persuasion, 0x1D); /*0x5be4b3*/
          break;
        case 3: /*0x5be4a6*/
          Topic = TESTopic::GetTopic(DialogueType_Persuasion, 0x1F); /*0x5be4bc*/
          break;
        case 4: /*0x5be4a6*/
          Topic = TESTopic::GetTopic(DialogueType_Persuasion, 0x1E); /*0x5be4c5*/
          break;
      }
      break; /*0x5be4aa*/
    case 5: /*0x5be413*/
      Topic = TESTopic::GetTopic(DialogueType_Persuasion, 0x24); /*0x5be4c9*/
      break; /*0x5be4c9*/
    case 6: /*0x5be413*/
      Topic = TESTopic::GetTopic(DialogueType_Persuasion, 0x25); /*0x5be4cf*/
      break; /*0x5be4cf*/
    default:
      break;
  }
  DialogueItem = TESTopic::CreateDialogueItem(Topic, *(this + 0x36), (TESObjectREFR *)reference, 0, 0); /*0x5be4d7*/
  v6 = (DialogueListCursorView *)DialogueItem; /*0x5be4f0*/
  if ( DialogueItem ) /*0x5be4f4*/
  {
    DialogueItem::FirstResponse(DialogueItem); /*0x5be4fd*/
    Current = (const char **)DialogueListCursor::GetCurrent(v6); /*0x5be509*/
    if ( Current ) /*0x5be50d*/
    {
      *(_BYTE *)(sub_5E12B0(*(this + 0x36)) + 0x1DB) = 0; /*0x5be51a*/
      (*(this + 0x36))->members.unk070[0] = 7; /*0x5be527*/
      ((void (__stdcall *)(_DWORD, const char **))(*(this + 0x36))->vtbl->Unk_C1)( /*0x5be547*/
        *(float *)&MEMORY[0xB33E90][0xC],
        Current);
      if ( byte_B13200 ) /*0x5be549*/
      {
        v8 = *Current; /*0x5be569*/
        duration = kTerrainLODQuadRayDirectionZ; /*0x5be56c*/
        v9 = ((int (__stdcall *)(_DWORD))(*(this + 0x36))->members.super.process->GetUnk220Element)(0); /*0x5be573*/
        GameUI_QueueMessage(v8, v9, 0, duration); /*0x5be577*/
      }
    }
    DialogueItem::Destroy((DialogueItemView *)v6); /*0x5be581*/
    FormHeapFree((unsigned int)v6); /*0x5be587*/
  }
}
