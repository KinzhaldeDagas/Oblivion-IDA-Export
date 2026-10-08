void *__userpurge ActiveEffect_Base_SaveEffect_::DoneDataList@<eax>(
        int a1@<ebp>,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        _BYTE *a8,
        char a9)
{
  *a8 = HIBYTE(a4); /*0x68dc3d*/
  return ActiveEffect_Base_SaveEffect_::SkipDataList(g_TESSaveLoadGame, a1, a2, a3, a4, a5, a6, a7, (int)a8, a9);
}
