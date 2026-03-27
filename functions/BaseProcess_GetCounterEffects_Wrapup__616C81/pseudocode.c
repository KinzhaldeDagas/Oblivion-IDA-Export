// positive sp value has been detected, the output may be wrong!
int __userpurge BaseProcess_GetCounterEffects__::Wrapup@<eax>(int a1@<edi>, int a2, int a3, int a4)
{
  *(_DWORD *)(a4 + 0x88) = a1;
  return BaseProcess_GetCounterEffects__::Done(a2);
}
