int __userpurge EffectItem_GetName_::CleanupBuffer@<eax>(int a1, int a2, int a3, unsigned int a4)
{
  FormHeapFree(a4);
  return EffectItem_GetName_::Done(a1);
}
