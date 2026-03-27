int __usercall ActiveEffect_Base_PostLink_::LoopTest@<eax>(int a1@<ebx>, int a2@<ebp>, volatile LONG **a3@<esi>)
{
  if ( a3[1] || *a3 )
    return ActiveEffect_Base_PostLink_::LoopBody(a1, a2, a3);
  else
    return ActiveEffect_Base_PostLink_::LoopExit();
}
