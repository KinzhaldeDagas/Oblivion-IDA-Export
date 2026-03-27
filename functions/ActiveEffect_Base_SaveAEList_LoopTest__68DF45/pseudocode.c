int __usercall ActiveEffect_Base_SaveAEList_::LoopTest@<eax>(
        _DWORD *a1@<esi>,
        _WORD *a2@<ebp>,
        double a3@<st0>,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8)
{
  if ( a1[1] || *a1 )
    return ActiveEffect_Base_SaveAEList_::LoopBody(a4, a5, a6);
  else
    return ActiveEffect_Base_SaveAEList_::DoneActvEffList(a2, a3, a4, a5, a6, a7, a8);
}
