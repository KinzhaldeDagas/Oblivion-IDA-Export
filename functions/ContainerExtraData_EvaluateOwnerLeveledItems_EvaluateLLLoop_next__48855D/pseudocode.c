void __usercall ContainerExtraData_EvaluateOwnerLeveledItems_::EvaluateLLLoop_next(
        int a1@<ebp>,
        char a2,
        int a3,
        char a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11,
        int a12,
        int a13)
{
  if ( *(_DWORD *)(a1 + 4) ) /*0x48855d*/
    ContainerExtraData_EvaluateOwnerLeveledItems_::EvaluateLLLoop(a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13); /*0x488562*/
  else
    ContainerExtraData_EvaluateOwnerLeveledItems_::Done(); /*0x488563*/
}
