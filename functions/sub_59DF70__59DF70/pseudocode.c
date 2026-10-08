void __thiscall sub_59DF70(void **this)
{
  TESTopic *Topic; // eax
  DialogueItemView *DialogueItem; // eax
  DialogueListCursorView *v4; // edi
  char **Current; // ebx
  float a3; // [esp+8h] [ebp-14h]

  Topic = TESTopic::GetTopic(3, 0x26); /*0x59df79*/
  DialogueItem = TESTopic::CreateDialogueItem(Topic, (Actor *)*(this + 0x18), (TESObjectREFR *)reference, 0, 0); /*0x59df92*/
  v4 = (DialogueListCursorView *)DialogueItem; /*0x59df97*/
  if ( DialogueItem ) /*0x59df9b*/
  {
    if ( DialogueItem::FirstResponse(DialogueItem) ) /*0x59dfa3*/
    {
      Current = (char **)DialogueListCursor::GetCurrent(v4); /*0x59dfb9*/
      (*(void (__stdcall **)(_DWORD, char **))(*(_DWORD *)*(this + 0x18) + 0x304))(0.0, Current); /*0x59dfc8*/
      *((float *)this + 0x21) = fConstant_2; /*0x59dfd2*/
      *(this + 0x20) = (void *)2; /*0x59dfd8*/
      a3 = (float)((byte_B13200 != 0) + 1); /*0x59dffa*/
      Tile_SetFloat((Tile *)*(this + 0xB), (_DWORD *)0xFA1, a3); /*0x59e002*/
      Tile_SetString(*(this + 0xB), (_DWORD *)0xFDE, *Current); /*0x59e012*/
    }
    DialogueItem::Destroy((DialogueItemView *)v4); /*0x59e01a*/
    FormHeapFree((unsigned int)v4); /*0x59e020*/
  }
}
