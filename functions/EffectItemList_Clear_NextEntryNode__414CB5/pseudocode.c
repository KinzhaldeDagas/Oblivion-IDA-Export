int __usercall EffectItemList_Clear_::NextEntryNode@<eax>(int a1@<esi>)
{
  int v1; // esi

  v1 = *(_DWORD *)(a1 + 8);
  if ( v1 )
    return EffectItemList_Clear_::LoopContinue(v1 - 4);
  else
    return EffectItemList_Clear_::Done_();
}
