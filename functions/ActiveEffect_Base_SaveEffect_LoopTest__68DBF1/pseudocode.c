int __usercall ActiveEffect_Base_SaveEffect_::LoopTest@<eax>(
        int a1@<ebx>,
        int a2@<ebp>,
        _DWORD *a3@<esi>,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11,
        int a12,
        char Src)
{
  if ( !a3[1] && !*a3 ) /*0x68dbfa*/
    JUMPOUT(0x68DC34); /*0x68dc34*/
  return ActiveEffect_Base_SaveEffect_::LoopBody(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, Src);
}
