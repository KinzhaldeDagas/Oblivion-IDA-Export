void __usercall DialogMenu::AdvanceTopicResponse(int a1@<ecx>, double a2@<st0>, double a3@<st2>, double a4@<st1>)
{
  MenuTopicManagerView *Singleton; // ebx
  MenuTopicView *CurrentTopic; // eax
  MenuTopicView *v7; // edi
  DialogueResponse *CurrentResponse; // ebp
  bool v9; // al
  UnkBohBoh *v10; // eax
  UnkBohBoh *v11; // edi
  float a2a; // [esp+8h] [ebp-18h]

  Tile_SetFloat(*(Tile **)(a1 + 0x38), 0xFA1u, 1.0); /*0x59eba5*/
  Singleton = MenuTopicManager::GetSingleton(); /*0x59ebaf*/
  CurrentTopic = MenuTopicManager::GetCurrentTopic(Singleton); /*0x59ebb3*/
  v7 = CurrentTopic; /*0x59ebb8*/
  if ( CurrentTopic && (CurrentResponse = MenuTopic::GetCurrentResponse(CurrentTopic)) != 0 ) /*0x59ebcd*/
  {
    (*(void (__userpurge **)(_DWORD, DialogueResponse *, double@<st0>, double@<st1>, double@<st2>))(**(_DWORD **)(a1 + 0x60) /*0x59ebe5*/
                                                                                                  + 0x304))(
      0.0,
      CurrentResponse,
      a2,
      a4,
      a3);
    *(float *)(a1 + 0x84) = fConstant_2; /*0x59ebf0*/
    *(_DWORD *)(a1 + 0x80) = 2; /*0x59ebf6*/
    Singleton->currentTopicNode = (MenuTopicNode *)&Singleton->firstTopic; /*0x59ec02*/
    while ( MenuTopicManager::GetCurrentTopic(Singleton) ) /*0x59ec04*/
    {
      if ( MenuTopicManager::GetCurrentTopic(Singleton) == v7 ) /*0x59ec19*/
        break; /*0x59ec19*/
      MenuTopicManager::NextTopic(Singleton); /*0x59ec1d*/
    }
    MenuTopic::FirstResponse(v7); /*0x59ec2f*/
    while ( MenuTopic::GetCurrentResponse(v7) ) /*0x59ec36*/
    {
      if ( MenuTopic::GetCurrentResponse(v7) == CurrentResponse ) /*0x59ec49*/
        break; /*0x59ec49*/
      MenuTopic::NextResponse(v7); /*0x59ec4d*/
    }
    a2a = (float)((byte_B13200 != 0) + 1); /*0x59ec77*/
    Tile_SetFloat(*(Tile **)(a1 + 0x2C), 0xFA1u, a2a); /*0x59ec7f*/
    Tile_SetString(*(_DWORD **)(a1 + 0x2C), (_DWORD *)0xFDE, CurrentResponse->displayText.m_data); /*0x59ec90*/
    MenuTopic::NextResponse(v7);                // After starting/displaying the current DialogueResponse, advance the MenuTopic cursor immediately. The next DoIdle completion callback therefore selects the following response; a null cursor means the just-finished response was final. /*0x59ec97*/
    Tile_SetFloat(*(Tile **)(a1 + 0x3C), 0xFA1u, 1.0); /*0x59ecaa*/
  }
  else
  {
    Tile_SetFloat(*(Tile **)(a1 + 0x3C), 0xFA1u, fConstant_2); /*0x59ecc7*/
    v9 = v7 && v7->hasLinkedTopics; /*0x59ecd6*/
    DialogMenu::RefreshActionAvailability((DialogMenu *)a1, !v9); /*0x59ece4*/
    v10 = (UnkBohBoh *)MenuTopicManager::GetSingleton(); /*0x59ece9*/
    v11 = v10; /*0x59ecf5*/
    if ( *(_BYTE *)(a1 + 0x96) ) /*0x59ecee*/
    {
      v10->unk00 = 0; /*0x59ecfd*/
      DialogMenu::RefreshActionAvailability((DialogMenu *)a1, 1); /*0x59ed03*/
    }
    *(_BYTE *)(a1 + 0x88) = MenuTopicManager::LoadNextTopicList((MenuTopicManagerView *)v11, 1, 0);// Overwrite closePending with LoadNextTopicList's result after response exhaustion. INFOGENERAL without RunForRumors returns false even when Goodbye is set, so the menu stays open while the parked Goodbye INFO survives for a later manual/other close. /*0x59ed14*/
    *(_BYTE *)(a1 + 0x96) = 0; /*0x59ed1a*/
    DialogMenu::LoadTopicsList((DialogMenu *)a1); /*0x59ed29*/
  }
}
