int __usercall EffectItemList_Clear_::ClearEntryData@<eax>(int a1@<esi>)
{
  *(_DWORD *)(a1 + 4) = 0; /*0x414cac*/
  return EffectItemList_Clear_::LoopContinue(a1);
}
