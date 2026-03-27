int __usercall ActiveEffect_Base_SaveAEList_::ProcessActvEffList@<eax>(
        _WORD *a1@<ebp>,
        double st7_0@<st0>,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        _DWORD *a11)
{
  if ( a11 )
    return ActiveEffect_Base_SaveAEList_::LoopTest(a11, a3, a4, a5);
  else
    return ActiveEffect_Base_SaveAEList_::DoneActvEffList(a1, st7_0, a3, a4, a5, a6, a7);
}
