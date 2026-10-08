// Structural response-list emptiness check: counts all DialogueResponse nodes, independent of currentResponseNode position. An exhausted but still populated cache does not trigger a rebuild; only a truly empty list does.
bool __thiscall MenuTopic::ResponsesEmpty(MenuTopicView *this)
{
  DialogueResponse **p_firstResponse; // eax
  int v2; // edx

  p_firstResponse = &this->firstResponse; /*0x422df0*/
  v2 = 0; /*0x422df3*/
  if ( this != (MenuTopicView *)0xFFFFFFF4 ) /*0x422df7*/
  {
    do /*0x422e0d*/
    {
      if ( *p_firstResponse ) /*0x422e00*/
        ++v2; /*0x422e05*/
      p_firstResponse = (DialogueResponse **)p_firstResponse[1]; /*0x422e08*/
    }
    while ( p_firstResponse ); /*0x422e0d*/
  }
  return v2 == 0; /*0x422e16*/
}
