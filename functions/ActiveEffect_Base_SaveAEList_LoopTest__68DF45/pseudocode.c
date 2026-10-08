int __usercall ActiveEffect_Base_SaveAEList_::LoopTest@<eax>(
        _DWORD *esi0@<esi>,
        _WORD *a1@<ebp>,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6)
{
  if ( esi0[1] || *esi0 ) /*0x68df4b*/
    return ActiveEffect_Base_SaveAEList_::LoopBody(a2, a3, a4); /*0x68df4f*/
  else
    return ActiveEffect_Base_SaveAEList_::DoneActvEffList(a1, a2, a3, a4, a5, a6); /*0x68df4e*/
}
