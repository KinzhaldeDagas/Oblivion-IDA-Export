char __thiscall sub_530360(void *this, _DWORD *a2, int a3, int a4)
{
  char v4; // bl
  int *TopicInfoParent; // esi

  v4 = 0;
  if ( !a2 || *a2 != dword_B05E20 )
    return 0;
  TopicInfoParent = TESTopic_static_GetTopicInfoParent_((int)this);
  if ( TopicInfoParent
    && (!(_BYTE)a3
     || (v4 = (*(int (__thiscall **)(int *, _DWORD *, int, int))(*TopicInfoParent + 0xBC))(TopicInfoParent, a2, a3, a4)) == 0)
    && a2[3] == 7
    && sub_46AF50(TopicInfoParent, a2[2]) )
  {
    return 1;
  }
  else
  {
    return v4;
  }
}
