char __usercall EffectItemList_AllEffectsHostile_::TestItem@<al>(int a1@<esi>)
{
  if ( a1 ) /*0x414ec5*/
    return EffectItemList_AllEffectsHostile_::EffectLoop(a1); /*0x414ec6*/
  else
    return EffectItemList_AllEffectsHostile_::Return_True(); /*0x414ec5*/
}
