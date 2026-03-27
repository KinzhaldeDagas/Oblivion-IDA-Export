int __userpurge ActiveEffect_Base_SaveEffect_::DoneDataList@<eax>(
        int a1,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        _BYTE *a7)
{
  *a7 = HIBYTE(a3);
  return ActiveEffect_Base_SaveEffect_::SkipDataList(a1);
}
