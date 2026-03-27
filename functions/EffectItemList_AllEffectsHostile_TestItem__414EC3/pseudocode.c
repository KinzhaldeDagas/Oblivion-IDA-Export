int __usercall EffectItemList_AllEffectsHostile_::TestItem@<eax>(int a1@<esi>)
{
  if ( a1 )
    return EffectItemList_AllEffectsHostile_::EffectLoop(a1);
  else
    return EffectItemList_AllEffectsHostile_::Return_True();
}
