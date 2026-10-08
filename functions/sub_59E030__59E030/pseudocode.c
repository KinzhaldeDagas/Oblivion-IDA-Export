void __thiscall sub_59E030(void **this)
{
  TESTopic *Topic; // eax
  DialogueItemView *DialogueItem; // eax
  DialogueListCursorView *v4; // ebx
  char **Current; // edi
  float v6; // [esp+8h] [ebp-14h]

  Topic = TESTopic::GetTopic(5, 8); /*0x59e039*/
  DialogueItem = TESTopic::CreateDialogueItem(Topic, (Actor *)*(this + 0x18), (TESObjectREFR *)reference, 0, 0); /*0x59e052*/
  v4 = (DialogueListCursorView *)DialogueItem; /*0x59e057*/
  if ( DialogueItem ) /*0x59e05b*/
  {
    if ( DialogueItem::FirstResponse(DialogueItem) ) /*0x59e063*/
    {
      Current = (char **)DialogueListCursor::GetCurrent(v4); /*0x59e079*/
      (*(void (__stdcall **)(_DWORD, char **))(*(_DWORD *)*(this + 0x18) + 0x304))(0.0, Current); /*0x59e088*/
      *((float *)this + 0x21) = fConstant_2; /*0x59e092*/
      *(this + 0x20) = (void *)2; /*0x59e098*/
      v6 = (float)((byte_B13200 != 0) + 1); /*0x59e0ba*/
      Tile_SetFloat((Tile *)*(this + 0xB), (_DWORD *)0xFA1, v6); /*0x59e0c2*/
      Tile_SetString(*(this + 0xB), (_DWORD *)0xFDE, *Current); /*0x59e0d2*/
      Tile_SetFloat((Tile *)*(this + 0xF), (_DWORD *)0xFA1, 1.0); /*0x59e0e5*/
    }
    DialogueItem::Destroy((DialogueItemView *)v4); /*0x59e0ed*/
    FormHeapFree((unsigned int)v4); /*0x59e0f3*/
  }
}
