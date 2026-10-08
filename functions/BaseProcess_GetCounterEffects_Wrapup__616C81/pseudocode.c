// positive sp value has been detected, the output may be wrong!
void __userpurge BaseProcess_GetCounterEffects__::Wrapup(int a1@<edi>, int a2, int a3, int a4)
{
  *(_DWORD *)(a4 + 0x88) = a1; /*0x616c85*/
  BaseProcess_GetCounterEffects__::Done(a2); /*0x616c8c*/
}
