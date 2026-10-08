// Starts the first DialogueResponse of an externally supplied DialogueItem; if the item has no responses, returns to the normal topic-list advance path.
void __thiscall DialogMenu::PlayDialogueItem(DialogMenu *this, DialogueItemView *item)
{
  char **Current; // edi
  float a2; // [esp+8h] [ebp-Ch]

  Tile_SetFloat(*((Tile **)this + 0xE), 0xFA1u, 1.0); /*0x59eab2*/
  if ( item ) /*0x59eabd*/
  {
    if ( DialogueItem::FirstResponse(item) ) /*0x59eac5*/
    {
      Current = (char **)DialogueListCursor::GetCurrent((DialogueListCursorView *)item); /*0x59eade*/
      (*(void (__stdcall **)(_DWORD, char **))(**((_DWORD **)this + 0x18) + 0x304))(0.0, Current); /*0x59eaed*/
      *((float *)this + 0x21) = fConstant_2; /*0x59eaf7*/
      *((_DWORD *)this + 0x20) = 2; /*0x59eafd*/
      a2 = (float)((byte_B13200 != 0) + 1); /*0x59eb1f*/
      Tile_SetFloat(*((Tile **)this + 0xB), 0xFA1u, a2); /*0x59eb27*/
      Tile_SetString(*((_DWORD **)this + 0xB), (_DWORD *)0xFDE, *Current); /*0x59eb37*/
      Tile_SetFloat(*((Tile **)this + 0xF), 0xFA1u, 1.0); /*0x59eb4a*/
    }
    else
    {
      Tile_SetFloat(*((Tile **)this + 0xF), 0xFA1u, fConstant_2); /*0x59eb66*/
      DialogMenu::RefreshActionAvailability(this, 1); /*0x59eb6f*/
      DialogMenu::AdvanceTopicList(this, 1, 0); /*0x59eb7a*/
    }
  }
}
