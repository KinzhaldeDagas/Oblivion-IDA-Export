int __usercall EffectItemList_Clear_::RemoveEntryNode@<eax>(int a1@<esi>, _DWORD *a2@<eax>)
{
  *(_DWORD *)(a1 + 8) = a2[1]; /*0x414c99*/
  *(_DWORD *)(a1 + 4) = *a2; /*0x414c9f*/
  FormHeapFree((unsigned int)a2); /*0x414ca2*/
  return EffectItemList_Clear_::LoopContinue(a1);
}
