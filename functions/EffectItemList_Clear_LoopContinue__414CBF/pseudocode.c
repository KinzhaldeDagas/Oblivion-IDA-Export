int __usercall EffectItemList_Clear_::LoopContinue@<eax>(int a1@<esi>)
{
  if ( a1 )
    return EffectItemList_Clear_::DestroyEffectItem(a1);
  else
    return EffectItemList_Clear_::Done_();
}
