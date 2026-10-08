int __userpurge ActiveEffect_Base_PostLink_::LoopTest@<eax>(
        int a1@<ebx>,
        int a2@<ebp>,
        BSTempEffect **a3@<esi>,
        int a4)
{
  if ( a3[1] || *a3 ) /*0x68e626*/
    return ActiveEffect_Base_PostLink_::LoopBody(a1, a2, a3); /*0x68e62a*/
  else
    return ActiveEffect_Base_PostLink_::LoopExit(a4); /*0x68e629*/
}
