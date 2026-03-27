void __thiscall sub_5307D0(void *this, _DWORD *a2, int a3)
{
  int *TopicInfoParent; // eax

  if ( a2 )
  {
    *a2 = 0;
    if ( a3 )
    {
      if ( !*(_DWORD *)(a3 + 0xC) && *(_DWORD *)(a3 + 8) == dword_B060B4 )
      {
        TopicInfoParent = TESTopic_static_GetTopicInfoParent_((int)this);
        if ( TopicInfoParent )
        {
          *a2 = dword_B05E20;
          a2[3] = 7;
          a2[2] = TopicInfoParent[3];
          a2[1] = 0;
          a2[4] = 0;
        }
      }
    }
  }
}
