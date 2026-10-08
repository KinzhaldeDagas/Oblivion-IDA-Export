void __thiscall sub_59E1D0(void **this, int a2)
{
  TESTopic *Topic; // eax
  DialogueItemView *DialogueItem; // eax
  DialogueListCursorView *v5; // ebx
  char **Current; // edi
  float v7; // [esp+8h] [ebp-10h]

  if ( a2 ) /*0x59e1d9*/
    Topic = TESTopic::GetTopic(5, 0xC); /*0x59e1e3*/
  else
    Topic = TESTopic::GetTopic(5, 0xA); /*0x59e1dd*/
  DialogueItem = TESTopic::CreateDialogueItem(Topic, (Actor *)*(this + 0x18), (TESObjectREFR *)reference, 0, 0); /*0x59e1fc*/
  v5 = (DialogueListCursorView *)DialogueItem; /*0x59e201*/
  if ( DialogueItem ) /*0x59e205*/
  {
    if ( DialogueItem::FirstResponse(DialogueItem) ) /*0x59e20d*/
    {
      Current = (char **)DialogueListCursor::GetCurrent(v5); /*0x59e223*/
      (*(void (__stdcall **)(_DWORD, char **))(*(_DWORD *)*(this + 0x18) + 0x304))(0.0, Current); /*0x59e232*/
      *((float *)this + 0x21) = fConstant_2; /*0x59e23c*/
      *(this + 0x20) = (void *)2; /*0x59e242*/
      v7 = (float)((byte_B13200 != 0) + 1); /*0x59e264*/
      Tile_SetFloat((Tile *)*(this + 0xB), (_DWORD *)0xFA1, v7); /*0x59e26c*/
      Tile_SetString(*(this + 0xB), (_DWORD *)0xFDE, *Current); /*0x59e27c*/
      Tile_SetFloat((Tile *)*(this + 0xF), (_DWORD *)0xFA1, 1.0); /*0x59e28f*/
    }
    DialogueItem::Destroy((DialogueItemView *)v5); /*0x59e297*/
    FormHeapFree((unsigned int)v5); /*0x59e29d*/
  }
}
