UInt16 __thiscall DialogueItem::GetSaveSize(DialogueItemView *this)
{
  __int16 v1; // ax
  DialogueItemView *v2; // esi
  UInt16 SaveSize; // ax
  __int16 v5; // [esp+4h] [ebp-4h]

  v1 = 1; /*0x6b7cf3*/
  v5 = 1; /*0x6b7cf9*/
  v2 = this; /*0x6b7cfd*/
  if ( this ) /*0x6b7cff*/
  {
    do /*0x6b7d1d*/
    {
      if ( !v2->nextResponseNode && !v2->firstResponse ) /*0x6b7d07*/
        break; /*0x6b7d0a*/
      SaveSize = DialogueResponse::GetSaveSize(v2->firstResponse); /*0x6b7d0e*/
      v2 = (DialogueItemView *)v2->nextResponseNode; /*0x6b7d13*/
      v5 += SaveSize; /*0x6b7d16*/
    }
    while ( v2 ); /*0x6b7d1d*/
    v1 = v5; /*0x6b7d1f*/
  }
  return v1 + 0x11; /*0x6b7d26*/
}
