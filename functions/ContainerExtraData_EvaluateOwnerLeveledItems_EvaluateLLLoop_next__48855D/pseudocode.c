int __usercall ContainerExtraData_EvaluateOwnerLeveledItems_::EvaluateLLLoop_next@<eax>(
        int a1@<ebp>,
        int a2,
        int a3,
        int a4,
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
  if ( *(_DWORD *)(a1 + 4) )
    return ContainerExtraData_EvaluateOwnerLeveledItems_::EvaluateLLLoop(
             a2,
             a3,
             a4,
             a5,
             a6,
             a7,
             a8,
             a9,
             a10,
             a11,
             a12,
             a13);
  else
    return ContainerExtraData_EvaluateOwnerLeveledItems_::Done(a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12);
}
