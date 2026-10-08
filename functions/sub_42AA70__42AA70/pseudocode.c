// Adds or increments an Oblivion friend-hit entry keyed by actor: uint16 count at +4 and elapsed timer float at +8.
void __thiscall ExtraFriendHitList_AddHit(int **this, int a2)
{
  int *i; // eax
  int v4; // ecx
  int v5; // eax

  for ( i = *(this + 3); i; i = (int *)i[1] ) /*0x42aa7d*/
  {
    v4 = *i; /*0x42aa80*/
    if ( !*i ) /*0x42aa80*/
      break; /*0x42aa80*/
    if ( *(_DWORD *)v4 == a2 ) /*0x42aa88*/
    {
      ++*(_WORD *)(v4 + 4); /*0x42aabf*/
      return; /*0x42aac6*/
    }
  }
  v5 = FormHeapAlloc(0xCu); /*0x42aa91*/
  if ( v5 ) /*0x42aa9d*/
  {
    *(_DWORD *)v5 = a2; /*0x42aaa1*/
    *(float *)(v5 + 8) = 0.0; /*0x42aaa3*/
    *(_WORD *)(v5 + 4) = 0; /*0x42aaa6*/
    ++*(_WORD *)(v5 + 4); /*0x42aaac*/
    BSSimpleList_PushFront(*(this + 3), v5); /*0x42aab5*/
  }
  else
  {
    LOWORD(MEMORY[4]) = MEMORY[4] + 1; /*0x42aacb*/
    BSSimpleList_PushFront(*(this + 3), 0); /*0x42aad4*/
  }
}
