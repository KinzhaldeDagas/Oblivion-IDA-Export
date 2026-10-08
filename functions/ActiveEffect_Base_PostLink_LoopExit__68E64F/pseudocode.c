// positive sp value has been detected, the output may be wrong!
int __stdcall ActiveEffect_Base_PostLink_::LoopExit(int a1)
{
  return ActiveEffect_Base_PostLink_::PersistentSound__(a1);
}
