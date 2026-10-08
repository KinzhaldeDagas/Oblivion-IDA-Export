void __thiscall sub_5307D0(void *this, _DWORD *a2, int a3)
{
  int *TopicInfoParent; // eax

  if ( a2 ) /*0x5307d7*/
  {
    *a2 = 0; /*0x5307df*/
    if ( a3 ) /*0x5307e5*/
    {
      if ( !*(_DWORD *)(a3 + 0xC) && *(_DWORD *)(a3 + 8) == dword_B060B4 ) /*0x5307f6*/
      {
        TopicInfoParent = TESTopic_static_GetTopicInfoParent_((int)this); /*0x5307f9*/
        if ( TopicInfoParent ) /*0x530803*/
        {
          *a2 = dword_B05E20; /*0x53080b*/
          a2[3] = 7; /*0x53080d*/
          a2[2] = TopicInfoParent[3]; /*0x530817*/
          a2[1] = 0; /*0x53081a*/
          a2[4] = 0; /*0x530821*/
        }
      }
    }
  }
}
