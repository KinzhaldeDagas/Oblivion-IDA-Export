int __usercall EffectItemList_Clear_::RemoveEntryNode@<eax>(int a1@<esi>, _DWORD *a2@<eax>)
{
  *(_DWORD *)(a1 + 8) = a2[1];
  *(_DWORD *)(a1 + 4) = *a2;
  FormHeapFree((unsigned int)a2);
  return EffectItemList_Clear_::LoopContinue(a1);
}
