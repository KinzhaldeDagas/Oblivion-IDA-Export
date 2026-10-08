char __thiscall sub_530360(void *this, _DWORD *a2, int a3, int a4)
{
  char v4; // bl
  int *TopicInfoParent; // esi

  v4 = 0; /*0x530366*/
  if ( !a2 || *a2 != dword_B05E20 ) /*0x530374*/
    return 0; /*0x5303cd*/
  TopicInfoParent = TESTopic_static_GetTopicInfoParent_((int)this); /*0x53037d*/
  if ( TopicInfoParent /*0x5303b3*/
    && (!(_BYTE)a3
     || (v4 = (*(int (__thiscall **)(int *, _DWORD *, int, int))(*TopicInfoParent + 0xBC))(TopicInfoParent, a2, a3, a4)) == 0)
    && a2[3] == 7
    && TESForm_FormIDMatchesObjectID24(TopicInfoParent, a2[2]) )
  {
    return 1; /*0x5303be*/
  }
  else
  {
    return v4; /*0x5303c6*/
  }
}
