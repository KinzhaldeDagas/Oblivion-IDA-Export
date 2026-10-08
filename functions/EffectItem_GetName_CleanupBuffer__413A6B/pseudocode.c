int __userpurge EffectItem_GetName_::CleanupBuffer@<eax>(int a1@<esi>, int a2, int a3, int a4, unsigned int a5)
{
  FormHeapFree(a5); /*0x413a70*/
  return EffectItem_GetName_::Done(a1, a2);
}
